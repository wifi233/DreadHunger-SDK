                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_SettingsUI_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingsUI.SettingsUI_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USettingsUI_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsUI.SettingsUI_C.OnKeyDown");

	USettingsUI_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingsUI.SettingsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingsUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsUI.SettingsUI_C.Construct");

	USettingsUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsUI.SettingsUI_C.CategoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USettingsUI_C::CategoryChanged(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsUI.SettingsUI_C.CategoryChanged");

	USettingsUI_C_CategoryChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsUI.SettingsUI_C.BP_OnShow
// (Event, Protected, BlueprintEvent)

void USettingsUI_C::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsUI.SettingsUI_C.BP_OnShow");

	USettingsUI_C_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsUI.SettingsUI_C.BP_OnHide
// (Event, Protected, BlueprintEvent)

void USettingsUI_C::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsUI.SettingsUI_C.BP_OnHide");

	USettingsUI_C_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsUI.SettingsUI_C.ExecuteUbergraph_SettingsUI
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsUI_C::ExecuteUbergraph_SettingsUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsUI.SettingsUI_C.ExecuteUbergraph_SettingsUI");

	USettingsUI_C_ExecuteUbergraph_SettingsUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
