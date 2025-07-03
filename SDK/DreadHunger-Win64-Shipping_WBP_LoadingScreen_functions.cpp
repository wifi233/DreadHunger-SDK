                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_LoadingScreen_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Show
// (Event, Protected, BlueprintEvent)

void UWBP_LoadingScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Show");

	UWBP_LoadingScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct");

	UWBP_LoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.OnHidden
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadingScreen_C::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.OnHidden");

	UWBP_LoadingScreen_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadingScreen_C::ExecuteUbergraph_WBP_LoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen");

	UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
