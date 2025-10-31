// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Components/FrontendCommonButtonBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendCommonButtonBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendCommonButtonBase Function SetButtonText *************************
struct Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics
{
	struct FrontendCommonButtonBase_eventSetButtonText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendCommonButtonBase_eventSetButtonText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendCommonButtonBase, nullptr, "SetButtonText", Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FrontendCommonButtonBase_eventSetButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FrontendCommonButtonBase_eventSetButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendCommonButtonBase::execSetButtonText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText(Z_Param_InText);
	P_NATIVE_END;
}
// ********** End Class UFrontendCommonButtonBase Function SetButtonText ***************************

// ********** Begin Class UFrontendCommonButtonBase ************************************************
void UFrontendCommonButtonBase::StaticRegisterNativesUFrontendCommonButtonBase()
{
	UClass* Class = UFrontendCommonButtonBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetButtonText", &UFrontendCommonButtonBase::execSetButtonText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendCommonButtonBase;
UClass* UFrontendCommonButtonBase::GetPrivateStaticClass()
{
	using TClass = UFrontendCommonButtonBase;
	if (!Z_Registration_Info_UClass_UFrontendCommonButtonBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendCommonButtonBase"),
			Z_Registration_Info_UClass_UFrontendCommonButtonBase.InnerSingleton,
			StaticRegisterNativesUFrontendCommonButtonBase,
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
	return Z_Registration_Info_UClass_UFrontendCommonButtonBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister()
{
	return UFrontendCommonButtonBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendCommonButtonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Components/FrontendCommonButtonBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_ButtonText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Button" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUpperCaseForButtonText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Button" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonDescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Button" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_ButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDisplayText;
	static void NewProp_bUseUpperCaseForButtonText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUpperCaseForButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDescriptionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText, "SetButtonText" }, // 2500916970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonButtonBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonTextBlock_ButtonText = { "CommonTextBlock_ButtonText", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, CommonTextBlock_ButtonText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_ButtonText_MetaData), NewProp_CommonTextBlock_ButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDisplayText = { "ButtonDisplayText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonDisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDisplayText_MetaData), NewProp_ButtonDisplayText_MetaData) };
void Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText_SetBit(void* Obj)
{
	((UFrontendCommonButtonBase*)Obj)->bUseUpperCaseForButtonText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText = { "bUseUpperCaseForButtonText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendCommonButtonBase), &Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUpperCaseForButtonText_MetaData), NewProp_bUseUpperCaseForButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDescriptionText = { "ButtonDescriptionText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonDescriptionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDescriptionText_MetaData), NewProp_ButtonDescriptionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonTextBlock_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDisplayText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDescriptionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendCommonButtonBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::ClassParams = {
	&UFrontendCommonButtonBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendCommonButtonBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendCommonButtonBase()
{
	if (!Z_Registration_Info_UClass_UFrontendCommonButtonBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendCommonButtonBase.OuterSingleton, Z_Construct_UClass_UFrontendCommonButtonBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendCommonButtonBase.OuterSingleton;
}
UFrontendCommonButtonBase::UFrontendCommonButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendCommonButtonBase);
UFrontendCommonButtonBase::~UFrontendCommonButtonBase() {}
// ********** End Class UFrontendCommonButtonBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendCommonButtonBase, UFrontendCommonButtonBase::StaticClass, TEXT("UFrontendCommonButtonBase"), &Z_Registration_Info_UClass_UFrontendCommonButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonButtonBase), 1512898695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_1388337741(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
