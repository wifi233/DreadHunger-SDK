                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_CoalBarrel_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnRep_InventoryAddedFlash
// (BlueprintCallable, BlueprintEvent)

void ABP_CoalBarrel_Inventory_C::OnRep_InventoryAddedFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnRep_InventoryAddedFlash");

	ABP_CoalBarrel_Inventory_C_OnRep_InventoryAddedFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnSpawnedPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDropMethod           SpawnMethod                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoalBarrel_Inventory_C::OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnSpawnedPickup");

	ABP_CoalBarrel_Inventory_C_OnSpawnedPickup_Params params;
	params.Pickup = Pickup;
	params.SpawnMethod = SpawnMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnUsed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              UseTransform                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_CoalBarrel_Inventory_C::OnUsed(const struct FTransform& UseTransform, unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnUsed");

	ABP_CoalBarrel_Inventory_C_OnUsed_Params params;
	params.UseTransform = UseTransform;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ADH_Inventory*           AddedType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedAmount                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoalBarrel_Inventory_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature(class ADH_Inventory* AddedType, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature");

	ABP_CoalBarrel_Inventory_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature_Params params;
	params.AddedType = AddedType;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.LoadFromInventory
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Inventory*           FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoalBarrel_Inventory_C::LoadFromInventory(class ADH_Inventory* FromInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.LoadFromInventory");

	ABP_CoalBarrel_Inventory_C_LoadFromInventory_Params params;
	params.FromInventory = FromInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.LoadFromPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     FromPickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoalBarrel_Inventory_C::LoadFromPickup(class ADH_InventoryPickup* FromPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.LoadFromPickup");

	ABP_CoalBarrel_Inventory_C_LoadFromPickup_Params params;
	params.FromPickup = FromPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.ExecuteUbergraph_BP_CoalBarrel_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoalBarrel_Inventory_C::ExecuteUbergraph_BP_CoalBarrel_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.ExecuteUbergraph_BP_CoalBarrel_Inventory");

	ABP_CoalBarrel_Inventory_C_ExecuteUbergraph_BP_CoalBarrel_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
