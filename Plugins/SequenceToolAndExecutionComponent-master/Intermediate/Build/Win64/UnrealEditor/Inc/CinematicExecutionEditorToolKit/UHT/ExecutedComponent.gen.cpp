// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExecutedComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExecutedComponent() {}

// ********** Begin Cross Module References ********************************************************
CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UExecutedComponent();
CINEMATICEXECUTIONEDITORTOOLKIT_API UClass* Z_Construct_UClass_UExecutedComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CinematicExecutionEditorToolKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UExecutedComponent *******************************************************
void UExecutedComponent::StaticRegisterNativesUExecutedComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExecutedComponent;
UClass* UExecutedComponent::GetPrivateStaticClass()
{
	using TClass = UExecutedComponent;
	if (!Z_Registration_Info_UClass_UExecutedComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExecutedComponent"),
			Z_Registration_Info_UClass_UExecutedComponent.InnerSingleton,
			StaticRegisterNativesUExecutedComponent,
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
	return Z_Registration_Info_UClass_UExecutedComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UExecutedComponent_NoRegister()
{
	return UExecutedComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExecutedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ExecutedComponent.h" },
		{ "ModuleRelativePath", "Public/ExecutedComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExecutedComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExecutedComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoketName_MetaData[] = {
		{ "Category", "ExecutedComponent" },
		{ "ModuleRelativePath", "Public/ExecutedComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetLocation_MetaData[] = {
		{ "Category", "ExecutedComponent" },
		{ "ModuleRelativePath", "Public/ExecutedComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "ExecutedComponent" },
		{ "ModuleRelativePath", "Public/ExecutedComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScoketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetLocation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecutedComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExecutedComponent_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00100000000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExecutedComponent, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UExecutedComponent_Statics::NewProp_ScoketName = { "ScoketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExecutedComponent, ScoketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoketName_MetaData), NewProp_ScoketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExecutedComponent_Statics::NewProp_WidgetLocation = { "WidgetLocation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExecutedComponent, WidgetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetLocation_MetaData), NewProp_WidgetLocation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExecutedComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExecutedComponent, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExecutedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecutedComponent_Statics::NewProp_WidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecutedComponent_Statics::NewProp_ScoketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecutedComponent_Statics::NewProp_WidgetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecutedComponent_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecutedComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExecutedComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicExecutionEditorToolKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecutedComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecutedComponent_Statics::ClassParams = {
	&UExecutedComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExecutedComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExecutedComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecutedComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecutedComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExecutedComponent()
{
	if (!Z_Registration_Info_UClass_UExecutedComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecutedComponent.OuterSingleton, Z_Construct_UClass_UExecutedComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExecutedComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExecutedComponent);
UExecutedComponent::~UExecutedComponent() {}
// ********** End Class UExecutedComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutedComponent_h__Script_CinematicExecutionEditorToolKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExecutedComponent, UExecutedComponent::StaticClass, TEXT("UExecutedComponent"), &Z_Registration_Info_UClass_UExecutedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecutedComponent), 392698443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutedComponent_h__Script_CinematicExecutionEditorToolKit_1066355423(TEXT("/Script/CinematicExecutionEditorToolKit"),
	Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutedComponent_h__Script_CinematicExecutionEditorToolKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Plugins_SequenceToolAndExecutionComponent_master_Source_CinematicExecutionEditorToolKit_Public_ExecutedComponent_h__Script_CinematicExecutionEditorToolKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
