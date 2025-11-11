// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Components/FrontendCommonRotator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendCommonRotator() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonRotator();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonRotator_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendCommonRotator ***************************************************
void UFrontendCommonRotator::StaticRegisterNativesUFrontendCommonRotator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendCommonRotator;
UClass* UFrontendCommonRotator::GetPrivateStaticClass()
{
	using TClass = UFrontendCommonRotator;
	if (!Z_Registration_Info_UClass_UFrontendCommonRotator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendCommonRotator"),
			Z_Registration_Info_UClass_UFrontendCommonRotator.InnerSingleton,
			StaticRegisterNativesUFrontendCommonRotator,
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
	return Z_Registration_Info_UClass_UFrontendCommonRotator.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendCommonRotator_NoRegister()
{
	return UFrontendCommonRotator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendCommonRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Components/FrontendCommonRotator.h" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonRotator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonRotator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFrontendCommonRotator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonRotator,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonRotator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendCommonRotator_Statics::ClassParams = {
	&UFrontendCommonRotator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendCommonRotator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendCommonRotator()
{
	if (!Z_Registration_Info_UClass_UFrontendCommonRotator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendCommonRotator.OuterSingleton, Z_Construct_UClass_UFrontendCommonRotator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendCommonRotator.OuterSingleton;
}
UFrontendCommonRotator::UFrontendCommonRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendCommonRotator);
UFrontendCommonRotator::~UFrontendCommonRotator() {}
// ********** End Class UFrontendCommonRotator *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonRotator_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendCommonRotator, UFrontendCommonRotator::StaticClass, TEXT("UFrontendCommonRotator"), &Z_Registration_Info_UClass_UFrontendCommonRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonRotator), 1966264622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonRotator_h__Script_UE5_Frontend_UI_4027795134(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonRotator_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonRotator_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
