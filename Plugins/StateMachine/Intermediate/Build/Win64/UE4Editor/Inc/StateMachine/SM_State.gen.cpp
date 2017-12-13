// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SM_State.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSM_State() {}
// Cross Module References
	STATEMACHINE_API UEnum* Z_Construct_UEnum_StateMachine_ESateMachineCompletionType();
	UPackage* Z_Construct_UPackage__Script_StateMachine();
	STATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FSateMachineResult();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_Branch_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_Branch();
	STATEMACHINE_API UFunction* Z_Construct_UFunction_USM_State_RunState();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
static UEnum* ESateMachineCompletionType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachine_ESateMachineCompletionType, Z_Construct_UPackage__Script_StateMachine(), TEXT("ESateMachineCompletionType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESateMachineCompletionType(ESateMachineCompletionType_StaticEnum, TEXT("/Script/StateMachine"), TEXT("ESateMachineCompletionType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_StateMachine_ESateMachineCompletionType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		extern uint32 Get_Z_Construct_UEnum_StateMachine_ESateMachineCompletionType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESateMachineCompletionType"), 0, Get_Z_Construct_UEnum_StateMachine_ESateMachineCompletionType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESateMachineCompletionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESateMachineCompletionType::NotAccepted"), 0);
			EnumNames.Emplace(TEXT("ESateMachineCompletionType::Accepted"), 1);
			EnumNames.Emplace(TEXT("ESateMachineCompletionType::Rejected"), 2);
			EnumNames.Emplace(TEXT("ESateMachineCompletionType::OutOfSteps"), 3);
			EnumNames.Emplace(TEXT("ESateMachineCompletionType::ESateMachineCompletionType_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESateMachineCompletionType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Accepted.ToolTip"), TEXT("Success - this state is an Accept state"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NotAccepted.ToolTip"), TEXT("Implicit failure - thise state is not marked as Accept"));
			MetaData->SetValue(ReturnEnum, TEXT("OutOfSteps.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("OutOfSteps.ToolTip"), TEXT("Our simulation ran out of steps while the machine was still running"));
			MetaData->SetValue(ReturnEnum, TEXT("Rejected.ToolTip"), TEXT("Explicit failure - this state is specifically marked as failure/not-accept"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_StateMachine_ESateMachineCompletionType_CRC() { return 736201880U; }
class UScriptStruct* FSateMachineResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATEMACHINE_API uint32 Get_Z_Construct_UScriptStruct_FSateMachineResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSateMachineResult, Z_Construct_UPackage__Script_StateMachine(), TEXT("SateMachineResult"), sizeof(FSateMachineResult), Get_Z_Construct_UScriptStruct_FSateMachineResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSateMachineResult(FSateMachineResult::StaticStruct, TEXT("/Script/StateMachine"), TEXT("SateMachineResult"), false, nullptr, nullptr);
static struct FScriptStruct_StateMachine_StaticRegisterNativesFSateMachineResult
{
	FScriptStruct_StateMachine_StaticRegisterNativesFSateMachineResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SateMachineResult")),new UScriptStruct::TCppStructOps<FSateMachineResult>);
	}
} ScriptStruct_StateMachine_StaticRegisterNativesFSateMachineResult;
	UScriptStruct* Z_Construct_UScriptStruct_FSateMachineResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		extern uint32 Get_Z_Construct_UScriptStruct_FSateMachineResult_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SateMachineResult"), sizeof(FSateMachineResult), Get_Z_Construct_UScriptStruct_FSateMachineResult_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SateMachineResult"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSateMachineResult>, EStructFlags(0x00000201));
			UProperty* NewProp_DataIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DataIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DataIndex, FSateMachineResult), 0x0010000000000000);
			UProperty* NewProp_FinalState = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FinalState"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FinalState, FSateMachineResult), 0x0010000000000000, Z_Construct_UClass_USM_State_NoRegister());
			UProperty* NewProp_CompletionType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CompletionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CompletionType, FSateMachineResult), 0x0010000000000000, Z_Construct_UEnum_StateMachine_ESateMachineCompletionType());
			UProperty* NewProp_CompletionType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CompletionType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
			MetaData->SetValue(NewProp_DataIndex, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
			MetaData->SetValue(NewProp_FinalState, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
			MetaData->SetValue(NewProp_CompletionType, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSateMachineResult_CRC() { return 1972878574U; }
	void USM_InputAtom::StaticRegisterNativesUSM_InputAtom()
	{
	}
	UClass* Z_Construct_UClass_USM_InputAtom_NoRegister()
	{
		return USM_InputAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_InputAtom()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = USM_InputAtom::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_Description = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Description"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Description, USM_InputAtom), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<USM_InputAtom> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SM_State.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_Description, TEXT("Category"), TEXT("SM_InputAtom"));
				MetaData->SetValue(NewProp_Description, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USM_InputAtom, 3852836237);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_InputAtom(Z_Construct_UClass_USM_InputAtom, &USM_InputAtom::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_InputAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_InputAtom);
	void USM_Branch::StaticRegisterNativesUSM_Branch()
	{
	}
	UClass* Z_Construct_UClass_USM_Branch_NoRegister()
	{
		return USM_Branch::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_Branch()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = USM_Branch::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20101080u;


				UProperty* NewProp_AcceptableInputs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AcceptableInputs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AcceptableInputs, USM_Branch), 0x0020080000000001);
				UProperty* NewProp_AcceptableInputs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AcceptableInputs, TEXT("AcceptableInputs"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_InputAtom_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReverseInputTest, USM_Branch);
				UProperty* NewProp_bReverseInputTest = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bReverseInputTest"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReverseInputTest, USM_Branch), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bReverseInputTest, USM_Branch), sizeof(uint8), false);
				UProperty* NewProp_DestinationState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DestinationState"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DestinationState, USM_Branch), 0x0020080000000001, Z_Construct_UClass_USM_State_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USM_Branch> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SM_State.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_AcceptableInputs, TEXT("Category"), TEXT("SM_Branch"));
				MetaData->SetValue(NewProp_AcceptableInputs, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_AcceptableInputs, TEXT("ToolTip"), TEXT("Accpetable inputs.  The current input atom must be on this list"));
				MetaData->SetValue(NewProp_bReverseInputTest, TEXT("Category"), TEXT("SM_Branch"));
				MetaData->SetValue(NewProp_bReverseInputTest, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_bReverseInputTest, TEXT("ToolTip"), TEXT("If true, the meaning of AccpetableInputs is reversed"));
				MetaData->SetValue(NewProp_DestinationState, TEXT("Category"), TEXT("SM_Branch"));
				MetaData->SetValue(NewProp_DestinationState, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_DestinationState, TEXT("ToolTip"), TEXT("State where we go next.  Ignored if null"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USM_Branch, 2674635166);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_Branch(Z_Construct_UClass_USM_Branch, &USM_Branch::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_Branch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_Branch);
	void USM_State::StaticRegisterNativesUSM_State()
	{
		UClass* Class = USM_State::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "RunState", (Native)&USM_State::execRunState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USM_State_RunState()
	{
		struct SM_State_eventRunState_Parms
		{
			const UObject* RefObject;
			TArray<USM_InputAtom*> DataSource;
			int32 DataIndex;
			int32 RemainingSteps;
			FSateMachineResult ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USM_State();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RunState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420400, 65535, sizeof(SM_State_eventRunState_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SM_State_eventRunState_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FSateMachineResult());
			UProperty* NewProp_RemainingSteps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RemainingSteps"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RemainingSteps, SM_State_eventRunState_Parms), 0x0010000000000080);
			UProperty* NewProp_DataIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DataIndex, SM_State_eventRunState_Parms), 0x0010000000000080);
			UProperty* NewProp_DataSource = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataSource"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataSource, SM_State_eventRunState_Parms), 0x0010000008000182);
			UProperty* NewProp_DataSource_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataSource, TEXT("DataSource"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_InputAtom_NoRegister());
			UProperty* NewProp_RefObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RefObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RefObject, SM_State_eventRunState_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("State Machine"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("*       Attempt to run the state with input from the given DataSource object.\n*       Will start reading input at DataIndex.\n*       Will decrement RemainingSteps and automatically fail after it hits 0."));
			MetaData->SetValue(NewProp_DataSource, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_RefObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USM_State_NoRegister()
	{
		return USM_State::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_State()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = USM_State::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USM_State_RunState());

				UProperty* NewProp_InstancedBranches = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InstancedBranches"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InstancedBranches, USM_State), 0x0020088000000009);
				UProperty* NewProp_InstancedBranches_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InstancedBranches, TEXT("InstancedBranches"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0002000000080008, Z_Construct_UClass_USM_Branch_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoopByDefault, USM_State);
				UProperty* NewProp_bLoopByDefault = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoopByDefault"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoopByDefault, USM_State), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bLoopByDefault, USM_State), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTerminateImmediately, USM_State);
				UProperty* NewProp_bTerminateImmediately = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTerminateImmediately"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTerminateImmediately, USM_State), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bTerminateImmediately, USM_State), sizeof(uint8), false);
				UProperty* NewProp_CompletionType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CompletionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CompletionType, USM_State), 0x0020080000000001, Z_Construct_UEnum_StateMachine_ESateMachineCompletionType());
				UProperty* NewProp_CompletionType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CompletionType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USM_State_RunState(), "RunState"); // 1690191436
				static TCppClassTypeInfo<TCppClassTypeTraits<USM_State> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SM_State.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("ToolTip"), TEXT("*       Branches to other states.  These are in priority order, so the\n*       first successful branch will be taken."));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("ToolTip"), TEXT("*       Branches to other states.  These are in priority order, so the\n*       first successful branch will be taken."));
				MetaData->SetValue(NewProp_bLoopByDefault, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_bLoopByDefault, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_bLoopByDefault, TEXT("ToolTip"), TEXT("*       If this is set, this state will loop on itself whenever an unhandles input atom is detected."));
				MetaData->SetValue(NewProp_bTerminateImmediately, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_bTerminateImmediately, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_bTerminateImmediately, TEXT("ToolTip"), TEXT("*       A state machine that enters this state will terminate immediately\n*       regardless of whether or not there is more input data."));
				MetaData->SetValue(NewProp_CompletionType, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_CompletionType, TEXT("ModuleRelativePath"), TEXT("Public/SM_State.h"));
				MetaData->SetValue(NewProp_CompletionType, TEXT("ToolTip"), TEXT("*       If input runs out on this state - or TerminateImmediately is true -\n*       this is how result will be interpreted"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USM_State, 1371414199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_State(Z_Construct_UClass_USM_State, &USM_State::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_State);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
