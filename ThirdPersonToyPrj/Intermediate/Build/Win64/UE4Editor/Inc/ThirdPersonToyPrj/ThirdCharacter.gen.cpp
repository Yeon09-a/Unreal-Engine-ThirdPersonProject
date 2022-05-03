// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonToyPrj/ThirdCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdCharacter() {}
// Cross Module References
	THIRDPERSONTOYPRJ_API UClass* Z_Construct_UClass_AThirdCharacter_NoRegister();
	THIRDPERSONTOYPRJ_API UClass* Z_Construct_UClass_AThirdCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonToyPrj();
// End Cross Module References
	void AThirdCharacter::StaticRegisterNativesAThirdCharacter()
	{
	}
	UClass* Z_Construct_UClass_AThirdCharacter_NoRegister()
	{
		return AThirdCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonToyPrj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdCharacter.h" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdCharacter_Statics::ClassParams = {
		&AThirdCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThirdCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdCharacter, 2825176794);
	template<> THIRDPERSONTOYPRJ_API UClass* StaticClass<AThirdCharacter>()
	{
		return AThirdCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdCharacter(Z_Construct_UClass_AThirdCharacter, &AThirdCharacter::StaticClass, TEXT("/Script/ThirdPersonToyPrj"), TEXT("AThirdCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
