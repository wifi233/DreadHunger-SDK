                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Stove_Fireplace_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetBurnTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BurnTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Stove_Fireplace_C::GetBurnTime(EInventoryType Type, float* BurnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetBurnTime");

	ABP_Stove_Fireplace_C_GetBurnTime_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BurnTime != nullptr)
		*BurnTime = params.BurnTime;

	return params.ReturnValue;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Stove_Fireplace_C::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetName");

	ABP_Stove_Fireplace_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetBurnTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EInventoryType>         ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<EInventoryType> ABP_Stove_Fireplace_C::GetBurnTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetBurnTypes");

	ABP_Stove_Fireplace_C_GetBurnTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetKeybindInteractText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDH_KeybindInteractionMessage ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_KeybindInteractionMessage ABP_Stove_Fireplace_C::GetKeybindInteractText(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetKeybindInteractText");

	ABP_Stove_Fireplace_C_GetKeybindInteractText_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stove_Fireplace_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ReceiveTick");

	ABP_Stove_Fireplace_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Stove_Fireplace_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ReceiveBeginPlay");

	ABP_Stove_Fireplace_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.OnStoveClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Stove_Fireplace_C::OnStoveClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.OnStoveClosed");

	ABP_Stove_Fireplace_C_OnStoveClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.OnStoveOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Stove_Fireplace_C::OnStoveOpened(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.OnStoveOpened");

	ABP_Stove_Fireplace_C_OnStoveOpened_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ExecuteUbergraph_BP_Stove_Fireplace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Stove_Fireplace_C::ExecuteUbergraph_BP_Stove_Fireplace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ExecuteUbergraph_BP_Stove_Fireplace");

	ABP_Stove_Fireplace_C_ExecuteUbergraph_BP_Stove_Fireplace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
