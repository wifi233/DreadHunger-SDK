                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.GetUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Powderkeg_Inventory_C::GetUseState(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.GetUseState");

	ABP_Powderkeg_Inventory_C_GetUseState_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.SetIsArmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewIsArmed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Inventory_C::SetIsArmed(bool bNewIsArmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.SetIsArmed");

	ABP_Powderkeg_Inventory_C_SetIsArmed_Params params;
	params.bNewIsArmed = bNewIsArmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.OnUsed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              UseTransform                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Powderkeg_Inventory_C::OnUsed(const struct FTransform& UseTransform, unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.OnUsed");

	ABP_Powderkeg_Inventory_C_OnUsed_Params params;
	params.UseTransform = UseTransform;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.OnSpawnedPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDropMethod           SpawnMethod                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Inventory_C::OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.OnSpawnedPickup");

	ABP_Powderkeg_Inventory_C_OnSpawnedPickup_Params params;
	params.Pickup = Pickup;
	params.SpawnMethod = SpawnMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.ExecuteUbergraph_BP_Powderkeg_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Inventory_C::ExecuteUbergraph_BP_Powderkeg_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.ExecuteUbergraph_BP_Powderkeg_Inventory");

	ABP_Powderkeg_Inventory_C_ExecuteUbergraph_BP_Powderkeg_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
