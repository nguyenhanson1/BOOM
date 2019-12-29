// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BOOM_BOOMProjectile_generated_h
#error "BOOMProjectile.generated.h already included, missing '#pragma once' in BOOMProjectile.h"
#endif
#define BOOM_BOOMProjectile_generated_h

#define BOOM_Source_BOOM_BOOMProjectile_h_12_SPARSE_DATA
#define BOOM_Source_BOOM_BOOMProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BOOM_Source_BOOM_BOOMProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BOOM_Source_BOOM_BOOMProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABOOMProjectile(); \
	friend struct Z_Construct_UClass_ABOOMProjectile_Statics; \
public: \
	DECLARE_CLASS(ABOOMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), NO_API) \
	DECLARE_SERIALIZER(ABOOMProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BOOM_Source_BOOM_BOOMProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABOOMProjectile(); \
	friend struct Z_Construct_UClass_ABOOMProjectile_Statics; \
public: \
	DECLARE_CLASS(ABOOMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BOOM"), NO_API) \
	DECLARE_SERIALIZER(ABOOMProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BOOM_Source_BOOM_BOOMProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABOOMProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABOOMProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOOMProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABOOMProjectile(ABOOMProjectile&&); \
	NO_API ABOOMProjectile(const ABOOMProjectile&); \
public:


#define BOOM_Source_BOOM_BOOMProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABOOMProjectile(ABOOMProjectile&&); \
	NO_API ABOOMProjectile(const ABOOMProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOOMProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOOMProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABOOMProjectile)


#define BOOM_Source_BOOM_BOOMProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABOOMProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABOOMProjectile, ProjectileMovement); }


#define BOOM_Source_BOOM_BOOMProjectile_h_9_PROLOG
#define BOOM_Source_BOOM_BOOMProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMProjectile_h_12_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMProjectile_h_12_RPC_WRAPPERS \
	BOOM_Source_BOOM_BOOMProjectile_h_12_INCLASS \
	BOOM_Source_BOOM_BOOMProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BOOM_Source_BOOM_BOOMProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BOOM_Source_BOOM_BOOMProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BOOM_Source_BOOM_BOOMProjectile_h_12_SPARSE_DATA \
	BOOM_Source_BOOM_BOOMProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMProjectile_h_12_INCLASS_NO_PURE_DECLS \
	BOOM_Source_BOOM_BOOMProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOM_API UClass* StaticClass<class ABOOMProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BOOM_Source_BOOM_BOOMProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
