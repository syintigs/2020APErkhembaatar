// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "English20Time/English20TimeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnglish20TimeGameModeBase() {}
// Cross Module References
	ENGLISH20TIME_API UClass* Z_Construct_UClass_AEnglish20TimeGameModeBase_NoRegister();
	ENGLISH20TIME_API UClass* Z_Construct_UClass_AEnglish20TimeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_English20Time();
// End Cross Module References
	void AEnglish20TimeGameModeBase::StaticRegisterNativesAEnglish20TimeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEnglish20TimeGameModeBase_NoRegister()
	{
		return AEnglish20TimeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_English20Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "English20TimeGameModeBase.h" },
		{ "ModuleRelativePath", "English20TimeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnglish20TimeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::ClassParams = {
		&AEnglish20TimeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnglish20TimeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnglish20TimeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnglish20TimeGameModeBase, 852271202);
	template<> ENGLISH20TIME_API UClass* StaticClass<AEnglish20TimeGameModeBase>()
	{
		return AEnglish20TimeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnglish20TimeGameModeBase(Z_Construct_UClass_AEnglish20TimeGameModeBase, &AEnglish20TimeGameModeBase::StaticClass, TEXT("/Script/English20Time"), TEXT("AEnglish20TimeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnglish20TimeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
