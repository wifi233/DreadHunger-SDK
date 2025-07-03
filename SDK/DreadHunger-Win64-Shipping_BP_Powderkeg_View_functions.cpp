                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_View_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Powderkeg_View.BP_Powderkeg_View_C.SetFuseEffectsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Powderkeg_View_C::SetFuseEffectsActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_View.BP_Powderkeg_View_C.SetFuseEffectsActive");

	ABP_Powderkeg_View_C_SetFuseEffectsActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Powderkeg_View.BP_Powderkeg_View_C.PlayUsedEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_Powderkeg_View_C::PlayUsedEffects(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Powderkeg_View.BP_Powderkeg_View_C.PlayUsedEffects");

	ABP_Powderkeg_View_C_PlayUsedEffects_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
