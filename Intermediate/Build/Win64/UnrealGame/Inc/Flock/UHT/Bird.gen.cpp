// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flock/Bird.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
FLOCK_API UClass* Z_Construct_UClass_ABird();
FLOCK_API UClass* Z_Construct_UClass_ABird_NoRegister();
UPackage* Z_Construct_UPackage__Script_Flock();
// End Cross Module References

// Begin Class ABird
void ABird::StaticRegisterNativesABird()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABird);
UClass* Z_Construct_UClass_ABird_NoRegister()
{
	return ABird::StaticClass();
}
struct Z_Construct_UClass_ABird_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bird.h" },
		{ "ModuleRelativePath", "Bird.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABird>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABird_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Flock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABird_Statics::ClassParams = {
	&ABird::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::Class_MetaDataParams), Z_Construct_UClass_ABird_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABird()
{
	if (!Z_Registration_Info_UClass_ABird.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABird.OuterSingleton, Z_Construct_UClass_ABird_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABird.OuterSingleton;
}
template<> FLOCK_API UClass* StaticClass<ABird>()
{
	return ABird::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABird);
ABird::~ABird() {}
// End Class ABird

// Begin Registration
struct Z_CompiledInDeferFile_FID_Flock_Source_Flock_Bird_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABird, ABird::StaticClass, TEXT("ABird"), &Z_Registration_Info_UClass_ABird, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABird), 3276867730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Flock_Source_Flock_Bird_h_461689726(TEXT("/Script/Flock"),
	Z_CompiledInDeferFile_FID_Flock_Source_Flock_Bird_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Flock_Source_Flock_Bird_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
