                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_StorageTrunk_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetLinearColorDelta
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Distance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PrimaryLinearColorDelta        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SecondaryLinearColorData       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StorageTrunk_C::GetLinearColorDelta(float Distance, struct FLinearColor* PrimaryLinearColorDelta, struct FLinearColor* SecondaryLinearColorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetLinearColorDelta");

	ABP_StorageTrunk_C_GetLinearColorDelta_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryLinearColorDelta != nullptr)
		*PrimaryLinearColorDelta = params.PrimaryLinearColorDelta;
	if (SecondaryLinearColorData != nullptr)
		*SecondaryLinearColorData = params.SecondaryLinearColorData;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetColorMaskComponents
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UDH_ColorMaskComponent*> ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<class UDH_ColorMaskComponent*> ABP_StorageTrunk_C::GetColorMaskComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetColorMaskComponents");

	ABP_StorageTrunk_C_GetColorMaskComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetColorMaskComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UActorComponent*         TargetActorComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_ColorMaskComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_ColorMaskComponent* ABP_StorageTrunk_C::GetColorMaskComponent(class UActorComponent* TargetActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetColorMaskComponent");

	ABP_StorageTrunk_C_GetColorMaskComponent_Params params;
	params.TargetActorComponent = TargetActorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractFailedMessage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_StorageTrunk_C::GetInteractFailedMessage(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractFailedMessage");

	ABP_StorageTrunk_C_GetInteractFailedMessage_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetFriendlyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_StorageTrunk_C::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetFriendlyName");

	ABP_StorageTrunk_C_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetKeybindInteractText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDH_KeybindInteractionMessage ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_KeybindInteractionMessage ABP_StorageTrunk_C::GetKeybindInteractText(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetKeybindInteractText");

	ABP_StorageTrunk_C_GetKeybindInteractText_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.CanBeInteractedWithThroughWalls
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StorageTrunk_C::CanBeInteractedWithThroughWalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.CanBeInteractedWithThroughWalls");

	ABP_StorageTrunk_C_CanBeInteractedWithThroughWalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.OnInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             InteractInstigator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StorageTrunk_C::OnInteract(class AController* InteractInstigator, int SlotIndex, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.OnInteract");

	ABP_StorageTrunk_C_OnInteract_Params params;
	params.InteractInstigator = InteractInstigator;
	params.SlotIndex = SlotIndex;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.UsePreciseInteractions
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StorageTrunk_C::UsePreciseInteractions(class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.UsePreciseInteractions");

	ABP_StorageTrunk_C_UsePreciseInteractions_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_StorageTrunk_C::GetInteractPriority(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractPriority");

	ABP_StorageTrunk_C_GetInteractPriority_Params params;
	params.InteractInstigator = InteractInstigator;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_StorageTrunk_C::GetInteractTime(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractTime");

	ABP_StorageTrunk_C_GetInteractTime_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.CanBeInteractedWith
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_InteractPermissions ABP_StorageTrunk_C::CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.CanBeInteractedWith");

	ABP_StorageTrunk_C_CanBeInteractedWith_Params params;
	params.InteractInstigator = InteractInstigator;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.OnSearched
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StorageTrunk_C::OnSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.OnSearched");

	ABP_StorageTrunk_C_OnSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StorageTrunk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.UserConstructionScript");

	ABP_StorageTrunk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.OnStorageClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_StorageTrunk_C::OnStorageClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.OnStorageClosed");

	ABP_StorageTrunk_C_OnStorageClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.OnStorageOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_StorageTrunk_C::OnStorageOpened(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.OnStorageOpened");

	ABP_StorageTrunk_C_OnStorageOpened_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StorageTrunk_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.ReceiveBeginPlay");

	ABP_StorageTrunk_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_CraftingProject*     Project                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StorageTrunk_C::BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature(class UDH_CraftingProject* Project)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature");

	ABP_StorageTrunk_C_BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature_Params params;
	params.Project = Project;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StorageTrunk.BP_StorageTrunk_C.ExecuteUbergraph_BP_StorageTrunk
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StorageTrunk_C::ExecuteUbergraph_BP_StorageTrunk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StorageTrunk.BP_StorageTrunk_C.ExecuteUbergraph_BP_StorageTrunk");

	ABP_StorageTrunk_C_ExecuteUbergraph_BP_StorageTrunk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
