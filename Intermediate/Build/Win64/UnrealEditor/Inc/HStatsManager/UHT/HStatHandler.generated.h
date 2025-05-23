// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HStatHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
struct FS_DamageInfo;
#ifdef HSTATSMANAGER_HStatHandler_generated_h
#error "HStatHandler.generated.h already included, missing '#pragma once' in HStatHandler.h"
#endif
#define HSTATSMANAGER_HStatHandler_generated_h

#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_9_DELEGATE \
HSTATSMANAGER_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, UAnimMontage* DeathAnimation);


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_10_DELEGATE \
HSTATSMANAGER_API void FOnDamageResponse_DelegateWrapper(const FMulticastScriptDelegate& OnDamageResponse, UAnimMontage* DamageAnimation);


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_11_DELEGATE \
HSTATSMANAGER_API void FStatReachMaxValue_DelegateWrapper(const FMulticastScriptDelegate& StatReachMaxValue, const FString& statName);


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_12_DELEGATE \
HSTATSMANAGER_API void FStatReachMinValue_DelegateWrapper(const FMulticastScriptDelegate& StatReachMinValue, const FString& statName);


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncreaseStatValue); \
	DECLARE_FUNCTION(execCanDecreaseStatValue); \
	DECLARE_FUNCTION(execDecreaseStatValue); \
	DECLARE_FUNCTION(execHealTo); \
	DECLARE_FUNCTION(execDamageTo);


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHStatHandler(); \
	friend struct Z_Construct_UClass_UHStatHandler_Statics; \
public: \
	DECLARE_CLASS(UHStatHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HStatsManager"), NO_API) \
	DECLARE_SERIALIZER(UHStatHandler)


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHStatHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHStatHandler(UHStatHandler&&); \
	UHStatHandler(const UHStatHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHStatHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHStatHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHStatHandler) \
	NO_API virtual ~UHStatHandler();


#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_15_PROLOG
#define FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HSTATSMANAGER_API UClass* StaticClass<class UHStatHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_HStatsManager_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
