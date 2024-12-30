//HStatHandler.h
//This is the header file for the StatHandler class. This class will be used to handle the stats of the character.

#pragma once

#include "CoreMinimal.h"
#include "HEnumsStructure_StatManager.h"
#include "Components/ActorComponent.h"
#include "HStatHandler.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, UAnimMontage*, DeathAnimation);//This delegate will be used to broadcast the death type.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageResponse, UAnimMontage*, DamageAnimation);//This delegate will be used to broadcast the damage type.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatReachMaxValue, FString, statName);//This delegate will be used to broadcast the stat reach max value type.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatReachMinValue, FString, statName);//This delegate will be used to broadcast the stat reach min value type.


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HSTATSMANAGER_API UHStatHandler : public UActorComponent
{
	GENERATED_BODY()

	float TakeDamage(FS_DamageInfo aboutDamage);//This function will be used to take damage, and it will return the current health of the character. Also, it will broadcast the death type if the health is less than or equal to 0 and it is private.
	
	float Heal(float amount);//This function will be used to heal the character, and it will return the current health of the character. Also, it will clamp the health between 0 and max health and it is private.
	
	float DecreaseStat(FString& statName, float amount);//This function will be used to decrease the stat value, and it will return the current value of the stat. Also, it will clamp the stat value between 0 and max value and it is private.
	
	bool CanDecreaseStat(FString& statName, float amount);//This function will be used to check if the stat value can be decreased, and it will return true if the stat value can be decreased and false if it cannot be decreased. Also, it is private.
	
	float IncreaseStat(FString& statName, float amount);//This function will be used to increase the stat value, and it will return the current value of the stat. Also, it is private.

public:
	
	UFUNCTION(BlueprintCallable, Category = "HStats")
	float DamageTo(FS_DamageInfo aboutDamage, AActor* target);//This function will be used to take damage and it will return the current health of the character.
	UFUNCTION(BlueprintCallable, Category = "HStats")
	float HealTo(float amount, AActor* target);//This function will be used to heal the character and it will return the current health of the character.

	UFUNCTION(BlueprintCallable, Category = "HStats")
	float DecreaseStatValue(FString statName, float amount, AActor* target);//This function will be used to decrease the stat value and it will return the current value of the stat.
	UFUNCTION(BlueprintCallable, Category = "HStats")
	bool CanDecreaseStatValue(FString statName, float amount, AActor* target);//This function will be used to check if the stat value can be decreased.
	UFUNCTION(BlueprintCallable, Category = "HStats")
	float IncreaseStatValue(FString statName, float amount, AActor* target);//This function will be used to increase the stat value and it will return the current value of the stat.

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FOnDeath OnDeath;//This delegate will be used to broadcast the death type.
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FOnDamageResponse OnDamageResponse;//This delegate will be used to broadcast the damage type.
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FStatReachMaxValue OnStatReachMaxValue;//This delegate will be used to broadcast the stat reach max value type.
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FStatReachMinValue OnStatReachMinValue;//This delegate will be used to broadcast the stat reach min value type.
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	float currentHealth;//This variable will be used to store the current health of the character.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	float maxHealth;//This variable will be used to store the max health of the character.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	bool CanTakeDamage = true;//This variable will be used to check if the character can take damage.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	bool CanHeal = true;//This variable will be used to check if the character can heal.
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, float> statNameCurrentValue;//This map will be used to store the current value of the stats.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, float> statNameMaxValue;//This map will be used to store the max value of the stats.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, bool> statNameCanDecrease;//This map will be used to check if the stat value can be decreased.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, bool> statNameCanIncrease;//This map will be used to check if the stat value can be increased.
	
};
