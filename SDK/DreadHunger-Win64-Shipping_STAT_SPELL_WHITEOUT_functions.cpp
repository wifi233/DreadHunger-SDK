                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_STAT_SPELL_WHITEOUT_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function STAT_SPELL_WHITEOUT.STAT_Spell_Whiteout_C.GetScoreModifiers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ADH_PlayerState*         ScoringPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTAT_Spell_Whiteout_C::GetScoreModifiers(class ADH_PlayerState* ScoringPlayer, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function STAT_SPELL_WHITEOUT.STAT_Spell_Whiteout_C.GetScoreModifiers");

	USTAT_Spell_Whiteout_C_GetScoreModifiers_Params params;
	params.ScoringPlayer = ScoringPlayer;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
