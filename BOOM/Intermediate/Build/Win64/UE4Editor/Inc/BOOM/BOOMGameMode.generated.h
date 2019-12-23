// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOM_BOOMGameMode_generated_h
#error "BOOMGameMode.generated.h already included, missing '#pragma once' in BOOMGameMode.h"
#endif
#define BOOM_BOOMGameMode_generated_h

#define BOOM_Source_BOOM_BOOMGameMode_h_12_SPARSE_DATA
#define BOOM_Source_BOOM_BOOMGameMode_h_12_RPC_WRAPPERS
#define BOOM_Source_BOOM_BOOMGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BOOM_Source_BOOM_BOOMGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABOOMGameMode(); \
	friend struct Z_Construct_UClass_ABOOMGameMode_Statics; \
public: \
	DECLARE_CLASS(ABOOMGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), BOOM_API) \
	DECLARE_SERIALIZER(ABOOMGameMode)


#define BOOM_Source_BOOM_BOOMGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABOOMGameMode(); \
	friend struct Z_Construct_UClass_ABOOMGameMode_Statics; \
public: \
	DECLARE_CLASS(ABOOMGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), BOOM_API) \
	DECLARE_SERIALIZER(ABOOMGameMode)


#define BOOM_Source_BOOM_BOOMGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOOM_API ABOOMGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABOOMGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOOM_API, ABOOMGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOOM_API ABOOMGameMode(ABOOMGameMode&&); \
	BOOM_API ABOOMGameMode(const ABOOMGameMode&); \
public:


#define BOOM_Source_BOOM_BOOMGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOOM_API ABOOMGameMode(ABOOMGameMode&&); \
	BOOM_API ABOOMGameMode(const ABOOMGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOOM_API, ABOOMGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABOOMGameMode)


#define BOOM_Source_BOOM_BOOMGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define BOOM_Source_BOOM_BOOMGameMode_h_9_PROLOG
#define BOOM_Source_BOOM_BOOMGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMGameMode_h_12_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMGameMode_h_12_RPC_WRAPPERS \
	BOOM_Source_BOOM_BOOMGameMode_h_12_INCLASS \
	BOOM_Source_BOOM_BOOMGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BOOM_Source_BOOM_BOOMGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMGameMode_h_12_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMGameMode_h_12_INCLASS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOM_API UClass* StaticClass<class ABOOMGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BOOM_Source_BOOM_BOOMGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
