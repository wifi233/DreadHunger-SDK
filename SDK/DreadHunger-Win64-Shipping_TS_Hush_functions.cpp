                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_TS_Hush_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TS_Hush.TS_Hush_C.DoSpellEffects
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpellTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTS_Hush_C::DoSpellEffects(class AActor* SpellTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Hush.TS_Hush_C.DoSpellEffects");

	UTS_Hush_C_DoSpellEffects_Params params;
	params.SpellTarget = SpellTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TS_Hush.TS_Hush_C.OnCast
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WorldContext                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTS_Hush_C::OnCast(class AActor* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Hush.TS_Hush_C.OnCast");

	UTS_Hush_C_OnCast_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Hush.TS_Hush_C.OnExpired
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WorldContext                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTS_Hush_C::OnExpired(class AActor* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Hush.TS_Hush_C.OnExpired");

	UTS_Hush_C_OnExpired_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Hush.TS_Hush_C.ExecuteUbergraph_TS_Hush
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTS_Hush_C::ExecuteUbergraph_TS_Hush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Hush.TS_Hush_C.ExecuteUbergraph_TS_Hush");

	UTS_Hush_C_ExecuteUbergraph_TS_Hush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
