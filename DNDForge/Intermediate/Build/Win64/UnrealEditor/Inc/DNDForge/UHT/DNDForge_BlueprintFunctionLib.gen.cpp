// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DNDForge/Public/DNDForge_BlueprintFunctionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNDForge_BlueprintFunctionLib() {}
// Cross Module References
	DNDFORGE_API UClass* Z_Construct_UClass_UDNDForge_BlueprintFunctionLib();
	DNDFORGE_API UClass* Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DNDForge();
// End Cross Module References
	DEFINE_FUNCTION(UDNDForge_BlueprintFunctionLib::execGetAllSaveSlotNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UDNDForge_BlueprintFunctionLib::GetAllSaveSlotNames();
		P_NATIVE_END;
	}
	void UDNDForge_BlueprintFunctionLib::StaticRegisterNativesUDNDForge_BlueprintFunctionLib()
	{
		UClass* Class = UDNDForge_BlueprintFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSaveSlotNames", &UDNDForge_BlueprintFunctionLib::execGetAllSaveSlotNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics
	{
		struct DNDForge_BlueprintFunctionLib_eventGetAllSaveSlotNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DNDForge_BlueprintFunctionLib_eventGetAllSaveSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/DNDForge_BlueprintFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDNDForge_BlueprintFunctionLib, nullptr, "GetAllSaveSlotNames", nullptr, nullptr, Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::DNDForge_BlueprintFunctionLib_eventGetAllSaveSlotNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::DNDForge_BlueprintFunctionLib_eventGetAllSaveSlotNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNDForge_BlueprintFunctionLib);
	UClass* Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_NoRegister()
	{
		return UDNDForge_BlueprintFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DNDForge,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDNDForge_BlueprintFunctionLib_GetAllSaveSlotNames, "GetAllSaveSlotNames" }, // 175638002
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DNDForge_BlueprintFunctionLib.h" },
		{ "ModuleRelativePath", "Public/DNDForge_BlueprintFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNDForge_BlueprintFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::ClassParams = {
		&UDNDForge_BlueprintFunctionLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDNDForge_BlueprintFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UDNDForge_BlueprintFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNDForge_BlueprintFunctionLib.OuterSingleton, Z_Construct_UClass_UDNDForge_BlueprintFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDNDForge_BlueprintFunctionLib.OuterSingleton;
	}
	template<> DNDFORGE_API UClass* StaticClass<UDNDForge_BlueprintFunctionLib>()
	{
		return UDNDForge_BlueprintFunctionLib::StaticClass();
	}
	UDNDForge_BlueprintFunctionLib::UDNDForge_BlueprintFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDNDForge_BlueprintFunctionLib);
	UDNDForge_BlueprintFunctionLib::~UDNDForge_BlueprintFunctionLib() {}
	struct Z_CompiledInDeferFile_FID_Development_Games_RGP204_Assessment3_DNDForge_Source_DNDForge_Public_DNDForge_BlueprintFunctionLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Development_Games_RGP204_Assessment3_DNDForge_Source_DNDForge_Public_DNDForge_BlueprintFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDNDForge_BlueprintFunctionLib, UDNDForge_BlueprintFunctionLib::StaticClass, TEXT("UDNDForge_BlueprintFunctionLib"), &Z_Registration_Info_UClass_UDNDForge_BlueprintFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNDForge_BlueprintFunctionLib), 236722652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Development_Games_RGP204_Assessment3_DNDForge_Source_DNDForge_Public_DNDForge_BlueprintFunctionLib_h_4139426213(TEXT("/Script/DNDForge"),
		Z_CompiledInDeferFile_FID_Development_Games_RGP204_Assessment3_DNDForge_Source_DNDForge_Public_DNDForge_BlueprintFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Development_Games_RGP204_Assessment3_DNDForge_Source_DNDForge_Public_DNDForge_BlueprintFunctionLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
