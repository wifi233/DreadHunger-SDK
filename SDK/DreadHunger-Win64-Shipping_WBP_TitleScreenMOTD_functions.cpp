                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_TitleScreenMOTD_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.On Title Data Loaded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Filename                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UDH_TitleData*           TitleData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TitleScreenMOTD_C::On_Title_Data_Loaded(const class FString& Filename, class UDH_TitleData* TitleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.On Title Data Loaded");

	UWBP_TitleScreenMOTD_C_On_Title_Data_Loaded_Params params;
	params.Filename = Filename;
	params.TitleData = TitleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TitleScreenMOTD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.Construct");

	UWBP_TitleScreenMOTD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TitleScreenMOTD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.Destruct");

	UWBP_TitleScreenMOTD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.On Title Player Input Captured
// (BlueprintCallable, BlueprintEvent)

void UWBP_TitleScreenMOTD_C::On_Title_Player_Input_Captured()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.On Title Player Input Captured");

	UWBP_TitleScreenMOTD_C_On_Title_Player_Input_Captured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.ExecuteUbergraph_WBP_TitleScreenMOTD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TitleScreenMOTD_C::ExecuteUbergraph_WBP_TitleScreenMOTD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TitleScreenMOTD.WBP_TitleScreenMOTD_C.ExecuteUbergraph_WBP_TitleScreenMOTD");

	UWBP_TitleScreenMOTD_C_ExecuteUbergraph_WBP_TitleScreenMOTD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
