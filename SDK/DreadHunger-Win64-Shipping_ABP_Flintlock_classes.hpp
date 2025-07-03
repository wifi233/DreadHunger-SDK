                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Flintlock_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Flintlock.ABP_Flintlock_C
// size:0x0100 (0x02C0 - 0x03C0)
class UABP_Flintlock_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x02F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0340(0x0080)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Flintlock(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
