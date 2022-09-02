// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTToolbox/Public/TTToolboxBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTToolboxBlueprintLibrary() {}
// Cross Module References
	TTTOOLBOX_API UScriptStruct* Z_Construct_UScriptStruct_FBoneChain_BP();
	UPackage* Z_Construct_UPackage__Script_TTToolbox();
	TTTOOLBOX_API UScriptStruct* Z_Construct_UScriptStruct_FTTNewBone_BP();
	TTTOOLBOX_API UScriptStruct* Z_Construct_UScriptStruct_FTTConstraintBone_BP();
	TTTOOLBOX_API UClass* Z_Construct_UClass_UTTToolboxBlueprintLibrary_NoRegister();
	TTTOOLBOX_API UClass* Z_Construct_UClass_UTTToolboxBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneChain_BP;
class UScriptStruct* FBoneChain_BP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneChain_BP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneChain_BP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneChain_BP, Z_Construct_UPackage__Script_TTToolbox(), TEXT("BoneChain_BP"));
	}
	return Z_Registration_Info_UScriptStruct_BoneChain_BP.OuterSingleton;
}
template<> TTTOOLBOX_API UScriptStruct* StaticStruct<FBoneChain_BP>()
{
	return FBoneChain_BP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneChain_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKGoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKGoalName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Helper stucture that is exposed to Blueprints to be independent from the ik rig implementation.\n// Additionally, this can be reused in data tables to store the bone chains.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "Helper stucture that is exposed to Blueprints to be independent from the ik rig implementation.\nAdditionally, this can be reused in data tables to store the bone chains." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneChain_BP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_ChainName_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "Comment", "// stores the bone chain name that will be shown in the ik rig asset editor window\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "stores the bone chain name that will be shown in the ik rig asset editor window" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneChain_BP, ChainName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "Comment", "// stores the beginning bone name of the bone chain\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "stores the beginning bone name of the bone chain" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneChain_BP, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "Comment", "// stores the ending bone name of the bone chain\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "stores the ending bone name of the bone chain" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneChain_BP, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_IKGoalName_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "// stores the ik goal name that is visible in the ik rig asset editor window\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "stores the ik goal name that is visible in the ik rig asset editor window" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_IKGoalName = { "IKGoalName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneChain_BP, IKGoalName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_IKGoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_IKGoalName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneChain_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewProp_IKGoalName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneChain_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
		nullptr,
		&NewStructOps,
		"BoneChain_BP",
		sizeof(FBoneChain_BP),
		alignof(FBoneChain_BP),
		Z_Construct_UScriptStruct_FBoneChain_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneChain_BP()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneChain_BP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneChain_BP.InnerSingleton, Z_Construct_UScriptStruct_FBoneChain_BP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneChain_BP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTNewBone_BP;
class UScriptStruct* FTTNewBone_BP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTNewBone_BP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTNewBone_BP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTNewBone_BP, Z_Construct_UPackage__Script_TTToolbox(), TEXT("TTNewBone_BP"));
	}
	return Z_Registration_Info_UScriptStruct_TTNewBone_BP.OuterSingleton;
}
template<> TTTOOLBOX_API UScriptStruct* StaticStruct<FTTNewBone_BP>()
{
	return FTTNewBone_BP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTNewBone_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTNewBone_BP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_NewBoneName_MetaData[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_NewBoneName = { "NewBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTNewBone_BP, NewBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_NewBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_NewBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ParentBone_MetaData[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ParentBone = { "ParentBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTNewBone_BP, ParentBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ParentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ParentBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ConstraintBone_MetaData[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ConstraintBone = { "ConstraintBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTNewBone_BP, ConstraintBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ConstraintBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ConstraintBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_NewBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ParentBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewProp_ConstraintBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
		nullptr,
		&NewStructOps,
		"TTNewBone_BP",
		sizeof(FTTNewBone_BP),
		alignof(FTTNewBone_BP),
		Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTNewBone_BP()
	{
		if (!Z_Registration_Info_UScriptStruct_TTNewBone_BP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTNewBone_BP.InnerSingleton, Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTNewBone_BP.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTConstraintBone_BP;
class UScriptStruct* FTTConstraintBone_BP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTConstraintBone_BP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTConstraintBone_BP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTConstraintBone_BP, Z_Construct_UPackage__Script_TTToolbox(), TEXT("TTConstraintBone_BP"));
	}
	return Z_Registration_Info_UScriptStruct_TTConstraintBone_BP.OuterSingleton;
}
template<> TTTOOLBOX_API UScriptStruct* StaticStruct<FTTConstraintBone_BP>()
{
	return FTTConstraintBone_BP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModifiedBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTConstraintBone_BP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ModifiedBone_MetaData[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ModifiedBone = { "ModifiedBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTConstraintBone_BP, ModifiedBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ModifiedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ModifiedBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ConstraintBone_MetaData[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ConstraintBone = { "ConstraintBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTConstraintBone_BP, ConstraintBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ConstraintBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ConstraintBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ModifiedBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewProp_ConstraintBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
		nullptr,
		&NewStructOps,
		"TTConstraintBone_BP",
		sizeof(FTTConstraintBone_BP),
		alignof(FTTConstraintBone_BP),
		Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTConstraintBone_BP()
	{
		if (!Z_Registration_Info_UScriptStruct_TTConstraintBone_BP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTConstraintBone_BP.InnerSingleton, Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTConstraintBone_BP.InnerSingleton;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execSetIKBoneChainGoal)
	{
		P_GET_OBJECT(UIKRigDefinition,Z_Param_IKRigDefinition);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ChainName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::SetIKBoneChainGoal(Z_Param_IKRigDefinition,Z_Param_Out_ChainName,Z_Param_Out_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execAddIKBoneChains)
	{
		P_GET_OBJECT(UIKRigDefinition,Z_Param_IKRigDefinition);
		P_GET_TARRAY_REF(FBoneChain_BP,Z_Param_Out_BoneChains);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::AddIKBoneChains(Z_Param_IKRigDefinition,Z_Param_Out_BoneChains);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execDumpIKChains)
	{
		P_GET_OBJECT(UIKRigDefinition,Z_Param_IKRigDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::DumpIKChains(Z_Param_IKRigDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execRequestAnimationRecompress)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTTToolboxBlueprintLibrary::RequestAnimationRecompress(Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execCopyAnimMontageCurves)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_SourceAnimMontage);
		P_GET_OBJECT(UAnimMontage,Z_Param_TargetAnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::CopyAnimMontageCurves(Z_Param_SourceAnimMontage,Z_Param_TargetAnimMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execAddRootBone)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::AddRootBone(Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execConstraintBonesForSkeletonPose)
	{
		P_GET_TARRAY_REF(FTTConstraintBone_BP,Z_Param_Out_ConstraintBones);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::ConstraintBonesForSkeletonPose(Z_Param_Out_ConstraintBones,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execAddUnweightedBone)
	{
		P_GET_TARRAY_REF(FTTNewBone_BP,Z_Param_Out_NewBones);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::AddUnweightedBone(Z_Param_Out_NewBones,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execCheckForMissingCurveNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurveNamesToCheck);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::CheckForMissingCurveNames(Z_Param_Out_CurveNamesToCheck,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execDumpSkeletonCurveNames)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::DumpSkeletonCurveNames(Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execHasSocket)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SocketName);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::HasSocket(Z_Param_Out_SocketName,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execAddSocket)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SocketName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::AddSocket(Z_Param_Out_BoneName,Z_Param_Out_SocketName,Z_Param_Out_RelativeTransform,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execDumpSockets)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::DumpSockets(Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execAddVirtualBone)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VirtualBoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SourceBoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetBoneName);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::AddVirtualBone(Z_Param_Out_VirtualBoneName,Z_Param_Out_SourceBoneName,Z_Param_Out_TargetBoneName,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTToolboxBlueprintLibrary::execDumpVirtualBones)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTTToolboxBlueprintLibrary::DumpVirtualBones(Z_Param_Skeleton);
		P_NATIVE_END;
	}
	void UTTToolboxBlueprintLibrary::StaticRegisterNativesUTTToolboxBlueprintLibrary()
	{
		UClass* Class = UTTToolboxBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIKBoneChains", &UTTToolboxBlueprintLibrary::execAddIKBoneChains },
			{ "AddRootBone", &UTTToolboxBlueprintLibrary::execAddRootBone },
			{ "AddSocket", &UTTToolboxBlueprintLibrary::execAddSocket },
			{ "AddUnweightedBone", &UTTToolboxBlueprintLibrary::execAddUnweightedBone },
			{ "AddVirtualBone", &UTTToolboxBlueprintLibrary::execAddVirtualBone },
			{ "CheckForMissingCurveNames", &UTTToolboxBlueprintLibrary::execCheckForMissingCurveNames },
			{ "ConstraintBonesForSkeletonPose", &UTTToolboxBlueprintLibrary::execConstraintBonesForSkeletonPose },
			{ "CopyAnimMontageCurves", &UTTToolboxBlueprintLibrary::execCopyAnimMontageCurves },
			{ "DumpIKChains", &UTTToolboxBlueprintLibrary::execDumpIKChains },
			{ "DumpSkeletonCurveNames", &UTTToolboxBlueprintLibrary::execDumpSkeletonCurveNames },
			{ "DumpSockets", &UTTToolboxBlueprintLibrary::execDumpSockets },
			{ "DumpVirtualBones", &UTTToolboxBlueprintLibrary::execDumpVirtualBones },
			{ "HasSocket", &UTTToolboxBlueprintLibrary::execHasSocket },
			{ "RequestAnimationRecompress", &UTTToolboxBlueprintLibrary::execRequestAnimationRecompress },
			{ "SetIKBoneChainGoal", &UTTToolboxBlueprintLibrary::execSetIKBoneChainGoal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics
	{
		struct TTToolboxBlueprintLibrary_eventAddIKBoneChains_Parms
		{
			UIKRigDefinition* IKRigDefinition;
			TArray<FBoneChain_BP> BoneChains;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRigDefinition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneChains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneChains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneChains;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_IKRigDefinition = { "IKRigDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddIKBoneChains_Parms, IKRigDefinition), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains_Inner = { "BoneChains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneChain_BP, METADATA_PARAMS(nullptr, 0) }; // 372297256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains = { "BoneChains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddIKBoneChains_Parms, BoneChains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains_MetaData)) }; // 372297256
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventAddIKBoneChains_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventAddIKBoneChains_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_IKRigDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_BoneChains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "AddIKBoneChains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::TTToolboxBlueprintLibrary_eventAddIKBoneChains_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics
	{
		struct TTToolboxBlueprintLibrary_eventAddRootBone_Parms
		{
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddRootBone_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventAddRootBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventAddRootBone_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// adds the root bone to the given 'Skeleton' and it's connected skeletal meshes (needed for Mixamo based characters)\n// NOTE: Sadly Unreal Engine does come with lot's of assertions and it is very hard to implement this feature in a save way,\n// the function removes all virtual bones and adds them after again after the root bone was added to the skeletal meshes.\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "adds the root bone to the given 'Skeleton' and it's connected skeletal meshes (needed for Mixamo based characters)\nNOTE: Sadly Unreal Engine does come with lot's of assertions and it is very hard to implement this feature in a save way,\nthe function removes all virtual bones and adds them after again after the root bone was added to the skeletal meshes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "AddRootBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::TTToolboxBlueprintLibrary_eventAddRootBone_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics
	{
		struct TTToolboxBlueprintLibrary_eventAddSocket_Parms
		{
			FName BoneName;
			FName SocketName;
			FTransform RelativeTransform;
			USkeleton* Skeleton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddSocket_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddSocket_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddSocket_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_RelativeTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddSocket_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventAddSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventAddSocket_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "AddSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::TTToolboxBlueprintLibrary_eventAddSocket_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics
	{
		struct TTToolboxBlueprintLibrary_eventAddUnweightedBone_Parms
		{
			TArray<FTTNewBone_BP> NewBones;
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewBones;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones_Inner = { "NewBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTTNewBone_BP, METADATA_PARAMS(nullptr, 0) }; // 3014503315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones = { "NewBones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddUnweightedBone_Parms, NewBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones_MetaData)) }; // 3014503315
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddUnweightedBone_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventAddUnweightedBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventAddUnweightedBone_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_NewBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// adds the fiven 'NewBones' to the given 'Skeleton' and it's connected skeletal meshes.\n// NOTE: Sadly Unreal Engine does come with lot's of assertions and it is very hard to implement this feature in a save way,\n// the function removes all virtual bones and adds them after again after the unweighted bones are added to the skeletal meshes.\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "adds the fiven 'NewBones' to the given 'Skeleton' and it's connected skeletal meshes.\nNOTE: Sadly Unreal Engine does come with lot's of assertions and it is very hard to implement this feature in a save way,\nthe function removes all virtual bones and adds them after again after the unweighted bones are added to the skeletal meshes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "AddUnweightedBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::TTToolboxBlueprintLibrary_eventAddUnweightedBone_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics
	{
		struct TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms
		{
			FName VirtualBoneName;
			FName SourceBoneName;
			FName TargetBoneName;
			USkeleton* Skeleton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName = { "VirtualBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms, VirtualBoneName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms, SourceBoneName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms, TargetBoneName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "AddVirtualBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::TTToolboxBlueprintLibrary_eventAddVirtualBone_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics
	{
		struct TTToolboxBlueprintLibrary_eventCheckForMissingCurveNames_Parms
		{
			TArray<FName> CurveNamesToCheck;
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNamesToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNamesToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNamesToCheck;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck_Inner = { "CurveNamesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck = { "CurveNamesToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventCheckForMissingCurveNames_Parms, CurveNamesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventCheckForMissingCurveNames_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventCheckForMissingCurveNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventCheckForMissingCurveNames_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_CurveNamesToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// checks if the given 'CurveNamesToCheck' are available in the given 'Skeleton' and prints the missing curves to the console\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "checks if the given 'CurveNamesToCheck' are available in the given 'Skeleton' and prints the missing curves to the console" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "CheckForMissingCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::TTToolboxBlueprintLibrary_eventCheckForMissingCurveNames_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics
	{
		struct TTToolboxBlueprintLibrary_eventConstraintBonesForSkeletonPose_Parms
		{
			TArray<FTTConstraintBone_BP> ConstraintBones;
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintBones;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones_Inner = { "ConstraintBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTTConstraintBone_BP, METADATA_PARAMS(nullptr, 0) }; // 511101655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones = { "ConstraintBones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventConstraintBonesForSkeletonPose_Parms, ConstraintBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones_MetaData)) }; // 511101655
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventConstraintBonesForSkeletonPose_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventConstraintBonesForSkeletonPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventConstraintBonesForSkeletonPose_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ConstraintBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "//! @todo @ffs implement this feature\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "! @todo @ffs implement this feature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "ConstraintBonesForSkeletonPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::TTToolboxBlueprintLibrary_eventConstraintBonesForSkeletonPose_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics
	{
		struct TTToolboxBlueprintLibrary_eventCopyAnimMontageCurves_Parms
		{
			UAnimMontage* SourceAnimMontage;
			UAnimMontage* TargetAnimMontage;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAnimMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAnimMontage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_SourceAnimMontage = { "SourceAnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventCopyAnimMontageCurves_Parms, SourceAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_TargetAnimMontage = { "TargetAnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventCopyAnimMontageCurves_Parms, TargetAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventCopyAnimMontageCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventCopyAnimMontageCurves_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_SourceAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_TargetAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// AnimMontage functions\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "AnimMontage functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "CopyAnimMontageCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::TTToolboxBlueprintLibrary_eventCopyAnimMontageCurves_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics
	{
		struct TTToolboxBlueprintLibrary_eventDumpIKChains_Parms
		{
			const UIKRigDefinition* IKRigDefinition;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRigDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRigDefinition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_IKRigDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_IKRigDefinition = { "IKRigDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventDumpIKChains_Parms, IKRigDefinition), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_IKRigDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_IKRigDefinition_MetaData)) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventDumpIKChains_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventDumpIKChains_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_IKRigDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// IK Rig functions\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "IK Rig functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "DumpIKChains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::TTToolboxBlueprintLibrary_eventDumpIKChains_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics
	{
		struct TTToolboxBlueprintLibrary_eventDumpSkeletonCurveNames_Parms
		{
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventDumpSkeletonCurveNames_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventDumpSkeletonCurveNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventDumpSkeletonCurveNames_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// dumps all available skeleton curve names to the console and makes them available in the clipboard as well\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "dumps all available skeleton curve names to the console and makes them available in the clipboard as well" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "DumpSkeletonCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::TTToolboxBlueprintLibrary_eventDumpSkeletonCurveNames_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics
	{
		struct TTToolboxBlueprintLibrary_eventDumpSockets_Parms
		{
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventDumpSockets_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventDumpSockets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventDumpSockets_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// socket functions\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "socket functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "DumpSockets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::TTToolboxBlueprintLibrary_eventDumpSockets_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics
	{
		struct TTToolboxBlueprintLibrary_eventDumpVirtualBones_Parms
		{
			USkeleton* Skeleton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventDumpVirtualBones_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventDumpVirtualBones_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventDumpVirtualBones_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// virtual bone functions\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "virtual bone functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "DumpVirtualBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::TTToolboxBlueprintLibrary_eventDumpVirtualBones_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics
	{
		struct TTToolboxBlueprintLibrary_eventHasSocket_Parms
		{
			FName SocketName;
			USkeleton* Skeleton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventHasSocket_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventHasSocket_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventHasSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventHasSocket_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "HasSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::TTToolboxBlueprintLibrary_eventHasSocket_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics
	{
		struct TTToolboxBlueprintLibrary_eventRequestAnimationRecompress_Parms
		{
			USkeleton* Skeleton;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventRequestAnimationRecompress_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "Comment", "// forces animation sequence recompression, which will also reconstraint the virtual bones\n" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
		{ "ToolTip", "forces animation sequence recompression, which will also reconstraint the virtual bones" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "RequestAnimationRecompress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::TTToolboxBlueprintLibrary_eventRequestAnimationRecompress_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics
	{
		struct TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms
		{
			UIKRigDefinition* IKRigDefinition;
			FName ChainName;
			FName GoalName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRigDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_IKRigDefinition = { "IKRigDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms, IKRigDefinition), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_GoalName_MetaData)) };
	void Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms), &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_IKRigDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "TTToolbox" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTToolboxBlueprintLibrary, nullptr, "SetIKBoneChainGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::TTToolboxBlueprintLibrary_eventSetIKBoneChainGoal_Parms), Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTTToolboxBlueprintLibrary);
	UClass* Z_Construct_UClass_UTTToolboxBlueprintLibrary_NoRegister()
	{
		return UTTToolboxBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddIKBoneChains, "AddIKBoneChains" }, // 1128106695
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddRootBone, "AddRootBone" }, // 630687411
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddSocket, "AddSocket" }, // 14977534
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddUnweightedBone, "AddUnweightedBone" }, // 2356544936
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_AddVirtualBone, "AddVirtualBone" }, // 407793981
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CheckForMissingCurveNames, "CheckForMissingCurveNames" }, // 252663455
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_ConstraintBonesForSkeletonPose, "ConstraintBonesForSkeletonPose" }, // 643724249
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_CopyAnimMontageCurves, "CopyAnimMontageCurves" }, // 724073961
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpIKChains, "DumpIKChains" }, // 99320756
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSkeletonCurveNames, "DumpSkeletonCurveNames" }, // 272840537
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpSockets, "DumpSockets" }, // 3171407376
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_DumpVirtualBones, "DumpVirtualBones" }, // 2922604074
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_HasSocket, "HasSocket" }, // 3412598926
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_RequestAnimationRecompress, "RequestAnimationRecompress" }, // 2123163326
		{ &Z_Construct_UFunction_UTTToolboxBlueprintLibrary_SetIKBoneChainGoal, "SetIKBoneChainGoal" }, // 620317746
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TTToolboxBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TTToolboxBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTToolboxBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::ClassParams = {
		&UTTToolboxBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTToolboxBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UTTToolboxBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTTToolboxBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTTToolboxBlueprintLibrary.OuterSingleton;
	}
	template<> TTTOOLBOX_API UClass* StaticClass<UTTToolboxBlueprintLibrary>()
	{
		return UTTToolboxBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTToolboxBlueprintLibrary);
	struct Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FBoneChain_BP::StaticStruct, Z_Construct_UScriptStruct_FBoneChain_BP_Statics::NewStructOps, TEXT("BoneChain_BP"), &Z_Registration_Info_UScriptStruct_BoneChain_BP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneChain_BP), 372297256U) },
		{ FTTNewBone_BP::StaticStruct, Z_Construct_UScriptStruct_FTTNewBone_BP_Statics::NewStructOps, TEXT("TTNewBone_BP"), &Z_Registration_Info_UScriptStruct_TTNewBone_BP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTNewBone_BP), 3014503315U) },
		{ FTTConstraintBone_BP::StaticStruct, Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics::NewStructOps, TEXT("TTConstraintBone_BP"), &Z_Registration_Info_UScriptStruct_TTConstraintBone_BP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTConstraintBone_BP), 511101655U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTTToolboxBlueprintLibrary, UTTToolboxBlueprintLibrary::StaticClass, TEXT("UTTToolboxBlueprintLibrary"), &Z_Registration_Info_UClass_UTTToolboxBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTTToolboxBlueprintLibrary), 3893702623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_3113988635(TEXT("/Script/TTToolbox"),
		Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
