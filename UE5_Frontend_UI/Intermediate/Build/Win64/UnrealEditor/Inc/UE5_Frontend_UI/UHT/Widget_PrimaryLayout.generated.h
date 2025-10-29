// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Widget_PrimaryLayout.h"

#ifdef UE5_FRONTEND_UI_Widget_PrimaryLayout_generated_h
#error "Widget_PrimaryLayout.generated.h already included, missing '#pragma once' in Widget_PrimaryLayout.h"
#endif
#define UE5_FRONTEND_UI_Widget_PrimaryLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonActivatableWidgetContainerBase;
struct FGameplayTag;

// ********** Begin Class UWidget_PrimaryLayout ****************************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterWidgetStack);


UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget_PrimaryLayout(); \
	friend struct Z_Construct_UClass_UWidget_PrimaryLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidget_PrimaryLayout, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister) \
	DECLARE_SERIALIZER(UWidget_PrimaryLayout)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget_PrimaryLayout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidget_PrimaryLayout(UWidget_PrimaryLayout&&) = delete; \
	UWidget_PrimaryLayout(const UWidget_PrimaryLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget_PrimaryLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget_PrimaryLayout); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget_PrimaryLayout) \
	NO_API virtual ~UWidget_PrimaryLayout();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_10_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidget_PrimaryLayout;

// ********** End Class UWidget_PrimaryLayout ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_PrimaryLayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
