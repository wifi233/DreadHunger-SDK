                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Syringe_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetOverrideTraceHits
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FHitResult>      OverrideHits                   (Parm, OutParm)

void ABP_Syringe_Inventory_C::GetOverrideTraceHits(unsigned char UseState, TArray<struct FHitResult>* OverrideHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetOverrideTraceHits");

	ABP_Syringe_Inventory_C_GetOverrideTraceHits_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverrideHits != nullptr)
		*OverrideHits = params.OverrideHits;
}


// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetTraceStartTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Syringe_Inventory_C::GetTraceStartTime(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetTraceStartTime");

	ABP_Syringe_Inventory_C_GetTraceStartTime_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Syringe_Inventory_C::GetUseState(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetUseState");

	ABP_Syringe_Inventory_C_GetUseState_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GiveHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADH_HumanCharacter*      Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Syringe_Inventory_C::GiveHealth(class ADH_HumanCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GiveHealth");

	ABP_Syringe_Inventory_C_GiveHealth_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.OnMeleeWeaponHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  AttackState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Syringe_Inventory_C::OnMeleeWeaponHit(const struct FHitResult& Hit, unsigned char AttackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.OnMeleeWeaponHit");

	ABP_Syringe_Inventory_C_OnMeleeWeaponHit_Params params;
	params.Hit = Hit;
	params.AttackState = AttackState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.ExecuteUbergraph_BP_Syringe_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Syringe_Inventory_C::ExecuteUbergraph_BP_Syringe_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.ExecuteUbergraph_BP_Syringe_Inventory");

	ABP_Syringe_Inventory_C_ExecuteUbergraph_BP_Syringe_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
