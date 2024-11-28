//HEnumsStructure_StatManager.h
//This is the enum and struct file that will be used in the StatManager system.
//This file will be used in the StatHandler and the Widget_BaseStat classes.

#pragma once

#include "CoreMinimal.h"
#include "HEnumsStructure_StatManager.generated.h"

//This enum will be used to determine the type of damage that will be taken by the character.
UENUM(BlueprintType)
enum class E_DamageType : uint8
{
	Melee UMETA(DisplayName = "Melee"),
	Ranged UMETA(DisplayName = "Ranged"),
	Explosion UMETA(DisplayName = "Explosion"),
	DamageType1 UMETA(DisplayName = "DamageType1"),
	DamageType2 UMETA(DisplayName = "DamageType2"),
	DamageType3 UMETA(DisplayName = "DamageType3"),
	DamageType4 UMETA(DisplayName = "DamageType4"),
	DamageType5 UMETA(DisplayName = "DamageType5"),
	DamageType6 UMETA(DisplayName = "DamageType6"),
	DamageType7 UMETA(DisplayName = "DamageType7"),
	DamageType8 UMETA(DisplayName = "DamageType8"),
	DamageType9 UMETA(DisplayName = "DamageType9"),
	DamageType10 UMETA(DisplayName = "DamageType10"),
	DamageType11 UMETA(DisplayName = "DamageType11"),
	DamageType12 UMETA(DisplayName = "DamageType12")
};

//This enum will be used to determine the type of death that will be taken by the character.
UENUM(BlueprintType)
enum class E_DeathType : uint8
{
	Melee UMETA(DisplayName = "Melee"),
	Ranged UMETA(DisplayName = "Ranged"),
	Explosion UMETA(DisplayName = "Explosion"),
	DeathType1 UMETA(DisplayName = "DeathType1"),
	DeathType2 UMETA(DisplayName = "DeathType2"),
	DeathType3 UMETA(DisplayName = "DeathType3"),
	DeathType4 UMETA(DisplayName = "DeathType4"),
	DeathType5 UMETA(DisplayName = "DeathType5"),
	DeathType6 UMETA(DisplayName = "DeathType6"),
	DeathType7 UMETA(DisplayName = "DeathType7"),
	DeathType8 UMETA(DisplayName = "DeathType8"),
	DeathType9 UMETA(DisplayName = "DeathType9"),
	DeathType10 UMETA(DisplayName = "DeathType10"),
	DeathType11 UMETA(DisplayName = "DeathType11"),
	DeathType12 UMETA(DisplayName = "DeathType12")
};

//This struct will be used to store the damage information.
USTRUCT(BlueprintType)
struct FS_DamageInfo
{
	GENERATED_BODY()

	FS_DamageInfo()
		: AmountOfDamage(0), DamageType(E_DamageType::Melee), DeathType(E_DeathType::Melee)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	float AmountOfDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	E_DamageType DamageType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageInfo")
	E_DeathType DeathType;
};
