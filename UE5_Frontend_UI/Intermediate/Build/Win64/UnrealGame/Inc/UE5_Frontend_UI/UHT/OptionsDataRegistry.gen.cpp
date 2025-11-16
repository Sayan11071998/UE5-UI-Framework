// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/OptionsDataRegistry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOptionsDataRegistry() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Collection_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UOptionsDataRegistry();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UOptionsDataRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOptionsDataRegistry *****************************************************
void UOptionsDataRegistry::StaticRegisterNativesUOptionsDataRegistry()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOptionsDataRegistry;
UClass* UOptionsDataRegistry::GetPrivateStaticClass()
{
	using TClass = UOptionsDataRegistry;
	if (!Z_Registration_Info_UClass_UOptionsDataRegistry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OptionsDataRegistry"),
			Z_Registration_Info_UClass_UOptionsDataRegistry.InnerSingleton,
			StaticRegisterNativesUOptionsDataRegistry,
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
	return Z_Registration_Info_UClass_UOptionsDataRegistry.InnerSingleton;
}
UClass* Z_Construct_UClass_UOptionsDataRegistry_NoRegister()
{
	return UOptionsDataRegistry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOptionsDataRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/OptionsDataRegistry.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDataRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredOptionsTabCollections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/OptionsDataRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredOptionsTabCollections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredOptionsTabCollections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsDataRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsDataRegistry_Statics::NewProp_RegisteredOptionsTabCollections_Inner = { "RegisteredOptionsTabCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UListDataObject_Collection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptionsDataRegistry_Statics::NewProp_RegisteredOptionsTabCollections = { "RegisteredOptionsTabCollections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsDataRegistry, RegisteredOptionsTabCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredOptionsTabCollections_MetaData), NewProp_RegisteredOptionsTabCollections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionsDataRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDataRegistry_Statics::NewProp_RegisteredOptionsTabCollections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsDataRegistry_Statics::NewProp_RegisteredOptionsTabCollections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDataRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionsDataRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDataRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionsDataRegistry_Statics::ClassParams = {
	&UOptionsDataRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptionsDataRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDataRegistry_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsDataRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionsDataRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionsDataRegistry()
{
	if (!Z_Registration_Info_UClass_UOptionsDataRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionsDataRegistry.OuterSingleton, Z_Construct_UClass_UOptionsDataRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionsDataRegistry.OuterSingleton;
}
UOptionsDataRegistry::UOptionsDataRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsDataRegistry);
UOptionsDataRegistry::~UOptionsDataRegistry() {}
// ********** End Class UOptionsDataRegistry *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_OptionsDataRegistry_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionsDataRegistry, UOptionsDataRegistry::StaticClass, TEXT("UOptionsDataRegistry"), &Z_Registration_Info_UClass_UOptionsDataRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionsDataRegistry), 2011010677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_OptionsDataRegistry_h__Script_UE5_Frontend_UI_100605930(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_OptionsDataRegistry_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_OptionsDataRegistry_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
