                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Doppelganger_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Doppelganger.ABP_Doppelganger_C
// size:0x02E8 (0x02D0 - 0x05B8)
class UABP_Doppelganger_C : public UDH_DoppelgangerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02D8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x0308(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x03C8(0x0018)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x03E0(0x01D8)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Doppelganger_AnimGraphNode_LayeredBoneBlend_ABAA7367436014B73C9206B3455F8832()//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Doppelganger(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
