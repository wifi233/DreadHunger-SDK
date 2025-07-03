                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BearTrap_View_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BearTrap_View.BP_BearTrap_View_C.PlayDroppedEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasThrown                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDominantHand         DropHand                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      HumanPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_BearTrap_View_C::PlayDroppedEffects(bool bWasThrown, EInventoryDominantHand DropHand, class ADH_HumanCharacter* HumanPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_View.BP_BearTrap_View_C.PlayDroppedEffects");

	ABP_BearTrap_View_C_PlayDroppedEffects_Params params;
	params.bWasThrown = bWasThrown;
	params.DropHand = DropHand;
	params.HumanPawn = HumanPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap_View.BP_BearTrap_View_C.PlayUsedEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_BearTrap_View_C::PlayUsedEffects(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_View.BP_BearTrap_View_C.PlayUsedEffects");

	ABP_BearTrap_View_C_PlayUsedEffects_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap_View.BP_BearTrap_View_C.PlayAimEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAiming                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_BearTrap_View_C::PlayAimEffects(bool bIsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_View.BP_BearTrap_View_C.PlayAimEffects");

	ABP_BearTrap_View_C_PlayAimEffects_Params params;
	params.bIsAiming = bIsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BearTrap_View.BP_BearTrap_View_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void ABP_BearTrap_View_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_View.BP_BearTrap_View_C.BP_OnArmed");

	ABP_BearTrap_View_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap_View.BP_BearTrap_View_C.ExecuteUbergraph_BP_BearTrap_View
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_View_C::ExecuteUbergraph_BP_BearTrap_View(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_View.BP_BearTrap_View_C.ExecuteUbergraph_BP_BearTrap_View");

	ABP_BearTrap_View_C_ExecuteUbergraph_BP_BearTrap_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
