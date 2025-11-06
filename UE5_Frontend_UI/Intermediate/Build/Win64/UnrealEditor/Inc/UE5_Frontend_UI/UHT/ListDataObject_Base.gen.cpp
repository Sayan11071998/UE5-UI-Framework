// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_Base() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_Base *****************************************************
void UListDataObject_Base::StaticRegisterNativesUListDataObject_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_Base;
UClass* UListDataObject_Base::GetPrivateStaticClass()
{
	using TClass = UListDataObject_Base;
	if (!Z_Registration_Info_UClass_UListDataObject_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_Base"),
			Z_Registration_Info_UClass_UListDataObject_Base.InnerSingleton,
			StaticRegisterNativesUListDataObject_Base,
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
	return Z_Registration_Info_UClass_UListDataObject_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_Base_NoRegister()
{
	return UListDataObject_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_Base.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UListDataObject_Base_Statics::NewProp_ParentData = { "ParentData", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UListDataObject_Base, ParentData), Z_Construct_UClass_UListDataObject_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentData_MetaData), NewProp_ParentData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListDataObject_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListDataObject_Base_Statics::NewProp_ParentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UListDataObject_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_Base_Statics::ClassParams = {
	&UListDataObject_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UListDataObject_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Base_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_Base()
{
	if (!Z_Registration_Info_UClass_UListDataObject_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_Base.OuterSingleton, Z_Construct_UClass_UListDataObject_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_Base.OuterSingleton;
}
UListDataObject_Base::UListDataObject_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_Base);
UListDataObject_Base::~UListDataObject_Base() {}
// ********** End Class UListDataObject_Base *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Base_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_Base, UListDataObject_Base::StaticClass, TEXT("UListDataObject_Base"), &Z_Registration_Info_UClass_UListDataObject_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_Base), 1327105454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Base_h__Script_UE5_Frontend_UI_1561315602(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Base_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_Base_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
