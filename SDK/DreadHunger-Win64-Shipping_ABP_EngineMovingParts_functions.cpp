                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_EngineMovingParts_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_EngineMovingParts.ABP_EngineMovingParts_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_EngineMovingParts_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_EngineMovingParts.ABP_EngineMovingParts_C.AnimGraph");

	UABP_EngineMovingParts_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_EngineMovingParts.ABP_EngineMovingParts_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_EngineMovingParts_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_EngineMovingParts.ABP_EngineMovingParts_C.BlueprintUpdateAnimation");

	UABP_EngineMovingParts_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_EngineMovingParts.ABP_EngineMovingParts_C.ExecuteUbergraph_ABP_EngineMovingParts
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_EngineMovingParts_C::ExecuteUbergraph_ABP_EngineMovingParts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_EngineMovingParts.ABP_EngineMovingParts_C.ExecuteUbergraph_ABP_EngineMovingParts");

	UABP_EngineMovingParts_C_ExecuteUbergraph_ABP_EngineMovingParts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
