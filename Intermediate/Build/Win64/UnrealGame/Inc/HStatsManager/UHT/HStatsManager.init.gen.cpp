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
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HStatsManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HStatsManager()
	{
		if (!Z_Registration_Info_UPackage__Script_HStatsManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HStatsManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1D9D00B2,
				0x2B963B6D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HStatsManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HStatsManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HStatsManager(Z_Construct_UPackage__Script_HStatsManager, TEXT("/Script/HStatsManager"), Z_Registration_Info_UPackage__Script_HStatsManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1D9D00B2, 0x2B963B6D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
