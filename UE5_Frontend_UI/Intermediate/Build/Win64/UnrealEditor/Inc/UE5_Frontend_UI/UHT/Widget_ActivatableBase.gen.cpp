// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Widget_ActivatableBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ActivatableBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ActivatableBase **************************************************
void UWidget_ActivatableBase::StaticRegisterNativesUWidget_ActivatableBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ActivatableBase;
UClass* UWidget_ActivatableBase::GetPrivateStaticClass()
{
	using TClass = UWidget_ActivatableBase;
	if (!Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ActivatableBase"),
			Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton,
			StaticRegisterNativesUWidget_ActivatableBase,
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
	return Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister()
{
	return UWidget_ActivatableBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ActivatableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Widget_ActivatableBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ActivatableBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ActivatableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidget_ActivatableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ActivatableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ActivatableBase_Statics::ClassParams = {
	&UWidget_ActivatableBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ActivatableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ActivatableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ActivatableBase()
{
	if (!Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton, Z_Construct_UClass_UWidget_ActivatableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton;
}
UWidget_ActivatableBase::UWidget_ActivatableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ActivatableBase);
UWidget_ActivatableBase::~UWidget_ActivatableBase() {}
// ********** End Class UWidget_ActivatableBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ActivatableBase, UWidget_ActivatableBase::StaticClass, TEXT("UWidget_ActivatableBase"), &Z_Registration_Info_UClass_UWidget_ActivatableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ActivatableBase), 294414567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_2033411132(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
