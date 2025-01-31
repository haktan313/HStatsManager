
#pragma once

#include "CoreMinimal.h"
#include "HEnumsStructure_StatManager.h"
#include "Components/ActorComponent.h"
#include "HStatHandler.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, UAnimMontage*, DeathAnimation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageResponse, UAnimMontage*, DamageAnimation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatReachMaxValue, FString, statName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatReachMinValue, FString, statName);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HSTATSMANAGER_API UHStatHandler : public UActorComponent
{
	GENERATED_BODY()

	float TakeDamage(FS_DamageInfo aboutDamage);
	
	float Heal(float amount);
	
	float DecreaseStat(FString& statName, float amount);
	
	bool CanDecreaseStat(FString& statName, float amount);
	
	float IncreaseStat(FString& statName, float amount);

public:
	
	UFUNCTION(BlueprintCallable, Category = "HStats")
	float DamageTo(FS_DamageInfo aboutDamage, AActor* target);
	UFUNCTION(BlueprintCallable, Category = "HStats")
	float HealTo(float amount, AActor* target);

	UFUNCTION(BlueprintCallable, Category = "HStats")
	float DecreaseStatValue(FString statName, float amount, AActor* target);
	UFUNCTION(BlueprintCallable, Category = "HStats")
	bool CanDecreaseStatValue(FString statName, float amount, AActor* target);
	UFUNCTION(BlueprintCallable, Category = "HStats")
	float IncreaseStatValue(FString statName, float amount, AActor* target);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FOnDeath OnDeath;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FOnDamageResponse OnDamageResponse;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FStatReachMaxValue OnStatReachMaxValue;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "HStats")
	FStatReachMinValue OnStatReachMinValue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	float currentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	float maxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	bool CanTakeDamage = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	bool CanHeal = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, float> statNameCurrentValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, float> statNameMaxValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, bool> statNameCanDecrease;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HStats")
	TMap<FString, bool> statNameCanIncrease;
	
};
