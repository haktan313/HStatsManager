//HEnumsStructure_StatManager.h
//This is the enum and struct file that will be used in the StatManager system.
//This file will be used in the StatHandler and the Widget_BaseStat classes.

#pragma once

#include "CoreMinimal.h"
#include "HEnumsStructure_StatManager.generated.h"

//This struct will be used to store the damage information.
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
	class UAnimMontage* DamageReactionAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	class UAnimMontage* DeathReactionAnimation;
};
