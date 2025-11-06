// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_Collection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_Collection() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Collection();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Collection_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_Collection ***********************************************
void UListDataObject_Collection::StaticRegisterNativesUListDataObject_Collection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_Collection;
UClass* UListDataObject_Collection::GetPrivateStaticClass()
{
	using TClass = UListDataObject_Collection;
	if (!Z_Registration_Info_UClass_UListDataObject_Collection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_Collection"),
			Z_Registration_Info_UClass_UListDataObject_Collection.InnerSingleton,
			StaticRegisterNativesUListDataObject_Collection,
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
	return Z_Registration_Info_UClass_UListDataObject_Collection.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_Collection_NoRegister()
{
	return UListDataObject_Collection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_Collection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_Collection.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildListDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_Collection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildListDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildListDataArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_Collection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UListDataObject_Collection_Statics::NewProp_ChildListDataArray_Inner = { "ChildListDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UListDataObject_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UListDataObject_Collection_Statics::NewProp_ChildListDataArray = { "ChildListDataArray", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListDataObject_Collection, ChildListDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildListDataArray_MetaData), NewProp_ChildListDataArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListDataObject_Collection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListDataObject_Collection_Statics::NewProp_ChildListDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListDataObject_Collection_Statics::NewProp_ChildListDataArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Collection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UListDataObject_Collection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Collection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_Collection_Statics::ClassParams = {
	&UListDataObject_Collection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UListDataObject_Collection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Collection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Collection_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_Collection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_Collection()
{
	if (!Z_Registration_Info_UClass_UListDataObject_Collection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_Collection.OuterSingleton, Z_Construct_UClass_UListDataObject_Collection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_Collection.OuterSingleton;
}
UListDataObject_Collection::UListDataObject_Collection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_Collection);
UListDataObject_Collection::~UListDataObject_Collection() {}
// ********** End Class UListDataObject_Collection *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Collection_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_Collection, UListDataObject_Collection::StaticClass, TEXT("UListDataObject_Collection"), &Z_Registration_Info_UClass_UListDataObject_Collection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_Collection), 3814105771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Collection_h__Script_UE5_Frontend_UI_3363258778(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Collection_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Collection_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
