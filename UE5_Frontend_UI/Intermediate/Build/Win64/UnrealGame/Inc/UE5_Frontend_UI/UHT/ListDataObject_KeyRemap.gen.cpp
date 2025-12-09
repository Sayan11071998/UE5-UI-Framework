// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_KeyRemap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_KeyRemap() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_KeyRemap();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_KeyRemap_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_KeyRemap *************************************************
void UListDataObject_KeyRemap::StaticRegisterNativesUListDataObject_KeyRemap()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_KeyRemap;
UClass* UListDataObject_KeyRemap::GetPrivateStaticClass()
{
	using TClass = UListDataObject_KeyRemap;
	if (!Z_Registration_Info_UClass_UListDataObject_KeyRemap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_KeyRemap"),
			Z_Registration_Info_UClass_UListDataObject_KeyRemap.InnerSingleton,
			StaticRegisterNativesUListDataObject_KeyRemap,
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
	return Z_Registration_Info_UClass_UListDataObject_KeyRemap.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_KeyRemap_NoRegister()
{
	return UListDataObject_KeyRemap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_KeyRemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_KeyRemap.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_KeyRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningInputUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_KeyRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningKeyProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_KeyRemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwningInputUserSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwningKeyProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_KeyRemap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UListDataObject_KeyRemap_Statics::NewProp_CachedOwningInputUserSettings = { "CachedOwningInputUserSettings", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListDataObject_KeyRemap, CachedOwningInputUserSettings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningInputUserSettings_MetaData), NewProp_CachedOwningInputUserSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UListDataObject_KeyRemap_Statics::NewProp_CachedOwningKeyProfile = { "CachedOwningKeyProfile", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListDataObject_KeyRemap, CachedOwningKeyProfile), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningKeyProfile_MetaData), NewProp_CachedOwningKeyProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListDataObject_KeyRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListDataObject_KeyRemap_Statics::NewProp_CachedOwningInputUserSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListDataObject_KeyRemap_Statics::NewProp_CachedOwningKeyProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_KeyRemap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UListDataObject_KeyRemap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_KeyRemap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_KeyRemap_Statics::ClassParams = {
	&UListDataObject_KeyRemap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UListDataObject_KeyRemap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_KeyRemap_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_KeyRemap_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_KeyRemap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_KeyRemap()
{
	if (!Z_Registration_Info_UClass_UListDataObject_KeyRemap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_KeyRemap.OuterSingleton, Z_Construct_UClass_UListDataObject_KeyRemap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_KeyRemap.OuterSingleton;
}
UListDataObject_KeyRemap::UListDataObject_KeyRemap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_KeyRemap);
UListDataObject_KeyRemap::~UListDataObject_KeyRemap() {}
// ********** End Class UListDataObject_KeyRemap ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_KeyRemap_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_KeyRemap, UListDataObject_KeyRemap::StaticClass, TEXT("UListDataObject_KeyRemap"), &Z_Registration_Info_UClass_UListDataObject_KeyRemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_KeyRemap), 3994251402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_KeyRemap_h__Script_UE5_Frontend_UI_3718533393(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_KeyRemap_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_KeyRemap_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
