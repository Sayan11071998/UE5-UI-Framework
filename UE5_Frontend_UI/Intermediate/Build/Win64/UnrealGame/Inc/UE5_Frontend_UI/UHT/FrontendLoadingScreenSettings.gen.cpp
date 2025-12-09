// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendSettings/FrontendLoadingScreenSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendLoadingScreenSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSettings();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSettings_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendLoadingScreenSettings *******************************************
void UFrontendLoadingScreenSettings::StaticRegisterNativesUFrontendLoadingScreenSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendLoadingScreenSettings;
UClass* UFrontendLoadingScreenSettings::GetPrivateStaticClass()
{
	using TClass = UFrontendLoadingScreenSettings;
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendLoadingScreenSettings"),
			Z_Registration_Info_UClass_UFrontendLoadingScreenSettings.InnerSingleton,
			StaticRegisterNativesUFrontendLoadingScreenSettings,
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
	return Z_Registration_Info_UClass_UFrontendLoadingScreenSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendLoadingScreenSettings_NoRegister()
{
	return UFrontendLoadingScreenSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FrontendSettings/FrontendLoadingScreenSettings.h" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendLoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLoadingScreenWidgetClass_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendLoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldLoadingScreenExtraSeconds_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendLoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoadingScreenInEditor_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendLoadingScreenSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftLoadingScreenWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldLoadingScreenExtraSeconds;
	static void NewProp_bShouldLoadingScreenInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoadingScreenInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendLoadingScreenSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_SoftLoadingScreenWidgetClass = { "SoftLoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendLoadingScreenSettings, SoftLoadingScreenWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLoadingScreenWidgetClass_MetaData), NewProp_SoftLoadingScreenWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenExtraSeconds = { "HoldLoadingScreenExtraSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendLoadingScreenSettings, HoldLoadingScreenExtraSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldLoadingScreenExtraSeconds_MetaData), NewProp_HoldLoadingScreenExtraSeconds_MetaData) };
void Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor_SetBit(void* Obj)
{
	((UFrontendLoadingScreenSettings*)Obj)->bShouldLoadingScreenInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor = { "bShouldLoadingScreenInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendLoadingScreenSettings), &Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLoadingScreenInEditor_MetaData), NewProp_bShouldLoadingScreenInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_SoftLoadingScreenWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenExtraSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::NewProp_bShouldLoadingScreenInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::ClassParams = {
	&UFrontendLoadingScreenSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendLoadingScreenSettings()
{
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendLoadingScreenSettings.OuterSingleton, Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendLoadingScreenSettings.OuterSingleton;
}
UFrontendLoadingScreenSettings::UFrontendLoadingScreenSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendLoadingScreenSettings);
UFrontendLoadingScreenSettings::~UFrontendLoadingScreenSettings() {}
// ********** End Class UFrontendLoadingScreenSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendLoadingScreenSettings, UFrontendLoadingScreenSettings::StaticClass, TEXT("UFrontendLoadingScreenSettings"), &Z_Registration_Info_UClass_UFrontendLoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendLoadingScreenSettings), 2789377746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h__Script_UE5_Frontend_UI_2333045604(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
