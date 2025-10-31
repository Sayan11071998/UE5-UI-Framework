// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Frontend_UI_init() {}
	UE5_FRONTEND_UI_API UFunction* Z_Construct_UDelegateFunction_UE5_Frontend_UI_OnPushSoftWidgetDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_Frontend_UI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_Frontend_UI()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_Frontend_UI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_Frontend_UI_OnPushSoftWidgetDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_Frontend_UI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5309BCEF,
				0x02B8A472,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_Frontend_UI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_Frontend_UI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_Frontend_UI(Z_Construct_UPackage__Script_UE5_Frontend_UI, TEXT("/Script/UE5_Frontend_UI"), Z_Registration_Info_UPackage__Script_UE5_Frontend_UI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5309BCEF, 0x02B8A472));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
