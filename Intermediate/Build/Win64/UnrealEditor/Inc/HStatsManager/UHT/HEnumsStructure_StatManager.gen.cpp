// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HStatsManager/Public/HEnumsStructure_StatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHEnumsStructure_StatManager() {}
// Cross Module References
	HSTATSMANAGER_API UEnum* Z_Construct_UEnum_HStatsManager_E_DamageType();
	HSTATSMANAGER_API UEnum* Z_Construct_UEnum_HStatsManager_E_DeathType();
	HSTATSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FS_DamageInfo();
	UPackage* Z_Construct_UPackage__Script_HStatsManager();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_DamageType;
	static UEnum* E_DamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E_DamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E_DamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HStatsManager_E_DamageType, (UObject*)Z_Construct_UPackage__Script_HStatsManager(), TEXT("E_DamageType"));
		}
		return Z_Registration_Info_UEnum_E_DamageType.OuterSingleton;
	}
	template<> HSTATSMANAGER_API UEnum* StaticEnum<E_DamageType>()
	{
		return E_DamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_HStatsManager_E_DamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::Enumerators[] = {
		{ "E_DamageType::Melee", (int64)E_DamageType::Melee },
		{ "E_DamageType::Ranged", (int64)E_DamageType::Ranged },
		{ "E_DamageType::Explosion", (int64)E_DamageType::Explosion },
		{ "E_DamageType::DamageType1", (int64)E_DamageType::DamageType1 },
		{ "E_DamageType::DamageType2", (int64)E_DamageType::DamageType2 },
		{ "E_DamageType::DamageType3", (int64)E_DamageType::DamageType3 },
		{ "E_DamageType::DamageType4", (int64)E_DamageType::DamageType4 },
		{ "E_DamageType::DamageType5", (int64)E_DamageType::DamageType5 },
		{ "E_DamageType::DamageType6", (int64)E_DamageType::DamageType6 },
		{ "E_DamageType::DamageType7", (int64)E_DamageType::DamageType7 },
		{ "E_DamageType::DamageType8", (int64)E_DamageType::DamageType8 },
		{ "E_DamageType::DamageType9", (int64)E_DamageType::DamageType9 },
		{ "E_DamageType::DamageType10", (int64)E_DamageType::DamageType10 },
		{ "E_DamageType::DamageType11", (int64)E_DamageType::DamageType11 },
		{ "E_DamageType::DamageType12", (int64)E_DamageType::DamageType12 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//This enum will be used to determine the type of damage that will be taken by the character.\n" },
		{ "DamageType1.DisplayName", "DamageType1" },
		{ "DamageType1.Name", "E_DamageType::DamageType1" },
		{ "DamageType10.DisplayName", "DamageType10" },
		{ "DamageType10.Name", "E_DamageType::DamageType10" },
		{ "DamageType11.DisplayName", "DamageType11" },
		{ "DamageType11.Name", "E_DamageType::DamageType11" },
		{ "DamageType12.DisplayName", "DamageType12" },
		{ "DamageType12.Name", "E_DamageType::DamageType12" },
		{ "DamageType2.DisplayName", "DamageType2" },
		{ "DamageType2.Name", "E_DamageType::DamageType2" },
		{ "DamageType3.DisplayName", "DamageType3" },
		{ "DamageType3.Name", "E_DamageType::DamageType3" },
		{ "DamageType4.DisplayName", "DamageType4" },
		{ "DamageType4.Name", "E_DamageType::DamageType4" },
		{ "DamageType5.DisplayName", "DamageType5" },
		{ "DamageType5.Name", "E_DamageType::DamageType5" },
		{ "DamageType6.DisplayName", "DamageType6" },
		{ "DamageType6.Name", "E_DamageType::DamageType6" },
		{ "DamageType7.DisplayName", "DamageType7" },
		{ "DamageType7.Name", "E_DamageType::DamageType7" },
		{ "DamageType8.DisplayName", "DamageType8" },
		{ "DamageType8.Name", "E_DamageType::DamageType8" },
		{ "DamageType9.DisplayName", "DamageType9" },
		{ "DamageType9.Name", "E_DamageType::DamageType9" },
		{ "Explosion.DisplayName", "Explosion" },
		{ "Explosion.Name", "E_DamageType::Explosion" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "E_DamageType::Melee" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "E_DamageType::Ranged" },
		{ "ToolTip", "This enum will be used to determine the type of damage that will be taken by the character." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HStatsManager,
		nullptr,
		"E_DamageType",
		"E_DamageType",
		Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HStatsManager_E_DamageType()
	{
		if (!Z_Registration_Info_UEnum_E_DamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DamageType.InnerSingleton, Z_Construct_UEnum_HStatsManager_E_DamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_DamageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_DeathType;
	static UEnum* E_DeathType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E_DeathType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E_DeathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HStatsManager_E_DeathType, (UObject*)Z_Construct_UPackage__Script_HStatsManager(), TEXT("E_DeathType"));
		}
		return Z_Registration_Info_UEnum_E_DeathType.OuterSingleton;
	}
	template<> HSTATSMANAGER_API UEnum* StaticEnum<E_DeathType>()
	{
		return E_DeathType_StaticEnum();
	}
	struct Z_Construct_UEnum_HStatsManager_E_DeathType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::Enumerators[] = {
		{ "E_DeathType::Melee", (int64)E_DeathType::Melee },
		{ "E_DeathType::Ranged", (int64)E_DeathType::Ranged },
		{ "E_DeathType::Explosion", (int64)E_DeathType::Explosion },
		{ "E_DeathType::DeathType1", (int64)E_DeathType::DeathType1 },
		{ "E_DeathType::DeathType2", (int64)E_DeathType::DeathType2 },
		{ "E_DeathType::DeathType3", (int64)E_DeathType::DeathType3 },
		{ "E_DeathType::DeathType4", (int64)E_DeathType::DeathType4 },
		{ "E_DeathType::DeathType5", (int64)E_DeathType::DeathType5 },
		{ "E_DeathType::DeathType6", (int64)E_DeathType::DeathType6 },
		{ "E_DeathType::DeathType7", (int64)E_DeathType::DeathType7 },
		{ "E_DeathType::DeathType8", (int64)E_DeathType::DeathType8 },
		{ "E_DeathType::DeathType9", (int64)E_DeathType::DeathType9 },
		{ "E_DeathType::DeathType10", (int64)E_DeathType::DeathType10 },
		{ "E_DeathType::DeathType11", (int64)E_DeathType::DeathType11 },
		{ "E_DeathType::DeathType12", (int64)E_DeathType::DeathType12 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//This enum will be used to determine the type of death that will be taken by the character.\n" },
		{ "DeathType1.DisplayName", "DeathType1" },
		{ "DeathType1.Name", "E_DeathType::DeathType1" },
		{ "DeathType10.DisplayName", "DeathType10" },
		{ "DeathType10.Name", "E_DeathType::DeathType10" },
		{ "DeathType11.DisplayName", "DeathType11" },
		{ "DeathType11.Name", "E_DeathType::DeathType11" },
		{ "DeathType12.DisplayName", "DeathType12" },
		{ "DeathType12.Name", "E_DeathType::DeathType12" },
		{ "DeathType2.DisplayName", "DeathType2" },
		{ "DeathType2.Name", "E_DeathType::DeathType2" },
		{ "DeathType3.DisplayName", "DeathType3" },
		{ "DeathType3.Name", "E_DeathType::DeathType3" },
		{ "DeathType4.DisplayName", "DeathType4" },
		{ "DeathType4.Name", "E_DeathType::DeathType4" },
		{ "DeathType5.DisplayName", "DeathType5" },
		{ "DeathType5.Name", "E_DeathType::DeathType5" },
		{ "DeathType6.DisplayName", "DeathType6" },
		{ "DeathType6.Name", "E_DeathType::DeathType6" },
		{ "DeathType7.DisplayName", "DeathType7" },
		{ "DeathType7.Name", "E_DeathType::DeathType7" },
		{ "DeathType8.DisplayName", "DeathType8" },
		{ "DeathType8.Name", "E_DeathType::DeathType8" },
		{ "DeathType9.DisplayName", "DeathType9" },
		{ "DeathType9.Name", "E_DeathType::DeathType9" },
		{ "Explosion.DisplayName", "Explosion" },
		{ "Explosion.Name", "E_DeathType::Explosion" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "E_DeathType::Melee" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "E_DeathType::Ranged" },
		{ "ToolTip", "This enum will be used to determine the type of death that will be taken by the character." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HStatsManager,
		nullptr,
		"E_DeathType",
		"E_DeathType",
		Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HStatsManager_E_DeathType()
	{
		if (!Z_Registration_Info_UEnum_E_DeathType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DeathType.InnerSingleton, Z_Construct_UEnum_HStatsManager_E_DeathType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E_DeathType.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountOfDamage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeathType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_DamageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//This struct will be used to store the damage information.\n" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
		{ "ToolTip", "This struct will be used to store the damage information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_DamageInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage = { "AmountOfDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_DamageInfo, AmountOfDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_DamageInfo, DamageType), Z_Construct_UEnum_HStatsManager_E_DamageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType_MetaData)) }; // 203792599
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType_MetaData[] = {
		{ "Category", "DamageInfo" },
		{ "ModuleRelativePath", "Public/HEnumsStructure_StatManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType = { "DeathType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_DamageInfo, DeathType), Z_Construct_UEnum_HStatsManager_E_DeathType, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType_MetaData)) }; // 558005314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_AmountOfDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewProp_DeathType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_DamageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HStatsManager,
		nullptr,
		&NewStructOps,
		"S_DamageInfo",
		sizeof(FS_DamageInfo),
		alignof(FS_DamageInfo),
		Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_DamageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_DamageInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_S_DamageInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_DamageInfo.InnerSingleton, Z_Construct_UScriptStruct_FS_DamageInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_DamageInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::EnumInfo[] = {
		{ E_DamageType_StaticEnum, TEXT("E_DamageType"), &Z_Registration_Info_UEnum_E_DamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 203792599U) },
		{ E_DeathType_StaticEnum, TEXT("E_DeathType"), &Z_Registration_Info_UEnum_E_DeathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 558005314U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::ScriptStructInfo[] = {
		{ FS_DamageInfo::StaticStruct, Z_Construct_UScriptStruct_FS_DamageInfo_Statics::NewStructOps, TEXT("S_DamageInfo"), &Z_Registration_Info_UScriptStruct_S_DamageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_DamageInfo), 45969162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_2644509426(TEXT("/Script/HStatsManager"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HEnumsStructure_StatManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
