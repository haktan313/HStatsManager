// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HEnumsStructure_StatManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HSTATSMANAGER_HEnumsStructure_StatManager_generated_h
#error "HEnumsStructure_StatManager.generated.h already included, missing '#pragma once' in HEnumsStructure_StatManager.h"
#endif
#define HSTATSMANAGER_HEnumsStructure_StatManager_generated_h

#define FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_DamageInfo_Statics; \
	HSTATSMANAGER_API static class UScriptStruct* StaticStruct();


template<> HSTATSMANAGER_API UScriptStruct* StaticStruct<struct FS_DamageInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h


#define FOREACH_ENUM_E_DAMAGETYPE(op) \
	op(E_DamageType::Melee) \
	op(E_DamageType::Ranged) \
	op(E_DamageType::Explosion) \
	op(E_DamageType::DamageType1) \
	op(E_DamageType::DamageType2) \
	op(E_DamageType::DamageType3) \
	op(E_DamageType::DamageType4) \
	op(E_DamageType::DamageType5) \
	op(E_DamageType::DamageType6) \
	op(E_DamageType::DamageType7) \
	op(E_DamageType::DamageType8) \
	op(E_DamageType::DamageType9) \
	op(E_DamageType::DamageType10) \
	op(E_DamageType::DamageType11) \
	op(E_DamageType::DamageType12) 

enum class E_DamageType : uint8;
template<> struct TIsUEnumClass<E_DamageType> { enum { Value = true }; };
template<> HSTATSMANAGER_API UEnum* StaticEnum<E_DamageType>();

#define FOREACH_ENUM_E_DEATHTYPE(op) \
	op(E_DeathType::Melee) \
	op(E_DeathType::Ranged) \
	op(E_DeathType::Explosion) \
	op(E_DeathType::DeathType1) \
	op(E_DeathType::DeathType2) \
	op(E_DeathType::DeathType3) \
	op(E_DeathType::DeathType4) \
	op(E_DeathType::DeathType5) \
	op(E_DeathType::DeathType6) \
	op(E_DeathType::DeathType7) \
	op(E_DeathType::DeathType8) \
	op(E_DeathType::DeathType9) \
	op(E_DeathType::DeathType10) \
	op(E_DeathType::DeathType11) \
	op(E_DeathType::DeathType12) 

enum class E_DeathType : uint8;
template<> struct TIsUEnumClass<E_DeathType> { enum { Value = true }; };
template<> HSTATSMANAGER_API UEnum* StaticEnum<E_DeathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
