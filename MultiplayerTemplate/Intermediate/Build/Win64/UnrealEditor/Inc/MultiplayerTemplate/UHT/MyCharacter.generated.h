// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADeadBody;
#ifdef MULTIPLAYERTEMPLATE_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define MULTIPLAYERTEMPLATE_MyCharacter_generated_h

#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_15_DELEGATE \
MULTIPLAYERTEMPLATE_API void FDestroyComponent_DelegateWrapper(const FMulticastScriptDelegate& DestroyComponent, ADeadBody* DeadBodyDes);


#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_16_DELEGATE \
MULTIPLAYERTEMPLATE_API void FAwayFromDeadBody_DelegateWrapper(const FMulticastScriptDelegate& AwayFromDeadBody);


#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerOnDead_Implementation(FVector Loc); \
	DECLARE_FUNCTION(execServerOnDead); \
	DECLARE_FUNCTION(execOnRep_IsDead);


#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_CALLBACK_WRAPPERS
#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerTemplate"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMyCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsGhost=NETFIELD_REP_START, \
		DeadLoc, \
		NETFIELD_REP_END=DeadLoc	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCharacter(AMyCharacter&&); \
	AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_18_PROLOG
#define FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_CALLBACK_WRAPPERS \
	FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERTEMPLATE_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerTemplate_Source_MultiplayerTemplate_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
