// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuest;
class USM_InputAtom;
#ifdef PLUGINDEVELOPMENT_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define PLUGINDEVELOPMENT_Quest_generated_h

#define PluginDevelopment_Source_PluginDevelopment_Quest_h_60_GENERATED_BODY \
	friend PLUGINDEVELOPMENT_API class UScriptStruct* Z_Construct_UScriptStruct_FQuestInProgress(); \
	PLUGINDEVELOPMENT_API static class UScriptStruct* StaticStruct();


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_RPC_WRAPPERS
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend PLUGINDEVELOPMENT_API class UClass* Z_Construct_UClass_UQuest(); \
public: \
	DECLARE_CLASS(UQuest, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PluginDevelopment"), NO_API) \
	DECLARE_SERIALIZER(UQuest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend PLUGINDEVELOPMENT_API class UClass* Z_Construct_UClass_UQuest(); \
public: \
	DECLARE_CLASS(UQuest, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PluginDevelopment"), NO_API) \
	DECLARE_SERIALIZER(UQuest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public:


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest)


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_PRIVATE_PROPERTY_OFFSET
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_21_PROLOG
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_PRIVATE_PROPERTY_OFFSET \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_RPC_WRAPPERS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_INCLASS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_PRIVATE_PROPERTY_OFFSET \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_INCLASS_NO_PURE_DECLS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginQuest) \
	{ \
		P_GET_OBJECT(UQuest,Z_Param_Quest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BeginQuest(Z_Param_Quest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateQuests) \
	{ \
		P_GET_OBJECT(USM_InputAtom,Z_Param_QuestActivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateQuests(Z_Param_QuestActivity); \
		P_NATIVE_END; \
	}


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginQuest) \
	{ \
		P_GET_OBJECT(UQuest,Z_Param_Quest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BeginQuest(Z_Param_Quest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateQuests) \
	{ \
		P_GET_OBJECT(USM_InputAtom,Z_Param_QuestActivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateQuests(Z_Param_QuestActivity); \
		P_NATIVE_END; \
	}


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestStatus(); \
	friend PLUGINDEVELOPMENT_API class UClass* Z_Construct_UClass_UQuestStatus(); \
public: \
	DECLARE_CLASS(UQuestStatus, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PluginDevelopment"), NO_API) \
	DECLARE_SERIALIZER(UQuestStatus) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUQuestStatus(); \
	friend PLUGINDEVELOPMENT_API class UClass* Z_Construct_UClass_UQuestStatus(); \
public: \
	DECLARE_CLASS(UQuestStatus, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PluginDevelopment"), NO_API) \
	DECLARE_SERIALIZER(UQuestStatus) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestStatus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestStatus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestStatus(UQuestStatus&&); \
	NO_API UQuestStatus(const UQuestStatus&); \
public:


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestStatus(UQuestStatus&&); \
	NO_API UQuestStatus(const UQuestStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestStatus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestStatus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestStatus)


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestActivities() { return STRUCT_OFFSET(UQuestStatus, QuestActivities); } \
	FORCEINLINE static uint32 __PPO__QuestList() { return STRUCT_OFFSET(UQuestStatus, QuestList); }


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_111_PROLOG
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_PRIVATE_PROPERTY_OFFSET \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_RPC_WRAPPERS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_INCLASS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_PRIVATE_PROPERTY_OFFSET \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_INCLASS_NO_PURE_DECLS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_RPC_WRAPPERS
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestWithResult(); \
	friend PLUGINDEVELOPMENT_API class UClass* Z_Construct_UClass_UQuestWithResult(); \
public: \
	DECLARE_CLASS(UQuestWithResult, UQuest, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PluginDevelopment"), NO_API) \
	DECLARE_SERIALIZER(UQuestWithResult) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUQuestWithResult(); \
	friend PLUGINDEVELOPMENT_API class UClass* Z_Construct_UClass_UQuestWithResult(); \
public: \
	DECLARE_CLASS(UQuestWithResult, UQuest, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PluginDevelopment"), NO_API) \
	DECLARE_SERIALIZER(UQuestWithResult) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestWithResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestWithResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestWithResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestWithResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestWithResult(UQuestWithResult&&); \
	NO_API UQuestWithResult(const UQuestWithResult&); \
public:


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestWithResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestWithResult(UQuestWithResult&&); \
	NO_API UQuestWithResult(const UQuestWithResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestWithResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestWithResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestWithResult)


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuccessQuests() { return STRUCT_OFFSET(UQuestWithResult, SuccessQuests); } \
	FORCEINLINE static uint32 __PPO__SuccessInputs() { return STRUCT_OFFSET(UQuestWithResult, SuccessInputs); } \
	FORCEINLINE static uint32 __PPO__FailureQuests() { return STRUCT_OFFSET(UQuestWithResult, FailureQuests); } \
	FORCEINLINE static uint32 __PPO__FailureInputs() { return STRUCT_OFFSET(UQuestWithResult, FailureInputs); }


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_161_PROLOG
#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_PRIVATE_PROPERTY_OFFSET \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_RPC_WRAPPERS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_INCLASS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDevelopment_Source_PluginDevelopment_Quest_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_PRIVATE_PROPERTY_OFFSET \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_INCLASS_NO_PURE_DECLS \
	PluginDevelopment_Source_PluginDevelopment_Quest_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginDevelopment_Source_PluginDevelopment_Quest_h


#define FOREACH_ENUM_EQUESTCOMPLETION(op) \
	op(EQuestCompletion::EQC_NotStarted) \
	op(EQuestCompletion::EQC_Started) \
	op(EQuestCompletion::EQC_Succeeded) \
	op(EQuestCompletion::EQC_Failed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
