// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Widget_ConfirmScreen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ConfirmScreen() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ConfirmScreen();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ConfirmScreen_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ConfirmScreen ****************************************************
void UWidget_ConfirmScreen::StaticRegisterNativesUWidget_ConfirmScreen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ConfirmScreen;
UClass* UWidget_ConfirmScreen::GetPrivateStaticClass()
{
	using TClass = UWidget_ConfirmScreen;
	if (!Z_Registration_Info_UClass_UWidget_ConfirmScreen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ConfirmScreen"),
			Z_Registration_Info_UClass_UWidget_ConfirmScreen.InnerSingleton,
			StaticRegisterNativesUWidget_ConfirmScreen,
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
	return Z_Registration_Info_UClass_UWidget_ConfirmScreen.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ConfirmScreen_NoRegister()
{
	return UWidget_ConfirmScreen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ConfirmScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Widget_ConfirmScreen.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEntryBox_Buttons_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicEntryBox_Buttons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ConfirmScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Title = { "CommonTextBlock_Title", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ConfirmScreen, CommonTextBlock_Title), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Title_MetaData), NewProp_CommonTextBlock_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Message = { "CommonTextBlock_Message", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ConfirmScreen, CommonTextBlock_Message), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Message_MetaData), NewProp_CommonTextBlock_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_DynamicEntryBox_Buttons = { "DynamicEntryBox_Buttons", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ConfirmScreen, DynamicEntryBox_Buttons), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicEntryBox_Buttons_MetaData), NewProp_DynamicEntryBox_Buttons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_DynamicEntryBox_Buttons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_ConfirmScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ActivatableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::ClassParams = {
	&UWidget_ConfirmScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ConfirmScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ConfirmScreen()
{
	if (!Z_Registration_Info_UClass_UWidget_ConfirmScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ConfirmScreen.OuterSingleton, Z_Construct_UClass_UWidget_ConfirmScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ConfirmScreen.OuterSingleton;
}
UWidget_ConfirmScreen::UWidget_ConfirmScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ConfirmScreen);
UWidget_ConfirmScreen::~UWidget_ConfirmScreen() {}
// ********** End Class UWidget_ConfirmScreen ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ConfirmScreen, UWidget_ConfirmScreen::StaticClass, TEXT("UWidget_ConfirmScreen"), &Z_Registration_Info_UClass_UWidget_ConfirmScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ConfirmScreen), 1113033568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_2616750053(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
