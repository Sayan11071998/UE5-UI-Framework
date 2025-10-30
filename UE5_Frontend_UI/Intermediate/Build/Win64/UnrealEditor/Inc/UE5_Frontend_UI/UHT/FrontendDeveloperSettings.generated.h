// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrontendSettings/FrontendDeveloperSettings.h"

#ifdef UE5_FRONTEND_UI_FrontendDeveloperSettings_generated_h
#error "FrontendDeveloperSettings.generated.h already included, missing '#pragma once' in FrontendDeveloperSettings.h"
#endif
#define UE5_FRONTEND_UI_FrontendDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFrontendDeveloperSettings ***********************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendDeveloperSettings(); \
	friend struct Z_Construct_UClass_UFrontendDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFrontendDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UFrontendDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UFrontendDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFrontendDeveloperSettings(UFrontendDeveloperSettings&&) = delete; \
	UFrontendDeveloperSettings(const UFrontendDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendDeveloperSettings) \
	NO_API virtual ~UFrontendDeveloperSettings();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h_10_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFrontendDeveloperSettings;

// ********** End Class UFrontendDeveloperSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
