                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Prisoner_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Prisoner.ABP_Prisoner_C
// size:0x03F0 (0x02D0 - 0x06C0)
class UABP_Prisoner_C : public UDH_PrisonerPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02D8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0308(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x03A8(0x0080)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                               // 0x0428(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool02;                          // 0x04A0(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0540(0x0018)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool03;                          // 0x0558(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x05F8(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0678(0x0048)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Prisoner(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
