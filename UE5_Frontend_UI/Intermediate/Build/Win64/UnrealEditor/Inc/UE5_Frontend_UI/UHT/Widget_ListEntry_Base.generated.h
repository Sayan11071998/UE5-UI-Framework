// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Options/ListEntries/Widget_ListEntry_Base.h"

#ifdef UE5_FRONTEND_UI_Widget_ListEntry_Base_generated_h
#error "Widget_ListEntry_Base.generated.h already included, missing '#pragma once' in Widget_ListEntry_Base.h"
#endif
#define UE5_FRONTEND_UI_Widget_ListEntry_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidget_ListEntry_Base ***************************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_CALLBACK_WRAPPERS
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget_ListEntry_Base(); \
	friend struct Z_Construct_UClass_UWidget_ListEntry_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidget_ListEntry_Base, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UWidget_ListEntry_Base_NoRegister) \
	DECLARE_SERIALIZER(UWidget_ListEntry_Base) \
	virtual UObject* _getUObject() const override { return const_cast<UWidget_ListEntry_Base*>(this); }


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget_ListEntry_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidget_ListEntry_Base(UWidget_ListEntry_Base&&) = delete; \
	UWidget_ListEntry_Base(const UWidget_ListEntry_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget_ListEntry_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget_ListEntry_Base); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget_ListEntry_Base) \
	NO_API virtual ~UWidget_ListEntry_Base();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_12_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_CALLBACK_WRAPPERS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidget_ListEntry_Base;

// ********** End Class UWidget_ListEntry_Base *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Options_ListEntries_Widget_ListEntry_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
