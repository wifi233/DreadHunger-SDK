                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AnimationSharing_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationSharing.AnimSharingStateInstance
// size:0x0020 (0x02C0 - 0x02E0)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	float                                              PermutationTimeOffset;                                    // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UAnimSharingInstance*                        Instance;                                                 // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	void GetInstancedActors(TArray<class AActor*>* Actors)//offset:0xA63C50;
};


// Class AnimationSharing.AnimSharingTransitionInstance
// size:0x0010 (0x02C0 - 0x02D0)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BlendTime;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlendBool;                                               // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
};


// Class AnimationSharing.AnimSharingAdditiveInstance
// size:0x0010 (0x02C0 - 0x02D0)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                        // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
};


// Class AnimationSharing.AnimSharingInstance
// size:0x00F0 (0x0028 - 0x0118)
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	class UAnimationSharingStateProcessor*             StateProcessor;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0090(0x0038) MISSED OFFSET
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                   // 0x00C8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	class UEnum*                                       StateEnum;                                                // 0x00E8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class AActor*                                      SharingActor;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET
};


// Class AnimationSharing.AnimationSharingManager
// size:0x0060 (0x0028 - 0x0088)
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                           Skeletons;                                                // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)//offset:0xA63EC0;
	static class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject)//offset:0xA63B90;
	static bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)//offset:0xA63AC0;
	static bool AnimationSharingEnabled()//offset:0xA63A90;
};


// Class AnimationSharing.AnimationSharingSetup
// size:0x0020 (0x0028 - 0x0048)
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FAnimationSharingScalability                ScalabilitySettings;                                      // 0x0038(0x0010) (Edit, Config)
};


// Class AnimationSharing.AnimationSharingStateProcessor
// size:0x0028 (0x0028 - 0x0050)
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: 

	void ProcessActorState(int* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess)//offset:0xA63D00;
	class UEnum* GetAnimationStateEnum()//offset:0xA63C20;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
