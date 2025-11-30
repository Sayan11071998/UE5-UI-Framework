// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/Widget_KeyRemapScreen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_KeyRemapScreen() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_KeyRemapScreen();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_KeyRemapScreen_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_KeyRemapScreen ***************************************************
void UWidget_KeyRemapScreen::StaticRegisterNativesUWidget_KeyRemapScreen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_KeyRemapScreen;
UClass* UWidget_KeyRemapScreen::GetPrivateStaticClass()
{
	using TClass = UWidget_KeyRemapScreen;
	if (!Z_Registration_Info_UClass_UWidget_KeyRemapScreen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_KeyRemapScreen"),
			Z_Registration_Info_UClass_UWidget_KeyRemapScreen.InnerSingleton,
			StaticRegisterNativesUWidget_KeyRemapScreen,
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
	return Z_Registration_Info_UClass_UWidget_KeyRemapScreen.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_KeyRemapScreen_NoRegister()
{
	return UWidget_KeyRemapScreen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_KeyRemapScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/Widget_KeyRemapScreen.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_KeyRemapScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonRichText_RemapMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_KeyRemapScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonRichText_RemapMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_KeyRemapScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::NewProp_CommonRichText_RemapMessage = { "CommonRichText_RemapMessage", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_KeyRemapScreen, CommonRichText_RemapMessage), Z_Construct_UClass_UCommonRichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonRichText_RemapMessage_MetaData), NewProp_CommonRichText_RemapMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::NewProp_CommonRichText_RemapMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ActivatableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::ClassParams = {
	&UWidget_KeyRemapScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_KeyRemapScreen()
{
	if (!Z_Registration_Info_UClass_UWidget_KeyRemapScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_KeyRemapScreen.OuterSingleton, Z_Construct_UClass_UWidget_KeyRemapScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_KeyRemapScreen.OuterSingleton;
}
UWidget_KeyRemapScreen::UWidget_KeyRemapScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_KeyRemapScreen);
UWidget_KeyRemapScreen::~UWidget_KeyRemapScreen() {}
// ********** End Class UWidget_KeyRemapScreen *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_KeyRemapScreen_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_KeyRemapScreen, UWidget_KeyRemapScreen::StaticClass, TEXT("UWidget_KeyRemapScreen"), &Z_Registration_Info_UClass_UWidget_KeyRemapScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_KeyRemapScreen), 2647771222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_KeyRemapScreen_h__Script_UE5_Frontend_UI_3896080309(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_KeyRemapScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_KeyRemapScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
