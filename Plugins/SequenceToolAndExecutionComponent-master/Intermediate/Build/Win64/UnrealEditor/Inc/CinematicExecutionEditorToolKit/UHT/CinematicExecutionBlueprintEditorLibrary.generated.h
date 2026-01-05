// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CinematicExecutionBlueprintEditorLibrary.h"

#ifdef CINEMATICEXECUTIONEDITORTOOLKIT_CinematicExecutionBlueprintEditorLibrary_generated_h
#error "CinematicExecutionBlueprintEditorLibrary.generated.h already included, missing '#pragma once' in CinematicExecutionBlueprintEditorLibrary.h"
#endif
#define CINEMATICEXECUTIONEDITORTOOLKIT_CinematicExecutionBlueprintEditorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UMovieSceneSection;

// ********** Begin Delegate FOnActorSelectedBP ****************************************************
#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_10_DELEGATE \
CINEMATICEXECUTIONEDITORTOOLKIT_API void FOnActorSelectedBP_DelegateWrapper(const FScriptDelegate& OnActorSelectedBP, AActor* SelectedActor);


// ********** End Delegate FOnActorSelectedBP ******************************************************

// ********** Begin Class UCinematicExecutionBlueprintEditorLibrary ********************************
#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSectionEase); \
	DECLARE_FUNCTION(execSetSectionEase); \
	DECLARE_FUNCTION(execCopyToClipBoard);


CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_NoRegister();

#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicExecutionBlueprintEditorLibrary(); \
	friend struct Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCinematicExecutionBlueprintEditorLibrary, UBlueprintEditorLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicExecutionEditorToolKit"), Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCinematicExecutionBlueprintEditorLibrary)


#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinematicExecutionBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCinematicExecutionBlueprintEditorLibrary(UCinematicExecutionBlueprintEditorLibrary&&) = delete; \
	UCinematicExecutionBlueprintEditorLibrary(const UCinematicExecutionBlueprintEditorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicExecutionBlueprintEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicExecutionBlueprintEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicExecutionBlueprintEditorLibrary) \
	NO_API virtual ~UCinematicExecutionBlueprintEditorLibrary();


#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_14_PROLOG
#define FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCinematicExecutionBlueprintEditorLibrary;

// ********** End Class UCinematicExecutionBlueprintEditorLibrary **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
