// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendSettings/FrontendGameUserSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendGameUserSettings() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendGameUserSettings();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendGameUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendGameUserSettings Function GetCurrentGameDifficulty **************
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics
{
	struct FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetCurrentGameDifficulty", Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventGetCurrentGameDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetCurrentGameDifficulty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentGameDifficulty();
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function GetCurrentGameDifficulty ****************

// ********** Begin Class UFrontendGameUserSettings Function GetMusicVolume ************************
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics
{
	struct FrontendGameUserSettings_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetMusicVolume", Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FrontendGameUserSettings_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FrontendGameUserSettings_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function GetMusicVolume **************************

// ********** Begin Class UFrontendGameUserSettings Function GetOverallVolume **********************
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics
{
	struct FrontendGameUserSettings_eventGetOverallVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetOverallVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetOverallVolume", Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FrontendGameUserSettings_eventGetOverallVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FrontendGameUserSettings_eventGetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetOverallVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverallVolume();
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function GetOverallVolume ************************

// ********** Begin Class UFrontendGameUserSettings Function GetSoundFXVolume **********************
struct Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics
{
	struct FrontendGameUserSettings_eventGetSoundFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventGetSoundFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "GetSoundFXVolume", Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FrontendGameUserSettings_eventGetSoundFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FrontendGameUserSettings_eventGetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execGetSoundFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoundFXVolume();
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function GetSoundFXVolume ************************

// ********** Begin Class UFrontendGameUserSettings Function SetCurrentGameDifficulty **************
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics
{
	struct FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms
	{
		FString InNewDifficulty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewDifficulty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNewDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::NewProp_InNewDifficulty = { "InNewDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms, InNewDifficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewDifficulty_MetaData), NewProp_InNewDifficulty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::NewProp_InNewDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetCurrentGameDifficulty", Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FrontendGameUserSettings_eventSetCurrentGameDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetCurrentGameDifficulty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNewDifficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentGameDifficulty(Z_Param_InNewDifficulty);
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function SetCurrentGameDifficulty ****************

// ********** Begin Class UFrontendGameUserSettings Function SetMusicVolume ************************
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics
{
	struct FrontendGameUserSettings_eventSetMusicVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetMusicVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetMusicVolume", Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FrontendGameUserSettings_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FrontendGameUserSettings_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function SetMusicVolume **************************

// ********** Begin Class UFrontendGameUserSettings Function SetOverallVolume **********************
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics
{
	struct FrontendGameUserSettings_eventSetOverallVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetOverallVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetOverallVolume", Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FrontendGameUserSettings_eventSetOverallVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FrontendGameUserSettings_eventSetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetOverallVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function SetOverallVolume ************************

// ********** Begin Class UFrontendGameUserSettings Function SetSoundFXVolume **********************
struct Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics
{
	struct FrontendGameUserSettings_eventSetSoundFXVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendGameUserSettings_eventSetSoundFXVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendGameUserSettings, nullptr, "SetSoundFXVolume", Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FrontendGameUserSettings_eventSetSoundFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FrontendGameUserSettings_eventSetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendGameUserSettings::execSetSoundFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundFXVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class UFrontendGameUserSettings Function SetSoundFXVolume ************************

// ********** Begin Class UFrontendGameUserSettings ************************************************
void UFrontendGameUserSettings::StaticRegisterNativesUFrontendGameUserSettings()
{
	UClass* Class = UFrontendGameUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentGameDifficulty", &UFrontendGameUserSettings::execGetCurrentGameDifficulty },
		{ "GetMusicVolume", &UFrontendGameUserSettings::execGetMusicVolume },
		{ "GetOverallVolume", &UFrontendGameUserSettings::execGetOverallVolume },
		{ "GetSoundFXVolume", &UFrontendGameUserSettings::execGetSoundFXVolume },
		{ "SetCurrentGameDifficulty", &UFrontendGameUserSettings::execSetCurrentGameDifficulty },
		{ "SetMusicVolume", &UFrontendGameUserSettings::execSetMusicVolume },
		{ "SetOverallVolume", &UFrontendGameUserSettings::execSetOverallVolume },
		{ "SetSoundFXVolume", &UFrontendGameUserSettings::execSetSoundFXVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendGameUserSettings;
UClass* UFrontendGameUserSettings::GetPrivateStaticClass()
{
	using TClass = UFrontendGameUserSettings;
	if (!Z_Registration_Info_UClass_UFrontendGameUserSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendGameUserSettings"),
			Z_Registration_Info_UClass_UFrontendGameUserSettings.InnerSingleton,
			StaticRegisterNativesUFrontendGameUserSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFrontendGameUserSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendGameUserSettings_NoRegister()
{
	return UFrontendGameUserSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FrontendSettings/FrontendGameUserSettings.h" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameDifficulty_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentGameDifficulty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundFXVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetCurrentGameDifficulty, "GetCurrentGameDifficulty" }, // 3349195548
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetMusicVolume, "GetMusicVolume" }, // 753866146
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetOverallVolume, "GetOverallVolume" }, // 2444868058
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_GetSoundFXVolume, "GetSoundFXVolume" }, // 458251907
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetCurrentGameDifficulty, "SetCurrentGameDifficulty" }, // 1119434494
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetMusicVolume, "SetMusicVolume" }, // 447121628
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetOverallVolume, "SetOverallVolume" }, // 1321045787
		{ &Z_Construct_UFunction_UFrontendGameUserSettings_SetSoundFXVolume, "SetSoundFXVolume" }, // 2985861323
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentGameDifficulty = { "CurrentGameDifficulty", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, CurrentGameDifficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameDifficulty_MetaData), NewProp_CurrentGameDifficulty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_OverallVolume = { "OverallVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, OverallVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolume_MetaData), NewProp_OverallVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_SoundFXVolume = { "SoundFXVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, SoundFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolume_MetaData), NewProp_SoundFXVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentGameDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_OverallVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_SoundFXVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::ClassParams = {
	&UFrontendGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendGameUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UFrontendGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendGameUserSettings.OuterSingleton, Z_Construct_UClass_UFrontendGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendGameUserSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendGameUserSettings);
UFrontendGameUserSettings::~UFrontendGameUserSettings() {}
// ********** End Class UFrontendGameUserSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendGameUserSettings, UFrontendGameUserSettings::StaticClass, TEXT("UFrontendGameUserSettings"), &Z_Registration_Info_UClass_UFrontendGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendGameUserSettings), 2042461143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_422875566(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
