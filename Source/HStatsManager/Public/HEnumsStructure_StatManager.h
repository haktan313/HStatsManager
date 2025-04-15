
#pragma once

#include "CoreMinimal.h"
#include "HEnumsStructure_StatManager.generated.h"

USTRUCT(BlueprintType)
struct FS_DamageInfo
{
	GENERATED_BODY()

	FS_DamageInfo()
		: AmountOfDamage(0), DamageReactionAnimation(nullptr), DeathReactionAnimation(nullptr)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	float AmountOfDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	TObjectPtr<class UAnimMontage> DamageReactionAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	TObjectPtr<class UAnimMontage> DeathReactionAnimation;
};
