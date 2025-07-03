                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Flags_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Flags.ABP_Flags_C
// size:0x1110 (0x02C0 - 0x13D0)
class UABP_Flags_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x02F8(0x0010)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                      // 0x0310(0x0260)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0570(0x0020)
	struct FAnimNode_Trail                             AnimGraphNode_Trail02;                                    // 0x0590(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail03;                                    // 0x07F0(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail04;                                    // 0x0A50(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail05;                                    // 0x0CB0(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail06;                                    // 0x0F10(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail07;                                    // 0x1170(0x0260)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Flags(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
