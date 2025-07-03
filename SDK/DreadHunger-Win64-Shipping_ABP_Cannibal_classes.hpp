                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Cannibal_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Cannibal.ABP_Cannibal_C
// size:0x0680 (0x03B0 - 0x0A30)
class UABP_Cannibal_C : public UDH_CharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03B8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x03E8(0x00E8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x04D0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x0518(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot02;                                     // 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0620(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x06A0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x07A8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x07C8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x07E8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x0888(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool02;                          // 0x0908(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer03;                           // 0x09A8(0x0080)
	float                                              SpeedPct;                                                 // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomStartPosition;                                      // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void BlueprintInitializeAnimation()//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Cannibal(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
