// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsolePlugin/Public/Terminal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerminal() {}
// Cross Module References
	CONSOLEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ConsolePlugin();
	CONSOLEPLUGIN_API UClass* Z_Construct_UClass_UTerminal_NoRegister();
	CONSOLEPLUGIN_API UClass* Z_Construct_UClass_UTerminal();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	CONSOLEPLUGIN_API UFunction* Z_Construct_UFunction_UTerminal_ActivateTerminal();
	CONSOLEPLUGIN_API UFunction* Z_Construct_UFunction_UTerminal_DeactivateTerminal();
	CONSOLEPLUGIN_API UFunction* Z_Construct_UFunction_UTerminal_GetScreenText();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics
	{
		struct _Script_ConsolePlugin_eventTextUpdateSignature_Parms
		{
			FString Text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ConsolePlugin_eventTextUpdateSignature_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ConsolePlugin, nullptr, "TextUpdateSignature__DelegateSignature", sizeof(_Script_ConsolePlugin_eventTextUpdateSignature_Parms), Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UTerminal::StaticRegisterNativesUTerminal()
	{
		UClass* Class = UTerminal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTerminal", &UTerminal::execActivateTerminal },
			{ "DeactivateTerminal", &UTerminal::execDeactivateTerminal },
			{ "GetScreenText", &UTerminal::execGetScreenText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTerminal_ActivateTerminal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerminal_ActivateTerminal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerminal_ActivateTerminal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerminal, nullptr, "ActivateTerminal", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerminal_ActivateTerminal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTerminal_ActivateTerminal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerminal_ActivateTerminal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerminal_ActivateTerminal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerminal_DeactivateTerminal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerminal_DeactivateTerminal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerminal_DeactivateTerminal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerminal, nullptr, "DeactivateTerminal", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerminal_DeactivateTerminal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTerminal_DeactivateTerminal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerminal_DeactivateTerminal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerminal_DeactivateTerminal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerminal_GetScreenText_Statics
	{
		struct Terminal_eventGetScreenText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTerminal_GetScreenText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terminal_eventGetScreenText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerminal_GetScreenText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerminal_GetScreenText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerminal_GetScreenText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerminal_GetScreenText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerminal, nullptr, "GetScreenText", sizeof(Terminal_eventGetScreenText_Parms), Z_Construct_UFunction_UTerminal_GetScreenText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTerminal_GetScreenText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerminal_GetScreenText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTerminal_GetScreenText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerminal_GetScreenText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerminal_GetScreenText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTerminal_NoRegister()
	{
		return UTerminal::StaticClass();
	}
	struct Z_Construct_UClass_UTerminal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TextUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerminal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsolePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTerminal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTerminal_ActivateTerminal, "ActivateTerminal" }, // 3920771570
		{ &Z_Construct_UFunction_UTerminal_DeactivateTerminal, "DeactivateTerminal" }, // 2110958853
		{ &Z_Construct_UFunction_UTerminal_GetScreenText, "GetScreenText" }, // 1805939993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerminal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Terminal.h" },
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerminal_Statics::NewProp_MaxColumns_MetaData[] = {
		{ "Category", "Terminal" },
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTerminal_Statics::NewProp_MaxColumns = { "MaxColumns", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerminal, MaxColumns), METADATA_PARAMS(Z_Construct_UClass_UTerminal_Statics::NewProp_MaxColumns_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTerminal_Statics::NewProp_MaxColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerminal_Statics::NewProp_MaxLines_MetaData[] = {
		{ "Category", "Terminal" },
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTerminal_Statics::NewProp_MaxLines = { "MaxLines", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerminal, MaxLines), METADATA_PARAMS(Z_Construct_UClass_UTerminal_Statics::NewProp_MaxLines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTerminal_Statics::NewProp_MaxLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerminal_Statics::NewProp_TextUpdated_MetaData[] = {
		{ "Category", "Terminal" },
		{ "ModuleRelativePath", "Public/Terminal.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTerminal_Statics::NewProp_TextUpdated = { "TextUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerminal, TextUpdated), Z_Construct_UDelegateFunction_ConsolePlugin_TextUpdateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTerminal_Statics::NewProp_TextUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTerminal_Statics::NewProp_TextUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerminal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerminal_Statics::NewProp_MaxColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerminal_Statics::NewProp_MaxLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerminal_Statics::NewProp_TextUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerminal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerminal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTerminal_Statics::ClassParams = {
		&UTerminal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTerminal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTerminal_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTerminal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTerminal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTerminal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTerminal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTerminal, 270309198);
	template<> CONSOLEPLUGIN_API UClass* StaticClass<UTerminal>()
	{
		return UTerminal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTerminal(Z_Construct_UClass_UTerminal, &UTerminal::StaticClass, TEXT("/Script/ConsolePlugin"), TEXT("UTerminal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerminal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
