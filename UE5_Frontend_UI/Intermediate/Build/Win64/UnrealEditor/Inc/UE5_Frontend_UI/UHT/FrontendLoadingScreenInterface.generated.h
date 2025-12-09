// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/FrontendLoadingScreenInterface.h"

#ifdef UE5_FRONTEND_UI_FrontendLoadingScreenInterface_generated_h
#error "FrontendLoadingScreenInterface.generated.h already included, missing '#pragma once' in FrontendLoadingScreenInterface.h"
#endif
#define UE5_FRONTEND_UI_FrontendLoadingScreenInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UFrontendLoadingScreenInterface **************************************
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLoadingScreenDeactivated_Implementation() {}; \
	virtual void OnLoadingScreenActivated_Implementation() {}; \
	DECLARE_FUNCTION(execOnLoadingScreenDeactivated); \
	DECLARE_FUNCTION(execOnLoadingScreenActivated);


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_CALLBACK_WRAPPERS
UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenInterface_NoRegister();

#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE5_FRONTEND_UI_API UFrontendLoadingScreenInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFrontendLoadingScreenInterface(UFrontendLoadingScreenInterface&&) = delete; \
	UFrontendLoadingScreenInterface(const UFrontendLoadingScreenInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE5_FRONTEND_UI_API, UFrontendLoadingScreenInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendLoadingScreenInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendLoadingScreenInterface) \
	virtual ~UFrontendLoadingScreenInterface() = default;


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFrontendLoadingScreenInterface(); \
	friend struct Z_Construct_UClass_UFrontendLoadingScreenInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UE5_FRONTEND_UI_API UClass* Z_Construct_UClass_UFrontendLoadingScreenInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UFrontendLoadingScreenInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UE5_Frontend_UI"), Z_Construct_UClass_UFrontendLoadingScreenInterface_NoRegister) \
	DECLARE_SERIALIZER(UFrontendLoadingScreenInterface)


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFrontendLoadingScreenInterface() {} \
public: \
	typedef UFrontendLoadingScreenInterface UClassType; \
	typedef IFrontendLoadingScreenInterface ThisClass; \
	static void Execute_OnLoadingScreenActivated(UObject* O); \
	static void Execute_OnLoadingScreenDeactivated(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_7_PROLOG
#define FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_CALLBACK_WRAPPERS \
	FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFrontendLoadingScreenInterface;

// ********** End Interface UFrontendLoadingScreenInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_Interfaces_FrontendLoadingScreenInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
