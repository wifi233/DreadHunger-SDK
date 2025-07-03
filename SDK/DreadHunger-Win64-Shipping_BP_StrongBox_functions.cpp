                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_StrongBox_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StrongBox.BP_StrongBox_C.OnSearched
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StrongBox_C::OnSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StrongBox.BP_StrongBox_C.OnSearched");

	ABP_StrongBox_C_OnSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StrongBox.BP_StrongBox_C.OnRep_bUnlocked
// (BlueprintCallable, BlueprintEvent)

void ABP_StrongBox_C::OnRep_bUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StrongBox.BP_StrongBox_C.OnRep_bUnlocked");

	ABP_StrongBox_C_OnRep_bUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StrongBox.BP_StrongBox_C.OnStorageClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_StrongBox_C::OnStorageClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StrongBox.BP_StrongBox_C.OnStorageClosed");

	ABP_StrongBox_C_OnStorageClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StrongBox.BP_StrongBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StrongBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StrongBox.BP_StrongBox_C.ReceiveBeginPlay");

	ABP_StrongBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StrongBox.BP_StrongBox_C.OnStorageOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_StrongBox_C::OnStorageOpened(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StrongBox.BP_StrongBox_C.OnStorageOpened");

	ABP_StrongBox_C_OnStorageOpened_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StrongBox.BP_StrongBox_C.ExecuteUbergraph_BP_StrongBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StrongBox_C::ExecuteUbergraph_BP_StrongBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StrongBox.BP_StrongBox_C.ExecuteUbergraph_BP_StrongBox");

	ABP_StrongBox_C_ExecuteUbergraph_BP_StrongBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
