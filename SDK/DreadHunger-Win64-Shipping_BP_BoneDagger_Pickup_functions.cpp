                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BoneDagger_Pickup_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoneDagger_Pickup.BP_BoneDagger_Pickup_C.OnPickupThrownInWater
// (Event, Public, BlueprintEvent)

void ABP_BoneDagger_Pickup_C::OnPickupThrownInWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoneDagger_Pickup.BP_BoneDagger_Pickup_C.OnPickupThrownInWater");

	ABP_BoneDagger_Pickup_C_OnPickupThrownInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoneDagger_Pickup.BP_BoneDagger_Pickup_C.ExecuteUbergraph_BP_BoneDagger_Pickup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoneDagger_Pickup_C::ExecuteUbergraph_BP_BoneDagger_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoneDagger_Pickup.BP_BoneDagger_Pickup_C.ExecuteUbergraph_BP_BoneDagger_Pickup");

	ABP_BoneDagger_Pickup_C_ExecuteUbergraph_BP_BoneDagger_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
