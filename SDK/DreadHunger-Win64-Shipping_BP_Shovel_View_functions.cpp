                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Shovel_View_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shovel_View.BP_Shovel_View_C.PlayHitEffects
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  AttackState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHit                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Shovel_View_C::PlayHitEffects(unsigned char AttackState, const struct FHitResult& InHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_View.BP_Shovel_View_C.PlayHitEffects");

	ABP_Shovel_View_C_PlayHitEffects_Params params;
	params.AttackState = AttackState;
	params.InHit = InHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shovel_View.BP_Shovel_View_C.ExecuteUbergraph_BP_Shovel_View
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shovel_View_C::ExecuteUbergraph_BP_Shovel_View(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shovel_View.BP_Shovel_View_C.ExecuteUbergraph_BP_Shovel_View");

	ABP_Shovel_View_C_ExecuteUbergraph_BP_Shovel_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
