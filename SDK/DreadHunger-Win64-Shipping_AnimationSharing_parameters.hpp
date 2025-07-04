                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AnimationSharing_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
struct UAnimSharingStateInstance_GetInstancedActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
struct UAnimationSharingManager_RegisterActorWithSkeletonBP_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeleton*                                   SharingSkeleton;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
struct UAnimationSharingManager_GetAnimationSharingManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationSharingManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
struct UAnimationSharingManager_CreateAnimationSharingManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationSharingSetup*                      Setup;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
struct UAnimationSharingManager_AnimationSharingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
struct UAnimationSharingStateProcessor_ProcessActorState_Params
{
	int                                                OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OnDemandState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldProcess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
struct UAnimationSharingStateProcessor_GetAnimationStateEnum_Params
{
	class UEnum*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
