// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Components/FrontendCommonButtonBase.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendCommonButtonBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendCommonButtonBase Function GetButtonDisplayText ******************
struct Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics
{
	struct FrontendCommonButtonBase_eventGetButtonDisplayText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendCommonButtonBase_eventGetButtonDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendCommonButtonBase, nullptr, "GetButtonDisplayText", Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::FrontendCommonButtonBase_eventGetButtonDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::FrontendCommonButtonBase_eventGetButtonDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendCommonButtonBase::execGetButtonDisplayText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetButtonDisplayText();
	P_NATIVE_END;
}
// ********** End Class UFrontendCommonButtonBase Function GetButtonDisplayText ********************

// ********** Begin Class UFrontendCommonButtonBase Function SetButtonDisplayImage *****************
struct Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics
{
	struct FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms
	{
		FSlateBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonButtonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendCommonButtonBase, nullptr, "SetButtonDisplayImage", Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FrontendCommonButtonBase_eventSetButtonDisplayImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendCommonButtonBase::execSetButtonDisplayImage)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonDisplayImage(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// ********** End Class UFrontendCommonButtonBase Function SetButtonDisplayImage *******************

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
		{ "GetButtonDisplayText", &UFrontendCommonButtonBase::execGetButtonDisplayText },
		{ "SetButtonDisplayImage", &UFrontendCommonButtonBase::execSetButtonDisplayImage },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonLazyImage_ButtonImage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidgetOptional", "" },
		{ "Category", "FrontendCommonButtonBase" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonLazyImage_ButtonImage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDisplayText;
	static void NewProp_bUseUpperCaseForButtonText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUpperCaseForButtonText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonDescriptionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_GetButtonDisplayText, "GetButtonDisplayText" }, // 3884191940
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonDisplayImage, "SetButtonDisplayImage" }, // 1999850034
		{ &Z_Construct_UFunction_UFrontendCommonButtonBase_SetButtonText, "SetButtonText" }, // 2500916970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonButtonBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonTextBlock_ButtonText = { "CommonTextBlock_ButtonText", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, CommonTextBlock_ButtonText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_ButtonText_MetaData), NewProp_CommonTextBlock_ButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonLazyImage_ButtonImage = { "CommonLazyImage_ButtonImage", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, CommonLazyImage_ButtonImage), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonLazyImage_ButtonImage_MetaData), NewProp_CommonLazyImage_ButtonImage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDisplayText = { "ButtonDisplayText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonDisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDisplayText_MetaData), NewProp_ButtonDisplayText_MetaData) };
void Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText_SetBit(void* Obj)
{
	((UFrontendCommonButtonBase*)Obj)->bUseUpperCaseForButtonText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText = { "bUseUpperCaseForButtonText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFrontendCommonButtonBase), &Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_bUseUpperCaseForButtonText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUpperCaseForButtonText_MetaData), NewProp_bUseUpperCaseForButtonText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_ButtonDescriptionText = { "ButtonDescriptionText", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonButtonBase, ButtonDescriptionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonDescriptionText_MetaData), NewProp_ButtonDescriptionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendCommonButtonBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonTextBlock_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonButtonBase_Statics::NewProp_CommonLazyImage_ButtonImage,
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
		{ Z_Construct_UClass_UFrontendCommonButtonBase, UFrontendCommonButtonBase::StaticClass, TEXT("UFrontendCommonButtonBase"), &Z_Registration_Info_UClass_UFrontendCommonButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonButtonBase), 2090349857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_3529049105(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonButtonBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
