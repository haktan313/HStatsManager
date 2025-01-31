// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHStatsManager_init() {}
	HSTATSMANAGER_API UFunction* Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature();
	HSTATSMANAGER_API UFunction* Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature();
	HSTATSMANAGER_API UFunction* Z_Construct_UDelegateFunction_HStatsManager_StatReachMaxValue__DelegateSignature();
	HSTATSMANAGER_API UFunction* Z_Construct_UDelegateFunction_HStatsManager_StatReachMinValue__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HStatsManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HStatsManager()
	{
		if (!Z_Registration_Info_UPackage__Script_HStatsManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HStatsManager_StatReachMaxValue__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HStatsManager_StatReachMinValue__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HStatsManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x884F6F6B,
				0x6668E205,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HStatsManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HStatsManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HStatsManager(Z_Construct_UPackage__Script_HStatsManager, TEXT("/Script/HStatsManager"), Z_Registration_Info_UPackage__Script_HStatsManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x884F6F6B, 0x6668E205));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
