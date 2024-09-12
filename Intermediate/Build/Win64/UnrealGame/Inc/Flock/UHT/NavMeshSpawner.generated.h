// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMeshSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCK_NavMeshSpawner_generated_h
#error "NavMeshSpawner.generated.h already included, missing '#pragma once' in NavMeshSpawner.h"
#endif
#define FLOCK_NavMeshSpawner_generated_h

#define FID_Flock_Source_Flock_NavMeshSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavMeshSpawner(); \
	friend struct Z_Construct_UClass_ANavMeshSpawner_Statics; \
public: \
	DECLARE_CLASS(ANavMeshSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flock"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshSpawner)


#define FID_Flock_Source_Flock_NavMeshSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavMeshSpawner(ANavMeshSpawner&&); \
	ANavMeshSpawner(const ANavMeshSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavMeshSpawner) \
	NO_API virtual ~ANavMeshSpawner();


#define FID_Flock_Source_Flock_NavMeshSpawner_h_9_PROLOG
#define FID_Flock_Source_Flock_NavMeshSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Flock_Source_Flock_NavMeshSpawner_h_12_INCLASS_NO_PURE_DECLS \
	FID_Flock_Source_Flock_NavMeshSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCK_API UClass* StaticClass<class ANavMeshSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Flock_Source_Flock_NavMeshSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
