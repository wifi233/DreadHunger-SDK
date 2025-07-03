                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_NiagaraAnimNotifies_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFXSystemComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect");

	UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
