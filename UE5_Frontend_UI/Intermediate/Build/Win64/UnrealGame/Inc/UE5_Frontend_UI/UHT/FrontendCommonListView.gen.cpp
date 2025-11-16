// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Components/FrontendCommonListView.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendCommonListView() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonListView();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UDataAsset_DataListEntryMapping_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonListView();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendCommonListView_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendCommonListView **************************************************
void UFrontendCommonListView::StaticRegisterNativesUFrontendCommonListView()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendCommonListView;
UClass* UFrontendCommonListView::GetPrivateStaticClass()
{
	using TClass = UFrontendCommonListView;
	if (!Z_Registration_Info_UClass_UFrontendCommonListView.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendCommonListView"),
			Z_Registration_Info_UClass_UFrontendCommonListView.InnerSingleton,
			StaticRegisterNativesUFrontendCommonListView,
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
	return Z_Registration_Info_UClass_UFrontendCommonListView.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendCommonListView_NoRegister()
{
	return UFrontendCommonListView::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendCommonListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Components/FrontendCommonListView.h" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataListEntryMapping_MetaData[] = {
		{ "Category", "Frontend List View Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Components/FrontendCommonListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataListEntryMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendCommonListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendCommonListView_Statics::NewProp_DataListEntryMapping = { "DataListEntryMapping", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendCommonListView, DataListEntryMapping), Z_Construct_UClass_UDataAsset_DataListEntryMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataListEntryMapping_MetaData), NewProp_DataListEntryMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendCommonListView_Statics::NewProp_DataListEntryMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendCommonListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonListView,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendCommonListView_Statics::ClassParams = {
	&UFrontendCommonListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendCommonListView_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendCommonListView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendCommonListView()
{
	if (!Z_Registration_Info_UClass_UFrontendCommonListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendCommonListView.OuterSingleton, Z_Construct_UClass_UFrontendCommonListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendCommonListView.OuterSingleton;
}
UFrontendCommonListView::UFrontendCommonListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendCommonListView);
UFrontendCommonListView::~UFrontendCommonListView() {}
// ********** End Class UFrontendCommonListView ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonListView_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendCommonListView, UFrontendCommonListView::StaticClass, TEXT("UFrontendCommonListView"), &Z_Registration_Info_UClass_UFrontendCommonListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendCommonListView), 1782002221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonListView_h__Script_UE5_Frontend_UI_3818372008(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonListView_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Components_FrontendCommonListView_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
