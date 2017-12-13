// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Quest.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	PLUGINDEVELOPMENT_API UEnum* Z_Construct_UEnum_PluginDevelopment_EQuestCompletion();
	UPackage* Z_Construct_UPackage__Script_PluginDevelopment();
	PLUGINDEVELOPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FQuestInProgress();
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_UQuest();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State_NoRegister();
	PLUGINDEVELOPMENT_API UFunction* Z_Construct_UFunction_UQuestStatus_UpdateQuests();
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_UQuestStatus();
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_UQuestStatus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
static UEnum* EQuestCompletion_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_PluginDevelopment_EQuestCompletion, Z_Construct_UPackage__Script_PluginDevelopment(), TEXT("EQuestCompletion"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestCompletion(EQuestCompletion_StaticEnum, TEXT("/Script/PluginDevelopment"), TEXT("EQuestCompletion"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_PluginDevelopment_EQuestCompletion()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PluginDevelopment();
		extern uint32 Get_Z_Construct_UEnum_PluginDevelopment_EQuestCompletion_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestCompletion"), 0, Get_Z_Construct_UEnum_PluginDevelopment_EQuestCompletion_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EQuestCompletion"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EQuestCompletion::EQC_NotStarted"), 0);
			EnumNames.Emplace(TEXT("EQuestCompletion::EQC_Started"), 1);
			EnumNames.Emplace(TEXT("EQuestCompletion::EQC_Succeeded"), 2);
			EnumNames.Emplace(TEXT("EQuestCompletion::EQC_Failed"), 3);
			EnumNames.Emplace(TEXT("EQuestCompletion::EQC_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EQuestCompletion");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_PluginDevelopment_EQuestCompletion_CRC() { return 857001447U; }
class UScriptStruct* FQuestInProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLUGINDEVELOPMENT_API uint32 Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestInProgress, Z_Construct_UPackage__Script_PluginDevelopment(), TEXT("QuestInProgress"), sizeof(FQuestInProgress), Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestInProgress(FQuestInProgress::StaticStruct, TEXT("/Script/PluginDevelopment"), TEXT("QuestInProgress"), false, nullptr, nullptr);
static struct FScriptStruct_PluginDevelopment_StaticRegisterNativesFQuestInProgress
{
	FScriptStruct_PluginDevelopment_StaticRegisterNativesFQuestInProgress()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestInProgress")),new UScriptStruct::TCppStructOps<FQuestInProgress>);
	}
} ScriptStruct_PluginDevelopment_StaticRegisterNativesFQuestInProgress;
	UScriptStruct* Z_Construct_UScriptStruct_FQuestInProgress()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PluginDevelopment();
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestInProgress"), sizeof(FQuestInProgress), Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("QuestInProgress"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FQuestInProgress>, EStructFlags(0x00000001));
			UProperty* NewProp_QuestProgress = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("QuestProgress"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(QuestProgress, FQuestInProgress), 0x0010000000000001, Z_Construct_UEnum_PluginDevelopment_EQuestCompletion());
			UProperty* NewProp_QuestProgress_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_QuestProgress, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Quest = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Quest"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Quest, FQuestInProgress), 0x0010000000000001, Z_Construct_UClass_UQuest_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
			MetaData->SetValue(NewProp_QuestProgress, TEXT("Category"), TEXT("QuestInProgress"));
			MetaData->SetValue(NewProp_QuestProgress, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
			MetaData->SetValue(NewProp_QuestProgress, TEXT("ToolTip"), TEXT("*       Current progress in the quest."));
			MetaData->SetValue(NewProp_Quest, TEXT("Category"), TEXT("QuestInProgress"));
			MetaData->SetValue(NewProp_Quest, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
			MetaData->SetValue(NewProp_Quest, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Quest, TEXT("ToolTip"), TEXT("*       Quest data asset."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC() { return 2323762846U; }
	void UQuest::StaticRegisterNativesUQuest()
	{
	}
	UClass* Z_Construct_UClass_UQuest_NoRegister()
	{
		return UQuest::StaticClass();
	}
	UClass* Z_Construct_UClass_UQuest()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_PluginDevelopment();
			OuterClass = UQuest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_InputList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InputList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InputList, UQuest), 0x0010000000000001);
				UProperty* NewProp_InputList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InputList, TEXT("InputList"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_InputAtom_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInputBlackList, UQuest);
				UProperty* NewProp_bInputBlackList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bInputBlackList"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInputBlackList, UQuest), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bInputBlackList, UQuest), sizeof(uint8), false);
				UProperty* NewProp_QuestStateMachine = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QuestStateMachine"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(QuestStateMachine, UQuest), 0x0010000000000001, Z_Construct_UClass_USM_State_NoRegister());
				UProperty* NewProp_QuestName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QuestName"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(QuestName, UQuest), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<UQuest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Quest.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Generic Quest"));
				MetaData->SetValue(NewProp_InputList, TEXT("Category"), TEXT("Quest"));
				MetaData->SetValue(NewProp_InputList, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_InputList, TEXT("ToolTip"), TEXT("*       The blacklist/whitelist (depending on bBlackList) used to filter\n*       InputAtoms this Quest recognizes."));
				MetaData->SetValue(NewProp_bInputBlackList, TEXT("Category"), TEXT("Quest"));
				MetaData->SetValue(NewProp_bInputBlackList, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_bInputBlackList, TEXT("ToolTip"), TEXT("*       If true, the InputList is a blacklist; otherwise, it is a whitelist."));
				MetaData->SetValue(NewProp_QuestStateMachine, TEXT("Category"), TEXT("Quest"));
				MetaData->SetValue(NewProp_QuestStateMachine, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_QuestStateMachine, TEXT("ToolTip"), TEXT("*       If this machine accepts our QuestActivities log, the quest is successful"));
				MetaData->SetValue(NewProp_QuestName, TEXT("Category"), TEXT("Quest"));
				MetaData->SetValue(NewProp_QuestName, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_QuestName, TEXT("ToolTip"), TEXT("*       Quest Name"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuest, 1271423827);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuest(Z_Construct_UClass_UQuest, &UQuest::StaticClass, TEXT("/Script/PluginDevelopment"), TEXT("UQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
	void UQuestStatus::StaticRegisterNativesUQuestStatus()
	{
		UClass* Class = UQuestStatus::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "UpdateQuests", (Native)&UQuestStatus::execUpdateQuests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UQuestStatus_UpdateQuests()
	{
		struct QuestStatus_eventUpdateQuests_Parms
		{
			USM_InputAtom* QuestActivity;
		};
		UObject* Outer = Z_Construct_UClass_UQuestStatus();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateQuests"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(QuestStatus_eventUpdateQuests_Parms));
			UProperty* NewProp_QuestActivity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("QuestActivity"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(QuestActivity, QuestStatus_eventUpdateQuests_Parms), 0x0010000000000080, Z_Construct_UClass_USM_InputAtom_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Quests"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("*       Add to our quest activity log.\n*       Checks to see if any unfinished quests remain"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestStatus_NoRegister()
	{
		return UQuestStatus::StaticClass();
	}
	UClass* Z_Construct_UClass_UQuestStatus()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_PluginDevelopment();
			OuterClass = UQuestStatus::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UQuestStatus_UpdateQuests());

				UProperty* NewProp_QuestList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QuestList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(QuestList, UQuestStatus), 0x0020080000000001);
				UProperty* NewProp_QuestList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_QuestList, TEXT("QuestList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FQuestInProgress());
				UProperty* NewProp_QuestActivities = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QuestActivities"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(QuestActivities, UQuestStatus), 0x0020080000000001);
				UProperty* NewProp_QuestActivities_Inner = new(EC_InternalUseOnlyConstructor, NewProp_QuestActivities, TEXT("QuestActivities"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_InputAtom_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UQuestStatus_UpdateQuests(), "UpdateQuests"); // 208916817
				static TCppClassTypeInfo<TCppClassTypeTraits<UQuestStatus> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Quest.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_QuestList, TEXT("Category"), TEXT("QuestStatus"));
				MetaData->SetValue(NewProp_QuestList, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_QuestList, TEXT("ToolTip"), TEXT("*       The list of quests in our current game or area."));
				MetaData->SetValue(NewProp_QuestActivities, TEXT("Category"), TEXT("QuestStatus"));
				MetaData->SetValue(NewProp_QuestActivities, TEXT("ModuleRelativePath"), TEXT("Quest.h"));
				MetaData->SetValue(NewProp_QuestActivities, TEXT("ToolTip"), TEXT("*       The master list of all quest-related things we've done"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestStatus, 448731619);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestStatus(Z_Construct_UClass_UQuestStatus, &UQuestStatus::StaticClass, TEXT("/Script/PluginDevelopment"), TEXT("UQuestStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestStatus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
