                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AnimGraphRuntime_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// size:0x0008 (0x0038 - 0x0040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// size:0x0008 (0x0030 - 0x0038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class AnimGraphRuntime.AnimSequencerInstance
// size:0x0000 (0x02C0 - 0x02C0)
class UAnimSequencerInstance : public UAnimInstance
{
public:
};


// Class AnimGraphRuntime.KismetAnimationLibrary
// size:0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)//offset:0x22F5270;
	static void K2_StartProfilingTimer()//offset:0x22F5250;
	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)//offset:0x22F4F70;
	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)//offset:0x22F4E50;
	static struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)//offset:0x22F4BB0;
	static float K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix)//offset:0x22F4AC0;
	static float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)//offset:0x22F47D0;
	static struct FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo)//offset:0x22F46C0;
	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)//offset:0x22F4260;
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax)//offset:0x22F4040;
};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// size:0x0080 (0x0028 - 0x00A8)
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnCompleted;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnBlendOut;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInterrupted;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnNotifyBegin;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnNotifyEnd;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)//offset:0x22F65E0;
	void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)//offset:0x22F64F0;
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)//offset:0x22F6420;
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)//offset:0x22F6350;
	static class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)//offset:0x22F61C0;
};


// Class AnimGraphRuntime.SequencerAnimationSupport
// size:0x0000 (0x0028 - 0x0028)
class USequencerAnimationSupport : public UInterface
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
