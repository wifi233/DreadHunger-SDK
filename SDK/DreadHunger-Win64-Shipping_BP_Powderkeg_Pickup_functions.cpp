                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_Pickup_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.CanBeInteractedWith
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_InteractPermissions ABP_Powderkeg_Pickup_C::CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.CanBeInteractedWith");

	ABP_Powderkeg_Pickup_C_CanBeInteractedWith_Params params;
	params.InteractInstigator = InteractInstigator;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.GetKeybindInteractText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDH_KeybindInteractionMessage ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_KeybindInteractionMessage ABP_Powderkeg_Pickup_C::GetKeybindInteractText(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.GetKeybindInteractText");

	ABP_Powderkeg_Pickup_C_GetKeybindInteractText_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.Defuse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Powderkeg_Pickup_C::Defuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.Defuse");

	ABP_Powderkeg_Pickup_C_Defuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.GetInteractTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Powderkeg_Pickup_C::GetInteractTime(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.GetInteractTime");

	ABP_Powderkeg_Pickup_C_GetInteractTime_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.OnInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             InteractInstigator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Powderkeg_Pickup_C::OnInteract(class AController* InteractInstigator, int SlotIndex, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.OnInteract");

	ABP_Powderkeg_Pickup_C_OnInteract_Params params;
	params.InteractInstigator = InteractInstigator;
	params.SlotIndex = SlotIndex;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.SetFuseEffectsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Pickup_C::SetFuseEffectsActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.SetFuseEffectsActive");

	ABP_Powderkeg_Pickup_C_SetFuseEffectsActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.OnRep_bFuseActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Powderkeg_Pickup_C::OnRep_bFuseActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.OnRep_bFuseActive");

	ABP_Powderkeg_Pickup_C_OnRep_bFuseActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.LightFuse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Powderkeg_Pickup_C::LightFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.LightFuse");

	ABP_Powderkeg_Pickup_C_LightFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_CraftingProject*     Project                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Pickup_C::BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature(class UDH_CraftingProject* Project)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature");

	ABP_Powderkeg_Pickup_C_BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature_Params params;
	params.Project = Project;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_CraftingProject*     Project                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Pickup_C::BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature(class UDH_CraftingProject* Project)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature");

	ABP_Powderkeg_Pickup_C_BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature_Params params;
	params.Project = Project;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Powderkeg_Pickup_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveDestroyed");

	ABP_Powderkeg_Pickup_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BP_OnRep_AttachTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  InAttachTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Pickup_C::BP_OnRep_AttachTarget(class AActor* InAttachTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BP_OnRep_AttachTarget");

	ABP_Powderkeg_Pickup_C_BP_OnRep_AttachTarget_Params params;
	params.InAttachTarget = InAttachTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Pickup_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveTick");

	ABP_Powderkeg_Pickup_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Powderkeg_Pickup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveBeginPlay");

	ABP_Powderkeg_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ExecuteUbergraph_BP_Powderkeg_Pickup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_Pickup_C::ExecuteUbergraph_BP_Powderkeg_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ExecuteUbergraph_BP_Powderkeg_Pickup");

	ABP_Powderkeg_Pickup_C_ExecuteUbergraph_BP_Powderkeg_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
