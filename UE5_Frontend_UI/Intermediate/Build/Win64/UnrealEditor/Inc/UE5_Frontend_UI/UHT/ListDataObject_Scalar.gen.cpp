// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_Scalar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_Scalar() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Scalar();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Scalar_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Value();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_Scalar ***************************************************
void UListDataObject_Scalar::StaticRegisterNativesUListDataObject_Scalar()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_Scalar;
UClass* UListDataObject_Scalar::GetPrivateStaticClass()
{
	using TClass = UListDataObject_Scalar;
	if (!Z_Registration_Info_UClass_UListDataObject_Scalar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_Scalar"),
			Z_Registration_Info_UClass_UListDataObject_Scalar.InnerSingleton,
			StaticRegisterNativesUListDataObject_Scalar,
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
	return Z_Registration_Info_UClass_UListDataObject_Scalar.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_Scalar_NoRegister()
{
	return UListDataObject_Scalar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_Scalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_Scalar.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_Scalar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_Scalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListDataObject_Scalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_Value,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Scalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_Scalar_Statics::ClassParams = {
	&UListDataObject_Scalar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Scalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_Scalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_Scalar()
{
	if (!Z_Registration_Info_UClass_UListDataObject_Scalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_Scalar.OuterSingleton, Z_Construct_UClass_UListDataObject_Scalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_Scalar.OuterSingleton;
}
UListDataObject_Scalar::UListDataObject_Scalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_Scalar);
UListDataObject_Scalar::~UListDataObject_Scalar() {}
// ********** End Class UListDataObject_Scalar *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Scalar_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_Scalar, UListDataObject_Scalar::StaticClass, TEXT("UListDataObject_Scalar"), &Z_Registration_Info_UClass_UListDataObject_Scalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_Scalar), 676691671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Scalar_h__Script_UE5_Frontend_UI_578538032(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Scalar_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Scalar_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
