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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThirdCharacter::execStopCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execDoCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execStopRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Run();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	void AThirdCharacter::StaticRegisterNativesAThirdCharacter()
	{
		UClass* Class = AThirdCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoCrouch", &AThirdCharacter::execDoCrouch },
			{ "MoveForward", &AThirdCharacter::execMoveForward },
			{ "MoveRight", &AThirdCharacter::execMoveRight },
			{ "Run", &AThirdCharacter::execRun },
			{ "StartJump", &AThirdCharacter::execStartJump },
			{ "StopCrouch", &AThirdCharacter::execStopCrouch },
			{ "StopJump", &AThirdCharacter::execStopJump },
			{ "StopRun", &AThirdCharacter::execStopRun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThirdCharacter_DoCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_DoCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xc9\xb1?\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "?\xc9\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_DoCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "DoCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_DoCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_DoCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_DoCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_DoCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics
	{
		struct ThirdCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ?\xcc\xb5? \xc3\xb3??\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "???? ?\xcc\xb5? \xc3\xb3??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(ThirdCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics
	{
		struct ThirdCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xc2\xbf? ?\xcc\xb5? \xc3\xb3??\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "?\xc2\xbf? ?\xcc\xb5? \xc3\xb3??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(ThirdCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_Run_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_Run_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xde\xb8??? ?\xd3\xb5? ?\xc3\xb8???\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "?\xde\xb8??? ?\xd3\xb5? ?\xc3\xb8???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_StartJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ????, ???? ?\xc3\xb7??? ????\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_StopCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_StopCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ???? ???\xee\xb3\xaa??(?\xcf\xbe\xee\xb3\xaa??)\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "???? ???? ???\xee\xb3\xaa??(?\xcf\xbe\xee\xb3\xaa??)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_StopCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "StopCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_StopCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_StopCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_StopCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_StopCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ??, ???? ?\xc3\xb7??? ????\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdCharacter_StopRun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdCharacter_StopRun_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xde\xb8??? ?\xd3\xb5? ???????? ?\xd9\xb2\xd9\xb1?\n" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "?\xde\xb8??? ?\xd3\xb5? ???????? ?\xd9\xb2\xd9\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdCharacter_StopRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdCharacter, nullptr, "StopRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdCharacter_StopRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdCharacter_StopRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdCharacter_StopRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdCharacter_StopRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThirdCharacter_NoRegister()
	{
		return AThirdCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonToyPrj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThirdCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdCharacter_DoCrouch, "DoCrouch" }, // 958039098
		{ &Z_Construct_UFunction_AThirdCharacter_MoveForward, "MoveForward" }, // 3209732552
		{ &Z_Construct_UFunction_AThirdCharacter_MoveRight, "MoveRight" }, // 2698489490
		{ &Z_Construct_UFunction_AThirdCharacter_Run, "Run" }, // 2521673265
		{ &Z_Construct_UFunction_AThirdCharacter_StartJump, "StartJump" }, // 11070546
		{ &Z_Construct_UFunction_AThirdCharacter_StopCrouch, "StopCrouch" }, // 3546483046
		{ &Z_Construct_UFunction_AThirdCharacter_StopJump, "StopJump" }, // 2386904030
		{ &Z_Construct_UFunction_AThirdCharacter_StopRun, "StopRun" }, // 2995518648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdCharacter.h" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "camera" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ??????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdCharacter_Statics::NewProp_ThirdCameraComponent_MetaData[] = {
		{ "Category", "camera" },
		{ "Comment", "// \xc4\xab?\xde\xb6?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdCharacter_Statics::NewProp_ThirdCameraComponent = { "ThirdCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdCharacter, ThirdCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdCharacter_Statics::NewProp_ThirdCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdCharacter_Statics::NewProp_ThirdCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdCharacter_Statics::NewProp_ThirdCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdCharacter_Statics::ClassParams = {
		&AThirdCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThirdCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdCharacter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AThirdCharacter, 2334644223);
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
