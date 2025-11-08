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

// ********** Begin Class UFrontendGameUserSettings ************************************************
void UFrontendGameUserSettings::StaticRegisterNativesUFrontendGameUserSettings()
{
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentGameDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentGameDifficulty = { "CurrentGameDifficulty", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendGameUserSettings, CurrentGameDifficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameDifficulty_MetaData), NewProp_CurrentGameDifficulty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendGameUserSettings_Statics::NewProp_CurrentGameDifficulty,
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
	nullptr,
	Z_Construct_UClass_UFrontendGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
UFrontendGameUserSettings::UFrontendGameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendGameUserSettings);
UFrontendGameUserSettings::~UFrontendGameUserSettings() {}
// ********** End Class UFrontendGameUserSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendGameUserSettings, UFrontendGameUserSettings::StaticClass, TEXT("UFrontendGameUserSettings"), &Z_Registration_Info_UClass_UFrontendGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendGameUserSettings), 4089984910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_786730440(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendGameUserSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
