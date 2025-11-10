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
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonListView_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UOptionsDataRegistry_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsDetailsView_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsScreen();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_OptionsScreen_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_OptionsScreen Function OnOptionsTabSelected **********************
struct Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics
{
	struct Widget_OptionsScreen_eventOnOptionsTabSelected_Parms
	{
		FName TabID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TabID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_OptionsScreen_eventOnOptionsTabSelected_Parms, TabID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::NewProp_TabID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidget_OptionsScreen, nullptr, "OnOptionsTabSelected", Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::Widget_OptionsScreen_eventOnOptionsTabSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::Widget_OptionsScreen_eventOnOptionsTabSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget_OptionsScreen::execOnOptionsTabSelected)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TabID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOptionsTabSelected(Z_Param_TabID);
	P_NATIVE_END;
}
// ********** End Class UWidget_OptionsScreen Function OnOptionsTabSelected ************************

// ********** Begin Class UWidget_OptionsScreen ****************************************************
void UWidget_OptionsScreen::StaticRegisterNativesUWidget_OptionsScreen()
{
	UClass* Class = UWidget_OptionsScreen::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOptionsTabSelected", &UWidget_OptionsScreen::execOnOptionsTabSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedOwningDataRegistry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabListWidget_OptionsTabs_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonListView_OptionsList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailsView_ListEntryInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/Widget_OptionsScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResetAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedOwningDataRegistry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TabListWidget_OptionsTabs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonListView_OptionsList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetailsView_ListEntryInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_OptionsScreen_OnOptionsTabSelected, "OnOptionsTabSelected" }, // 2860864959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_OptionsScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_ResetAction = { "ResetAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsScreen, ResetAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetAction_MetaData), NewProp_ResetAction_MetaData) }; // 4101738896
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_CreatedOwningDataRegistry = { "CreatedOwningDataRegistry", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsScreen, CreatedOwningDataRegistry), Z_Construct_UClass_UOptionsDataRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedOwningDataRegistry_MetaData), NewProp_CreatedOwningDataRegistry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_TabListWidget_OptionsTabs = { "TabListWidget_OptionsTabs", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsScreen, TabListWidget_OptionsTabs), Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabListWidget_OptionsTabs_MetaData), NewProp_TabListWidget_OptionsTabs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_CommonListView_OptionsList = { "CommonListView_OptionsList", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsScreen, CommonListView_OptionsList), Z_Construct_UClass_UFrontendCommonListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonListView_OptionsList_MetaData), NewProp_CommonListView_OptionsList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_DetailsView_ListEntryInfo = { "DetailsView_ListEntryInfo", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_OptionsScreen, DetailsView_ListEntryInfo), Z_Construct_UClass_UWidget_OptionsDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailsView_ListEntryInfo_MetaData), NewProp_DetailsView_ListEntryInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_OptionsScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_ResetAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_CreatedOwningDataRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_TabListWidget_OptionsTabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_CommonListView_OptionsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_OptionsScreen_Statics::NewProp_DetailsView_ListEntryInfo,
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
	FuncInfo,
	Z_Construct_UClass_UWidget_OptionsScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UWidget_OptionsScreen, UWidget_OptionsScreen::StaticClass, TEXT("UWidget_OptionsScreen"), &Z_Registration_Info_UClass_UWidget_OptionsScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_OptionsScreen), 232792569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_1096268039(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_Widget_OptionsScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
