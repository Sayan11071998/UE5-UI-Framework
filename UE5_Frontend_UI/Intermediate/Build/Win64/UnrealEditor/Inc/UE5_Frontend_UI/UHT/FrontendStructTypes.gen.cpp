// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendTypes/FrontendStructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendStructTypes() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UScriptStruct* Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOptionsDataEditConditionDescriptor *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor;
class UScriptStruct* FOptionsDataEditConditionDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor, (UObject*)Z_Construct_UPackage__Script_UE5_Frontend_UI(), TEXT("OptionsDataEditConditionDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FrontendTypes/FrontendStructTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionsDataEditConditionDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
	nullptr,
	&NewStructOps,
	"OptionsDataEditConditionDescriptor",
	nullptr,
	0,
	sizeof(FOptionsDataEditConditionDescriptor),
	alignof(FOptionsDataEditConditionDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor.InnerSingleton;
}
// ********** End ScriptStruct FOptionsDataEditConditionDescriptor *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendStructTypes_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptionsDataEditConditionDescriptor::StaticStruct, Z_Construct_UScriptStruct_FOptionsDataEditConditionDescriptor_Statics::NewStructOps, TEXT("OptionsDataEditConditionDescriptor"), &Z_Registration_Info_UScriptStruct_FOptionsDataEditConditionDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionsDataEditConditionDescriptor), 2917203478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendStructTypes_h__Script_UE5_Frontend_UI_337147239(TEXT("/Script/UE5_Frontend_UI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendStructTypes_h__Script_UE5_Frontend_UI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendStructTypes_h__Script_UE5_Frontend_UI_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
