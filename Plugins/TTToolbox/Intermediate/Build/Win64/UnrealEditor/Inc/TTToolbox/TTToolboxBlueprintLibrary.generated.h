// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRigDefinition;
struct FBoneChain_BP;
class USkeleton;
class UAnimMontage;
struct FTTConstraintBone_BP;
struct FTTNewBone_BP;
#ifdef TTTOOLBOX_TTToolboxBlueprintLibrary_generated_h
#error "TTToolboxBlueprintLibrary.generated.h already included, missing '#pragma once' in TTToolboxBlueprintLibrary.h"
#endif
#define TTTOOLBOX_TTToolboxBlueprintLibrary_generated_h

#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneChain_BP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TTTOOLBOX_API UScriptStruct* StaticStruct<struct FBoneChain_BP>();

#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTNewBone_BP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TTTOOLBOX_API UScriptStruct* StaticStruct<struct FTTNewBone_BP>();

#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTConstraintBone_BP_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TTTOOLBOX_API UScriptStruct* StaticStruct<struct FTTConstraintBone_BP>();

#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_SPARSE_DATA
#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIKBoneChainGoal); \
	DECLARE_FUNCTION(execAddIKBoneChains); \
	DECLARE_FUNCTION(execDumpIKChains); \
	DECLARE_FUNCTION(execRequestAnimationRecompress); \
	DECLARE_FUNCTION(execCopyAnimMontageCurves); \
	DECLARE_FUNCTION(execAddRootBone); \
	DECLARE_FUNCTION(execConstraintBonesForSkeletonPose); \
	DECLARE_FUNCTION(execAddUnweightedBone); \
	DECLARE_FUNCTION(execCheckForMissingCurveNames); \
	DECLARE_FUNCTION(execDumpSkeletonCurveNames); \
	DECLARE_FUNCTION(execHasSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execDumpSockets); \
	DECLARE_FUNCTION(execAddVirtualBone); \
	DECLARE_FUNCTION(execDumpVirtualBones);


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIKBoneChainGoal); \
	DECLARE_FUNCTION(execAddIKBoneChains); \
	DECLARE_FUNCTION(execDumpIKChains); \
	DECLARE_FUNCTION(execRequestAnimationRecompress); \
	DECLARE_FUNCTION(execCopyAnimMontageCurves); \
	DECLARE_FUNCTION(execAddRootBone); \
	DECLARE_FUNCTION(execConstraintBonesForSkeletonPose); \
	DECLARE_FUNCTION(execAddUnweightedBone); \
	DECLARE_FUNCTION(execCheckForMissingCurveNames); \
	DECLARE_FUNCTION(execDumpSkeletonCurveNames); \
	DECLARE_FUNCTION(execHasSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execDumpSockets); \
	DECLARE_FUNCTION(execAddVirtualBone); \
	DECLARE_FUNCTION(execDumpVirtualBones);


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTTToolboxBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTTToolboxBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TTToolbox"), NO_API) \
	DECLARE_SERIALIZER(UTTToolboxBlueprintLibrary)


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUTTToolboxBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTTToolboxBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTTToolboxBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TTToolbox"), NO_API) \
	DECLARE_SERIALIZER(UTTToolboxBlueprintLibrary)


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTTToolboxBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTTToolboxBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTTToolboxBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTTToolboxBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTTToolboxBlueprintLibrary(UTTToolboxBlueprintLibrary&&); \
	NO_API UTTToolboxBlueprintLibrary(const UTTToolboxBlueprintLibrary&); \
public:


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTTToolboxBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTTToolboxBlueprintLibrary(UTTToolboxBlueprintLibrary&&); \
	NO_API UTTToolboxBlueprintLibrary(const UTTToolboxBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTTToolboxBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTTToolboxBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTTToolboxBlueprintLibrary)


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_94_PROLOG
#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_SPARSE_DATA \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_RPC_WRAPPERS \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_INCLASS \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_SPARSE_DATA \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_INCLASS_NO_PURE_DECLS \
	FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TTTOOLBOX_API UClass* StaticClass<class UTTToolboxBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SICIRT_Plugins_TTToolbox_Source_TTToolbox_Public_TTToolboxBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
