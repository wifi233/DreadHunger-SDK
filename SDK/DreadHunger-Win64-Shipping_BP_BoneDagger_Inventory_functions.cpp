                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BoneDagger_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoneDagger_Inventory.BP_BoneDagger_Inventory_C.OnAimed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsAiming                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoneDagger_Inventory_C::OnAimed(bool bNewIsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoneDagger_Inventory.BP_BoneDagger_Inventory_C.OnAimed");

	ABP_BoneDagger_Inventory_C_OnAimed_Params params;
	params.bNewIsAiming = bNewIsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoneDagger_Inventory.BP_BoneDagger_Inventory_C.ExecuteUbergraph_BP_BoneDagger_Inventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoneDagger_Inventory_C::ExecuteUbergraph_BP_BoneDagger_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoneDagger_Inventory.BP_BoneDagger_Inventory_C.ExecuteUbergraph_BP_BoneDagger_Inventory");

	ABP_BoneDagger_Inventory_C_ExecuteUbergraph_BP_BoneDagger_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
