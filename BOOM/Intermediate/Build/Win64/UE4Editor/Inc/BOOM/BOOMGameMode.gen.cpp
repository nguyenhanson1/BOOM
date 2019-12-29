// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOOM/BOOMGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBOOMGameMode() {}
// Cross Module References
	BOOM_API UClass* Z_Construct_UClass_ABOOMGameMode_NoRegister();
	BOOM_API UClass* Z_Construct_UClass_ABOOMGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BOOM();
// End Cross Module References
	void ABOOMGameMode::StaticRegisterNativesABOOMGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABOOMGameMode_NoRegister()
	{
		return ABOOMGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABOOMGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABOOMGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BOOM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABOOMGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BOOMGameMode.h" },
		{ "ModuleRelativePath", "BOOMGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABOOMGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOOMGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABOOMGameMode_Statics::ClassParams = {
		&ABOOMGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABOOMGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABOOMGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABOOMGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABOOMGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABOOMGameMode, 3417644013);
	template<> BOOM_API UClass* StaticClass<ABOOMGameMode>()
	{
		return ABOOMGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABOOMGameMode(Z_Construct_UClass_ABOOMGameMode, &ABOOMGameMode::StaticClass, TEXT("/Script/BOOM"), TEXT("ABOOMGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABOOMGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
