// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/FrontendLoadingScreenSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendLoadingScreenSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem_NoRegister();
UE5_FRONTEND_UI_API UFunction* Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLoadingReasonUpdatedDelegate ***************************************
struct Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics
{
	struct FrontendLoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms
	{
		FString CurrentLoadingReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/FrontendLoadingScreenSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadingReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentLoadingReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::NewProp_CurrentLoadingReason = { "CurrentLoadingReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendLoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms, CurrentLoadingReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLoadingReason_MetaData), NewProp_CurrentLoadingReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::NewProp_CurrentLoadingReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendLoadingScreenSubsystem, nullptr, "OnLoadingReasonUpdatedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::FrontendLoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::FrontendLoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UFrontendLoadingScreenSubsystem::FOnLoadingReasonUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoadingReasonUpdatedDelegate, const FString& CurrentLoadingReason)
{
	struct FrontendLoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms
	{
		FString CurrentLoadingReason;
	};
	FrontendLoadingScreenSubsystem_eventOnLoadingReasonUpdatedDelegate_Parms Parms;
	Parms.CurrentLoadingReason=CurrentLoadingReason;
	OnLoadingReasonUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLoadingReasonUpdatedDelegate *****************************************

// ********** Begin Class UFrontendLoadingScreenSubsystem ******************************************
void UFrontendLoadingScreenSubsystem::StaticRegisterNativesUFrontendLoadingScreenSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem;
UClass* UFrontendLoadingScreenSubsystem::GetPrivateStaticClass()
{
	using TClass = UFrontendLoadingScreenSubsystem;
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendLoadingScreenSubsystem"),
			Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.InnerSingleton,
			StaticRegisterNativesUFrontendLoadingScreenSubsystem,
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
	return Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem_NoRegister()
{
	return UFrontendLoadingScreenSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/FrontendLoadingScreenSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/FrontendLoadingScreenSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadingReasonUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/FrontendLoadingScreenSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadingReasonUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature, "OnLoadingReasonUpdatedDelegate__DelegateSignature" }, // 437408808
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendLoadingScreenSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::NewProp_OnLoadingReasonUpdated = { "OnLoadingReasonUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendLoadingScreenSubsystem, OnLoadingReasonUpdated), Z_Construct_UDelegateFunction_UFrontendLoadingScreenSubsystem_OnLoadingReasonUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadingReasonUpdated_MetaData), NewProp_OnLoadingReasonUpdated_MetaData) }; // 437408808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::NewProp_OnLoadingReasonUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::ClassParams = {
	&UFrontendLoadingScreenSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem()
{
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.OuterSingleton, Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.OuterSingleton;
}
UFrontendLoadingScreenSubsystem::UFrontendLoadingScreenSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendLoadingScreenSubsystem);
UFrontendLoadingScreenSubsystem::~UFrontendLoadingScreenSubsystem() {}
// ********** End Class UFrontendLoadingScreenSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendLoadingScreenSubsystem, UFrontendLoadingScreenSubsystem::StaticClass, TEXT("UFrontendLoadingScreenSubsystem"), &Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendLoadingScreenSubsystem), 460143366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_926351159(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
