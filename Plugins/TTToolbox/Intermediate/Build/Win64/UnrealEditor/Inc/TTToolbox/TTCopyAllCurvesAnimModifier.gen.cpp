// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTToolbox/Public/TTCopyAllCurvesAnimModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTCopyAllCurvesAnimModifier() {}
// Cross Module References
	TTTOOLBOX_API UClass* Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_NoRegister();
	TTTOOLBOX_API UClass* Z_Construct_UClass_UTTCopyAllCurvesAnimModifier();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_TTToolbox();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UTTCopyAllCurvesAnimModifier::StaticRegisterNativesUTTCopyAllCurvesAnimModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTTCopyAllCurvesAnimModifier);
	UClass* Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_NoRegister()
	{
		return UTTCopyAllCurvesAnimModifier::StaticClass();
	}
	struct Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TTCopyAllCurvesAnimModifier.h" },
		{ "ModuleRelativePath", "Public/TTCopyAllCurvesAnimModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// members\n" },
		{ "ModuleRelativePath", "Public/TTCopyAllCurvesAnimModifier.h" },
		{ "ToolTip", "members" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTCopyAllCurvesAnimModifier, SourceSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::NewProp_SourceSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::NewProp_SourceSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::NewProp_SourceSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTCopyAllCurvesAnimModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::ClassParams = {
		&UTTCopyAllCurvesAnimModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTCopyAllCurvesAnimModifier()
	{
		if (!Z_Registration_Info_UClass_UTTCopyAllCurvesAnimModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTTCopyAllCurvesAnimModifier.OuterSingleton, Z_Construct_UClass_UTTCopyAllCurvesAnimModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTTCopyAllCurvesAnimModifier.OuterSingleton;
	}
	template<> TTTOOLBOX_API UClass* StaticClass<UTTCopyAllCurvesAnimModifier>()
	{
		return UTTCopyAllCurvesAnimModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTCopyAllCurvesAnimModifier);
	struct Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTCopyAllCurvesAnimModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTCopyAllCurvesAnimModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTTCopyAllCurvesAnimModifier, UTTCopyAllCurvesAnimModifier::StaticClass, TEXT("UTTCopyAllCurvesAnimModifier"), &Z_Registration_Info_UClass_UTTCopyAllCurvesAnimModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTTCopyAllCurvesAnimModifier), 2942066798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTCopyAllCurvesAnimModifier_h_3606959139(TEXT("/Script/TTToolbox"),
		Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTCopyAllCurvesAnimModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTCopyAllCurvesAnimModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
