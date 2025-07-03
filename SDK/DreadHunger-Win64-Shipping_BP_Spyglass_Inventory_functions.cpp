                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Spyglass_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.UpdateListenerPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_Inventory_C::UpdateListenerPosition(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.UpdateListenerPosition");

	ABP_Spyglass_Inventory_C_UpdateListenerPosition_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ClearTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Spyglass_Inventory_C::ClearTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ClearTarget");

	ABP_Spyglass_Inventory_C_ClearTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.OnChangedTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_Inventory_C::OnChangedTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.OnChangedTarget");

	ABP_Spyglass_Inventory_C_OnChangedTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.UpdateTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Spyglass_Inventory_C::UpdateTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.UpdateTarget");

	ABP_Spyglass_Inventory_C_UpdateTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.GetUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Spyglass_Inventory_C::GetUseState(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.GetUseState");

	ABP_Spyglass_Inventory_C_GetUseState_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.OnAimed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsAiming                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_Inventory_C::OnAimed(bool bNewIsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.OnAimed");

	ABP_Spyglass_Inventory_C_OnAimed_Params params;
	params.bNewIsAiming = bNewIsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_Inventory_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ReceiveTick");

	ABP_Spyglass_Inventory_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Spyglass_Inventory_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ReceiveDestroyed");

	ABP_Spyglass_Inventory_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ExecuteUbergraph_BP_Spyglass_Inventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_Inventory_C::ExecuteUbergraph_BP_Spyglass_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ExecuteUbergraph_BP_Spyglass_Inventory");

	ABP_Spyglass_Inventory_C_ExecuteUbergraph_BP_Spyglass_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
