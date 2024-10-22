// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinimapSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture2D;
struct FMiniEntry;
#ifdef MULTIPLAYERTEMPLATE_MinimapSubsystem_generated_h
#error "MinimapSubsystem.generated.h already included, missing '#pragma once' in MinimapSubsystem.h"
#endif
#define MULTIPLAYERTEMPLATE_MinimapSubsystem_generated_h

#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMiniEntry_Statics; \
	MULTIPLAYERTEMPLATE_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERTEMPLATE_API UScriptStruct* StaticStruct<struct FMiniEntry>();

#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_23_DELEGATE \
MULTIPLAYERTEMPLATE_API void FNewMinimapEntry_DelegateWrapper(const FMulticastScriptDelegate& NewMinimapEntry, FMiniEntry Entry);


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_24_DELEGATE \
MULTIPLAYERTEMPLATE_API void FMinimapEntryRemove_DelegateWrapper(const FMulticastScriptDelegate& MinimapEntryRemove, AActor* Entry);


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterEntry); \
	DECLARE_FUNCTION(execGetMainCharacterEntry); \
	DECLARE_FUNCTION(execGetAllCurrentEntries); \
	DECLARE_FUNCTION(execRegisterEntry); \
	DECLARE_FUNCTION(execRegisterMainCharacterEntry);


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinimapSubsystem(); \
	friend struct Z_Construct_UClass_UMinimapSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMinimapSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerTemplate"), NO_API) \
	DECLARE_SERIALIZER(UMinimapSubsystem)


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinimapSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMinimapSubsystem(UMinimapSubsystem&&); \
	UMinimapSubsystem(const UMinimapSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinimapSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinimapSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMinimapSubsystem) \
	NO_API virtual ~UMinimapSubsystem();


#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_26_PROLOG
#define FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERTEMPLATE_API UClass* StaticClass<class UMinimapSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PearBecomeHuman_Documents_MultiplayerTemplate_Source_MultiplayerTemplate_MinimapSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
