                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GameplayTasks_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayTasks.GameplayTask
// size:0x0040 (0x0028 - 0x0068)
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0038(0x0002) MISSED OFFSET
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                    // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x25];                                      // 0x003B(0x0025) MISSED OFFSET
	class UGameplayTask*                               ChildTask;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	void ReadyForActivation()//offset:0x3085920;
	void GenericGameplayTaskDelegate__DelegateSignature()//offset:0x13CEB30;
	void EndTask()//offset:0x30855C0;
};


// Class GameplayTasks.GameplayTask_ClaimResource
// size:0x0000 (0x0068 - 0x0068)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UGameplayTask_ClaimResource* ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UGameplayTaskResource*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName)//offset:0x3085400;
	static class UGameplayTask_ClaimResource* ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UGameplayTaskResource* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName)//offset:0x3085290;
};


// Class GameplayTasks.GameplayTask_SpawnActor
// size:0x0040 (0x0068 - 0x00A8)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct UEMulticastInlineDelegate                   Success;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   DidNotSpawn;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	class AActor*                                      ClassToSpawn;                                             // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* Class, bool bSpawnOnlyOnAuthority)//offset:0x3085940;
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)//offset:0x30855E0;
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)//offset:0x30851B0;
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// size:0x0030 (0x0068 - 0x0098)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct UEMulticastInlineDelegate                   OnFinished;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTimeExpired;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
};


// Class GameplayTasks.GameplayTask_WaitDelay
// size:0x0018 (0x0068 - 0x0080)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct UEMulticastInlineDelegate                   OnFinish;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority)//offset:0x3085B10;
	void TaskDelayDelegate__DelegateSignature()//offset:0x13CEB30;
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// size:0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:
};


// Class GameplayTasks.GameplayTaskResource
// size:0x0010 (0x0028 - 0x0038)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             AutoResourceID;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bManuallySetID;                                           // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};


// Class GameplayTasks.GameplayTasksComponent
// size:0x0070 (0x00B0 - 0x0120)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B0(0x000C) MISSED OFFSET
	unsigned char                                      bIsNetDirty;                                              // 0x00BC(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           // 0x00C0(0x0010) (Net, ZeroConstructor)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class UGameplayTask*>                       TickingTasks;                                             // 0x00F0(0x0010) (ZeroConstructor)
	TArray<class UGameplayTask*>                       KnownTasks;                                               // 0x0100(0x0010) (ZeroConstructor, Transient)
	struct UEMulticastInlineDelegate                   OnClaimedResourcesChange;                                 // 0x0110(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)

	void OnRep_SimulatedTasks()//offset:0x3085900;
	static EGameplayTaskRunResult K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UGameplayTaskResource*> AdditionalRequiredResources, TArray<class UGameplayTaskResource*> AdditionalClaimedResources)//offset:0x30856B0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
