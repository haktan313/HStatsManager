// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HStatsManager/Public/HWidget_BaseStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWidget_BaseStat() {}
// Cross Module References
	HSTATSMANAGER_API UClass* Z_Construct_UClass_UHStatHandler_NoRegister();
	HSTATSMANAGER_API UClass* Z_Construct_UClass_UHWidget_BaseStat();
	HSTATSMANAGER_API UClass* Z_Construct_UClass_UHWidget_BaseStat_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HStatsManager();
// End Cross Module References
	DEFINE_FUNCTION(UHWidget_BaseStat::execGetHealthPercentageFromStatHandler)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WhoseStatHandler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentageFromStatHandler(Z_Param_WhoseStatHandler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHWidget_BaseStat::execGetPercentageOfStatFromStatHandlerObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WhoseStatHandler);
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentageOfStatFromStatHandlerObject(Z_Param_WhoseStatHandler,Z_Param_statName);
		P_NATIVE_END;
	}
	void UHWidget_BaseStat::StaticRegisterNativesUHWidget_BaseStat()
	{
		UClass* Class = UHWidget_BaseStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercentageFromStatHandler", &UHWidget_BaseStat::execGetHealthPercentageFromStatHandler },
			{ "GetPercentageOfStatFromStatHandlerObject", &UHWidget_BaseStat::execGetPercentageOfStatFromStatHandlerObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics
	{
		struct HWidget_BaseStat_eventGetHealthPercentageFromStatHandler_Parms
		{
			FString WhoseStatHandler;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_WhoseStatHandler;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::NewProp_WhoseStatHandler = { "WhoseStatHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HWidget_BaseStat_eventGetHealthPercentageFromStatHandler_Parms, WhoseStatHandler), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HWidget_BaseStat_eventGetHealthPercentageFromStatHandler_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::NewProp_WhoseStatHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "Comment", "//This function will return the percentage of the health\n" },
		{ "ModuleRelativePath", "Public/HWidget_BaseStat.h" },
		{ "ToolTip", "This function will return the percentage of the health" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHWidget_BaseStat, nullptr, "GetHealthPercentageFromStatHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::HWidget_BaseStat_eventGetHealthPercentageFromStatHandler_Parms), Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics
	{
		struct HWidget_BaseStat_eventGetPercentageOfStatFromStatHandlerObject_Parms
		{
			FString WhoseStatHandler;
			FString statName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_WhoseStatHandler;
		static const UECodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::NewProp_WhoseStatHandler = { "WhoseStatHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HWidget_BaseStat_eventGetPercentageOfStatFromStatHandlerObject_Parms, WhoseStatHandler), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HWidget_BaseStat_eventGetPercentageOfStatFromStatHandlerObject_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HWidget_BaseStat_eventGetPercentageOfStatFromStatHandlerObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::NewProp_WhoseStatHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::NewProp_statName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "Comment", "//This function will return the percentage of the stat\n" },
		{ "ModuleRelativePath", "Public/HWidget_BaseStat.h" },
		{ "ToolTip", "This function will return the percentage of the stat" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHWidget_BaseStat, nullptr, "GetPercentageOfStatFromStatHandlerObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::HWidget_BaseStat_eventGetPercentageOfStatFromStatHandlerObject_Parms), Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHWidget_BaseStat);
	UClass* Z_Construct_UClass_UHWidget_BaseStat_NoRegister()
	{
		return UHWidget_BaseStat::StaticClass();
	}
	struct Z_Construct_UClass_UHWidget_BaseStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatHandlerObjects_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatHandlerObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatHandlerObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StatHandlerObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHWidget_BaseStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HStatsManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHWidget_BaseStat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHWidget_BaseStat_GetHealthPercentageFromStatHandler, "GetHealthPercentageFromStatHandler" }, // 1982829369
		{ &Z_Construct_UFunction_UHWidget_BaseStat_GetPercentageOfStatFromStatHandlerObject, "GetPercentageOfStatFromStatHandlerObject" }, // 592555963
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHWidget_BaseStat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HWidget_BaseStat.h" },
		{ "ModuleRelativePath", "Public/HWidget_BaseStat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_ValueProp = { "StatHandlerObjects", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHStatHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_Key_KeyProp = { "StatHandlerObjects_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HWidget_BaseStat.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects = { "StatHandlerObjects", nullptr, (EPropertyFlags)0x001100800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHWidget_BaseStat, StatHandlerObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHWidget_BaseStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHWidget_BaseStat_Statics::NewProp_StatHandlerObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHWidget_BaseStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHWidget_BaseStat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHWidget_BaseStat_Statics::ClassParams = {
		&UHWidget_BaseStat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHWidget_BaseStat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHWidget_BaseStat_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHWidget_BaseStat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHWidget_BaseStat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHWidget_BaseStat()
	{
		if (!Z_Registration_Info_UClass_UHWidget_BaseStat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHWidget_BaseStat.OuterSingleton, Z_Construct_UClass_UHWidget_BaseStat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHWidget_BaseStat.OuterSingleton;
	}
	template<> HSTATSMANAGER_API UClass* StaticClass<UHWidget_BaseStat>()
	{
		return UHWidget_BaseStat::StaticClass();
	}
	UHWidget_BaseStat::UHWidget_BaseStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHWidget_BaseStat);
	UHWidget_BaseStat::~UHWidget_BaseStat() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_5_2_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HWidget_BaseStat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_5_2_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HWidget_BaseStat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHWidget_BaseStat, UHWidget_BaseStat::StaticClass, TEXT("UHWidget_BaseStat"), &Z_Registration_Info_UClass_UHWidget_BaseStat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHWidget_BaseStat), 2860155251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_5_2_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HWidget_BaseStat_h_403142632(TEXT("/Script/HStatsManager"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_5_2_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HWidget_BaseStat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_5_2_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HWidget_BaseStat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
