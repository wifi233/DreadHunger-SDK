                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AnimGraphRuntime_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
	struct FVector                                     RootPos;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JointPos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JointTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Effector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutJointPos;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutEndPos;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStretching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartStretchRatio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
struct UKismetAnimationLibrary_K2_StartProfilingTimer_Params
{
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UKismetAnimationLibrary_K2_LookAt_Params
{
	struct FTransform                                  CurrentTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LookAtVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUpVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampConeInDegree;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params
{
	bool                                               bLog;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      LogPrefix;                                                // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneNameA;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               SocketSpaceA;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketOrBoneNameB;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               SocketSpaceB;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemapRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneNameFrom;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketOrBoneNameTo;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReferenceSocketOrBone;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               SocketSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetInBoneSpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPositionHistory                            History;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EEasingFuncType                                    EasingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomCurve;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPositionHistory                            History;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
	class USkeletalMeshComponent*                      InSkeletalMeshComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayMontageCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
