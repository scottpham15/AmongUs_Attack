// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerTemplate_init() {}
	MULTIPLAYERTEMPLATE_API UFunction* Z_Construct_UDelegateFunction_MultiplayerTemplate_MinimapEntryRemove__DelegateSignature();
	MULTIPLAYERTEMPLATE_API UFunction* Z_Construct_UDelegateFunction_MultiplayerTemplate_NewMinimapEntry__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerTemplate;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerTemplate()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerTemplate.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerTemplate_MinimapEntryRemove__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerTemplate_NewMinimapEntry__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerTemplate",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAC84249B,
				0x25588C00,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerTemplate.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerTemplate.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerTemplate(Z_Construct_UPackage__Script_MultiplayerTemplate, TEXT("/Script/MultiplayerTemplate"), Z_Registration_Info_UPackage__Script_MultiplayerTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAC84249B, 0x25588C00));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
