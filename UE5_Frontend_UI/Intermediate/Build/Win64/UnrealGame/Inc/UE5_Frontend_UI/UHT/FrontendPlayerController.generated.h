// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/FrontendPlayerController.h"

#ifdef UE5_FRONTEND_UI_FrontendPlayerController_generated_h
#error "FrontendPlayerController.generated.h already included, missing '#pragma once' in FrontendPlayerController.h"
#endif
#define UE5_FRONTEND_UI_FrontendPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFrontendPlayerController ************************************************
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFrontendPlayerController(); \
	friend struct Z_Construct_UClass_AFrontendPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFrontendPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_AFrontendPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFrontendPlayerController)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFrontendPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFrontendPlayerController(AFrontendPlayerController&&) = delete; \
	AFrontendPlayerController(const AFrontendPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFrontendPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFrontendPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFrontendPlayerController) \
	NO_API virtual ~AFrontendPlayerController();


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h_7_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFrontendPlayerController;

// ********** End Class AFrontendPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Controllers_FrontendPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
