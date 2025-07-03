                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ABP_Flintlock_Rifle_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Flintlock_Rifle.ABP_Flintlock_Rifle_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_Flintlock_Rifle_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Flintlock_Rifle.ABP_Flintlock_Rifle_C.AnimGraph");

	UABP_Flintlock_Rifle_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Flintlock_Rifle.ABP_Flintlock_Rifle_C.ExecuteUbergraph_ABP_Flintlock_Rifle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Flintlock_Rifle_C::ExecuteUbergraph_ABP_Flintlock_Rifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Flintlock_Rifle.ABP_Flintlock_Rifle_C.ExecuteUbergraph_ABP_Flintlock_Rifle");

	UABP_Flintlock_Rifle_C_ExecuteUbergraph_ABP_Flintlock_Rifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
