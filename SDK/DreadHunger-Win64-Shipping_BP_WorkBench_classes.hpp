                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_WorkBench_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WorkBench.BP_Workbench_C
// size:0x0018 (0x0258 - 0x0270)
class ABP_Workbench_C : public ADH_Workbench
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight1;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Lantern;                                                  // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Workbench(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
