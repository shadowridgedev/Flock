// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flock/NavMeshSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshSpawner() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FLOCK_API UClass* Z_Construct_UClass_ANavMeshSpawner();
FLOCK_API UClass* Z_Construct_UClass_ANavMeshSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Flock();
// End Cross Module References

// Begin Class ANavMeshSpawner
void ANavMeshSpawner::StaticRegisterNativesANavMeshSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavMeshSpawner);
UClass* Z_Construct_UClass_ANavMeshSpawner_NoRegister()
{
	return ANavMeshSpawner::StaticClass();
}
struct Z_Construct_UClass_ANavMeshSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NavMeshSpawner.h" },
		{ "ModuleRelativePath", "NavMeshSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavMeshSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANavMeshSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Flock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavMeshSpawner_Statics::ClassParams = {
	&ANavMeshSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavMeshSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavMeshSpawner()
{
	if (!Z_Registration_Info_UClass_ANavMeshSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavMeshSpawner.OuterSingleton, Z_Construct_UClass_ANavMeshSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavMeshSpawner.OuterSingleton;
}
template<> FLOCK_API UClass* StaticClass<ANavMeshSpawner>()
{
	return ANavMeshSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavMeshSpawner);
ANavMeshSpawner::~ANavMeshSpawner() {}
// End Class ANavMeshSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Flock_Source_Flock_NavMeshSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavMeshSpawner, ANavMeshSpawner::StaticClass, TEXT("ANavMeshSpawner"), &Z_Registration_Info_UClass_ANavMeshSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavMeshSpawner), 3638070172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Flock_Source_Flock_NavMeshSpawner_h_2277159069(TEXT("/Script/Flock"),
	Z_CompiledInDeferFile_FID_Flock_Source_Flock_NavMeshSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Flock_Source_Flock_NavMeshSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
