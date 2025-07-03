                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MainMenu_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenu.MainMenu_C.SnuffCandles
// (Public, BlueprintCallable, BlueprintEvent)

void AMainMenu_C::SnuffCandles()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SnuffCandles");

	AMainMenu_C_SnuffCandles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");

	AMainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.LightningFinished
// (BlueprintCallable, BlueprintEvent)

void AMainMenu_C::LightningFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.LightningFinished");

	AMainMenu_C_LightningFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.On Title Player Input Captured
// (BlueprintCallable, BlueprintEvent)

void AMainMenu_C::On_Title_Player_Input_Captured()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.On Title Player Input Captured");

	AMainMenu_C_On_Title_Player_Input_Captured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	AMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
