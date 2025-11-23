// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/ListEntries/Widget_ListEntry_KeyRemap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ListEntry_KeyRemap() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_KeyRemap_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_KeyRemap();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_KeyRemap_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ListEntry_KeyRemap ***********************************************
void UWidget_ListEntry_KeyRemap::StaticRegisterNativesUWidget_ListEntry_KeyRemap()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap;
UClass* UWidget_ListEntry_KeyRemap::GetPrivateStaticClass()
{
	using TClass = UWidget_ListEntry_KeyRemap;
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ListEntry_KeyRemap"),
			Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap.InnerSingleton,
			StaticRegisterNativesUWidget_ListEntry_KeyRemap,
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
	return Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ListEntry_KeyRemap_NoRegister()
{
	return UWidget_ListEntry_KeyRemap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/Widget_ListEntry_KeyRemap.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_KeyRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonButtonBase_RemapKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_KeyRemap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_KeyRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonButtonBase_ResetKeyBinding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_KeyRemap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_KeyRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningKeyRemapDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_KeyRemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonButtonBase_RemapKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonButtonBase_ResetKeyBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwningKeyRemapDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ListEntry_KeyRemap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::NewProp_CommonButtonBase_RemapKey = { "CommonButtonBase_RemapKey", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_KeyRemap, CommonButtonBase_RemapKey), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonButtonBase_RemapKey_MetaData), NewProp_CommonButtonBase_RemapKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::NewProp_CommonButtonBase_ResetKeyBinding = { "CommonButtonBase_ResetKeyBinding", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_KeyRemap, CommonButtonBase_ResetKeyBinding), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonButtonBase_ResetKeyBinding_MetaData), NewProp_CommonButtonBase_ResetKeyBinding_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::NewProp_CachedOwningKeyRemapDataObject = { "CachedOwningKeyRemapDataObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_KeyRemap, CachedOwningKeyRemapDataObject), Z_Construct_UClass_UListDataObject_KeyRemap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningKeyRemapDataObject_MetaData), NewProp_CachedOwningKeyRemapDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::NewProp_CommonButtonBase_RemapKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::NewProp_CommonButtonBase_ResetKeyBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::NewProp_CachedOwningKeyRemapDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ListEntry_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::ClassParams = {
	&UWidget_ListEntry_KeyRemap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ListEntry_KeyRemap()
{
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap.OuterSingleton, Z_Construct_UClass_UWidget_ListEntry_KeyRemap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap.OuterSingleton;
}
UWidget_ListEntry_KeyRemap::UWidget_ListEntry_KeyRemap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ListEntry_KeyRemap);
UWidget_ListEntry_KeyRemap::~UWidget_ListEntry_KeyRemap() {}
// ********** End Class UWidget_ListEntry_KeyRemap *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_KeyRemap_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ListEntry_KeyRemap, UWidget_ListEntry_KeyRemap::StaticClass, TEXT("UWidget_ListEntry_KeyRemap"), &Z_Registration_Info_UClass_UWidget_ListEntry_KeyRemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ListEntry_KeyRemap), 1581079331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_KeyRemap_h__Script_UE5_Frontend_UI_1763897104(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_KeyRemap_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_KeyRemap_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
