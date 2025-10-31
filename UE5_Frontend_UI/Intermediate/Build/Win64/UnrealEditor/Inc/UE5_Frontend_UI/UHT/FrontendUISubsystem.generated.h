// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/FrontendUISubsystem.h"

#ifdef UE5_FRONTEND_UI_FrontendUISubsystem_generated_h
#error "FrontendUISubsystem.generated.h already included, missing '#pragma once' in FrontendUISubsystem.h"
#endif
#define UE5_FRONTEND_UI_FrontendUISubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFrontendCommonButtonBase;
class UWidget_PrimaryLayout;

// ********** Begin Delegate FOnButtonDescriptionTextUpdatedDelegate *******************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_19_DELEGATE \
UE5_FRONTEND_UI_API void FOnButtonDescriptionTextUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnButtonDescriptionTextUpdatedDelegate, UFrontendCommonButtonBase* BroadcastingButton, const FText& DescriptionText);


// ********** End Delegate FOnButtonDescriptionTextUpdatedDelegate *********************************

// ********** Begin Class UFrontendUISubsystem *****************************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterCreatedPrimaryLayoutWidget);


UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendUISubsystem_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendUISubsystem(); \
	friend struct Z_Construct_UClass_UFrontendUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFrontendUISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UFrontendUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UFrontendUISubsystem)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFrontendUISubsystem(UFrontendUISubsystem&&) = delete; \
	UFrontendUISubsystem(const UFrontendUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFrontendUISubsystem) \
	NO_API virtual ~UFrontendUISubsystem();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_21_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFrontendUISubsystem;

// ********** End Class UFrontendUISubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Subsystems_FrontendUISubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
