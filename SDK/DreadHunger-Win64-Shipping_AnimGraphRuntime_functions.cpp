                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AnimGraphRuntime_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 RootPos                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 JointPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 JointTarget                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Effector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutJointPos                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutEndPos                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartStretchRatio              (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxStretchScale                (Parm, ZeroConstructor, IsPlainOldData)

static void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");

	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;
	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)

static void UKismetAnimationLibrary::K2_StartProfilingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer");

	UKismetAnimationLibrary_K2_StartProfilingTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMinX                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMaxX                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMinY                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMaxY                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMinZ                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMaxZ                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");

	UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.RangeOutMinX = RangeOutMinX;
	params.RangeOutMaxX = RangeOutMaxX;
	params.RangeOutMinY = RangeOutMinY;
	params.RangeOutMaxY = RangeOutMaxY;
	params.RangeOutMinZ = RangeOutMinZ;
	params.RangeOutMaxZ = RangeOutMaxZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeOutMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");

	UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params;
	params.Value = Value;
	params.RangeOutMin = RangeOutMin;
	params.RangeOutMax = RangeOutMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              CurrentTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LookAtVector                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseUpVector                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampConeInDegree              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

static struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");

	UKismetAnimationLibrary_K2_LookAt_Params params;
	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bLog                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  LogPrefix                      (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer");

	UKismetAnimationLibrary_K2_EndProfilingTimer_Params params;
	params.bLog = bLog;
	params.LogPrefix = LogPrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketOrBoneNameA              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpaceA                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketOrBoneNameB              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpaceB                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemapRange                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeMin                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeMax                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRangeMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRangeMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");

	UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params;
	params.Component = Component;
	params.SocketOrBoneNameA = SocketOrBoneNameA;
	params.SocketSpaceA = SocketSpaceA;
	params.SocketOrBoneNameB = SocketOrBoneNameB;
	params.SocketSpaceB = SocketSpaceB;
	params.bRemapRange = bRemapRange;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;
	params.OutRangeMin = OutRangeMin;
	params.OutRangeMax = OutRangeMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketOrBoneNameFrom           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketOrBoneNameTo             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");

	UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params;
	params.Component = Component;
	params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	params.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketOrBoneName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReferenceSocketOrBone          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetInBoneSpace              (Parm, ZeroConstructor, IsPlainOldData)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData)
// EEasingFuncType                EasingType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeFloatCurve      CustomCurve                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets");

	UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Component = Component;
	params.SocketOrBoneName = SocketOrBoneName;
	params.ReferenceSocketOrBone = ReferenceSocketOrBone;
	params.SocketSpace = SocketSpace;
	params.OffsetInBoneSpace = OffsetInBoneSpace;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;
	params.EasingType = EasingType;
	params.CustomCurve = CustomCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory");

	UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Position = Position;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
