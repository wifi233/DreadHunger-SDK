                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_DiscordButton_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DiscordButton.WBP_DiscordButton_C.BP_OnSetHoverOpacity
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InOpacity                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DiscordButton_C::BP_OnSetHoverOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DiscordButton.WBP_DiscordButton_C.BP_OnSetHoverOpacity");

	UWBP_DiscordButton_C_BP_OnSetHoverOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DiscordButton.WBP_DiscordButton_C.BP_OnSetHoverResource
// (BlueprintEvent)
// Parameters:
// class UObject*                 InHoverResource                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DiscordButton_C::BP_OnSetHoverResource(class UObject* InHoverResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DiscordButton.WBP_DiscordButton_C.BP_OnSetHoverResource");

	UWBP_DiscordButton_C_BP_OnSetHoverResource_Params params;
	params.InHoverResource = InHoverResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DiscordButton.WBP_DiscordButton_C.ExecuteUbergraph_WBP_DiscordButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DiscordButton_C::ExecuteUbergraph_WBP_DiscordButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DiscordButton.WBP_DiscordButton_C.ExecuteUbergraph_WBP_DiscordButton");

	UWBP_DiscordButton_C_ExecuteUbergraph_WBP_DiscordButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
