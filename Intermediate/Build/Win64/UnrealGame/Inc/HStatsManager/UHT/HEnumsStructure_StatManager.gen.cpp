// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HStatsManager/Public/HEnumsStructure_StatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHEnumsStructure_StatManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
HSTATSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FS_DamageInfo();
UPackage* Z_Construct_UPackage__Script_HStatsManager();
// End Cross Module References

// Begin ScriptStruct FS_DamageInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_DamageInfo;
class UScriptStruct* FS_DamageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_DamageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_DamageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_DamageInfo, (UObject*)Z_Construct_UPackage__Script_HStatsManager(), TEXT("S_DamageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_S_DamageInfo.OuterSingleton;
}
template<> HSTATSMANAGER_API UScriptStruct* StaticStruct<FS_DamageInfo>()
{
	return FS_DamageInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_DamageInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfDamage_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageReactionAnimation_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathReactionAnimation_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountOfDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageReactionAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathReactionAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_DamageInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage = { "AmountOfDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_DamageInfo, AmountOfDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfDamage_MetaData), NewProp_AmountOfDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageReactionAnimation = { "DamageReactionAnimation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_DamageInfo, DamageReactionAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageReactionAnimation_MetaData), NewProp_DamageReactionAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathReactionAnimation = { "DeathReactionAnimation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_DamageInfo, DeathReactionAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathReactionAnimation_MetaData), NewProp_DeathReactionAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageReactionAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathReactionAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HStatsManager,
	nullptr,
	&NewStructOps,
	"S_DamageInfo",
	Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers),
	sizeof(FS_DamageInfo),
	alignof(FS_DamageInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_DamageInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_DamageInfo()
{
	if (!Z_Registration_Info_UScriptStruct_S_DamageInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_DamageInfo.InnerSingleton, Z_Construct_UScriptStruct_FS_DamageInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_DamageInfo.InnerSingleton;
}
// End ScriptStruct FS_DamageInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FS_DamageInfo::StaticStruct, Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewStructOps, TEXT("S_DamageInfo"), &Z_Registration_Info_UScriptStruct_S_DamageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_DamageInfo), 2331132357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_1993021055(TEXT("/Script/HStatsManager"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
