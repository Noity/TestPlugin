// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoiPlugin/Public/TestComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestComponent() {}
// Cross Module References
	NOIPLUGIN_API UClass* Z_Construct_UClass_UTestComponent_NoRegister();
	NOIPLUGIN_API UClass* Z_Construct_UClass_UTestComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoiPlugin();
// End Cross Module References
	void UTestComponent::StaticRegisterNativesUTestComponent()
	{
	}
	UClass* Z_Construct_UClass_UTestComponent_NoRegister()
	{
		return UTestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoiPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TestComponent.h" },
		{ "ModuleRelativePath", "Public/TestComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestComponent_Statics::ClassParams = {
		&UTestComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestComponent, 4262091954);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestComponent(Z_Construct_UClass_UTestComponent, &UTestComponent::StaticClass, TEXT("/Script/NoiPlugin"), TEXT("UTestComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
