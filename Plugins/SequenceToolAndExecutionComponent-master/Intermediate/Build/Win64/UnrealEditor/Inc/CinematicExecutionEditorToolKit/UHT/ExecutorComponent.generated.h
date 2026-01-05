// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExecutorComponent.h"

#ifdef CINEMATICEXECUTIONEDITORTOOLKIT_ExecutorComponent_generated_h
#error "ExecutorComponent.generated.h already included, missing '#pragma once' in ExecutorComponent.h"
#endif
#define CINEMATICEXECUTIONEDITORTOOLKIT_ExecutorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APlayerController;
class UExecutedComponent;
class ULevelSequence;

// ********** Begin Class UExecutorComponent *******************************************************
#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execViewTargetChanged); \
	DECLARE_FUNCTION(execSequencePlayerFinished); \
	DECLARE_FUNCTION(execSetExecutedRef); \
	DECLARE_FUNCTION(execExecute);


CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UExecutorComponent_NoRegister();

#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExecutorComponent(); \
	friend struct Z_Construct_UClass_UExecutorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UExecutorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UExecutorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicExecutionEditorToolKit"), Z_Construct_UClass_UExecutorComponent_NoRegister) \
	DECLARE_SERIALIZER(UExecutorComponent)


#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExecutorComponent(UExecutorComponent&&) = delete; \
	UExecutorComponent(const UExecutorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecutorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecutorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExecutorComponent) \
	NO_API virtual ~UExecutorComponent();


#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_15_PROLOG
#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExecutorComponent;

// ********** End Class UExecutorComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
