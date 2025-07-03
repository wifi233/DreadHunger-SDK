                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GameplayTasks_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayTasks.GameplayTask.ReadyForActivation
struct UGameplayTask_ReadyForActivation_Params
{
};

// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
struct UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params
{
};

// Function GameplayTasks.GameplayTask.EndTask
struct UGameplayTask_EndTask_Params
{
};

// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
struct UGameplayTask_ClaimResource_ClaimResources_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UGameplayTaskResource*>               ResourceClasses;                                          // (Parm, ZeroConstructor)
	unsigned char                                      Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ClaimResource*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
struct UGameplayTask_ClaimResource_ClaimResource_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTaskResource*                       ResourceClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_ClaimResource*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct UGameplayTask_SpawnActor_SpawnActor_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnlyOnAuthority;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_SpawnActor*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask_WaitDelay*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
struct UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params
{
};

// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
struct UGameplayTasksComponent_OnRep_SimulatedTasks_Params
{
};

// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct UGameplayTasksComponent_K2_RunGameplayTask_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayTask*                               Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UGameplayTaskResource*>               AdditionalRequiredResources;                              // (Parm, ZeroConstructor)
	TArray<class UGameplayTaskResource*>               AdditionalClaimedResources;                               // (Parm, ZeroConstructor)
	EGameplayTaskRunResult                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
