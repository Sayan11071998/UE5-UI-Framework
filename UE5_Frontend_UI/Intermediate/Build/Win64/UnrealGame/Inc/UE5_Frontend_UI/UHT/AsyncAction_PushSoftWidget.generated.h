// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/AsyncAction_PushSoftWidget.h"

#ifdef UE5_FRONTEND_UI_AsyncAction_PushSoftWidget_generated_h
#error "AsyncAction_PushSoftWidget.generated.h already included, missing '#pragma once' in AsyncAction_PushSoftWidget.h"
#endif
#define UE5_FRONTEND_UI_AsyncAction_PushSoftWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UAsyncAction_PushSoftWidget;
class UObject;
class UWidget_ActivatableBase;
struct FGameplayTag;

// ********** Begin Delegate FOnPushSoftWidgetDelegate *********************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_10_DELEGATE \
UE5_FRONTEND_UI_API void FOnPushSoftWidgetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPushSoftWidgetDelegate, UWidget_ActivatableBase* PushedWidget);


// ********** End Delegate FOnPushSoftWidgetDelegate ***********************************************

// ********** Begin Class UAsyncAction_PushSoftWidget **********************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushSoftWidget);


UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UAsyncAction_PushSoftWidget_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushSoftWidget(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushSoftWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UAsyncAction_PushSoftWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_PushSoftWidget, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UAsyncAction_PushSoftWidget_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_PushSoftWidget)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PushSoftWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_PushSoftWidget(UAsyncAction_PushSoftWidget&&) = delete; \
	UAsyncAction_PushSoftWidget(const UAsyncAction_PushSoftWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PushSoftWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushSoftWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushSoftWidget) \
	NO_API virtual ~UAsyncAction_PushSoftWidget();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_12_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_PushSoftWidget;

// ********** End Class UAsyncAction_PushSoftWidget ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushSoftWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
