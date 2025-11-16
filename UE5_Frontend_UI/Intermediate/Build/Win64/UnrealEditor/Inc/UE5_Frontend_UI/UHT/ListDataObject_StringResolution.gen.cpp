// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_StringResolution.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_StringResolution() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_String();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_StringResolution();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_StringResolution_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_StringResolution *****************************************
void UListDataObject_StringResolution::StaticRegisterNativesUListDataObject_StringResolution()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_StringResolution;
UClass* UListDataObject_StringResolution::GetPrivateStaticClass()
{
	using TClass = UListDataObject_StringResolution;
	if (!Z_Registration_Info_UClass_UListDataObject_StringResolution.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_StringResolution"),
			Z_Registration_Info_UClass_UListDataObject_StringResolution.InnerSingleton,
			StaticRegisterNativesUListDataObject_StringResolution,
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
	return Z_Registration_Info_UClass_UListDataObject_StringResolution.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_StringResolution_NoRegister()
{
	return UListDataObject_StringResolution::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_StringResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_StringResolution.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_StringResolution.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_StringResolution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListDataObject_StringResolution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_String,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_StringResolution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_StringResolution_Statics::ClassParams = {
	&UListDataObject_StringResolution::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_StringResolution_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_StringResolution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_StringResolution()
{
	if (!Z_Registration_Info_UClass_UListDataObject_StringResolution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_StringResolution.OuterSingleton, Z_Construct_UClass_UListDataObject_StringResolution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_StringResolution.OuterSingleton;
}
UListDataObject_StringResolution::UListDataObject_StringResolution(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_StringResolution);
UListDataObject_StringResolution::~UListDataObject_StringResolution() {}
// ********** End Class UListDataObject_StringResolution *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_StringResolution_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_StringResolution, UListDataObject_StringResolution::StaticClass, TEXT("UListDataObject_StringResolution"), &Z_Registration_Info_UClass_UListDataObject_StringResolution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_StringResolution), 1213541767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_StringResolution_h__Script_UE5_Frontend_UI_1944794443(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_StringResolution_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_StringResolution_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
