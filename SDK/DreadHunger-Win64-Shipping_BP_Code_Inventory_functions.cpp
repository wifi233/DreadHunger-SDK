                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Code_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Code_Inventory.BP_Code_Inventory_C.LoadFromInventory
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Inventory*           FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Code_Inventory_C::LoadFromInventory(class ADH_Inventory* FromInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Code_Inventory.BP_Code_Inventory_C.LoadFromInventory");

	ABP_Code_Inventory_C_LoadFromInventory_Params params;
	params.FromInventory = FromInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Code_Inventory.BP_Code_Inventory_C.ExecuteUbergraph_BP_Code_Inventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Code_Inventory_C::ExecuteUbergraph_BP_Code_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Code_Inventory.BP_Code_Inventory_C.ExecuteUbergraph_BP_Code_Inventory");

	ABP_Code_Inventory_C_ExecuteUbergraph_BP_Code_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
