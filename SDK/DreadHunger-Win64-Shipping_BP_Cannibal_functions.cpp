                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Cannibal_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cannibal.BP_Cannibal_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannibal_C::OnSetActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannibal.BP_Cannibal_C.OnSetActive");

	ABP_Cannibal_C_OnSetActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cannibal.BP_Cannibal_C.ExecuteUbergraph_BP_Cannibal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannibal_C::ExecuteUbergraph_BP_Cannibal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannibal.BP_Cannibal_C.ExecuteUbergraph_BP_Cannibal");

	ABP_Cannibal_C_ExecuteUbergraph_BP_Cannibal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
