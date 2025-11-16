// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/AsyncAction_PushConfirmScreen.h"

#ifdef UE5_FRONTEND_UI_AsyncAction_PushConfirmScreen_generated_h
#error "AsyncAction_PushConfirmScreen.generated.h already included, missing '#pragma once' in AsyncAction_PushConfirmScreen.h"
#endif
#define UE5_FRONTEND_UI_AsyncAction_PushConfirmScreen_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncAction_PushConfirmScreen;
class UObject;
enum class EConfirmScreenButtonType : uint8;
enum class EConfirmScreenType : uint8;

// ********** Begin Delegate FOnConfirmScreenButtonClickedDelegate *********************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_8_DELEGATE \
UE5_FRONTEND_UI_API void FOnConfirmScreenButtonClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnConfirmScreenButtonClickedDelegate, EConfirmScreenButtonType ClickedButtonType);


// ********** End Delegate FOnConfirmScreenButtonClickedDelegate ***********************************

// ********** Begin Class UAsyncAction_PushConfirmScreen *******************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushConfirmScreen);


UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UAsyncAction_PushConfirmScreen_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushConfirmScreen(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushConfirmScreen_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UAsyncAction_PushConfirmScreen_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_PushConfirmScreen, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UAsyncAction_PushConfirmScreen_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_PushConfirmScreen)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PushConfirmScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_PushConfirmScreen(UAsyncAction_PushConfirmScreen&&) = delete; \
	UAsyncAction_PushConfirmScreen(const UAsyncAction_PushConfirmScreen&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PushConfirmScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushConfirmScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushConfirmScreen) \
	NO_API virtual ~UAsyncAction_PushConfirmScreen();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_10_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_PushConfirmScreen;

// ********** End Class UAsyncAction_PushConfirmScreen *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_AsyncActions_AsyncAction_PushConfirmScreen_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
