                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_ErrorMessageView_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ErrorMessageView_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.PreConstruct");

	UWBP_ErrorMessageView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UWBP_ErrorMessageView_C::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnShow");

	UWBP_ErrorMessageView_C_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnHide
// (Event, Protected, BlueprintEvent)

void UWBP_ErrorMessageView_C::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnHide");

	UWBP_ErrorMessageView_C_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnSetTitleText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ErrorMessageView_C::BP_OnSetTitleText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnSetTitleText");

	UWBP_ErrorMessageView_C_BP_OnSetTitleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnSetBodyBackgroundColor
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_ErrorMessageView_C::BP_OnSetBodyBackgroundColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnSetBodyBackgroundColor");

	UWBP_ErrorMessageView_C_BP_OnSetBodyBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnSetTitleBackgroundColor
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_ErrorMessageView_C::BP_OnSetTitleBackgroundColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.BP_OnSetTitleBackgroundColor");

	UWBP_ErrorMessageView_C_BP_OnSetTitleBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.ExecuteUbergraph_WBP_ErrorMessageView
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ErrorMessageView_C::ExecuteUbergraph_WBP_ErrorMessageView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ErrorMessageView.WBP_ErrorMessageView_C.ExecuteUbergraph_WBP_ErrorMessageView");

	UWBP_ErrorMessageView_C_ExecuteUbergraph_WBP_ErrorMessageView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
