                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Lantern_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.GetUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Lantern_Inventory_C::GetUseState(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.GetUseState");

	ABP_Lantern_Inventory_C_GetUseState_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Lantern_Inventory_C::CanUse(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.CanUse");

	ABP_Lantern_Inventory_C_CanUse_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnSpawnedPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDropMethod           SpawnMethod                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Inventory_C::OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnSpawnedPickup");

	ABP_Lantern_Inventory_C_OnSpawnedPickup_Params params;
	params.Pickup = Pickup;
	params.SpawnMethod = SpawnMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Inventory_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.ReceiveTick");

	ABP_Lantern_Inventory_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnEquipped
// (Event, Public, BlueprintEvent)

void ABP_Lantern_Inventory_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnEquipped");

	ABP_Lantern_Inventory_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnPutDown
// (Event, Public, BlueprintEvent)

void ABP_Lantern_Inventory_C::OnPutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnPutDown");

	ABP_Lantern_Inventory_C_OnPutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Inventory_C::BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	ABP_Lantern_Inventory_C_BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Lantern_Inventory_C::BndEvt__LanternHeat_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature");

	ABP_Lantern_Inventory_C_BndEvt__LanternHeat_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnUsed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              UseTransform                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Lantern_Inventory_C::OnUsed(const struct FTransform& UseTransform, unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnUsed");

	ABP_Lantern_Inventory_C_OnUsed_Params params;
	params.UseTransform = UseTransform;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnTopStateChanged
// (Event, Public, BlueprintEvent)

void ABP_Lantern_Inventory_C::OnTopStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnTopStateChanged");

	ABP_Lantern_Inventory_C_OnTopStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.LoadFromPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     FromPickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Inventory_C::LoadFromPickup(class ADH_InventoryPickup* FromPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.LoadFromPickup");

	ABP_Lantern_Inventory_C_LoadFromPickup_Params params;
	params.FromPickup = FromPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.ExecuteUbergraph_BP_Lantern_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Inventory_C::ExecuteUbergraph_BP_Lantern_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.ExecuteUbergraph_BP_Lantern_Inventory");

	ABP_Lantern_Inventory_C_ExecuteUbergraph_BP_Lantern_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
