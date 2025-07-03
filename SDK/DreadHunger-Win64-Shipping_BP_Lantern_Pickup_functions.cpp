                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Lantern_Pickup_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.OnRep_bShowLight
// (BlueprintCallable, BlueprintEvent)

void ABP_Lantern_Pickup_C::OnRep_bShowLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.OnRep_bShowLight");

	ABP_Lantern_Pickup_C_OnRep_bShowLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Pickup_C::BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	ABP_Lantern_Pickup_C_BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Lantern_Pickup_C::BndEvt__LanternHeat_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");

	ABP_Lantern_Pickup_C_BndEvt__LanternHeat_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_Pickup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.ReceiveBeginPlay");

	ABP_Lantern_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.ExecuteUbergraph_BP_Lantern_Pickup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_Pickup_C::ExecuteUbergraph_BP_Lantern_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_Pickup.BP_Lantern_Pickup_C.ExecuteUbergraph_BP_Lantern_Pickup");

	ABP_Lantern_Pickup_C_ExecuteUbergraph_BP_Lantern_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
