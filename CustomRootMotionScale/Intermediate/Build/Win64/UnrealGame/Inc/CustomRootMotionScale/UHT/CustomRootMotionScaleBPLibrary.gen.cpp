// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomRootMotionScaleBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomRootMotionScaleBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CUSTOMROOTMOTIONSCALE_API UClass* Z_Construct_UClass_UCustomRootMotionScaleBPLibrary();
CUSTOMROOTMOTIONSCALE_API UClass* Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CustomRootMotionScale();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomRootMotionScaleBPLibrary Function SetRootMotionTranslationScale ***
struct Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics
{
	struct CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationScale_Parms
	{
		ACharacter* Character;
		float Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "DefaultToSelf", "Character" },
		{ "ModuleRelativePath", "Public/CustomRootMotionScaleBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationScale_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomRootMotionScaleBPLibrary, nullptr, "SetRootMotionTranslationScale", Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomRootMotionScaleBPLibrary::execSetRootMotionTranslationScale)
{
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCustomRootMotionScaleBPLibrary::SetRootMotionTranslationScale(Z_Param_Character,Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class UCustomRootMotionScaleBPLibrary Function SetRootMotionTranslationScale *****

// ********** Begin Class UCustomRootMotionScaleBPLibrary Function SetRootMotionTranslationVectorScale 
struct Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics
{
	struct CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms
	{
		ACharacter* Character;
		FVector Scale;
		bool CalculateScaleInLocalDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Set Root Motion Translation Vector Scale\n// Only works with V2RmCharacterMovementComponent so change your CharacterMovementComponent to V2RmCharacterMovementComponent\n// If Local = true, normally x = forward, y = right, z = up\n" },
		{ "CPP_Default_CalculateScaleInLocalDirection", "true" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "DefaultToSelf", "Character" },
		{ "ModuleRelativePath", "Public/CustomRootMotionScaleBPLibrary.h" },
		{ "ToolTip", "Set Root Motion Translation Vector Scale\nOnly works with V2RmCharacterMovementComponent so change your CharacterMovementComponent to V2RmCharacterMovementComponent\nIf Local = true, normally x = forward, y = right, z = up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static void NewProp_CalculateScaleInLocalDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalculateScaleInLocalDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_CalculateScaleInLocalDirection_SetBit(void* Obj)
{
	((CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms*)Obj)->CalculateScaleInLocalDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_CalculateScaleInLocalDirection = { "CalculateScaleInLocalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms), &Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_CalculateScaleInLocalDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::NewProp_CalculateScaleInLocalDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomRootMotionScaleBPLibrary, nullptr, "SetRootMotionTranslationVectorScale", Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::CustomRootMotionScaleBPLibrary_eventSetRootMotionTranslationVectorScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomRootMotionScaleBPLibrary::execSetRootMotionTranslationVectorScale)
{
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_GET_UBOOL(Z_Param_CalculateScaleInLocalDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCustomRootMotionScaleBPLibrary::SetRootMotionTranslationVectorScale(Z_Param_Character,Z_Param_Scale,Z_Param_CalculateScaleInLocalDirection);
	P_NATIVE_END;
}
// ********** End Class UCustomRootMotionScaleBPLibrary Function SetRootMotionTranslationVectorScale 

// ********** Begin Class UCustomRootMotionScaleBPLibrary ******************************************
void UCustomRootMotionScaleBPLibrary::StaticRegisterNativesUCustomRootMotionScaleBPLibrary()
{
	UClass* Class = UCustomRootMotionScaleBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRootMotionTranslationScale", &UCustomRootMotionScaleBPLibrary::execSetRootMotionTranslationScale },
		{ "SetRootMotionTranslationVectorScale", &UCustomRootMotionScaleBPLibrary::execSetRootMotionTranslationVectorScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary;
UClass* UCustomRootMotionScaleBPLibrary::GetPrivateStaticClass()
{
	using TClass = UCustomRootMotionScaleBPLibrary;
	if (!Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomRootMotionScaleBPLibrary"),
			Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary.InnerSingleton,
			StaticRegisterNativesUCustomRootMotionScaleBPLibrary,
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
	return Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_NoRegister()
{
	return UCustomRootMotionScaleBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "CustomRootMotionScaleBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CustomRootMotionScaleBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationScale, "SetRootMotionTranslationScale" }, // 1218741193
		{ &Z_Construct_UFunction_UCustomRootMotionScaleBPLibrary_SetRootMotionTranslationVectorScale, "SetRootMotionTranslationVectorScale" }, // 4192032638
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomRootMotionScaleBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomRootMotionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics::ClassParams = {
	&UCustomRootMotionScaleBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomRootMotionScaleBPLibrary()
{
	if (!Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary.OuterSingleton, Z_Construct_UClass_UCustomRootMotionScaleBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomRootMotionScaleBPLibrary);
UCustomRootMotionScaleBPLibrary::~UCustomRootMotionScaleBPLibrary() {}
// ********** End Class UCustomRootMotionScaleBPLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_CustomRootMotionScaleBPLibrary_h__Script_CustomRootMotionScale_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomRootMotionScaleBPLibrary, UCustomRootMotionScaleBPLibrary::StaticClass, TEXT("UCustomRootMotionScaleBPLibrary"), &Z_Registration_Info_UClass_UCustomRootMotionScaleBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomRootMotionScaleBPLibrary), 725534420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_CustomRootMotionScaleBPLibrary_h__Script_CustomRootMotionScale_2742725915(TEXT("/Script/CustomRootMotionScale"),
	Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_CustomRootMotionScaleBPLibrary_h__Script_CustomRootMotionScale_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_passa_OneDrive_Documents_Ue5Plugins_CustomRootMotionScale_HostProject_Plugins_CustomRootMotionScale_Source_CustomRootMotionScale_Public_CustomRootMotionScaleBPLibrary_h__Script_CustomRootMotionScale_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
