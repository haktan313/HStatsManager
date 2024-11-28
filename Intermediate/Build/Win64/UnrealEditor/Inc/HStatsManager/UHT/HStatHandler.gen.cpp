// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HStatsManager/Public/HStatHandler.h"
#include "HStatsManager/Public/HEnumsStructure_StatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHStatHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	HSTATSMANAGER_API UClass* Z_Construct_UClass_UHStatHandler();
	HSTATSMANAGER_API UClass* Z_Construct_UClass_UHStatHandler_NoRegister();
	HSTATSMANAGER_API UEnum* Z_Construct_UEnum_HStatsManager_E_DamageType();
	HSTATSMANAGER_API UEnum* Z_Construct_UEnum_HStatsManager_E_DeathType();
	HSTATSMANAGER_API UFunction* Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature();
	HSTATSMANAGER_API UFunction* Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature();
	HSTATSMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FS_DamageInfo();
	UPackage* Z_Construct_UPackage__Script_HStatsManager();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics
	{
		struct _Script_HStatsManager_eventOnDeath_Parms
		{
			E_DeathType DeathType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeathType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::NewProp_DeathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::NewProp_DeathType = { "DeathType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HStatsManager_eventOnDeath_Parms, DeathType), Z_Construct_UEnum_HStatsManager_E_DeathType, METADATA_PARAMS(nullptr, 0) }; // 558005314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::NewProp_DeathType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::NewProp_DeathType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HStatsManager, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::_Script_HStatsManager_eventOnDeath_Parms), Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, E_DeathType DeathType)
{
	struct _Script_HStatsManager_eventOnDeath_Parms
	{
		E_DeathType DeathType;
	};
	_Script_HStatsManager_eventOnDeath_Parms Parms;
	Parms.DeathType=DeathType;
	OnDeath.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics
	{
		struct _Script_HStatsManager_eventOnDamageResponse_Parms
		{
			E_DamageType DamageType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HStatsManager_eventOnDamageResponse_Parms, DamageType), Z_Construct_UEnum_HStatsManager_E_DamageType, METADATA_PARAMS(nullptr, 0) }; // 203792599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::NewProp_DamageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::NewProp_DamageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//This delegate will be used to broadcast the death type.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This delegate will be used to broadcast the death type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HStatsManager, nullptr, "OnDamageResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::_Script_HStatsManager_eventOnDamageResponse_Parms), Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDamageResponse_DelegateWrapper(const FMulticastScriptDelegate& OnDamageResponse, E_DamageType DamageType)
{
	struct _Script_HStatsManager_eventOnDamageResponse_Parms
	{
		E_DamageType DamageType;
	};
	_Script_HStatsManager_eventOnDamageResponse_Parms Parms;
	Parms.DamageType=DamageType;
	OnDamageResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHStatHandler::execIncreaseStatValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->IncreaseStatValue(Z_Param_statName,Z_Param_amount,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHStatHandler::execCanDecreaseStatValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDecreaseStatValue(Z_Param_statName,Z_Param_amount,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHStatHandler::execDecreaseStatValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->DecreaseStatValue(Z_Param_statName,Z_Param_amount,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHStatHandler::execHealTo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->HealTo(Z_Param_amount,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHStatHandler::execDamageTo)
	{
		P_GET_STRUCT(FS_DamageInfo,Z_Param_aboutDamage);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->DamageTo(Z_Param_aboutDamage,Z_Param_target);
		P_NATIVE_END;
	}
	void UHStatHandler::StaticRegisterNativesUHStatHandler()
	{
		UClass* Class = UHStatHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDecreaseStatValue", &UHStatHandler::execCanDecreaseStatValue },
			{ "DamageTo", &UHStatHandler::execDamageTo },
			{ "DecreaseStatValue", &UHStatHandler::execDecreaseStatValue },
			{ "HealTo", &UHStatHandler::execHealTo },
			{ "IncreaseStatValue", &UHStatHandler::execIncreaseStatValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics
	{
		struct HStatHandler_eventCanDecreaseStatValue_Parms
		{
			FString statName;
			float amount;
			AActor* target;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventCanDecreaseStatValue_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventCanDecreaseStatValue_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventCanDecreaseStatValue_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HStatHandler_eventCanDecreaseStatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HStatHandler_eventCanDecreaseStatValue_Parms), &Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_statName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This function will be used to decrease the stat value and it will return the current value of the stat.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This function will be used to decrease the stat value and it will return the current value of the stat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHStatHandler, nullptr, "CanDecreaseStatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::HStatHandler_eventCanDecreaseStatValue_Parms), Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHStatHandler_DamageTo_Statics
	{
		struct HStatHandler_eventDamageTo_Parms
		{
			FS_DamageInfo aboutDamage;
			AActor* target;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aboutDamage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::NewProp_aboutDamage = { "aboutDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDamageTo_Parms, aboutDamage), Z_Construct_UScriptStruct_FS_DamageInfo, METADATA_PARAMS(nullptr, 0) }; // 45969162
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDamageTo_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDamageTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::NewProp_aboutDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "HStats" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHStatHandler, nullptr, "DamageTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::HStatHandler_eventDamageTo_Parms), Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHStatHandler_DamageTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHStatHandler_DamageTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics
	{
		struct HStatHandler_eventDecreaseStatValue_Parms
		{
			FString statName;
			float amount;
			AActor* target;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDecreaseStatValue_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDecreaseStatValue_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDecreaseStatValue_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventDecreaseStatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_statName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This function will be used to heal the character and it will return the current health of the character.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This function will be used to heal the character and it will return the current health of the character." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHStatHandler, nullptr, "DecreaseStatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::HStatHandler_eventDecreaseStatValue_Parms), Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHStatHandler_DecreaseStatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHStatHandler_DecreaseStatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHStatHandler_HealTo_Statics
	{
		struct HStatHandler_eventHealTo_Parms
		{
			float amount;
			AActor* target;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_HealTo_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventHealTo_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHStatHandler_HealTo_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventHealTo_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_HealTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventHealTo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHStatHandler_HealTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_HealTo_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_HealTo_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_HealTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHStatHandler_HealTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This function will be used to take damage and it will return the current health of the character.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This function will be used to take damage and it will return the current health of the character." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHStatHandler_HealTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHStatHandler, nullptr, "HealTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHStatHandler_HealTo_Statics::HStatHandler_eventHealTo_Parms), Z_Construct_UFunction_UHStatHandler_HealTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_HealTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHStatHandler_HealTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_HealTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHStatHandler_HealTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHStatHandler_HealTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics
	{
		struct HStatHandler_eventIncreaseStatValue_Parms
		{
			FString statName;
			float amount;
			AActor* target;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventIncreaseStatValue_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventIncreaseStatValue_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventIncreaseStatValue_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HStatHandler_eventIncreaseStatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_statName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This function will be used to check if the stat value can be decreased.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This function will be used to check if the stat value can be decreased." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHStatHandler, nullptr, "IncreaseStatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::HStatHandler_eventIncreaseStatValue_Parms), Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHStatHandler_IncreaseStatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHStatHandler_IncreaseStatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHStatHandler);
	UClass* Z_Construct_UClass_UHStatHandler_NoRegister()
	{
		return UHStatHandler::StaticClass();
	}
	struct Z_Construct_UClass_UHStatHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamageResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamageResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_statNameCurrentValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_statNameCurrentValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statNameCurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_statNameCurrentValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_statNameMaxValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_statNameMaxValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statNameMaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_statNameMaxValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHStatHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HStatsManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHStatHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHStatHandler_CanDecreaseStatValue, "CanDecreaseStatValue" }, // 1838864031
		{ &Z_Construct_UFunction_UHStatHandler_DamageTo, "DamageTo" }, // 2216717482
		{ &Z_Construct_UFunction_UHStatHandler_DecreaseStatValue, "DecreaseStatValue" }, // 2602970876
		{ &Z_Construct_UFunction_UHStatHandler_HealTo, "HealTo" }, // 3411386269
		{ &Z_Construct_UFunction_UHStatHandler_IncreaseStatValue, "IncreaseStatValue" }, // 2638194657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//This delegate will be used to broadcast the damage type.\n" },
		{ "IncludePath", "HStatHandler.h" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This delegate will be used to broadcast the damage type." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDeath_MetaData[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This function will be used to increase the stat value and it will return the current value of the stat.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This function will be used to increase the stat value and it will return the current value of the stat." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHStatHandler, OnDeath), Z_Construct_UDelegateFunction_HStatsManager_OnDeath__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDeath_MetaData)) }; // 1242407409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDamageResponse_MetaData[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This delegate will be used to broadcast the death type.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This delegate will be used to broadcast the death type." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDamageResponse = { "OnDamageResponse", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHStatHandler, OnDamageResponse), Z_Construct_UDelegateFunction_HStatsManager_OnDamageResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDamageResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDamageResponse_MetaData)) }; // 1776129704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::NewProp_currentHealth_MetaData[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This delegate will be used to broadcast the damage type.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This delegate will be used to broadcast the damage type." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHStatHandler, currentHealth), METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::NewProp_currentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This variable will be used to store the current health of the character.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This variable will be used to store the current health of the character." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHStatHandler, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::NewProp_maxHealth_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_ValueProp = { "statNameCurrentValue", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_Key_KeyProp = { "statNameCurrentValue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_MetaData[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This variable will be used to store the max health of the character.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This variable will be used to store the max health of the character." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue = { "statNameCurrentValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHStatHandler, statNameCurrentValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_ValueProp = { "statNameMaxValue", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_Key_KeyProp = { "statNameMaxValue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_MetaData[] = {
		{ "Category", "HStats" },
		{ "Comment", "//This map will be used to store the current value of the stats.\n" },
		{ "ModuleRelativePath", "Public/HStatHandler.h" },
		{ "ToolTip", "This map will be used to store the current value of the stats." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue = { "statNameMaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHStatHandler, statNameMaxValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHStatHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_OnDamageResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_currentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameCurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHStatHandler_Statics::NewProp_statNameMaxValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHStatHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHStatHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHStatHandler_Statics::ClassParams = {
		&UHStatHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHStatHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHStatHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHStatHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHStatHandler()
	{
		if (!Z_Registration_Info_UClass_UHStatHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHStatHandler.OuterSingleton, Z_Construct_UClass_UHStatHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHStatHandler.OuterSingleton;
	}
	template<> HSTATSMANAGER_API UClass* StaticClass<UHStatHandler>()
	{
		return UHStatHandler::StaticClass();
	}
	UHStatHandler::UHStatHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHStatHandler);
	UHStatHandler::~UHStatHandler() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHStatHandler, UHStatHandler::StaticClass, TEXT("UHStatHandler"), &Z_Registration_Info_UClass_UHStatHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHStatHandler), 3856453100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_3650154072(TEXT("/Script/HStatsManager"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_HStatSystemPlugin_Build_BuiltPlugins_HStatsManager_5_2_HostProject_Plugins_HStatsManager_Source_HStatsManager_Public_HStatHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
