// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ListEntry_Scalar() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonNumericTextBlock_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Scalar_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Scalar();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Scalar_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ListEntry_Scalar *************************************************
void UWidget_ListEntry_Scalar::StaticRegisterNativesUWidget_ListEntry_Scalar()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ListEntry_Scalar;
UClass* UWidget_ListEntry_Scalar::GetPrivateStaticClass()
{
	using TClass = UWidget_ListEntry_Scalar;
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_Scalar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ListEntry_Scalar"),
			Z_Registration_Info_UClass_UWidget_ListEntry_Scalar.InnerSingleton,
			StaticRegisterNativesUWidget_ListEntry_Scalar,
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
	return Z_Registration_Info_UClass_UWidget_ListEntry_Scalar.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ListEntry_Scalar_NoRegister()
{
	return UWidget_ListEntry_Scalar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonNumeric_SettingValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_Scalar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogSlider_SettingSlider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_ListEntry_Scalar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwningScalarDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonNumeric_SettingValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnalogSlider_SettingSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwningScalarDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ListEntry_Scalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::NewProp_CommonNumeric_SettingValue = { "CommonNumeric_SettingValue", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_Scalar, CommonNumeric_SettingValue), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonNumeric_SettingValue_MetaData), NewProp_CommonNumeric_SettingValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::NewProp_AnalogSlider_SettingSlider = { "AnalogSlider_SettingSlider", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_Scalar, AnalogSlider_SettingSlider), Z_Construct_UClass_UAnalogSlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogSlider_SettingSlider_MetaData), NewProp_AnalogSlider_SettingSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::NewProp_CachedOwningScalarDataObject = { "CachedOwningScalarDataObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_Scalar, CachedOwningScalarDataObject), Z_Construct_UClass_UListDataObject_Scalar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwningScalarDataObject_MetaData), NewProp_CachedOwningScalarDataObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::NewProp_CommonNumeric_SettingValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::NewProp_AnalogSlider_SettingSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::NewProp_CachedOwningScalarDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ListEntry_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::ClassParams = {
	&UWidget_ListEntry_Scalar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ListEntry_Scalar()
{
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_Scalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ListEntry_Scalar.OuterSingleton, Z_Construct_UClass_UWidget_ListEntry_Scalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ListEntry_Scalar.OuterSingleton;
}
UWidget_ListEntry_Scalar::UWidget_ListEntry_Scalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ListEntry_Scalar);
UWidget_ListEntry_Scalar::~UWidget_ListEntry_Scalar() {}
// ********** End Class UWidget_ListEntry_Scalar ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Scalar_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ListEntry_Scalar, UWidget_ListEntry_Scalar::StaticClass, TEXT("UWidget_ListEntry_Scalar"), &Z_Registration_Info_UClass_UWidget_ListEntry_Scalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ListEntry_Scalar), 2461034264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Scalar_h__Script_UE5_Frontend_UI_2146614328(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Scalar_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Scalar_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
