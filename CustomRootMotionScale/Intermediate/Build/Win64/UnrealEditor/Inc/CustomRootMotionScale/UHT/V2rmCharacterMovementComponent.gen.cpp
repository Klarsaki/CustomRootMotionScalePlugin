// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "V2rmCharacterMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeV2rmCharacterMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CUSTOMROOTMOTIONSCALE_API UClass* Z_Construct_UClass_UV2rmCharacterMovementComponent();
CUSTOMROOTMOTIONSCALE_API UClass* Z_Construct_UClass_UV2rmCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_CustomRootMotionScale();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UV2rmCharacterMovementComponent ******************************************
void UV2rmCharacterMovementComponent::StaticRegisterNativesUV2rmCharacterMovementComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UV2rmCharacterMovementComponent;
UClass* UV2rmCharacterMovementComponent::GetPrivateStaticClass()
{
	using TClass = UV2rmCharacterMovementComponent;
	if (!Z_Registration_Info_UClass_UV2rmCharacterMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("V2rmCharacterMovementComponent"),
			Z_Registration_Info_UClass_UV2rmCharacterMovementComponent.InnerSingleton,
			StaticRegisterNativesUV2rmCharacterMovementComponent,
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
	return Z_Registration_Info_UClass_UV2rmCharacterMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UV2rmCharacterMovementComponent_NoRegister()
{
	return UV2rmCharacterMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "V2rmCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/V2rmCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionVectorScale_MetaData[] = {
		{ "Category", "Character Movement: RootMotion Scale" },
		{ "ModuleRelativePath", "Public/V2rmCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculateVectorScaleInLocal_MetaData[] = {
		{ "Category", "Character Movement: RootMotion Scale" },
		{ "ModuleRelativePath", "Public/V2rmCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionVectorScale;
	static void NewProp_CalculateVectorScaleInLocal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalculateVectorScaleInLocal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UV2rmCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::NewProp_RootMotionVectorScale = { "RootMotionVectorScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UV2rmCharacterMovementComponent, RootMotionVectorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionVectorScale_MetaData), NewProp_RootMotionVectorScale_MetaData) };
void Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::NewProp_CalculateVectorScaleInLocal_SetBit(void* Obj)
{
	((UV2rmCharacterMovementComponent*)Obj)->CalculateVectorScaleInLocal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::NewProp_CalculateVectorScaleInLocal = { "CalculateVectorScaleInLocal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UV2rmCharacterMovementComponent), &Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::NewProp_CalculateVectorScaleInLocal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculateVectorScaleInLocal_MetaData), NewProp_CalculateVectorScaleInLocal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::NewProp_RootMotionVectorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::NewProp_CalculateVectorScaleInLocal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomRootMotionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::ClassParams = {
	&UV2rmCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UV2rmCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UV2rmCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UV2rmCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UV2rmCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UV2rmCharacterMovementComponent.OuterSingleton;
}
UV2rmCharacterMovementComponent::UV2rmCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UV2rmCharacterMovementComponent);
UV2rmCharacterMovementComponent::~UV2rmCharacterMovementComponent() {}
// ********** End Class UV2rmCharacterMovementComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_V2rmCharacterMovementComponent_h__Script_CustomRootMotionScale_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UV2rmCharacterMovementComponent, UV2rmCharacterMovementComponent::StaticClass, TEXT("UV2rmCharacterMovementComponent"), &Z_Registration_Info_UClass_UV2rmCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UV2rmCharacterMovementComponent), 394726776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_V2rmCharacterMovementComponent_h__Script_CustomRootMotionScale_1263289091(TEXT("/Script/CustomRootMotionScale"),
	Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_V2rmCharacterMovementComponent_h__Script_CustomRootMotionScale_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_V2rmCharacterMovementComponent_h__Script_CustomRootMotionScale_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
