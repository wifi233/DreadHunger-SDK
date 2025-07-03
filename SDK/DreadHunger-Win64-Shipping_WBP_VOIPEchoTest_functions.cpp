                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_VOIPEchoTest_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VOIPEchoTest.WBP_VOIPEchoTest_C.BP_UpdateAudioEnergyBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          AudioEnergy                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VOIPEchoTest_C::BP_UpdateAudioEnergyBar(float AudioEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VOIPEchoTest.WBP_VOIPEchoTest_C.BP_UpdateAudioEnergyBar");

	UWBP_VOIPEchoTest_C_BP_UpdateAudioEnergyBar_Params params;
	params.AudioEnergy = AudioEnergy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VOIPEchoTest.WBP_VOIPEchoTest_C.ExecuteUbergraph_WBP_VOIPEchoTest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VOIPEchoTest_C::ExecuteUbergraph_WBP_VOIPEchoTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VOIPEchoTest.WBP_VOIPEchoTest_C.ExecuteUbergraph_WBP_VOIPEchoTest");

	UWBP_VOIPEchoTest_C_ExecuteUbergraph_WBP_VOIPEchoTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
