// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Components/FrontendTabListWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendTabListWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidgetBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendTabListWidgetBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendTabListWidgetBase ***********************************************
void UFrontendTabListWidgetBase::StaticRegisterNativesUFrontendTabListWidgetBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendTabListWidgetBase;
UClass* UFrontendTabListWidgetBase::GetPrivateStaticClass()
{
	using TClass = UFrontendTabListWidgetBase;
	if (!Z_Registration_Info_UClass_UFrontendTabListWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendTabListWidgetBase"),
			Z_Registration_Info_UClass_UFrontendTabListWidgetBase.InnerSingleton,
			StaticRegisterNativesUFrontendTabListWidgetBase,
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
	return Z_Registration_Info_UClass_UFrontendTabListWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendTabListWidgetBase_NoRegister()
{
	return UFrontendTabListWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendTabListWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Components/FrontendTabListWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendTabListWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEditorPreviewTabCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Tab List Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendTabListWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabButtonEntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Frontend Tab List Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendTabListWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugEditorPreviewTabCount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TabButtonEntryWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendTabListWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_DebugEditorPreviewTabCount = { "DebugEditorPreviewTabCount", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendTabListWidgetBase, DebugEditorPreviewTabCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEditorPreviewTabCount_MetaData), NewProp_DebugEditorPreviewTabCount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_TabButtonEntryWidgetClass = { "TabButtonEntryWidgetClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendTabListWidgetBase, TabButtonEntryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFrontendCommonButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabButtonEntryWidgetClass_MetaData), NewProp_TabButtonEntryWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_DebugEditorPreviewTabCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::NewProp_TabButtonEntryWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonTabListWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::ClassParams = {
	&UFrontendTabListWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendTabListWidgetBase()
{
	if (!Z_Registration_Info_UClass_UFrontendTabListWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendTabListWidgetBase.OuterSingleton, Z_Construct_UClass_UFrontendTabListWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendTabListWidgetBase.OuterSingleton;
}
UFrontendTabListWidgetBase::UFrontendTabListWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendTabListWidgetBase);
UFrontendTabListWidgetBase::~UFrontendTabListWidgetBase() {}
// ********** End Class UFrontendTabListWidgetBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendTabListWidgetBase_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendTabListWidgetBase, UFrontendTabListWidgetBase::StaticClass, TEXT("UFrontendTabListWidgetBase"), &Z_Registration_Info_UClass_UFrontendTabListWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendTabListWidgetBase), 2991389425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendTabListWidgetBase_h__Script_UE5_Frontend_UI_2931331457(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendTabListWidgetBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendTabListWidgetBase_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
