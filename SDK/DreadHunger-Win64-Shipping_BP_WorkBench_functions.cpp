                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_WorkBench_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WorkBench.BP_Workbench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Workbench_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorkBench.BP_Workbench_C.ReceiveBeginPlay");

	ABP_Workbench_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorkBench.BP_Workbench_C.ExecuteUbergraph_BP_Workbench
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Workbench_C::ExecuteUbergraph_BP_Workbench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorkBench.BP_Workbench_C.ExecuteUbergraph_BP_Workbench");

	ABP_Workbench_C_ExecuteUbergraph_BP_Workbench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
