// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef MULTIPLAYERTEMPLATE_MyAttributeSet_generated_h
#error "MyAttributeSet.generated.h already included, missing '#pragma once' in MyAttributeSet.h"
#endif
#define MULTIPLAYERTEMPLATE_MyAttributeSet_generated_h

#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAttributeSet(); \
	friend struct Z_Construct_UClass_UMyAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMyAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerTemplate"), NO_API) \
	DECLARE_SERIALIZER(UMyAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMyAttributeSet) \
public:


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyAttributeSet(UMyAttributeSet&&); \
	UMyAttributeSet(const UMyAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAttributeSet) \
	NO_API virtual ~UMyAttributeSet();


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_17_PROLOG
#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERTEMPLATE_API UClass* StaticClass<class UMyAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MyAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
