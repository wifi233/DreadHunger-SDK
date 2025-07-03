                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_SlotView_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SlotView.WBP_SlotView_C.GetIconBrush
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_SlotView_C::GetIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.GetIconBrush");

	UWBP_SlotView_C_GetIconBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnInitFillImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InFillMID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::BP_OnInitFillImage(class UMaterialInstanceDynamic* InFillMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnInitFillImage");

	UWBP_SlotView_C_BP_OnInitFillImage_Params params;
	params.InFillMID = InFillMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnInitBorderImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InBorderMID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::BP_OnInitBorderImage(class UMaterialInstanceDynamic* InBorderMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnInitBorderImage");

	UWBP_SlotView_C_BP_OnInitBorderImage_Params params;
	params.InBorderMID = InBorderMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetSize
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::BP_OnSetSize(float InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnSetSize");

	UWBP_SlotView_C_BP_OnSetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::BP_OnSetIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIcon");

	UWBP_SlotView_C_BP_OnSetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnInitDenyMaskImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*              DenyMaskTexture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::BP_OnInitDenyMaskImage(class UTexture2D* DenyMaskTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnInitDenyMaskImage");

	UWBP_SlotView_C_BP_OnInitDenyMaskImage_Params params;
	params.DenyMaskTexture = DenyMaskTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnPlayAddedAnimation
// (Event, Protected, BlueprintEvent)

void UWBP_SlotView_C::BP_OnPlayAddedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnPlayAddedAnimation");

	UWBP_SlotView_C_BP_OnPlayAddedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnStartCriticalAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSuperCritical                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::BP_OnStartCriticalAnimation(bool bSuperCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnStartCriticalAnimation");

	UWBP_SlotView_C_BP_OnStartCriticalAnimation_Params params;
	params.bSuperCritical = bSuperCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnStopCriticalAnimation
// (Event, Protected, BlueprintEvent)

void UWBP_SlotView_C::BP_OnStopCriticalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnStopCriticalAnimation");

	UWBP_SlotView_C_BP_OnStopCriticalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnStopSuperCriticalAnimation
// (Event, Protected, BlueprintEvent)

void UWBP_SlotView_C::BP_OnStopSuperCriticalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnStopSuperCriticalAnimation");

	UWBP_SlotView_C_BP_OnStopSuperCriticalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnPlayDenyAnimation
// (Event, Protected, BlueprintEvent)

void UWBP_SlotView_C::BP_OnPlayDenyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnPlayDenyAnimation");

	UWBP_SlotView_C_BP_OnPlayDenyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIconColor
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FLinearColor            InIconColor                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_SlotView_C::BP_OnSetIconColor(const struct FLinearColor& InIconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIconColor");

	UWBP_SlotView_C_BP_OnSetIconColor_Params params;
	params.InIconColor = InIconColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIconScale
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D               InIconScale                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_SlotView_C::BP_OnSetIconScale(const struct FVector2D& InIconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIconScale");

	UWBP_SlotView_C_BP_OnSetIconScale_Params params;
	params.InIconScale = InIconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.PreConstruct");

	UWBP_SlotView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SlotView.WBP_SlotView_C.ExecuteUbergraph_WBP_SlotView
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SlotView_C::ExecuteUbergraph_WBP_SlotView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SlotView.WBP_SlotView_C.ExecuteUbergraph_WBP_SlotView");

	UWBP_SlotView_C_ExecuteUbergraph_WBP_SlotView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
