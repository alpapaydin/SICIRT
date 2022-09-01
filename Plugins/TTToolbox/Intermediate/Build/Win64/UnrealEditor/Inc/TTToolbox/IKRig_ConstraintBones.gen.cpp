// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTToolbox/Public/IKRig_ConstraintBones.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRig_ConstraintBones() {}
// Cross Module References
	TTTOOLBOX_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintBone();
	UPackage* Z_Construct_UPackage__Script_TTToolbox();
	TTTOOLBOX_API UClass* Z_Construct_UClass_UIKRig_ConstraintBones_NoRegister();
	TTTOOLBOX_API UClass* Z_Construct_UClass_UIKRig_ConstraintBones();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintBone;
class UScriptStruct* FConstraintBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintBone, Z_Construct_UPackage__Script_TTToolbox(), TEXT("ConstraintBone"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintBone.OuterSingleton;
}
template<> TTTOOLBOX_API UScriptStruct* StaticStruct<FConstraintBone>()
{
	return FConstraintBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModifiedBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IKRig_ConstraintBones.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ConstraintBone_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/IKRig_ConstraintBones.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ConstraintBone = { "ConstraintBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintBone, ConstraintBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ConstraintBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ConstraintBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ModifiedBone_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/IKRig_ConstraintBones.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ModifiedBone = { "ModifiedBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintBone, ModifiedBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ModifiedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ModifiedBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ConstraintBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBone_Statics::NewProp_ModifiedBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
		nullptr,
		&NewStructOps,
		"ConstraintBone",
		sizeof(FConstraintBone),
		alignof(FConstraintBone),
		Z_Construct_UScriptStruct_FConstraintBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintBone()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintBone.InnerSingleton, Z_Construct_UScriptStruct_FConstraintBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintBone.InnerSingleton;
	}
	void UIKRig_ConstraintBones::StaticRegisterNativesUIKRig_ConstraintBones()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRig_ConstraintBones);
	UClass* Z_Construct_UClass_UIKRig_ConstraintBones_NoRegister()
	{
		return UIKRig_ConstraintBones::StaticClass();
	}
	struct Z_Construct_UClass_UIKRig_ConstraintBones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRig_ConstraintBones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIKRigSolver,
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_ConstraintBones_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "IKRig_ConstraintBones.h" },
		{ "ModuleRelativePath", "Public/IKRig_ConstraintBones.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones_Inner = { "ConstraintBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConstraintBone, METADATA_PARAMS(nullptr, 0) }; // 3265454557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// exposed members\n" },
		{ "ModuleRelativePath", "Public/IKRig_ConstraintBones.h" },
		{ "ToolTip", "exposed members" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones = { "ConstraintBones", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRig_ConstraintBones, ConstraintBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones_MetaData)) }; // 3265454557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRig_ConstraintBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRig_ConstraintBones_Statics::NewProp_ConstraintBones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRig_ConstraintBones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRig_ConstraintBones>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRig_ConstraintBones_Statics::ClassParams = {
		&UIKRig_ConstraintBones::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRig_ConstraintBones_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_ConstraintBones_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRig_ConstraintBones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRig_ConstraintBones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRig_ConstraintBones()
	{
		if (!Z_Registration_Info_UClass_UIKRig_ConstraintBones.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRig_ConstraintBones.OuterSingleton, Z_Construct_UClass_UIKRig_ConstraintBones_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRig_ConstraintBones.OuterSingleton;
	}
	template<> TTTOOLBOX_API UClass* StaticClass<UIKRig_ConstraintBones>()
	{
		return UIKRig_ConstraintBones::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRig_ConstraintBones);
	struct Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics::ScriptStructInfo[] = {
		{ FConstraintBone::StaticStruct, Z_Construct_UScriptStruct_FConstraintBone_Statics::NewStructOps, TEXT("ConstraintBone"), &Z_Registration_Info_UScriptStruct_ConstraintBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintBone), 3265454557U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRig_ConstraintBones, UIKRig_ConstraintBones::StaticClass, TEXT("UIKRig_ConstraintBones"), &Z_Registration_Info_UClass_UIKRig_ConstraintBones, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRig_ConstraintBones), 3567517482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_876046794(TEXT("/Script/TTToolbox"),
		Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_IKRig_ConstraintBones_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
