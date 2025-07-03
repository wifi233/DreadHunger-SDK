                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Cannibal_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Cannibal.ABP_Cannibal_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_Cannibal_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Cannibal.ABP_Cannibal_C.AnimGraph");

	UABP_Cannibal_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Cannibal.ABP_Cannibal_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Cannibal_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Cannibal.ABP_Cannibal_C.BlueprintInitializeAnimation");

	UABP_Cannibal_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Cannibal.ABP_Cannibal_C.ExecuteUbergraph_ABP_Cannibal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Cannibal_C::ExecuteUbergraph_ABP_Cannibal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Cannibal.ABP_Cannibal_C.ExecuteUbergraph_ABP_Cannibal");

	UABP_Cannibal_C_ExecuteUbergraph_ABP_Cannibal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
