// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/FrontendLoadingScreenInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendLoadingScreenInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenInterface();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UFrontendLoadingScreenInterface Function OnLoadingScreenActivated ****
void IFrontendLoadingScreenInterface::OnLoadingScreenActivated()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoadingScreenActivated instead.");
}
static FName NAME_UFrontendLoadingScreenInterface_OnLoadingScreenActivated = FName(TEXT("OnLoadingScreenActivated"));
void IFrontendLoadingScreenInterface::Execute_OnLoadingScreenActivated(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFrontendLoadingScreenInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UFrontendLoadingScreenInterface_OnLoadingScreenActivated);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IFrontendLoadingScreenInterface*)(O->GetNativeInterfaceAddress(UFrontendLoadingScreenInterface::StaticClass())))
	{
		I->OnLoadingScreenActivated_Implementation();
	}
}
struct Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/FrontendLoadingScreenInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendLoadingScreenInterface, nullptr, "OnLoadingScreenActivated", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFrontendLoadingScreenInterface::execOnLoadingScreenActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadingScreenActivated_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFrontendLoadingScreenInterface Function OnLoadingScreenActivated ******

// ********** Begin Interface UFrontendLoadingScreenInterface Function OnLoadingScreenDeactivated **
void IFrontendLoadingScreenInterface::OnLoadingScreenDeactivated()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoadingScreenDeactivated instead.");
}
static FName NAME_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated = FName(TEXT("OnLoadingScreenDeactivated"));
void IFrontendLoadingScreenInterface::Execute_OnLoadingScreenDeactivated(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFrontendLoadingScreenInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IFrontendLoadingScreenInterface*)(O->GetNativeInterfaceAddress(UFrontendLoadingScreenInterface::StaticClass())))
	{
		I->OnLoadingScreenDeactivated_Implementation();
	}
}
struct Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// virtual void OnLoadingScreenActivated_Implementation();\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/FrontendLoadingScreenInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void OnLoadingScreenActivated_Implementation();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendLoadingScreenInterface, nullptr, "OnLoadingScreenDeactivated", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFrontendLoadingScreenInterface::execOnLoadingScreenDeactivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadingScreenDeactivated_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFrontendLoadingScreenInterface Function OnLoadingScreenDeactivated ****

// ********** Begin Interface UFrontendLoadingScreenInterface **************************************
void UFrontendLoadingScreenInterface::StaticRegisterNativesUFrontendLoadingScreenInterface()
{
	UClass* Class = UFrontendLoadingScreenInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLoadingScreenActivated", &IFrontendLoadingScreenInterface::execOnLoadingScreenActivated },
		{ "OnLoadingScreenDeactivated", &IFrontendLoadingScreenInterface::execOnLoadingScreenDeactivated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendLoadingScreenInterface;
UClass* UFrontendLoadingScreenInterface::GetPrivateStaticClass()
{
	using TClass = UFrontendLoadingScreenInterface;
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendLoadingScreenInterface"),
			Z_Registration_Info_UClass_UFrontendLoadingScreenInterface.InnerSingleton,
			StaticRegisterNativesUFrontendLoadingScreenInterface,
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
	return Z_Registration_Info_UClass_UFrontendLoadingScreenInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendLoadingScreenInterface_NoRegister()
{
	return UFrontendLoadingScreenInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/FrontendLoadingScreenInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenActivated, "OnLoadingScreenActivated" }, // 1102809713
		{ &Z_Construct_UFunction_UFrontendLoadingScreenInterface_OnLoadingScreenDeactivated, "OnLoadingScreenDeactivated" }, // 4113141309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFrontendLoadingScreenInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics::ClassParams = {
	&UFrontendLoadingScreenInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendLoadingScreenInterface()
{
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendLoadingScreenInterface.OuterSingleton, Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendLoadingScreenInterface.OuterSingleton;
}
UFrontendLoadingScreenInterface::UFrontendLoadingScreenInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendLoadingScreenInterface);
// ********** End Interface UFrontendLoadingScreenInterface ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendLoadingScreenInterface, UFrontendLoadingScreenInterface::StaticClass, TEXT("UFrontendLoadingScreenInterface"), &Z_Registration_Info_UClass_UFrontendLoadingScreenInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendLoadingScreenInterface), 2966416796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h__Script_UE5_Frontend_UI_4181929035(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
