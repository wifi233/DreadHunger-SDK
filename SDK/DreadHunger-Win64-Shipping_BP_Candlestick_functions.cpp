                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Candlestick_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Candlestick.BP_Candlestick_C.Interpolate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Candlestick_C::Interpolate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Candlestick.BP_Candlestick_C.Interpolate");

	ABP_Candlestick_C_Interpolate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Candlestick.BP_Candlestick_C.SetIsLit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewIsLit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Candlestick_C::SetIsLit(bool bNewIsLit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Candlestick.BP_Candlestick_C.SetIsLit");

	ABP_Candlestick_C_SetIsLit_Params params;
	params.bNewIsLit = bNewIsLit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Candlestick.BP_Candlestick_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Candlestick_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Candlestick.BP_Candlestick_C.ReceiveTick");

	ABP_Candlestick_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Candlestick.BP_Candlestick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Candlestick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Candlestick.BP_Candlestick_C.ReceiveBeginPlay");

	ABP_Candlestick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Candlestick.BP_Candlestick_C.ExecuteUbergraph_BP_Candlestick
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Candlestick_C::ExecuteUbergraph_BP_Candlestick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Candlestick.BP_Candlestick_C.ExecuteUbergraph_BP_Candlestick");

	ABP_Candlestick_C_ExecuteUbergraph_BP_Candlestick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
