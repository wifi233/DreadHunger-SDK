                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Flintlock_Rifle_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Flintlock_Rifle.ABP_Flintlock_Rifle_C
// size:0x0221 (0x02C0 - 0x04E1)
class UABP_Flintlock_Rifle_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x02F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0340(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x03C0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x0460(0x0080)
	bool                                               IdleLoaded;                                               // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Flintlock_Rifle(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
