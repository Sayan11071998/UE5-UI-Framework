// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataAsset_DataListEntryMapping.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataAsset_DataListEntryMapping() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UDataAsset_DataListEntryMapping();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UDataAsset_DataListEntryMapping_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDataAsset_DataListEntryMapping ******************************************
void UDataAsset_DataListEntryMapping::StaticRegisterNativesUDataAsset_DataListEntryMapping()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping;
UClass* UDataAsset_DataListEntryMapping::GetPrivateStaticClass()
{
	using TClass = UDataAsset_DataListEntryMapping;
	if (!Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataAsset_DataListEntryMapping"),
			Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping.InnerSingleton,
			StaticRegisterNativesUDataAsset_DataListEntryMapping,
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
	return Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataAsset_DataListEntryMapping_NoRegister()
{
	return UDataAsset_DataListEntryMapping::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataAsset_DataListEntryMapping.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataAsset_DataListEntryMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataObjectListEntryMap_MetaData[] = {
		{ "Category", "DataAsset_DataListEntryMapping" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataAsset_DataListEntryMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataObjectListEntryMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataObjectListEntryMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataObjectListEntryMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_DataListEntryMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_ValueProp = { "DataObjectListEntryMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_Key_KeyProp = { "DataObjectListEntryMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UListDataObject_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::NewProp_DataObjectListEntryMap = { "DataObjectListEntryMap", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_DataListEntryMapping, DataObjectListEntryMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataObjectListEntryMap_MetaData), NewProp_DataObjectListEntryMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::NewProp_DataObjectListEntryMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::NewProp_DataObjectListEntryMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::ClassParams = {
	&UDataAsset_DataListEntryMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_DataListEntryMapping()
{
	if (!Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping.OuterSingleton, Z_Construct_UClass_UDataAsset_DataListEntryMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping.OuterSingleton;
}
UDataAsset_DataListEntryMapping::UDataAsset_DataListEntryMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_DataListEntryMapping);
UDataAsset_DataListEntryMapping::~UDataAsset_DataListEntryMapping() {}
// ********** End Class UDataAsset_DataListEntryMapping ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataAsset_DataListEntryMapping_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_DataListEntryMapping, UDataAsset_DataListEntryMapping::StaticClass, TEXT("UDataAsset_DataListEntryMapping"), &Z_Registration_Info_UClass_UDataAsset_DataListEntryMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_DataListEntryMapping), 683376650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataAsset_DataListEntryMapping_h__Script_UE5_Frontend_UI_3616135560(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataAsset_DataListEntryMapping_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataAsset_DataListEntryMapping_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
