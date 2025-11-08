// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendTypes/FrontendEnumTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendEnumTypes() {}

// ********** Begin Cross Module References ********************************************************
UE5_FRONTEND_UI_API UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType();
UE5_FRONTEND_UI_API UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType();
UE5_FRONTEND_UI_API UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason();
UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EConfirmScreenType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConfirmScreenType;
static UEnum* EConfirmScreenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConfirmScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType, (UObject*)Z_Construct_UPackage__Script_UE5_Frontend_UI(), TEXT("EConfirmScreenType"));
	}
	return Z_Registration_Info_UEnum_EConfirmScreenType.OuterSingleton;
}
template<> UE5_FRONTEND_UI_API UEnum* StaticEnum<EConfirmScreenType>()
{
	return EConfirmScreenType_StaticEnum();
}
struct Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FrontendTypes/FrontendEnumTypes.h" },
		{ "Ok.Name", "EConfirmScreenType::Ok" },
		{ "OkCancel.Name", "EConfirmScreenType::OkCancel" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EConfirmScreenType::Unknown" },
		{ "YesNo.Name", "EConfirmScreenType::YesNo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConfirmScreenType::Ok", (int64)EConfirmScreenType::Ok },
		{ "EConfirmScreenType::YesNo", (int64)EConfirmScreenType::YesNo },
		{ "EConfirmScreenType::OkCancel", (int64)EConfirmScreenType::OkCancel },
		{ "EConfirmScreenType::Unknown", (int64)EConfirmScreenType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
	nullptr,
	"EConfirmScreenType",
	"EConfirmScreenType",
	Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConfirmScreenType.InnerSingleton, Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConfirmScreenType.InnerSingleton;
}
// ********** End Enum EConfirmScreenType **********************************************************

// ********** Begin Enum EConfirmScreenButtonType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConfirmScreenButtonType;
static UEnum* EConfirmScreenButtonType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenButtonType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConfirmScreenButtonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType, (UObject*)Z_Construct_UPackage__Script_UE5_Frontend_UI(), TEXT("EConfirmScreenButtonType"));
	}
	return Z_Registration_Info_UEnum_EConfirmScreenButtonType.OuterSingleton;
}
template<> UE5_FRONTEND_UI_API UEnum* StaticEnum<EConfirmScreenButtonType>()
{
	return EConfirmScreenButtonType_StaticEnum();
}
struct Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EConfirmScreenButtonType::Cancelled" },
		{ "Closed.Name", "EConfirmScreenButtonType::Closed" },
		{ "Confirmed.Name", "EConfirmScreenButtonType::Confirmed" },
		{ "ModuleRelativePath", "Public/FrontendTypes/FrontendEnumTypes.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EConfirmScreenButtonType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConfirmScreenButtonType::Confirmed", (int64)EConfirmScreenButtonType::Confirmed },
		{ "EConfirmScreenButtonType::Cancelled", (int64)EConfirmScreenButtonType::Cancelled },
		{ "EConfirmScreenButtonType::Closed", (int64)EConfirmScreenButtonType::Closed },
		{ "EConfirmScreenButtonType::Unknown", (int64)EConfirmScreenButtonType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
	nullptr,
	"EConfirmScreenButtonType",
	"EConfirmScreenButtonType",
	Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType()
{
	if (!Z_Registration_Info_UEnum_EConfirmScreenButtonType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConfirmScreenButtonType.InnerSingleton, Z_Construct_UEnum_UE5_Frontend_UI_EConfirmScreenButtonType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConfirmScreenButtonType.InnerSingleton;
}
// ********** End Enum EConfirmScreenButtonType ****************************************************

// ********** Begin Enum EOptionsListDataModifyReason **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptionsListDataModifyReason;
static UEnum* EOptionsListDataModifyReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptionsListDataModifyReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptionsListDataModifyReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason, (UObject*)Z_Construct_UPackage__Script_UE5_Frontend_UI(), TEXT("EOptionsListDataModifyReason"));
	}
	return Z_Registration_Info_UEnum_EOptionsListDataModifyReason.OuterSingleton;
}
template<> UE5_FRONTEND_UI_API UEnum* StaticEnum<EOptionsListDataModifyReason>()
{
	return EOptionsListDataModifyReason_StaticEnum();
}
struct Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DependencyModified.Name", "EOptionsListDataModifyReason::DependencyModified" },
		{ "DirectlyModified.Name", "EOptionsListDataModifyReason::DirectlyModified" },
		{ "ModuleRelativePath", "Public/FrontendTypes/FrontendEnumTypes.h" },
		{ "ResetToDefault.Name", "EOptionsListDataModifyReason::ResetToDefault" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptionsListDataModifyReason::DirectlyModified", (int64)EOptionsListDataModifyReason::DirectlyModified },
		{ "EOptionsListDataModifyReason::DependencyModified", (int64)EOptionsListDataModifyReason::DependencyModified },
		{ "EOptionsListDataModifyReason::ResetToDefault", (int64)EOptionsListDataModifyReason::ResetToDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE5_Frontend_UI,
	nullptr,
	"EOptionsListDataModifyReason",
	"EOptionsListDataModifyReason",
	Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason()
{
	if (!Z_Registration_Info_UEnum_EOptionsListDataModifyReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptionsListDataModifyReason.InnerSingleton, Z_Construct_UEnum_UE5_Frontend_UI_EOptionsListDataModifyReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptionsListDataModifyReason.InnerSingleton;
}
// ********** End Enum EOptionsListDataModifyReason ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendEnumTypes_h__Script_UE5_Frontend_UI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConfirmScreenType_StaticEnum, TEXT("EConfirmScreenType"), &Z_Registration_Info_UEnum_EConfirmScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4177383571U) },
		{ EConfirmScreenButtonType_StaticEnum, TEXT("EConfirmScreenButtonType"), &Z_Registration_Info_UEnum_EConfirmScreenButtonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260937155U) },
		{ EOptionsListDataModifyReason_StaticEnum, TEXT("EOptionsListDataModifyReason"), &Z_Registration_Info_UEnum_EOptionsListDataModifyReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 697031540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendEnumTypes_h__Script_UE5_Frontend_UI_1397784848(TEXT("/Script/UE5_Frontend_UI"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendEnumTypes_h__Script_UE5_Frontend_UI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_UI_Framework_UE5_Frontend_UI_Source_UE5_Frontend_UI_Public_FrontendTypes_FrontendEnumTypes_h__Script_UE5_Frontend_UI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
