// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTToolbox/Public/TTPoseableMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTPoseableMeshComponent() {}
// Cross Module References
	TTTOOLBOX_API UClass* Z_Construct_UClass_UTTPoseableMeshComponent_NoRegister();
	TTTOOLBOX_API UClass* Z_Construct_UClass_UTTPoseableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TTToolbox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UTTPoseableMeshComponent::execUpdatePose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTPoseableMeshComponent::execSetBoneLocalTransformByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneLocalTransformByName(Z_Param_Out_BoneName,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	void UTTPoseableMeshComponent::StaticRegisterNativesUTTPoseableMeshComponent()
	{
		UClass* Class = UTTPoseableMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBoneLocalTransformByName", &UTTPoseableMeshComponent::execSetBoneLocalTransformByName },
			{ "UpdatePose", &UTTPoseableMeshComponent::execUpdatePose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics
	{
		struct TTPoseableMeshComponent_eventSetBoneLocalTransformByName_Parms
		{
			FName BoneName;
			FTransform InTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTPoseableMeshComponent_eventSetBoneLocalTransformByName_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTPoseableMeshComponent_eventSetBoneLocalTransformByName_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_InTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::NewProp_InTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Public/TTPoseableMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTPoseableMeshComponent, nullptr, "SetBoneLocalTransformByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::TTPoseableMeshComponent_eventSetBoneLocalTransformByName_Parms), Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Public/TTPoseableMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTPoseableMeshComponent, nullptr, "UpdatePose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTTPoseableMeshComponent);
	UClass* Z_Construct_UClass_UTTPoseableMeshComponent_NoRegister()
	{
		return UTTPoseableMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTTPoseableMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTPoseableMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TTToolbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTTPoseableMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTTPoseableMeshComponent_SetBoneLocalTransformByName, "SetBoneLocalTransformByName" }, // 3313454900
		{ &Z_Construct_UFunction_UTTPoseableMeshComponent_UpdatePose, "UpdatePose" }, // 1430033881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTPoseableMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "TTPoseableMeshComponent.h" },
		{ "ModuleRelativePath", "Public/TTPoseableMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTPoseableMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTPoseableMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTTPoseableMeshComponent_Statics::ClassParams = {
		&UTTPoseableMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTTPoseableMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTPoseableMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTPoseableMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UTTPoseableMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTTPoseableMeshComponent.OuterSingleton, Z_Construct_UClass_UTTPoseableMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTTPoseableMeshComponent.OuterSingleton;
	}
	template<> TTTOOLBOX_API UClass* StaticClass<UTTPoseableMeshComponent>()
	{
		return UTTPoseableMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTPoseableMeshComponent);
	struct Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTPoseableMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTPoseableMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTTPoseableMeshComponent, UTTPoseableMeshComponent::StaticClass, TEXT("UTTPoseableMeshComponent"), &Z_Registration_Info_UClass_UTTPoseableMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTTPoseableMeshComponent), 3610382795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTPoseableMeshComponent_h_3259462836(TEXT("/Script/TTToolbox"),
		Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTPoseableMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTPoseableMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
