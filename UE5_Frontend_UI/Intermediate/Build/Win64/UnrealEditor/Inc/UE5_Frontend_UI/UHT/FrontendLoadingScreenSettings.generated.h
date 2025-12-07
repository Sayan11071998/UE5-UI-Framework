// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrontendSettings/FrontendLoadingScreenSettings.h"

#ifdef UE5_FRONTEND_UI_FrontendLoadingScreenSettings_generated_h
#error "FrontendLoadingScreenSettings.generated.h already included, missing '#pragma once' in FrontendLoadingScreenSettings.h"
#endif
#define UE5_FRONTEND_UI_FrontendLoadingScreenSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFrontendLoadingScreenSettings *******************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSettings_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendLoadingScreenSettings(); \
	friend struct Z_Construct_UClass_UFrontendLoadingScreenSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFrontendLoadingScreenSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UFrontendLoadingScreenSettings_NoRegister) \
	DECLARE_SERIALIZER(UFrontendLoadingScreenSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendLoadingScreenSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFrontendLoadingScreenSettings(UFrontendLoadingScreenSettings&&) = delete; \
	UFrontendLoadingScreenSettings(const UFrontendLoadingScreenSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendLoadingScreenSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendLoadingScreenSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendLoadingScreenSettings) \
	NO_API virtual ~UFrontendLoadingScreenSettings();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h_7_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFrontendLoadingScreenSettings;

// ********** End Class UFrontendLoadingScreenSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendSettings_FrontendLoadingScreenSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
