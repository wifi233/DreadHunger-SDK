                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_Button_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Button.WBP_Button_C.BP_OnSetMinWidth
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InMinWidth                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Button_C::BP_OnSetMinWidth(float InMinWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Button.WBP_Button_C.BP_OnSetMinWidth");

	UWBP_Button_C_BP_OnSetMinWidth_Params params;
	params.InMinWidth = InMinWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Button.WBP_Button_C.BP_OnSetHoverOpacity
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InOpacity                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Button_C::BP_OnSetHoverOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Button.WBP_Button_C.BP_OnSetHoverOpacity");

	UWBP_Button_C_BP_OnSetHoverOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Button.WBP_Button_C.BP_OnSetHoverBrush
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InHoverBrush                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Button_C::BP_OnSetHoverBrush(const struct FSlateBrush& InHoverBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Button.WBP_Button_C.BP_OnSetHoverBrush");

	UWBP_Button_C_BP_OnSetHoverBrush_Params params;
	params.InHoverBrush = InHoverBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Button.WBP_Button_C.BP_OnSetHoverBrushVerticalAlignment
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Button_C::BP_OnSetHoverBrushVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Button.WBP_Button_C.BP_OnSetHoverBrushVerticalAlignment");

	UWBP_Button_C_BP_OnSetHoverBrushVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Button.WBP_Button_C.ExecuteUbergraph_WBP_Button
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Button_C::ExecuteUbergraph_WBP_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Button.WBP_Button_C.ExecuteUbergraph_WBP_Button");

	UWBP_Button_C_ExecuteUbergraph_WBP_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
