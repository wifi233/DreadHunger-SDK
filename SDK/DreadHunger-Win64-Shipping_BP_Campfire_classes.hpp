                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Campfire_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campfire.BP_Campfire_C
// size:0x0008 (0x0288 - 0x0290)
class ABP_Campfire_C : public ADH_Campfire
{
public:
	class UStaticMeshComponent*                        SootDecal;                                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	TArray<EInventoryType> GetBurnTypes()//offset:0x13CEB30;
	struct FText GetName()//offset:0x13CEB30;
	bool GetBurnTime(EInventoryType Type, float* BurnTime)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
