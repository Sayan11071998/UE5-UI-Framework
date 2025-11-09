// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/ListEntries/Widget_ListEntry_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ListEntry_Base() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ListEntry_Base Function BP_OnListEntryWidgetHovered **************
struct Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms
{
	bool bWasHovered;
	bool bIsEntryWidgetStillSelected;
};
static FName NAME_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered = FName(TEXT("BP_OnListEntryWidgetHovered"));
void UWidget_ListEntry_Base::BP_OnListEntryWidgetHovered(bool bWasHovered, bool bIsEntryWidgetStillSelected)
{
	Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms Parms;
	Parms.bWasHovered=bWasHovered ? true : false;
	Parms.bIsEntryWidgetStillSelected=bIsEntryWidgetStillSelected ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On List Entry Widget Hovered" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Base.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasHovered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasHovered;
	static void NewProp_bIsEntryWidgetStillSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEntryWidgetStillSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bWasHovered_SetBit(void* Obj)
{
	((Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms*)Obj)->bWasHovered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bWasHovered = { "bWasHovered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms), &Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bWasHovered_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bIsEntryWidgetStillSelected_SetBit(void* Obj)
{
	((Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms*)Obj)->bIsEntryWidgetStillSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bIsEntryWidgetStillSelected = { "bIsEntryWidgetStillSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms), &Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bIsEntryWidgetStillSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bWasHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::NewProp_bIsEntryWidgetStillSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidget_ListEntry_Base, nullptr, "BP_OnListEntryWidgetHovered", Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::PropPointers), sizeof(Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Widget_ListEntry_Base_eventBP_OnListEntryWidgetHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UWidget_ListEntry_Base Function BP_OnListEntryWidgetHovered ****************

// ********** Begin Class UWidget_ListEntry_Base ***************************************************
void UWidget_ListEntry_Base::StaticRegisterNativesUWidget_ListEntry_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ListEntry_Base;
UClass* UWidget_ListEntry_Base::GetPrivateStaticClass()
{
	using TClass = UWidget_ListEntry_Base;
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ListEntry_Base"),
			Z_Registration_Info_UClass_UWidget_ListEntry_Base.InnerSingleton,
			StaticRegisterNativesUWidget_ListEntry_Base,
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
	return Z_Registration_Info_UClass_UWidget_ListEntry_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister()
{
	return UWidget_ListEntry_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ListEntry_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Options/ListEntries/Widget_ListEntry_Base.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonText_SettingDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidgetOptional", "" },
		{ "Category", "Widget_ListEntry_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Options/ListEntries/Widget_ListEntry_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonText_SettingDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_ListEntry_Base_BP_OnListEntryWidgetHovered, "BP_OnListEntryWidgetHovered" }, // 433502670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ListEntry_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ListEntry_Base_Statics::NewProp_CommonText_SettingDisplayName = { "CommonText_SettingDisplayName", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ListEntry_Base, CommonText_SettingDisplayName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonText_SettingDisplayName_MetaData), NewProp_CommonText_SettingDisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_ListEntry_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ListEntry_Base_Statics::NewProp_CommonText_SettingDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_ListEntry_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWidget_ListEntry_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UWidget_ListEntry_Base, IUserObjectListEntry), false },  // 1900202470
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ListEntry_Base_Statics::ClassParams = {
	&UWidget_ListEntry_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidget_ListEntry_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ListEntry_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ListEntry_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ListEntry_Base()
{
	if (!Z_Registration_Info_UClass_UWidget_ListEntry_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ListEntry_Base.OuterSingleton, Z_Construct_UClass_UWidget_ListEntry_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ListEntry_Base.OuterSingleton;
}
UWidget_ListEntry_Base::UWidget_ListEntry_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ListEntry_Base);
UWidget_ListEntry_Base::~UWidget_ListEntry_Base() {}
// ********** End Class UWidget_ListEntry_Base *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ListEntry_Base, UWidget_ListEntry_Base::StaticClass, TEXT("UWidget_ListEntry_Base"), &Z_Registration_Info_UClass_UWidget_ListEntry_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ListEntry_Base), 4178534376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h__Script_UE5_Frontend_UI_1138904468(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
