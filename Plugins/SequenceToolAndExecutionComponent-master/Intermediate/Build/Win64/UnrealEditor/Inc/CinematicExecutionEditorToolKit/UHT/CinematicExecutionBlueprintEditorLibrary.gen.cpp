// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicExecutionBlueprintEditorLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCinematicExecutionBlueprintEditorLibrary() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTEDITORLIBRARY_API UClass* Z_Construct_UClass_UBlueprintEditorLibrary();
CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary();
CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_NoRegister();
CINEMATICEXECUTIONEDITORTOOLKIT_API UFunction* Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_CinematicExecutionEditorToolKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnActorSelectedBP ****************************************************
struct Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics
{
	struct _Script_CinematicExecutionEditorToolKit_eventOnActorSelectedBP_Parms
	{
		AActor* SelectedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicExecutionBlueprintEditorLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CinematicExecutionEditorToolKit_eventOnActorSelectedBP_Parms, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::NewProp_SelectedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CinematicExecutionEditorToolKit, nullptr, "OnActorSelectedBP__DelegateSignature", Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::_Script_CinematicExecutionEditorToolKit_eventOnActorSelectedBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::_Script_CinematicExecutionEditorToolKit_eventOnActorSelectedBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CinematicExecutionEditorToolKit_OnActorSelectedBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorSelectedBP_DelegateWrapper(const FScriptDelegate& OnActorSelectedBP, AActor* SelectedActor)
{
	struct _Script_CinematicExecutionEditorToolKit_eventOnActorSelectedBP_Parms
	{
		AActor* SelectedActor;
	};
	_Script_CinematicExecutionEditorToolKit_eventOnActorSelectedBP_Parms Parms;
	Parms.SelectedActor=SelectedActor;
	OnActorSelectedBP.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnActorSelectedBP ******************************************************

// ********** Begin Class UCinematicExecutionBlueprintEditorLibrary Function CopyToClipBoard *******
struct Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics
{
	struct CinematicExecutionBlueprintEditorLibrary_eventCopyToClipBoard_Parms
	{
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicExecutionBlueprintEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventCopyToClipBoard_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary, nullptr, "CopyToClipBoard", Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::CinematicExecutionBlueprintEditorLibrary_eventCopyToClipBoard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::CinematicExecutionBlueprintEditorLibrary_eventCopyToClipBoard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicExecutionBlueprintEditorLibrary::execCopyToClipBoard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCinematicExecutionBlueprintEditorLibrary::CopyToClipBoard(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UCinematicExecutionBlueprintEditorLibrary Function CopyToClipBoard *********

// ********** Begin Class UCinematicExecutionBlueprintEditorLibrary Function GetSectionEase ********
struct Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics
{
	struct CinematicExecutionBlueprintEditorLibrary_eventGetSectionEase_Parms
	{
		UMovieSceneSection* Section;
		int32 EaseInTime;
		int32 EaseOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicExecutionBlueprintEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EaseInTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EaseOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventGetSectionEase_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::NewProp_EaseInTime = { "EaseInTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventGetSectionEase_Parms, EaseInTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::NewProp_EaseOutTime = { "EaseOutTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventGetSectionEase_Parms, EaseOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::NewProp_EaseInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::NewProp_EaseOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary, nullptr, "GetSectionEase", Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::CinematicExecutionBlueprintEditorLibrary_eventGetSectionEase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::CinematicExecutionBlueprintEditorLibrary_eventGetSectionEase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicExecutionBlueprintEditorLibrary::execGetSectionEase)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EaseInTime);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EaseOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCinematicExecutionBlueprintEditorLibrary::GetSectionEase(Z_Param_Section,Z_Param_Out_EaseInTime,Z_Param_Out_EaseOutTime);
	P_NATIVE_END;
}
// ********** End Class UCinematicExecutionBlueprintEditorLibrary Function GetSectionEase **********

// ********** Begin Class UCinematicExecutionBlueprintEditorLibrary Function SetSectionEase ********
struct Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics
{
	struct CinematicExecutionBlueprintEditorLibrary_eventSetSectionEase_Parms
	{
		UMovieSceneSection* Section;
		int32 EaseInFrameTime;
		int32 EaseOutFrameTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicExecutionBlueprintEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EaseInFrameTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EaseOutFrameTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventSetSectionEase_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::NewProp_EaseInFrameTime = { "EaseInFrameTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventSetSectionEase_Parms, EaseInFrameTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::NewProp_EaseOutFrameTime = { "EaseOutFrameTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicExecutionBlueprintEditorLibrary_eventSetSectionEase_Parms, EaseOutFrameTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::NewProp_EaseInFrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::NewProp_EaseOutFrameTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary, nullptr, "SetSectionEase", Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::CinematicExecutionBlueprintEditorLibrary_eventSetSectionEase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::CinematicExecutionBlueprintEditorLibrary_eventSetSectionEase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicExecutionBlueprintEditorLibrary::execSetSectionEase)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FIntProperty,Z_Param_EaseInFrameTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_EaseOutFrameTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCinematicExecutionBlueprintEditorLibrary::SetSectionEase(Z_Param_Section,Z_Param_EaseInFrameTime,Z_Param_EaseOutFrameTime);
	P_NATIVE_END;
}
// ********** End Class UCinematicExecutionBlueprintEditorLibrary Function SetSectionEase **********

// ********** Begin Class UCinematicExecutionBlueprintEditorLibrary ********************************
void UCinematicExecutionBlueprintEditorLibrary::StaticRegisterNativesUCinematicExecutionBlueprintEditorLibrary()
{
	UClass* Class = UCinematicExecutionBlueprintEditorLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyToClipBoard", &UCinematicExecutionBlueprintEditorLibrary::execCopyToClipBoard },
		{ "GetSectionEase", &UCinematicExecutionBlueprintEditorLibrary::execGetSectionEase },
		{ "SetSectionEase", &UCinematicExecutionBlueprintEditorLibrary::execSetSectionEase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary;
UClass* UCinematicExecutionBlueprintEditorLibrary::GetPrivateStaticClass()
{
	using TClass = UCinematicExecutionBlueprintEditorLibrary;
	if (!Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CinematicExecutionBlueprintEditorLibrary"),
			Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary.InnerSingleton,
			StaticRegisterNativesUCinematicExecutionBlueprintEditorLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_NoRegister()
{
	return UCinematicExecutionBlueprintEditorLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CinematicExecutionBlueprintEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/CinematicExecutionBlueprintEditorLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_CopyToClipBoard, "CopyToClipBoard" }, // 1277369562
		{ &Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_GetSectionEase, "GetSectionEase" }, // 2770937442
		{ &Z_Construct_UFunction_UCinematicExecutionBlueprintEditorLibrary_SetSectionEase, "SetSectionEase" }, // 3526477461
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicExecutionBlueprintEditorLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintEditorLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicExecutionEditorToolKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics::ClassParams = {
	&UCinematicExecutionBlueprintEditorLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary()
{
	if (!Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary.OuterSingleton, Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary.OuterSingleton;
}
UCinematicExecutionBlueprintEditorLibrary::UCinematicExecutionBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCinematicExecutionBlueprintEditorLibrary);
UCinematicExecutionBlueprintEditorLibrary::~UCinematicExecutionBlueprintEditorLibrary() {}
// ********** End Class UCinematicExecutionBlueprintEditorLibrary **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h__Script_CinematicExecutionEditorToolKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCinematicExecutionBlueprintEditorLibrary, UCinematicExecutionBlueprintEditorLibrary::StaticClass, TEXT("UCinematicExecutionBlueprintEditorLibrary"), &Z_Registration_Info_UClass_UCinematicExecutionBlueprintEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinematicExecutionBlueprintEditorLibrary), 1637802756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h__Script_CinematicExecutionEditorToolKit_1774722516(TEXT("/Script/CinematicExecutionEditorToolKit"),
	Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h__Script_CinematicExecutionEditorToolKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_CinematicExecutionBlueprintEditorLibrary_h__Script_CinematicExecutionEditorToolKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
