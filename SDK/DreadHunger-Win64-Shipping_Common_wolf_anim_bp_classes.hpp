                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Common_wolf_anim_bp_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Common_wolf_anim_bp.Common_wolf_anim_bp_C
// size:0x073C (0x03B0 - 0x0AEC)
class UCommon_wolf_anim_bp_C : public UDH_CharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03B8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x03E8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0468(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0508(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x0550(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool02;                          // 0x05D0(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0670(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0690(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x06B0(0x0108)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x07B8(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x08A0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x08D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot02;                                     // 0x0980(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool03;                          // 0x09C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer03;                           // 0x0A68(0x0080)
	float                                              RandomStartPosition;                                      // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void BlueprintInitializeAnimation()//offset:0x13CEB30;
	void ExecuteUbergraph_Common_wolf_anim_bp(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
