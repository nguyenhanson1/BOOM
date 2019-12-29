// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOM_BOOMHUD_generated_h
#error "BOOMHUD.generated.h already included, missing '#pragma once' in BOOMHUD.h"
#endif
#define BOOM_BOOMHUD_generated_h

#define BOOM_Source_BOOM_BOOMHUD_h_12_SPARSE_DATA
#define BOOM_Source_BOOM_BOOMHUD_h_12_RPC_WRAPPERS
#define BOOM_Source_BOOM_BOOMHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BOOM_Source_BOOM_BOOMHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABOOMHUD(); \
	friend struct Z_Construct_UClass_ABOOMHUD_Statics; \
public: \
	DECLARE_CLASS(ABOOMHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), NO_API) \
	DECLARE_SERIALIZER(ABOOMHUD)


#define BOOM_Source_BOOM_BOOMHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABOOMHUD(); \
	friend struct Z_Construct_UClass_ABOOMHUD_Statics; \
public: \
	DECLARE_CLASS(ABOOMHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), NO_API) \
	DECLARE_SERIALIZER(ABOOMHUD)


#define BOOM_Source_BOOM_BOOMHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABOOMHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABOOMHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOOMHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABOOMHUD(ABOOMHUD&&); \
	NO_API ABOOMHUD(const ABOOMHUD&); \
public:


#define BOOM_Source_BOOM_BOOMHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABOOMHUD(ABOOMHUD&&); \
	NO_API ABOOMHUD(const ABOOMHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOOMHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABOOMHUD)


#define BOOM_Source_BOOM_BOOMHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define BOOM_Source_BOOM_BOOMHUD_h_9_PROLOG
#define BOOM_Source_BOOM_BOOMHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMHUD_h_12_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMHUD_h_12_RPC_WRAPPERS \
	BOOM_Source_BOOM_BOOMHUD_h_12_INCLASS \
	BOOM_Source_BOOM_BOOMHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BOOM_Source_BOOM_BOOMHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMHUD_h_12_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMHUD_h_12_INCLASS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOM_API UClass* StaticClass<class ABOOMHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BOOM_Source_BOOM_BOOMHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
