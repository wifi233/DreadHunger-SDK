                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_ShipsGauge_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipsGauge.BP_ShipsGauge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShipsGauge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipsGauge.BP_ShipsGauge_C.ReceiveBeginPlay");

	ABP_ShipsGauge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipsGauge.BP_ShipsGauge_C.OnWarshipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADH_Warship*             Warship                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipsGauge_C::OnWarshipChanged(class ADH_Warship* Warship)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipsGauge.BP_ShipsGauge_C.OnWarshipChanged");

	ABP_ShipsGauge_C_OnWarshipChanged_Params params;
	params.Warship = Warship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipsGauge.BP_ShipsGauge_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipsGauge_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipsGauge.BP_ShipsGauge_C.ReceiveTick");

	ABP_ShipsGauge_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipsGauge.BP_ShipsGauge_C.ExecuteUbergraph_BP_ShipsGauge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipsGauge_C::ExecuteUbergraph_BP_ShipsGauge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipsGauge.BP_ShipsGauge_C.ExecuteUbergraph_BP_ShipsGauge");

	ABP_ShipsGauge_C_ExecuteUbergraph_BP_ShipsGauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
