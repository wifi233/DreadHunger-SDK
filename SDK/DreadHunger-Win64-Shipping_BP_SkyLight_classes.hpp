                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_SkyLight_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkyLight.BP_SkyLight_C
// size:0x0021 (0x0220 - 0x0241)
class ABP_SkyLight_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        LightComponent1;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent0;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	EShipSpacePartition                                ShipSection;                                              // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_SkyLight(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
