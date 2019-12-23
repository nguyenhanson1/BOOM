// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOM_BOOMCharacter_generated_h
#error "BOOMCharacter.generated.h already included, missing '#pragma once' in BOOMCharacter.h"
#endif
#define BOOM_BOOMCharacter_generated_h

#define BOOM_Source_BOOM_BOOMCharacter_h_14_SPARSE_DATA
#define BOOM_Source_BOOM_BOOMCharacter_h_14_RPC_WRAPPERS
#define BOOM_Source_BOOM_BOOMCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BOOM_Source_BOOM_BOOMCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABOOMCharacter(); \
	friend struct Z_Construct_UClass_ABOOMCharacter_Statics; \
public: \
	DECLARE_CLASS(ABOOMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), NO_API) \
	DECLARE_SERIALIZER(ABOOMCharacter)


#define BOOM_Source_BOOM_BOOMCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABOOMCharacter(); \
	friend struct Z_Construct_UClass_ABOOMCharacter_Statics; \
public: \
	DECLARE_CLASS(ABOOMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), NO_API) \
	DECLARE_SERIALIZER(ABOOMCharacter)


#define BOOM_Source_BOOM_BOOMCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABOOMCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABOOMCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOOMCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABOOMCharacter(ABOOMCharacter&&); \
	NO_API ABOOMCharacter(const ABOOMCharacter&); \
public:


#define BOOM_Source_BOOM_BOOMCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABOOMCharacter(ABOOMCharacter&&); \
	NO_API ABOOMCharacter(const ABOOMCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOOMCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABOOMCharacter)


#define BOOM_Source_BOOM_BOOMCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ABOOMCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ABOOMCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ABOOMCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ABOOMCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ABOOMCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ABOOMCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ABOOMCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ABOOMCharacter, L_MotionController); }


#define BOOM_Source_BOOM_BOOMCharacter_h_11_PROLOG
#define BOOM_Source_BOOM_BOOMCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMCharacter_h_14_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMCharacter_h_14_RPC_WRAPPERS \
	BOOM_Source_BOOM_BOOMCharacter_h_14_INCLASS \
	BOOM_Source_BOOM_BOOMCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BOOM_Source_BOOM_BOOMCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMCharacter_h_14_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMCharacter_h_14_INCLASS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOM_API UClass* StaticClass<class ABOOMCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BOOM_Source_BOOM_BOOMCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
