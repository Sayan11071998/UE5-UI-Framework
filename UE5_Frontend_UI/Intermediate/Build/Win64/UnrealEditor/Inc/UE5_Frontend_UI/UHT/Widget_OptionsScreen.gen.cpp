// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/Widget_OptionsScreen.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_OptionsScreen() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsScreen();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsScreen_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_OptionsScreen ****************************************************
void UWidget_OptionsScreen::StaticRegisterNativesUWidget_OptionsScreen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_OptionsScreen;
UClass* UWidget_OptionsScreen::GetPrivateStaticClass()
{
	using TClass = UWidget_OptionsScreen;
	if (!Z_Registration_Info_UClass_UWidget_OptionsScreen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_OptionsScreen"),
			Z_Registration_Info_UClass_UWidget_OptionsScreen.InnerSingleton,
			StaticRegisterNativesUWidget_OptionsScreen,
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
	return Z_Registration_Info_UClass_UWidget_OptionsScreen.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_OptionsScreen_NoRegister()
{
	return UWidget_OptionsScreen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_OptionsScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/Widget_OptionsScreen.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetAction_MetaData[] = {
		{ "Category", "Frotend Options Screen" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResetAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_OptionsScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_ResetAction = { "ResetAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsScreen, ResetAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetAction_MetaData), NewProp_ResetAction_MetaData) }; // 4101738896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_OptionsScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_ResetAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_OptionsScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ActivatableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::ClassParams = {
	&UWidget_OptionsScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_OptionsScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsScreen_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_OptionsScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_OptionsScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_OptionsScreen()
{
	if (!Z_Registration_Info_UClass_UWidget_OptionsScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_OptionsScreen.OuterSingleton, Z_Construct_UClass_UWidget_OptionsScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_OptionsScreen.OuterSingleton;
}
UWidget_OptionsScreen::UWidget_OptionsScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_OptionsScreen);
UWidget_OptionsScreen::~UWidget_OptionsScreen() {}
// ********** End Class UWidget_OptionsScreen ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_OptionsScreen, UWidget_OptionsScreen::StaticClass, TEXT("UWidget_OptionsScreen"), &Z_Registration_Info_UClass_UWidget_OptionsScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_OptionsScreen), 1479439274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_893506120(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
