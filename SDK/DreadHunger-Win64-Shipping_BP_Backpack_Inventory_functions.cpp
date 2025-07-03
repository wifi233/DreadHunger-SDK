                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Backpack_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Backpack_Inventory.BP_Backpack_Inventory_C.OnCrafted
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_PlayerState*         CraftingPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Backpack_Inventory_C::OnCrafted(class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Backpack_Inventory.BP_Backpack_Inventory_C.OnCrafted");

	ABP_Backpack_Inventory_C_OnCrafted_Params params;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Backpack_Inventory.BP_Backpack_Inventory_C.ExecuteUbergraph_BP_Backpack_Inventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Backpack_Inventory_C::ExecuteUbergraph_BP_Backpack_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Backpack_Inventory.BP_Backpack_Inventory_C.ExecuteUbergraph_BP_Backpack_Inventory");

	ABP_Backpack_Inventory_C_ExecuteUbergraph_BP_Backpack_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
