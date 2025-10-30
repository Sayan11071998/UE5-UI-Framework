// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendSettings/FrontendDeveloperSettings.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendDeveloperSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendDeveloperSettings();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendDeveloperSettings ***********************************************
void UFrontendDeveloperSettings::StaticRegisterNativesUFrontendDeveloperSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendDeveloperSettings;
UClass* UFrontendDeveloperSettings::GetPrivateStaticClass()
{
	using TClass = UFrontendDeveloperSettings;
	if (!Z_Registration_Info_UClass_UFrontendDeveloperSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendDeveloperSettings"),
			Z_Registration_Info_UClass_UFrontendDeveloperSettings.InnerSingleton,
			StaticRegisterNativesUFrontendDeveloperSettings,
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
	return Z_Registration_Info_UClass_UFrontendDeveloperSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister()
{
	return UFrontendDeveloperSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Frontend UI Settings" },
		{ "IncludePath", "FrontendSettings/FrontendDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontendWidgetMap_MetaData[] = {
		{ "Categories", "Frontend.Widget" },
		{ "Category", "Widget Reference" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/FrontendSettings/FrontendDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FrontendWidgetMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrontendWidgetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FrontendWidgetMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_ValueProp = { "FrontendWidgetMap", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWidget_ActivatableBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_Key_KeyProp = { "FrontendWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap = { "FrontendWidgetMap", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendDeveloperSettings, FrontendWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontendWidgetMap_MetaData), NewProp_FrontendWidgetMap_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendDeveloperSettings_Statics::NewProp_FrontendWidgetMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendDeveloperSettings_Statics::ClassParams = {
	&UFrontendDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UFrontendDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendDeveloperSettings.OuterSingleton, Z_Construct_UClass_UFrontendDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendDeveloperSettings.OuterSingleton;
}
UFrontendDeveloperSettings::UFrontendDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendDeveloperSettings);
UFrontendDeveloperSettings::~UFrontendDeveloperSettings() {}
// ********** End Class UFrontendDeveloperSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendDeveloperSettings, UFrontendDeveloperSettings::StaticClass, TEXT("UFrontendDeveloperSettings"), &Z_Registration_Info_UClass_UFrontendDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendDeveloperSettings), 2201072055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h__Script_UE5_Frontend_UI_2536804336(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
