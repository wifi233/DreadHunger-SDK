                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bow_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Bow_Inventory_C::CanUse(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.CanUse");

	ABP_Bow_Inventory_C_CanUse_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnProjectileHitActor
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Bow_Inventory_C::OnProjectileHitActor(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnProjectileHitActor");

	ABP_Bow_Inventory_C_OnProjectileHitActor_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnProjectileSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Projectile*          NewProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_Inventory_C::OnProjectileSpawned(class ADH_Projectile* NewProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnProjectileSpawned");

	ABP_Bow_Inventory_C_OnProjectileSpawned_Params params;
	params.NewProjectile = NewProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnEquipped
// (Event, Public, BlueprintEvent)

void ABP_Bow_Inventory_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnEquipped");

	ABP_Bow_Inventory_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnPutDown
// (Event, Public, BlueprintEvent)

void ABP_Bow_Inventory_C::OnPutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnPutDown");

	ABP_Bow_Inventory_C_OnPutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_Inventory.BP_Bow_Inventory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_Inventory_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.ReceiveTick");

	ABP_Bow_Inventory_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_Inventory.BP_Bow_Inventory_C.ExecuteUbergraph_BP_Bow_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_Inventory_C::ExecuteUbergraph_BP_Bow_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_Inventory.BP_Bow_Inventory_C.ExecuteUbergraph_BP_Bow_Inventory");

	ABP_Bow_Inventory_C_ExecuteUbergraph_BP_Bow_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
