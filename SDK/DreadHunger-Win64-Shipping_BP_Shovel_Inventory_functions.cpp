                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Shovel_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetDamageType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDamageType* ABP_Shovel_Inventory_C::GetDamageType(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetDamageType");

	ABP_Shovel_Inventory_C_GetDamageType_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.MaybeSpawnBuriedTreasure
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Shovel_Inventory_C::MaybeSpawnBuriedTreasure(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.MaybeSpawnBuriedTreasure");

	ABP_Shovel_Inventory_C_MaybeSpawnBuriedTreasure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Shovel_Inventory_C::GetDamage(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetDamage");

	ABP_Shovel_Inventory_C_GetDamage_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.UseStateBlocksInteracts
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Shovel_Inventory_C::UseStateBlocksInteracts(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.UseStateBlocksInteracts");

	ABP_Shovel_Inventory_C_UseStateBlocksInteracts_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.IsHoldToAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  AttackState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Shovel_Inventory_C::IsHoldToAttack(unsigned char AttackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.IsHoldToAttack");

	ABP_Shovel_Inventory_C_IsHoldToAttack_Params params;
	params.AttackState = AttackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Shovel_Inventory_C::GetUseState(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetUseState");

	ABP_Shovel_Inventory_C_GetUseState_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.OnMeleeWeaponHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  AttackState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Shovel_Inventory_C::OnMeleeWeaponHit(const struct FHitResult& Hit, unsigned char AttackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.OnMeleeWeaponHit");

	ABP_Shovel_Inventory_C_OnMeleeWeaponHit_Params params;
	params.Hit = Hit;
	params.AttackState = AttackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.ExecuteUbergraph_BP_Shovel_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shovel_Inventory_C::ExecuteUbergraph_BP_Shovel_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.ExecuteUbergraph_BP_Shovel_Inventory");

	ABP_Shovel_Inventory_C_ExecuteUbergraph_BP_Shovel_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
