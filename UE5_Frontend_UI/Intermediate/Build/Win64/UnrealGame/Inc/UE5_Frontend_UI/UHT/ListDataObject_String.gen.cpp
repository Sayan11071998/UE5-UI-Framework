// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Options/DataObjects/ListDataObject_String.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeListDataObject_String() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_String();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_String_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_StringBool();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_StringBool_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_StringEnum();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_StringEnum_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UListDataObject_Value();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UListDataObject_String ***************************************************
void UListDataObject_String::StaticRegisterNativesUListDataObject_String()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_String;
UClass* UListDataObject_String::GetPrivateStaticClass()
{
	using TClass = UListDataObject_String;
	if (!Z_Registration_Info_UClass_UListDataObject_String.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_String"),
			Z_Registration_Info_UClass_UListDataObject_String.InnerSingleton,
			StaticRegisterNativesUListDataObject_String,
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
	return Z_Registration_Info_UClass_UListDataObject_String.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_String_NoRegister()
{
	return UListDataObject_String::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_String_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_String.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_String.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_String>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListDataObject_String_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_Value,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_String_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_String_Statics::ClassParams = {
	&UListDataObject_String::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_String_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_String_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_String()
{
	if (!Z_Registration_Info_UClass_UListDataObject_String.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_String.OuterSingleton, Z_Construct_UClass_UListDataObject_String_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_String.OuterSingleton;
}
UListDataObject_String::UListDataObject_String(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_String);
UListDataObject_String::~UListDataObject_String() {}
// ********** End Class UListDataObject_String *****************************************************

// ********** Begin Class UListDataObject_StringBool ***********************************************
void UListDataObject_StringBool::StaticRegisterNativesUListDataObject_StringBool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_StringBool;
UClass* UListDataObject_StringBool::GetPrivateStaticClass()
{
	using TClass = UListDataObject_StringBool;
	if (!Z_Registration_Info_UClass_UListDataObject_StringBool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_StringBool"),
			Z_Registration_Info_UClass_UListDataObject_StringBool.InnerSingleton,
			StaticRegisterNativesUListDataObject_StringBool,
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
	return Z_Registration_Info_UClass_UListDataObject_StringBool.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_StringBool_NoRegister()
{
	return UListDataObject_StringBool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_StringBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_String.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_String.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_StringBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListDataObject_StringBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_String,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_StringBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_StringBool_Statics::ClassParams = {
	&UListDataObject_StringBool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_StringBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_StringBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_StringBool()
{
	if (!Z_Registration_Info_UClass_UListDataObject_StringBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_StringBool.OuterSingleton, Z_Construct_UClass_UListDataObject_StringBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_StringBool.OuterSingleton;
}
UListDataObject_StringBool::UListDataObject_StringBool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_StringBool);
UListDataObject_StringBool::~UListDataObject_StringBool() {}
// ********** End Class UListDataObject_StringBool *************************************************

// ********** Begin Class UListDataObject_StringEnum ***********************************************
void UListDataObject_StringEnum::StaticRegisterNativesUListDataObject_StringEnum()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UListDataObject_StringEnum;
UClass* UListDataObject_StringEnum::GetPrivateStaticClass()
{
	using TClass = UListDataObject_StringEnum;
	if (!Z_Registration_Info_UClass_UListDataObject_StringEnum.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ListDataObject_StringEnum"),
			Z_Registration_Info_UClass_UListDataObject_StringEnum.InnerSingleton,
			StaticRegisterNativesUListDataObject_StringEnum,
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
	return Z_Registration_Info_UClass_UListDataObject_StringEnum.InnerSingleton;
}
UClass* Z_Construct_UClass_UListDataObject_StringEnum_NoRegister()
{
	return UListDataObject_StringEnum::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UListDataObject_StringEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Options/DataObjects/ListDataObject_String.h" },
		{ "ModuleRelativePath", "Public/Widgets/Options/DataObjects/ListDataObject_String.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListDataObject_StringEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListDataObject_StringEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListDataObject_String,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_StringEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListDataObject_StringEnum_Statics::ClassParams = {
	&UListDataObject_StringEnum::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListDataObject_StringEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UListDataObject_StringEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListDataObject_StringEnum()
{
	if (!Z_Registration_Info_UClass_UListDataObject_StringEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListDataObject_StringEnum.OuterSingleton, Z_Construct_UClass_UListDataObject_StringEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListDataObject_StringEnum.OuterSingleton;
}
UListDataObject_StringEnum::UListDataObject_StringEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListDataObject_StringEnum);
UListDataObject_StringEnum::~UListDataObject_StringEnum() {}
// ********** End Class UListDataObject_StringEnum *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_String_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListDataObject_String, UListDataObject_String::StaticClass, TEXT("UListDataObject_String"), &Z_Registration_Info_UClass_UListDataObject_String, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_String), 2362176827U) },
		{ Z_Construct_UClass_UListDataObject_StringBool, UListDataObject_StringBool::StaticClass, TEXT("UListDataObject_StringBool"), &Z_Registration_Info_UClass_UListDataObject_StringBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_StringBool), 1209218564U) },
		{ Z_Construct_UClass_UListDataObject_StringEnum, UListDataObject_StringEnum::StaticClass, TEXT("UListDataObject_StringEnum"), &Z_Registration_Info_UClass_UListDataObject_StringEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListDataObject_StringEnum), 475675885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_String_h__Script_UE5_Frontend_UI_4237288613(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_String_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_DataObjects_ListDataObject_String_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
