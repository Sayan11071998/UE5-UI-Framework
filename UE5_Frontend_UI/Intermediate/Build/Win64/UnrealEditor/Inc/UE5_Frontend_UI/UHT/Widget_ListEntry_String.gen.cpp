// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/ListEntries/Widget_ListEntry_String.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ListEntry_String() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonRotator_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_String_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_String();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_String_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ListEntry_String *************************************************
void UWidget_ListEntry_String::StaticRegisterNativesUWidget_ListEntry_String()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ListEntry_String;
UClass* UWidget_ListEntry_String::GetPrivateStaticClass()
{
	using TClass = UWidget_ListEntry_String;
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_String.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ListEntry_String"),
			Z_Registration_Info_UClass_UWidget_ListEntry_String.InnerSingleton,
			StaticRegisterNativesUWidget_ListEntry_String,
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
	return Z_Registration_Info_UClass_UWidget_ListEntry_String.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ListEntry_String_NoRegister()
{
	return UWidget_ListEntry_String::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ListEntry_String_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/Widget_ListEntry_String.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonButton_PreviousOption_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_String" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonRotator_AvailableOptions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_String" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonButton_NextOption_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_String" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_String.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningStringDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_String.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonButton_PreviousOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonRotator_AvailableOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonButton_NextOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwningStringDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ListEntry_String>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CommonButton_PreviousOption = { "CommonButton_PreviousOption", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_String, CommonButton_PreviousOption), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonButton_PreviousOption_MetaData), NewProp_CommonButton_PreviousOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CommonRotator_AvailableOptions = { "CommonRotator_AvailableOptions", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_String, CommonRotator_AvailableOptions), Z_Construct_UClass_UFrontendCommonRotator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonRotator_AvailableOptions_MetaData), NewProp_CommonRotator_AvailableOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CommonButton_NextOption = { "CommonButton_NextOption", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_String, CommonButton_NextOption), Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonButton_NextOption_MetaData), NewProp_CommonButton_NextOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CachedOwningStringDataObject = { "CachedOwningStringDataObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_String, CachedOwningStringDataObject), Z_Construct_UClass_UListDataObject_String_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningStringDataObject_MetaData), NewProp_CachedOwningStringDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_ListEntry_String_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CommonButton_PreviousOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CommonRotator_AvailableOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CommonButton_NextOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_String_Statics::NewProp_CachedOwningStringDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_String_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_ListEntry_String_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ListEntry_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_String_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ListEntry_String_Statics::ClassParams = {
	&UWidget_ListEntry_String::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_ListEntry_String_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_String_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_String_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ListEntry_String_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ListEntry_String()
{
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_String.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ListEntry_String.OuterSingleton, Z_Construct_UClass_UWidget_ListEntry_String_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ListEntry_String.OuterSingleton;
}
UWidget_ListEntry_String::UWidget_ListEntry_String(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ListEntry_String);
UWidget_ListEntry_String::~UWidget_ListEntry_String() {}
// ********** End Class UWidget_ListEntry_String ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_String_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ListEntry_String, UWidget_ListEntry_String::StaticClass, TEXT("UWidget_ListEntry_String"), &Z_Registration_Info_UClass_UWidget_ListEntry_String, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ListEntry_String), 1409971133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_String_h__Script_UE5_Frontend_UI_3561005231(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_String_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_String_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
