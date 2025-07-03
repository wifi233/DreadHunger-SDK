                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Doppelganger_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Doppelganger.ABP_Doppelganger_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_Doppelganger_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Doppelganger.ABP_Doppelganger_C.AnimGraph");

	UABP_Doppelganger_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Doppelganger.ABP_Doppelganger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Doppelganger_AnimGraphNode_LayeredBoneBlend_ABAA7367436014B73C9206B3455F8832
// (BlueprintEvent)

void UABP_Doppelganger_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Doppelganger_AnimGraphNode_LayeredBoneBlend_ABAA7367436014B73C9206B3455F8832()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Doppelganger.ABP_Doppelganger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Doppelganger_AnimGraphNode_LayeredBoneBlend_ABAA7367436014B73C9206B3455F8832");

	UABP_Doppelganger_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Doppelganger_AnimGraphNode_LayeredBoneBlend_ABAA7367436014B73C9206B3455F8832_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Doppelganger.ABP_Doppelganger_C.ExecuteUbergraph_ABP_Doppelganger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Doppelganger_C::ExecuteUbergraph_ABP_Doppelganger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Doppelganger.ABP_Doppelganger_C.ExecuteUbergraph_ABP_Doppelganger");

	UABP_Doppelganger_C_ExecuteUbergraph_ABP_Doppelganger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
