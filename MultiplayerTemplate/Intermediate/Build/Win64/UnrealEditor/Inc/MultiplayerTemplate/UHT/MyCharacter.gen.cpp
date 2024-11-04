// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerTemplate/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MULTIPLAYERTEMPLATE_API UClass* Z_Construct_UClass_ADeadBody_NoRegister();
MULTIPLAYERTEMPLATE_API UClass* Z_Construct_UClass_AMyCharacter();
MULTIPLAYERTEMPLATE_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
MULTIPLAYERTEMPLATE_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister();
MULTIPLAYERTEMPLATE_API UFunction* Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature();
MULTIPLAYERTEMPLATE_API UFunction* Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MultiplayerTemplate();
// End Cross Module References

// Begin Delegate FDestroyComponent
struct Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics
{
	struct _Script_MultiplayerTemplate_eventDestroyComponent_Parms
	{
		ADeadBody* DeadBodyDes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadBodyDes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::NewProp_DeadBodyDes = { "DeadBodyDes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerTemplate_eventDestroyComponent_Parms, DeadBodyDes), Z_Construct_UClass_ADeadBody_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::NewProp_DeadBodyDes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerTemplate, nullptr, "DestroyComponent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::_Script_MultiplayerTemplate_eventDestroyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::_Script_MultiplayerTemplate_eventDestroyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDestroyComponent_DelegateWrapper(const FMulticastScriptDelegate& DestroyComponent, ADeadBody* DeadBodyDes)
{
	struct _Script_MultiplayerTemplate_eventDestroyComponent_Parms
	{
		ADeadBody* DeadBodyDes;
	};
	_Script_MultiplayerTemplate_eventDestroyComponent_Parms Parms;
	Parms.DeadBodyDes=DeadBodyDes;
	DestroyComponent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDestroyComponent

// Begin Delegate FAwayFromDeadBody
struct Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerTemplate, nullptr, "AwayFromDeadBody__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAwayFromDeadBody_DelegateWrapper(const FMulticastScriptDelegate& AwayFromDeadBody)
{
	AwayFromDeadBody.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAwayFromDeadBody

// Begin Class AMyCharacter Function OnRep_IsDead
struct Z_Construct_UFunction_AMyCharacter_OnRep_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnRep_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnRep_IsDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnRep_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_OnRep_IsDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_OnRep_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnRep_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execOnRep_IsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsDead();
	P_NATIVE_END;
}
// End Class AMyCharacter Function OnRep_IsDead

// Begin Class AMyCharacter Function OnRep_KillByVote
struct Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnRep_KillByVote", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execOnRep_KillByVote)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_KillByVote();
	P_NATIVE_END;
}
// End Class AMyCharacter Function OnRep_KillByVote

// Begin Class AMyCharacter Function ServerOnDead
struct MyCharacter_eventServerOnDead_Parms
{
	FVector Loc;
};
static FName NAME_AMyCharacter_ServerOnDead = FName(TEXT("ServerOnDead"));
void AMyCharacter::ServerOnDead(FVector Loc)
{
	MyCharacter_eventServerOnDead_Parms Parms;
	Parms.Loc=Loc;
	ProcessEvent(FindFunctionChecked(NAME_AMyCharacter_ServerOnDead),&Parms);
}
struct Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Loc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventServerOnDead_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::NewProp_Loc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "ServerOnDead", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::PropPointers), sizeof(MyCharacter_eventServerOnDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyCharacter_eventServerOnDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_ServerOnDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_ServerOnDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execServerOnDead)
{
	P_GET_STRUCT(FVector,Z_Param_Loc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerOnDead_Implementation(Z_Param_Loc);
	P_NATIVE_END;
}
// End Class AMyCharacter Function ServerOnDead

// Begin Class AMyCharacter
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
	UClass* Class = AMyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_IsDead", &AMyCharacter::execOnRep_IsDead },
		{ "OnRep_KillByVote", &AMyCharacter::execOnRep_KillByVote },
		{ "ServerOnDead", &AMyCharacter::execServerOnDead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGhost_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGhostByVote_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadBody_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadMat_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadLoc_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundDeadBody_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwayFromDeadBody_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicAttributeSet;
	static void NewProp_IsGhost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGhost;
	static void NewProp_IsGhostByVote_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGhostByVote;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeadBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadMat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeadLoc;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FoundDeadBody;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AwayFromDeadBody;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_OnRep_IsDead, "OnRep_IsDead" }, // 3492965434
		{ &Z_Construct_UFunction_AMyCharacter_OnRep_KillByVote, "OnRep_KillByVote" }, // 2082178497
		{ &Z_Construct_UFunction_AMyCharacter_ServerOnDead, "ServerOnDead" }, // 3366398216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_BasicAttributeSet = { "BasicAttributeSet", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, BasicAttributeSet), Z_Construct_UClass_UMyAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicAttributeSet_MetaData), NewProp_BasicAttributeSet_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhost_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->IsGhost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhost = { "IsGhost", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGhost_MetaData), NewProp_IsGhost_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhostByVote_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->IsGhostByVote = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhostByVote = { "IsGhostByVote", "OnRep_KillByVote", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhostByVote_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGhostByVote_MetaData), NewProp_IsGhostByVote_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeadBody = { "DeadBody", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DeadBody), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadBody_MetaData), NewProp_DeadBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeadMat = { "DeadMat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DeadMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadMat_MetaData), NewProp_DeadMat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeadLoc = { "DeadLoc", "OnRep_IsDead", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DeadLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadLoc_MetaData), NewProp_DeadLoc_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_FoundDeadBody = { "FoundDeadBody", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, FoundDeadBody), Z_Construct_UDelegateFunction_MultiplayerTemplate_DestroyComponent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundDeadBody_MetaData), NewProp_FoundDeadBody_MetaData) }; // 3713632222
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AwayFromDeadBody = { "AwayFromDeadBody", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AwayFromDeadBody), Z_Construct_UDelegateFunction_MultiplayerTemplate_AwayFromDeadBody__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwayFromDeadBody_MetaData), NewProp_AwayFromDeadBody_MetaData) }; // 2126925584
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_BasicAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IsGhostByVote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeadBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeadMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeadLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_FoundDeadBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AwayFromDeadBody,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMyCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
template<> MULTIPLAYERTEMPLATE_API UClass* StaticClass<AMyCharacter>()
{
	return AMyCharacter::StaticClass();
}
void AMyCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_IsGhost(TEXT("IsGhost"));
	static const FName Name_IsGhostByVote(TEXT("IsGhostByVote"));
	static const FName Name_DeadLoc(TEXT("DeadLoc"));
	const bool bIsValid = true
		&& Name_IsGhost == ClassReps[(int32)ENetFields_Private::IsGhost].Property->GetFName()
		&& Name_IsGhostByVote == ClassReps[(int32)ENetFields_Private::IsGhostByVote].Property->GetFName()
		&& Name_DeadLoc == ClassReps[(int32)ENetFields_Private::DeadLoc].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMyCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// End Class AMyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 2809263884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_897331711(TEXT("/Script/MultiplayerTemplate"),
	Z_CompiledInDeferFile_FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
