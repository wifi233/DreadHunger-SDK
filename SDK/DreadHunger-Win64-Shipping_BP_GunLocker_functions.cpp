                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_GunLocker_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GunLocker.BP_GunLocker_C.OnStorageClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GunLocker_C::OnStorageClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GunLocker.BP_GunLocker_C.OnStorageClosed");

	ABP_GunLocker_C_OnStorageClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GunLocker.BP_GunLocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GunLocker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GunLocker.BP_GunLocker_C.ReceiveBeginPlay");

	ABP_GunLocker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GunLocker.BP_GunLocker_C.OnStorageOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GunLocker_C::OnStorageOpened(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GunLocker.BP_GunLocker_C.OnStorageOpened");

	ABP_GunLocker_C_OnStorageOpened_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GunLocker.BP_GunLocker_C.ExecuteUbergraph_BP_GunLocker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GunLocker_C::ExecuteUbergraph_BP_GunLocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GunLocker.BP_GunLocker_C.ExecuteUbergraph_BP_GunLocker");

	ABP_GunLocker_C_ExecuteUbergraph_BP_GunLocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
