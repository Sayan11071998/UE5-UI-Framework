// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/Widget_OptionsDetailsView.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_OptionsDetailsView() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsDetailsView();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsDetailsView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_OptionsDetailsView ***********************************************
void UWidget_OptionsDetailsView::StaticRegisterNativesUWidget_OptionsDetailsView()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_OptionsDetailsView;
UClass* UWidget_OptionsDetailsView::GetPrivateStaticClass()
{
	using TClass = UWidget_OptionsDetailsView;
	if (!Z_Registration_Info_UClass_UWidget_OptionsDetailsView.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_OptionsDetailsView"),
			Z_Registration_Info_UClass_UWidget_OptionsDetailsView.InnerSingleton,
			StaticRegisterNativesUWidget_OptionsDetailsView,
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
	return Z_Registration_Info_UClass_UWidget_OptionsDetailsView.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_OptionsDetailsView_NoRegister()
{
	return UWidget_OptionsDetailsView::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_OptionsDetailsView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/Widget_OptionsDetailsView.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsDetailsView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsDetailsView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonLazyImage_DescriptionImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsDetailsView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonRichText_Description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsDetailsView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonRichText_DynamicDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsDetailsView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonRichText_DisabledReason_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsDetailsView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonLazyImage_DescriptionImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonRichText_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonRichText_DynamicDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonRichText_DisabledReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_OptionsDetailsView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonTextBlock_Title = { "CommonTextBlock_Title", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsDetailsView, CommonTextBlock_Title), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Title_MetaData), NewProp_CommonTextBlock_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonLazyImage_DescriptionImage = { "CommonLazyImage_DescriptionImage", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsDetailsView, CommonLazyImage_DescriptionImage), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonLazyImage_DescriptionImage_MetaData), NewProp_CommonLazyImage_DescriptionImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonRichText_Description = { "CommonRichText_Description", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsDetailsView, CommonRichText_Description), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonRichText_Description_MetaData), NewProp_CommonRichText_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonRichText_DynamicDetails = { "CommonRichText_DynamicDetails", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsDetailsView, CommonRichText_DynamicDetails), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonRichText_DynamicDetails_MetaData), NewProp_CommonRichText_DynamicDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonRichText_DisabledReason = { "CommonRichText_DisabledReason", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsDetailsView, CommonRichText_DisabledReason), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonRichText_DisabledReason_MetaData), NewProp_CommonRichText_DisabledReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonTextBlock_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonLazyImage_DescriptionImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonRichText_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonRichText_DynamicDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::NewProp_CommonRichText_DisabledReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::ClassParams = {
	&UWidget_OptionsDetailsView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_OptionsDetailsView()
{
	if (!Z_Registration_Info_UClass_UWidget_OptionsDetailsView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_OptionsDetailsView.OuterSingleton, Z_Construct_UClass_UWidget_OptionsDetailsView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_OptionsDetailsView.OuterSingleton;
}
UWidget_OptionsDetailsView::UWidget_OptionsDetailsView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_OptionsDetailsView);
UWidget_OptionsDetailsView::~UWidget_OptionsDetailsView() {}
// ********** End Class UWidget_OptionsDetailsView *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsDetailsView_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_OptionsDetailsView, UWidget_OptionsDetailsView::StaticClass, TEXT("UWidget_OptionsDetailsView"), &Z_Registration_Info_UClass_UWidget_OptionsDetailsView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_OptionsDetailsView), 1176781963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsDetailsView_h__Script_UE5_Frontend_UI_611887221(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsDetailsView_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsDetailsView_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
