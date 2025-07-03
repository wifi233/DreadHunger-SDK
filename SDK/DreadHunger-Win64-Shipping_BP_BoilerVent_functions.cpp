                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BoilerVent_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoilerVent.BP_BoilerVent_C.OnStorageClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BoilerVent_C::OnStorageClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoilerVent.BP_BoilerVent_C.OnStorageClosed");

	ABP_BoilerVent_C_OnStorageClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoilerVent.BP_BoilerVent_C.OnStorageOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BoilerVent_C::OnStorageOpened(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoilerVent.BP_BoilerVent_C.OnStorageOpened");

	ABP_BoilerVent_C_OnStorageOpened_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoilerVent.BP_BoilerVent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoilerVent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoilerVent.BP_BoilerVent_C.ReceiveBeginPlay");

	ABP_BoilerVent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoilerVent.BP_BoilerVent_C.ExecuteUbergraph_BP_BoilerVent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoilerVent_C::ExecuteUbergraph_BP_BoilerVent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoilerVent.BP_BoilerVent_C.ExecuteUbergraph_BP_BoilerVent");

	ABP_BoilerVent_C_ExecuteUbergraph_BP_BoilerVent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
