                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Rat_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Rat.ABP_Rat_C
// size:0x03CC (0x03B0 - 0x077C)
class UABP_Rat_C : public UDH_CharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03B8(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                      // 0x03F0(0x0260)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0650(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0670(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x0690(0x00E8)
	float                                              RandomStartPosition;                                      // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void AnimGraph(struct FPoseLink* AnimGraph)//offset:0x13CEB30;
	void BlueprintInitializeAnimation()//offset:0x13CEB30;
	void ExecuteUbergraph_ABP_Rat(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
