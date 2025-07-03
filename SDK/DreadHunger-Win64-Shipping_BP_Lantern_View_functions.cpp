                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Lantern_View_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lantern_View.BP_Lantern_View_C.PlayUsedEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ABP_Lantern_View_C::PlayUsedEffects(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.PlayUsedEffects");

	ABP_Lantern_View_C_PlayUsedEffects_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Lantern_View.BP_Lantern_View_C.BurnSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_View_C::BurnSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.BurnSound");

	ABP_Lantern_View_C_BurnSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_View.BP_Lantern_View_C.SwingSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_View_C::SwingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.SwingSound");

	ABP_Lantern_View_C_SwingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_View.BP_Lantern_View_C.SetLanternState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_View_C::SetLanternState(bool bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.SetLanternState");

	ABP_Lantern_View_C_SetLanternState_Params params;
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_View.BP_Lantern_View_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_View_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.UserConstructionScript");

	ABP_Lantern_View_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_View.BP_Lantern_View_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_View_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.ReceiveTick");

	ABP_Lantern_View_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_View.BP_Lantern_View_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_View_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.ReceiveBeginPlay");

	ABP_Lantern_View_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lantern_View.BP_Lantern_View_C.ExecuteUbergraph_BP_Lantern_View
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_View_C::ExecuteUbergraph_BP_Lantern_View(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_View.BP_Lantern_View_C.ExecuteUbergraph_BP_Lantern_View");

	ABP_Lantern_View_C_ExecuteUbergraph_BP_Lantern_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
