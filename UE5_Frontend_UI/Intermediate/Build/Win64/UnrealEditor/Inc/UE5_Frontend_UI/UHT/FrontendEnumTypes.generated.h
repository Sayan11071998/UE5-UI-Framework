// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrontendTypes/FrontendEnumTypes.h"

#ifdef UE5_FRONTEND_UI_FrontendEnumTypes_generated_h
#error "FrontendEnumTypes.generated.h already included, missing '#pragma once' in FrontendEnumTypes.h"
#endif
#define UE5_FRONTEND_UI_FrontendEnumTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendEnumTypes_h

// ********** Begin Enum EConfirmScreenType ********************************************************
#define FOREACH_ENUM_ECONFIRMSCREENTYPE(op) \
	op(EConfirmScreenType::Ok) \
	op(EConfirmScreenType::YesNo) \
	op(EConfirmScreenType::OkCancel) \
	op(EConfirmScreenType::Unkown) 

enum class EConfirmScreenType : uint8;
template<> struct TIsUEnumClass<EConfirmScreenType> { enum { Value = true }; };
template<> UE5_FRONTEND_UI_API UEnum* StaticEnum<EConfirmScreenType>();
// ********** End Enum EConfirmScreenType **********************************************************

// ********** Begin Enum EConfirmScreenButtonType **************************************************
#define FOREACH_ENUM_ECONFIRMSCREENBUTTONTYPE(op) \
	op(EConfirmScreenButtonType::Confirmed) \
	op(EConfirmScreenButtonType::Cancelled) \
	op(EConfirmScreenButtonType::Closed) \
	op(EConfirmScreenButtonType::Unkown) 

enum class EConfirmScreenButtonType : uint8;
template<> struct TIsUEnumClass<EConfirmScreenButtonType> { enum { Value = true }; };
template<> UE5_FRONTEND_UI_API UEnum* StaticEnum<EConfirmScreenButtonType>();
// ********** End Enum EConfirmScreenButtonType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
