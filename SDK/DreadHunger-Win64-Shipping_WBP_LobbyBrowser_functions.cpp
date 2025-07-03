                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_LobbyBrowser_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LobbyBrowser.WBP_LobbyBrowser_C.BP_OnCloseButtonClicked
// (Event, Protected, BlueprintEvent)

void UWBP_LobbyBrowser_C::BP_OnCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyBrowser.WBP_LobbyBrowser_C.BP_OnCloseButtonClicked");

	UWBP_LobbyBrowser_C_BP_OnCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbyBrowser.WBP_LobbyBrowser_C.ExecuteUbergraph_WBP_LobbyBrowser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbyBrowser_C::ExecuteUbergraph_WBP_LobbyBrowser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyBrowser.WBP_LobbyBrowser_C.ExecuteUbergraph_WBP_LobbyBrowser");

	UWBP_LobbyBrowser_C_ExecuteUbergraph_WBP_LobbyBrowser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
