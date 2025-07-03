                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledSliderSetting_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StyledSliderSetting.StyledSliderSetting_C.OnSliderValueUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NormalizedValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RawValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledSliderSetting_C::OnSliderValueUpdated(float NormalizedValue, float RawValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSliderSetting.StyledSliderSetting_C.OnSliderValueUpdated");

	UStyledSliderSetting_C_OnSliderValueUpdated_Params params;
	params.NormalizedValue = NormalizedValue;
	params.RawValue = RawValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSliderSetting.StyledSliderSetting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledSliderSetting_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSliderSetting.StyledSliderSetting_C.PreConstruct");

	UStyledSliderSetting_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSliderSetting.StyledSliderSetting_C.Update Text Label
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RawValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledSliderSetting_C::Update_Text_Label(float RawValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSliderSetting.StyledSliderSetting_C.Update Text Label");

	UStyledSliderSetting_C_Update_Text_Label_Params params;
	params.RawValue = RawValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSliderSetting.StyledSliderSetting_C.ExecuteUbergraph_StyledSliderSetting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledSliderSetting_C::ExecuteUbergraph_StyledSliderSetting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSliderSetting.StyledSliderSetting_C.ExecuteUbergraph_StyledSliderSetting");

	UStyledSliderSetting_C_ExecuteUbergraph_StyledSliderSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
