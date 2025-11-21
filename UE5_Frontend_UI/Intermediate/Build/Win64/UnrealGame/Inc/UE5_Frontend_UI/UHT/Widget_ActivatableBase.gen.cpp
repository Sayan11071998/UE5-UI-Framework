// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Widget_ActivatableBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ActivatableBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ActivatableBase Function GetOwningFrontendPlayerController *******
struct Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics
{
	struct Widget_ActivatableBase_eventGetOwningFrontendPlayerController_Parms
	{
		AFrontendPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Widget_ActivatableBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_ActivatableBase_eventGetOwningFrontendPlayerController_Parms, ReturnValue), Z_Construct_UClass_AFrontendPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidget_ActivatableBase, nullptr, "GetOwningFrontendPlayerController", Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::Widget_ActivatableBase_eventGetOwningFrontendPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::Widget_ActivatableBase_eventGetOwningFrontendPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget_ActivatableBase::execGetOwningFrontendPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AFrontendPlayerController**)Z_Param__Result=P_THIS->GetOwningFrontendPlayerController();
	P_NATIVE_END;
}
// ********** End Class UWidget_ActivatableBase Function GetOwningFrontendPlayerController *********

// ********** Begin Class UWidget_ActivatableBase **************************************************
void UWidget_ActivatableBase::StaticRegisterNativesUWidget_ActivatableBase()
{
	UClass* Class = UWidget_ActivatableBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningFrontendPlayerController", &UWidget_ActivatableBase::execGetOwningFrontendPlayerController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ActivatableBase;
UClass* UWidget_ActivatableBase::GetPrivateStaticClass()
{
	using TClass = UWidget_ActivatableBase;
	if (!Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ActivatableBase"),
			Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton,
			StaticRegisterNativesUWidget_ActivatableBase,
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
	return Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister()
{
	return UWidget_ActivatableBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ActivatableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Widget_ActivatableBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ActivatableBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_ActivatableBase_GetOwningFrontendPlayerController, "GetOwningFrontendPlayerController" }, // 3845387602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ActivatableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidget_ActivatableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ActivatableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ActivatableBase_Statics::ClassParams = {
	&UWidget_ActivatableBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ActivatableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ActivatableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ActivatableBase()
{
	if (!Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton, Z_Construct_UClass_UWidget_ActivatableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton;
}
UWidget_ActivatableBase::UWidget_ActivatableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ActivatableBase);
UWidget_ActivatableBase::~UWidget_ActivatableBase() {}
// ********** End Class UWidget_ActivatableBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ActivatableBase, UWidget_ActivatableBase::StaticClass, TEXT("UWidget_ActivatableBase"), &Z_Registration_Info_UClass_UWidget_ActivatableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ActivatableBase), 3472065837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_3369371986(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
