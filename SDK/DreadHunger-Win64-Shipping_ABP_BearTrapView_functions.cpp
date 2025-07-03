                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_BearTrapView_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_BearTrapView.ABP_BearTrapView_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_BearTrapView_C::AnimGraph(struct FPoseLink* AnimGraph) // 动画图
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BearTrapView.ABP_BearTrapView_C.AnimGraph");

	UABP_BearTrapView_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_BearTrapView.ABP_BearTrapView_C.ExecuteUbergraph_ABP_BearTrapView
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BearTrapView_C::ExecuteUbergraph_ABP_BearTrapView(int EntryPoint) // 执行熊夹动画蓝图事件图
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BearTrapView.ABP_BearTrapView_C.ExecuteUbergraph_ABP_BearTrapView");

	UABP_BearTrapView_C_ExecuteUbergraph_ABP_BearTrapView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
