                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_BearTrapView_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BearTrapView.ABP_BearTrapView_C
// size:0x0220 (0x02D0 - 0x04F0)
class UABP_BearTrapView_C : public UDH_BearTrapAnimInstance // 熊夹动画蓝图类
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02D8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0308(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0350(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x03F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x0470(0x0080)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30; // 动画图
	void ExecuteUbergraph_ABP_BearTrapView(int EntryPoint)//offset:0x13CEB30; // 执行熊夹动画蓝图事件图
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
