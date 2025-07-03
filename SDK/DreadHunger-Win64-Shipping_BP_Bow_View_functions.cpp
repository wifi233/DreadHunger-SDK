                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bow_View_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bow_View.BP_Bow_View_C.PlayEquipEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EInventoryEffectFilter         Filter                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_Bow_View_C::PlayEquipEffects(unsigned char State, EInventoryEffectFilter Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_View.BP_Bow_View_C.PlayEquipEffects");

	ABP_Bow_View_C_PlayEquipEffects_Params params;
	params.State = State;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Bow_View.BP_Bow_View_C.PlayUsedEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_Bow_View_C::PlayUsedEffects(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_View.BP_Bow_View_C.PlayUsedEffects");

	ABP_Bow_View_C_PlayUsedEffects_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Bow_View.BP_Bow_View_C.SetArrowVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bow_View_C::SetArrowVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_View.BP_Bow_View_C.SetArrowVisible");

	ABP_Bow_View_C_SetArrowVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_View.BP_Bow_View_C.ShowArrow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Bow_View_C::ShowArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_View.BP_Bow_View_C.ShowArrow");

	ABP_Bow_View_C_ShowArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bow_View.BP_Bow_View_C.PlayReloadEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_Bow_View_C::PlayReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bow_View.BP_Bow_View_C.PlayReloadEffects");

	ABP_Bow_View_C_PlayReloadEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
