                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Common_wolf_anim_bp_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_wolf_anim_bp.Common_wolf_anim_bp_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UCommon_wolf_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Common_wolf_anim_bp.Common_wolf_anim_bp_C.AnimGraph");

	UCommon_wolf_anim_bp_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Common_wolf_anim_bp.Common_wolf_anim_bp_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UCommon_wolf_anim_bp_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Common_wolf_anim_bp.Common_wolf_anim_bp_C.BlueprintInitializeAnimation");

	UCommon_wolf_anim_bp_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Common_wolf_anim_bp.Common_wolf_anim_bp_C.ExecuteUbergraph_Common_wolf_anim_bp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_wolf_anim_bp_C::ExecuteUbergraph_Common_wolf_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Common_wolf_anim_bp.Common_wolf_anim_bp_C.ExecuteUbergraph_Common_wolf_anim_bp");

	UCommon_wolf_anim_bp_C_ExecuteUbergraph_Common_wolf_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
