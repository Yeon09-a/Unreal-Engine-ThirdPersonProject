// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonToyPrj/ThirdPersonToyPrjGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonToyPrjGameModeBase() {}
// Cross Module References
	THIRDPERSONTOYPRJ_API UClass* Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_NoRegister();
	THIRDPERSONTOYPRJ_API UClass* Z_Construct_UClass_AThirdPersonToyPrjGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonToyPrj();
// End Cross Module References
	void AThirdPersonToyPrjGameModeBase::StaticRegisterNativesAThirdPersonToyPrjGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_NoRegister()
	{
		return AThirdPersonToyPrjGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonToyPrj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThirdPersonToyPrjGameModeBase.h" },
		{ "ModuleRelativePath", "ThirdPersonToyPrjGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonToyPrjGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::ClassParams = {
		&AThirdPersonToyPrjGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonToyPrjGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonToyPrjGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonToyPrjGameModeBase, 3291639580);
	template<> THIRDPERSONTOYPRJ_API UClass* StaticClass<AThirdPersonToyPrjGameModeBase>()
	{
		return AThirdPersonToyPrjGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonToyPrjGameModeBase(Z_Construct_UClass_AThirdPersonToyPrjGameModeBase, &AThirdPersonToyPrjGameModeBase::StaticClass, TEXT("/Script/ThirdPersonToyPrj"), TEXT("AThirdPersonToyPrjGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonToyPrjGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
