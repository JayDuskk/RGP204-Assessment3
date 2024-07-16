// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNDForge_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DNDForge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DNDForge()
	{
		if (!Z_Registration_Info_UPackage__Script_DNDForge.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DNDForge",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8A9EB581,
				0x8859E57E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DNDForge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DNDForge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DNDForge(Z_Construct_UPackage__Script_DNDForge, TEXT("/Script/DNDForge"), Z_Registration_Info_UPackage__Script_DNDForge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8A9EB581, 0x8859E57E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
