// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/FrontendLoadingScreenSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendLoadingScreenSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendLoadingScreenSubsystem ******************************************
void UFrontendLoadingScreenSubsystem::StaticRegisterNativesUFrontendLoadingScreenSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem;
UClass* UFrontendLoadingScreenSubsystem::GetPrivateStaticClass()
{
	using TClass = UFrontendLoadingScreenSubsystem;
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendLoadingScreenSubsystem"),
			Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.InnerSingleton,
			StaticRegisterNativesUFrontendLoadingScreenSubsystem,
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
	return Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem_NoRegister()
{
	return UFrontendLoadingScreenSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/FrontendLoadingScreenSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/FrontendLoadingScreenSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendLoadingScreenSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::ClassParams = {
	&UFrontendLoadingScreenSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendLoadingScreenSubsystem()
{
	if (!Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.OuterSingleton, Z_Construct_UClass_UFrontendLoadingScreenSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem.OuterSingleton;
}
UFrontendLoadingScreenSubsystem::UFrontendLoadingScreenSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendLoadingScreenSubsystem);
UFrontendLoadingScreenSubsystem::~UFrontendLoadingScreenSubsystem() {}
// ********** End Class UFrontendLoadingScreenSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendLoadingScreenSubsystem, UFrontendLoadingScreenSubsystem::StaticClass, TEXT("UFrontendLoadingScreenSubsystem"), &Z_Registration_Info_UClass_UFrontendLoadingScreenSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendLoadingScreenSubsystem), 398257808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_1053678810(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendLoadingScreenSubsystem_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
