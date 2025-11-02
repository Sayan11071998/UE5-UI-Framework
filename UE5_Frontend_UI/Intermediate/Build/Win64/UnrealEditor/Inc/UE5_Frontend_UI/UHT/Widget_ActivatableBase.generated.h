// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Widget_ActivatableBase.h"

#ifdef UE5_FRONTEND_UI_Widget_ActivatableBase_generated_h
#error "Widget_ActivatableBase.generated.h already included, missing '#pragma once' in Widget_ActivatableBase.h"
#endif
#define UE5_FRONTEND_UI_Widget_ActivatableBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AFrontendPlayerController;

// ********** Begin Class UWidget_ActivatableBase **************************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOwningFrontendPlayerController);


UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget_ActivatableBase(); \
	friend struct Z_Construct_UClass_UWidget_ActivatableBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidget_ActivatableBase, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UWidget_ActivatableBase_NoRegister) \
	DECLARE_SERIALIZER(UWidget_ActivatableBase)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget_ActivatableBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidget_ActivatableBase(UWidget_ActivatableBase&&) = delete; \
	UWidget_ActivatableBase(const UWidget_ActivatableBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget_ActivatableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget_ActivatableBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget_ActivatableBase) \
	NO_API virtual ~UWidget_ActivatableBase();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_9_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidget_ActivatableBase;

// ********** End Class UWidget_ActivatableBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Widgets_Widget_ActivatableBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
