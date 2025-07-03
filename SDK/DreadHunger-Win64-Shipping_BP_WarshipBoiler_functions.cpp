                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_WarshipBoiler_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetBurnTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BurnTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WarshipBoiler_C::GetBurnTime(EInventoryType Type, float* BurnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetBurnTime");

	ABP_WarshipBoiler_C_GetBurnTime_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BurnTime != nullptr)
		*BurnTime = params.BurnTime;

	return params.ReturnValue;
}


// Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_WarshipBoiler_C::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetName");

	ABP_WarshipBoiler_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetBurnTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EInventoryType>         ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<EInventoryType> ABP_WarshipBoiler_C::GetBurnTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetBurnTypes");

	ABP_WarshipBoiler_C_GetBurnTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WarshipBoiler.BP_WarshipBoiler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WarshipBoiler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.ReceiveBeginPlay");

	ABP_WarshipBoiler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarshipBoiler.BP_WarshipBoiler_C.OnStorageClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WarshipBoiler_C::OnStorageClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.OnStorageClosed");

	ABP_WarshipBoiler_C_OnStorageClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarshipBoiler.BP_WarshipBoiler_C.OnStorageOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WarshipBoiler_C::OnStorageOpened(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.OnStorageOpened");

	ABP_WarshipBoiler_C_OnStorageOpened_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarshipBoiler.BP_WarshipBoiler_C.ExecuteUbergraph_BP_WarshipBoiler
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WarshipBoiler_C::ExecuteUbergraph_BP_WarshipBoiler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarshipBoiler.BP_WarshipBoiler_C.ExecuteUbergraph_BP_WarshipBoiler");

	ABP_WarshipBoiler_C_ExecuteUbergraph_BP_WarshipBoiler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
