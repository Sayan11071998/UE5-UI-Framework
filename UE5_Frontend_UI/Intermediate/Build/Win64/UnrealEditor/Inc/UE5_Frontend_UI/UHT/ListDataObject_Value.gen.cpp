// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_Value.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_Value() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Value();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Value_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_Value ****************************************************
void UListDataObject_Value::StaticRegisterNativesUListDataObject_Value()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_Value;
UClass* UListDataObject_Value::GetPrivateStaticClass()
{
	using TClass = UListDataObject_Value;
	if (!Z_Registration_Info_UClass_UListDataObject_Value.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_Value"),
			Z_Registration_Info_UClass_UListDataObject_Value.InnerSingleton,
			StaticRegisterNativesUListDataObject_Value,
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
	return Z_Registration_Info_UClass_UListDataObject_Value.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_Value_NoRegister()
{
	return UListDataObject_Value::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_Value_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_Value.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_Value.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_Value>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListDataObject_Value_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Value_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_Value_Statics::ClassParams = {
	&UListDataObject_Value::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Value_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_Value_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_Value()
{
	if (!Z_Registration_Info_UClass_UListDataObject_Value.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_Value.OuterSingleton, Z_Construct_UClass_UListDataObject_Value_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_Value.OuterSingleton;
}
UListDataObject_Value::UListDataObject_Value(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_Value);
UListDataObject_Value::~UListDataObject_Value() {}
// ********** End Class UListDataObject_Value ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Value_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_Value, UListDataObject_Value::StaticClass, TEXT("UListDataObject_Value"), &Z_Registration_Info_UClass_UListDataObject_Value, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_Value), 1381514384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Value_h__Script_UE5_Frontend_UI_2834933556(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Value_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Value_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
