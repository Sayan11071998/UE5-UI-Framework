// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Widget_ConfirmScreen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ConfirmScreen() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UConfirmScreenInfoObject();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UConfirmScreenInfoObject_NoRegister();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ConfirmScreen();
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ConfirmScreen_NoRegister();
UE5_FRONTEND_UI_API UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType();
UE5_FRONTEND_UI_API UScriptStruct* Z_Construct_UScriptStruct_FConfirmScreenButtonInfo();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FConfirmScreenButtonInfo ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo;
class UScriptStruct* FConfirmScreenButtonInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo, (UObject*)Z_Construct_UPackage__Script_UE5_Frontend_UI(), TEXT("ConfirmScreenButtonInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmScreenButtonType_MetaData[] = {
		{ "Category", "ConfirmScreenButtonInfo" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonTextToDisplay_MetaData[] = {
		{ "Category", "ConfirmScreenButtonInfo" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfirmScreenButtonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConfirmScreenButtonType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonTextToDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfirmScreenButtonInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType = { "ConfirmScreenButtonType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfirmScreenButtonInfo, ConfirmScreenButtonType), Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmScreenButtonType_MetaData), NewProp_ConfirmScreenButtonType_MetaData) }; // 3260937155
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ButtonTextToDisplay = { "ButtonTextToDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfirmScreenButtonInfo, ButtonTextToDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonTextToDisplay_MetaData), NewProp_ButtonTextToDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ConfirmScreenButtonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewProp_ButtonTextToDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
	nullptr,
	&NewStructOps,
	"ConfirmScreenButtonInfo",
	Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::PropPointers),
	sizeof(FConfirmScreenButtonInfo),
	alignof(FConfirmScreenButtonInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConfirmScreenButtonInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo.InnerSingleton, Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo.InnerSingleton;
}
// ********** End ScriptStruct FConfirmScreenButtonInfo ********************************************

// ********** Begin Class UConfirmScreenInfoObject *************************************************
void UConfirmScreenInfoObject::StaticRegisterNativesUConfirmScreenInfoObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UConfirmScreenInfoObject;
UClass* UConfirmScreenInfoObject::GetPrivateStaticClass()
{
	using TClass = UConfirmScreenInfoObject;
	if (!Z_Registration_Info_UClass_UConfirmScreenInfoObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ConfirmScreenInfoObject"),
			Z_Registration_Info_UClass_UConfirmScreenInfoObject.InnerSingleton,
			StaticRegisterNativesUConfirmScreenInfoObject,
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
	return Z_Registration_Info_UClass_UConfirmScreenInfoObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UConfirmScreenInfoObject_NoRegister()
{
	return UConfirmScreenInfoObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UConfirmScreenInfoObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Widget_ConfirmScreen.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenTitle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableScreenButtons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ScreenTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ScreenMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableScreenButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableScreenButtons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmScreenInfoObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenTitle = { "ScreenTitle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenInfoObject, ScreenTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenTitle_MetaData), NewProp_ScreenTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenMessage = { "ScreenMessage", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenInfoObject, ScreenMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMessage_MetaData), NewProp_ScreenMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons_Inner = { "AvailableScreenButtons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConfirmScreenButtonInfo, METADATA_PARAMS(0, nullptr) }; // 3004181923
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons = { "AvailableScreenButtons", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConfirmScreenInfoObject, AvailableScreenButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableScreenButtons_MetaData), NewProp_AvailableScreenButtons_MetaData) }; // 3004181923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_ScreenMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmScreenInfoObject_Statics::NewProp_AvailableScreenButtons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConfirmScreenInfoObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmScreenInfoObject_Statics::ClassParams = {
	&UConfirmScreenInfoObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmScreenInfoObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UConfirmScreenInfoObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConfirmScreenInfoObject()
{
	if (!Z_Registration_Info_UClass_UConfirmScreenInfoObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmScreenInfoObject.OuterSingleton, Z_Construct_UClass_UConfirmScreenInfoObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConfirmScreenInfoObject.OuterSingleton;
}
UConfirmScreenInfoObject::UConfirmScreenInfoObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmScreenInfoObject);
UConfirmScreenInfoObject::~UConfirmScreenInfoObject() {}
// ********** End Class UConfirmScreenInfoObject ***************************************************

// ********** Begin Class UWidget_ConfirmScreen ****************************************************
void UWidget_ConfirmScreen::StaticRegisterNativesUWidget_ConfirmScreen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ConfirmScreen;
UClass* UWidget_ConfirmScreen::GetPrivateStaticClass()
{
	using TClass = UWidget_ConfirmScreen;
	if (!Z_Registration_Info_UClass_UWidget_ConfirmScreen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ConfirmScreen"),
			Z_Registration_Info_UClass_UWidget_ConfirmScreen.InnerSingleton,
			StaticRegisterNativesUWidget_ConfirmScreen,
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
	return Z_Registration_Info_UClass_UWidget_ConfirmScreen.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ConfirmScreen_NoRegister()
{
	return UWidget_ConfirmScreen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ConfirmScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/Widget_ConfirmScreen.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTextBlock_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEntryBox_Buttons_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_ConfirmScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonTextBlock_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicEntryBox_Buttons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ConfirmScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Title = { "CommonTextBlock_Title", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ConfirmScreen, CommonTextBlock_Title), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Title_MetaData), NewProp_CommonTextBlock_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Message = { "CommonTextBlock_Message", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ConfirmScreen, CommonTextBlock_Message), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTextBlock_Message_MetaData), NewProp_CommonTextBlock_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_DynamicEntryBox_Buttons = { "DynamicEntryBox_Buttons", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_ConfirmScreen, DynamicEntryBox_Buttons), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicEntryBox_Buttons_MetaData), NewProp_DynamicEntryBox_Buttons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_CommonTextBlock_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_ConfirmScreen_Statics::NewProp_DynamicEntryBox_Buttons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_ConfirmScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget_ActivatableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ConfirmScreen_Statics::ClassParams = {
	&UWidget_ConfirmScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ConfirmScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ConfirmScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ConfirmScreen()
{
	if (!Z_Registration_Info_UClass_UWidget_ConfirmScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ConfirmScreen.OuterSingleton, Z_Construct_UClass_UWidget_ConfirmScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ConfirmScreen.OuterSingleton;
}
UWidget_ConfirmScreen::UWidget_ConfirmScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ConfirmScreen);
UWidget_ConfirmScreen::~UWidget_ConfirmScreen() {}
// ********** End Class UWidget_ConfirmScreen ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConfirmScreenButtonInfo::StaticStruct, Z_Construct_UScriptStruct_FConfirmScreenButtonInfo_Statics::NewStructOps, TEXT("ConfirmScreenButtonInfo"), &Z_Registration_Info_UScriptStruct_FConfirmScreenButtonInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfirmScreenButtonInfo), 3004181923U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmScreenInfoObject, UConfirmScreenInfoObject::StaticClass, TEXT("UConfirmScreenInfoObject"), &Z_Registration_Info_UClass_UConfirmScreenInfoObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmScreenInfoObject), 2839276421U) },
		{ Z_Construct_UClass_UWidget_ConfirmScreen, UWidget_ConfirmScreen::StaticClass, TEXT("UWidget_ConfirmScreen"), &Z_Registration_Info_UClass_UWidget_ConfirmScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ConfirmScreen), 1113033568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_1460140233(TEXT("/Script/UE5_Frontend_UI"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ConfirmScreen_h__Script_UE5_Frontend_UI_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
