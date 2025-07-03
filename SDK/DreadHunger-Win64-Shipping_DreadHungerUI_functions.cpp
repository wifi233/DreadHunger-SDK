                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHungerUI_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DreadHungerUI.DH_VisibilityWidget.Show
// (Native, Public, BlueprintCallable)

void UDH_VisibilityWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.Show");

	UDH_VisibilityWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_VisibilityWidget.OnVisibilityWidgetHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_VisibilityWidget::OnVisibilityWidgetHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_VisibilityWidget.OnVisibilityWidgetHiddenSignature__DelegateSignature");

	UDH_VisibilityWidget_OnVisibilityWidgetHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.OnVisibilityTagsChanged
// (Final, Native, Private)
// Parameters:
// class UDH_UIVisibilityTagHandler* TagHandler                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_VisibilityWidget::OnVisibilityTagsChanged(class UDH_UIVisibilityTagHandler* TagHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.OnVisibilityTagsChanged");

	UDH_VisibilityWidget_OnVisibilityTagsChanged_Params params;
	params.TagHandler = TagHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.OnShown
// (Native, Protected, BlueprintCallable)

void UDH_VisibilityWidget::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.OnShown");

	UDH_VisibilityWidget_OnShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.OnShow
// (Native, Event, Protected, BlueprintEvent)

void UDH_VisibilityWidget::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.OnShow");

	UDH_VisibilityWidget_OnShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.OnHide
// (Native, Event, Protected, BlueprintEvent)

void UDH_VisibilityWidget::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.OnHide");

	UDH_VisibilityWidget_OnHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.OnHidden
// (Native, Protected, BlueprintCallable)

void UDH_VisibilityWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.OnHidden");

	UDH_VisibilityWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.IsHiding
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_VisibilityWidget::IsHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.IsHiding");

	UDH_VisibilityWidget_IsHiding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_VisibilityWidget.InstantShow
// (Native, Public, BlueprintCallable)

void UDH_VisibilityWidget::InstantShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.InstantShow");

	UDH_VisibilityWidget_InstantShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.InstantHide
// (Native, Public, BlueprintCallable)

void UDH_VisibilityWidget::InstantHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.InstantHide");

	UDH_VisibilityWidget_InstantHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.Hide
// (Native, Public, BlueprintCallable)

void UDH_VisibilityWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.Hide");

	UDH_VisibilityWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.BP_OnShown
// (Event, Protected, BlueprintEvent)

void UDH_VisibilityWidget::BP_OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.BP_OnShown");

	UDH_VisibilityWidget_BP_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VisibilityWidget.BP_OnHidden
// (Event, Protected, BlueprintEvent)

void UDH_VisibilityWidget::BP_OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VisibilityWidget.BP_OnHidden");

	UDH_VisibilityWidget_BP_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.VecToAngle
// (Final, Native, Static, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               InVec                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_RadialMenuBaseWidget::VecToAngle(const struct FVector2D& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.VecToAngle");

	UDH_RadialMenuBaseWidget_VecToAngle_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.UpdateSelectedIndex
// (Final, Native, Protected, BlueprintCallable)

void UDH_RadialMenuBaseWidget::UpdateSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.UpdateSelectedIndex");

	UDH_RadialMenuBaseWidget_UpdateSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.UpdateMouseCursor
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InCursorPosition               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_RadialMenuBaseWidget::UpdateMouseCursor(const struct FVector2D& InCursorPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.UpdateMouseCursor");

	UDH_RadialMenuBaseWidget_UpdateMouseCursor_Params params;
	params.InCursorPosition = InCursorPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.SetCursorPosition
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InCursorCenter                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_RadialMenuBaseWidget::SetCursorPosition(const struct FVector2D& InCursorCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.SetCursorPosition");

	UDH_RadialMenuBaseWidget_SetCursorPosition_Params params;
	params.InCursorCenter = InCursorCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.SetCanShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bInCanShow                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuBaseWidget::SetCanShow(bool bInCanShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.SetCanShow");

	UDH_RadialMenuBaseWidget_SetCanShow_Params params;
	params.bInCanShow = bInCanShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.PopulateOptions
// (Native, Protected, BlueprintCallable)

void UDH_RadialMenuBaseWidget::PopulateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.PopulateOptions");

	UDH_RadialMenuBaseWidget_PopulateOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.PlaySelectedSound
// (Final, Native, Protected, BlueprintCallable)

void UDH_RadialMenuBaseWidget::PlaySelectedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.PlaySelectedSound");

	UDH_RadialMenuBaseWidget_PlaySelectedSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.OnCommittedOptionFinishedAnimations
// (Final, Native, Protected, BlueprintCallable)

void UDH_RadialMenuBaseWidget::OnCommittedOptionFinishedAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.OnCommittedOptionFinishedAnimations");

	UDH_RadialMenuBaseWidget_OnCommittedOptionFinishedAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.IsSelectedIndex
// (Final, Native, Static, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFloatRange             SegmentAngles                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MouseAngle                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_RadialMenuBaseWidget::IsSelectedIndex(const struct FFloatRange& SegmentAngles, float MouseAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.IsSelectedIndex");

	UDH_RadialMenuBaseWidget_IsSelectedIndex_Params params;
	params.SegmentAngles = SegmentAngles;
	params.MouseAngle = MouseAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetShowAnimation
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UDH_RadialMenuBaseWidget::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetShowAnimation");

	UDH_RadialMenuBaseWidget_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSelectedIndexFromMouseAngle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          MouseAngle                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_RadialMenuBaseWidget::GetSelectedIndexFromMouseAngle(float MouseAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSelectedIndexFromMouseAngle");

	UDH_RadialMenuBaseWidget_GetSelectedIndexFromMouseAngle_Params params;
	params.MouseAngle = MouseAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSelectedIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_RadialMenuBaseWidget::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSelectedIndex");

	UDH_RadialMenuBaseWidget_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSegmentAngles
// (Final, Native, Static, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            NumberOfSegments               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationalOffset               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFloatRange>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FFloatRange> UDH_RadialMenuBaseWidget::GetSegmentAngles(int NumberOfSegments, float Radius, float RotationalOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSegmentAngles");

	UDH_RadialMenuBaseWidget_GetSegmentAngles_Params params;
	params.NumberOfSegments = NumberOfSegments;
	params.Radius = Radius;
	params.RotationalOffset = RotationalOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetOptionsCanvas
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCanvasPanel* UDH_RadialMenuBaseWidget::GetOptionsCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetOptionsCanvas");

	UDH_RadialMenuBaseWidget_GetOptionsCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetOptionPositions
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfOptions                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDH_RadialOptionPosition> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDH_RadialOptionPosition> UDH_RadialMenuBaseWidget::GetOptionPositions(float Radius, int NumberOfOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetOptionPositions");

	UDH_RadialMenuBaseWidget_GetOptionPositions_Params params;
	params.Radius = Radius;
	params.NumberOfOptions = NumberOfOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetNumberOfVisibleWidgets
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_RadialMenuBaseWidget::GetNumberOfVisibleWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetNumberOfVisibleWidgets");

	UDH_RadialMenuBaseWidget_GetNumberOfVisibleWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetMouseSelectMode
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_RadialMenuBaseWidget::GetMouseSelectMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetMouseSelectMode");

	UDH_RadialMenuBaseWidget_GetMouseSelectMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetMouseAngle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_RadialMenuBaseWidget::GetMouseAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetMouseAngle");

	UDH_RadialMenuBaseWidget_GetMouseAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCursorPosition
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D UDH_RadialMenuBaseWidget::GetCursorPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCursorPosition");

	UDH_RadialMenuBaseWidget_GetCursorPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCenterAngle
// (Final, Native, Static, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          LowerAngle                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          UpperAngle                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_RadialMenuBaseWidget::GetCenterAngle(float LowerAngle, float UpperAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCenterAngle");

	UDH_RadialMenuBaseWidget_GetCenterAngle_Params params;
	params.LowerAngle = LowerAngle;
	params.UpperAngle = UpperAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCanShow
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_RadialMenuBaseWidget::GetCanShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCanShow");

	UDH_RadialMenuBaseWidget_GetCanShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.DoSelectedAction
// (Native, Protected, BlueprintCallable)

void UDH_RadialMenuBaseWidget::DoSelectedAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.DoSelectedAction");

	UDH_RadialMenuBaseWidget_DoSelectedAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.CreateButtons
// (Final, Native, Protected, BlueprintCallable)

void UDH_RadialMenuBaseWidget::CreateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.CreateButtons");

	UDH_RadialMenuBaseWidget_CreateButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnOptionSetVisible
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int                            OptionIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuBaseWidget::BP_OnOptionSetVisible(int OptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnOptionSetVisible");

	UDH_RadialMenuBaseWidget_BP_OnOptionSetVisible_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnOptionSetHidden
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int                            OptionIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuBaseWidget::BP_OnOptionSetHidden(int OptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnOptionSetHidden");

	UDH_RadialMenuBaseWidget_BP_OnOptionSetHidden_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnGetNumberOfOptions
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_RadialMenuBaseWidget::BP_OnGetNumberOfOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnGetNumberOfOptions");

	UDH_RadialMenuBaseWidget_BP_OnGetNumberOfOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnDoSelectedAction
// (Event, Protected, BlueprintEvent)

void UDH_RadialMenuBaseWidget::BP_OnDoSelectedAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnDoSelectedAction");

	UDH_RadialMenuBaseWidget_BP_OnDoSelectedAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnCanUseRadial
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_RadialMenuBaseWidget::BP_OnCanUseRadial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnCanUseRadial");

	UDH_RadialMenuBaseWidget_BP_OnCanUseRadial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_AttributeViewWidget.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_AttributeViewWidget::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.SetValue");

	UDH_AttributeViewWidget_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.SetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              InIconTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_AttributeViewWidget::SetTexture(class UTexture2D* InIconTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.SetTexture");

	UDH_AttributeViewWidget_SetTexture_Params params;
	params.InIconTexture = InIconTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.SetRateOfChange
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                          InRate                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_AttributeViewWidget::SetRateOfChange(float InRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.SetRateOfChange");

	UDH_AttributeViewWidget_SetRateOfChange_Params params;
	params.InRate = InRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.SetMaxRateOfChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxRate                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_AttributeViewWidget::SetMaxRateOfChange(float InMaxRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.SetMaxRateOfChange");

	UDH_AttributeViewWidget_SetMaxRateOfChange_Params params;
	params.InMaxRate = InMaxRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.PlayPopAnimation
// (Final, Native, Public, BlueprintCallable)

void UDH_AttributeViewWidget::PlayPopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.PlayPopAnimation");

	UDH_AttributeViewWidget_PlayPopAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.OnCircularFillFillPercentChanged
// (Final, Native, Private)

void UDH_AttributeViewWidget::OnCircularFillFillPercentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.OnCircularFillFillPercentChanged");

	UDH_AttributeViewWidget_OnCircularFillFillPercentChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_AttributeViewWidget.OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_AttributeViewWidget* ViewWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_AttributeViewWidget::OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature(class UDH_AttributeViewWidget* ViewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_AttributeViewWidget.OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature");

	UDH_AttributeViewWidget_OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature_Params params;
	params.ViewWidget = ViewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.Init
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              InIconTexture                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            IconColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_AttributeViewWidget::Init(class UTexture2D* InIconTexture, const struct FLinearColor& IconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.Init");

	UDH_AttributeViewWidget_Init_Params params;
	params.InIconTexture = InIconTexture;
	params.IconColor = IconColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_AttributeViewWidget.GetMaxRateOfChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_AttributeViewWidget::GetMaxRateOfChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.GetMaxRateOfChange");

	UDH_AttributeViewWidget_GetMaxRateOfChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_AttributeViewWidget.GetCritical
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_AttributeViewWidget::GetCritical()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.GetCritical");

	UDH_AttributeViewWidget_GetCritical_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_AttributeViewWidget.GetCircularFill
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CircularFillWidget*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CircularFillWidget* UDH_AttributeViewWidget::GetCircularFill()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AttributeViewWidget.GetCircularFill");

	UDH_AttributeViewWidget_GetCircularFill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_AutoSearchForLobbiesButtonWidget.AutoSearch
// (Final, Native, Protected, BlueprintCallable)

void UDH_AutoSearchForLobbiesButtonWidget::AutoSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_AutoSearchForLobbiesButtonWidget.AutoSearch");

	UDH_AutoSearchForLobbiesButtonWidget_AutoSearch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LootContainerBaseWidget.SetOwningCraftingComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingComponent*   InOwningCraftingComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LootContainerBaseWidget::SetOwningCraftingComponent(class UDH_CraftingComponent* InOwningCraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LootContainerBaseWidget.SetOwningCraftingComponent");

	UDH_LootContainerBaseWidget_SetOwningCraftingComponent_Params params;
	params.InOwningCraftingComponent = InOwningCraftingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LootContainerBaseWidget.SetHeatSourceComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_HeatSourceComponent* InHeatSourceComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LootContainerBaseWidget::SetHeatSourceComponent(class UDH_HeatSourceComponent* InHeatSourceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LootContainerBaseWidget.SetHeatSourceComponent");

	UDH_LootContainerBaseWidget_SetHeatSourceComponent_Params params;
	params.InHeatSourceComponent = InHeatSourceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LootContainerBaseWidget.OnTransactingInventoryChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryTransactionComponent* InInventoryTransactionComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LootContainerBaseWidget::OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InInventoryTransactionComponent, class UDH_InventoryManager* InInventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LootContainerBaseWidget.OnTransactingInventoryChanged");

	UDH_LootContainerBaseWidget_OnTransactingInventoryChanged_Params params;
	params.InInventoryTransactionComponent = InInventoryTransactionComponent;
	params.InInventoryManager = InInventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LootContainerBaseWidget.GetOwningCraftingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CraftingComponent* UDH_LootContainerBaseWidget::GetOwningCraftingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LootContainerBaseWidget.GetOwningCraftingComponent");

	UDH_LootContainerBaseWidget_GetOwningCraftingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_LootContainerBaseWidget.GetHeatSourceComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_HeatSourceComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_HeatSourceComponent* UDH_LootContainerBaseWidget::GetHeatSourceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LootContainerBaseWidget.GetHeatSourceComponent");

	UDH_LootContainerBaseWidget_GetHeatSourceComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingStationWidget.OnViewHidden
// (Final, Native, Private)

void UDH_CraftingStationWidget::OnViewHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingStationWidget.OnViewHidden");

	UDH_CraftingStationWidget_OnViewHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingStationWidget.OnCraftingStationViewClose
// (Final, Native, Private)

void UDH_CraftingStationWidget::OnCraftingStationViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingStationWidget.OnCraftingStationViewClose");

	UDH_CraftingStationWidget_OnCraftingStationViewClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingStationWidget.OnCraftingComponentActivated
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingStationWidget::OnCraftingComponentActivated(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingStationWidget.OnCraftingComponentActivated");

	UDH_CraftingStationWidget_OnCraftingComponentActivated_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingStationWidget.OnCraftableRecipesChanged
// (Final, Native, Private)

void UDH_CraftingStationWidget::OnCraftableRecipesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingStationWidget.OnCraftableRecipesChanged");

	UDH_CraftingStationWidget_OnCraftableRecipesChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnLobbiesRestrictionWidgetRestrictedChanged
// (Final, Native, Private)
// Parameters:
// bool                           bRestricted                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_BrowseExpeditionsButtonWidget::OnLobbiesRestrictionWidgetRestrictedChanged(bool bRestricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnLobbiesRestrictionWidgetRestrictedChanged");

	UDH_BrowseExpeditionsButtonWidget_OnLobbiesRestrictionWidgetRestrictedChanged_Params params;
	params.bRestricted = bRestricted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_BrowseExpeditionsButtonWidget::OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature");

	UDH_BrowseExpeditionsButtonWidget_OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnBaseButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_BrowseExpeditionsButtonWidget::OnBaseButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnBaseButtonClicked");

	UDH_BrowseExpeditionsButtonWidget_OnBaseButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ButtonWidget.SetHoverBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InHoverBrush                   (Parm)

void UDH_ButtonWidget::SetHoverBrush(const struct FSlateBrush& InHoverBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ButtonWidget.SetHoverBrush");

	UDH_ButtonWidget_SetHoverBrush_Params params;
	params.InHoverBrush = InHoverBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_ButtonWidget.OnButtonControllerHoveredSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_ButtonWidget::OnButtonControllerHoveredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_ButtonWidget.OnButtonControllerHoveredSignature__DelegateSignature");

	UDH_ButtonWidget_OnButtonControllerHoveredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ButtonWidget.Clicked
// (Native, Protected)

void UDH_ButtonWidget::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ButtonWidget.Clicked");

	UDH_ButtonWidget_Clicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetMinWidth
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InMinWidth                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ButtonWidget::BP_OnSetMinWidth(float InMinWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ButtonWidget.BP_OnSetMinWidth");

	UDH_ButtonWidget_BP_OnSetMinWidth_Params params;
	params.InMinWidth = InMinWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverOpacity
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InOpacity                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ButtonWidget::BP_OnSetHoverOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverOpacity");

	UDH_ButtonWidget_BP_OnSetHoverOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverBrushVerticalAlignment
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ButtonWidget::BP_OnSetHoverBrushVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverBrushVerticalAlignment");

	UDH_ButtonWidget_BP_OnSetHoverBrushVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverBrush
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InHoverBrush                   (ConstParm, Parm)

void UDH_ButtonWidget::BP_OnSetHoverBrush(const struct FSlateBrush& InHoverBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverBrush");

	UDH_ButtonWidget_BP_OnSetHoverBrush_Params params;
	params.InHoverBrush = InHoverBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CheckBoxWidget.SetChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheckBoxWidget::SetChecked(bool bInChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CheckBoxWidget.SetChecked");

	UDH_CheckBoxWidget_SetChecked_Params params;
	params.bInChecked = bInChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_CheckBoxWidget.OnCheckBoxWidgetStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bChecked                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheckBoxWidget::OnCheckBoxWidgetStateChanged__DelegateSignature(bool bChecked)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CheckBoxWidget.OnCheckBoxWidgetStateChanged__DelegateSignature");

	UDH_CheckBoxWidget_OnCheckBoxWidgetStateChanged__DelegateSignature_Params params;
	params.bChecked = bChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CheckBoxWidget.OnCheckBoxComponentStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInIsChecked                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheckBoxWidget::OnCheckBoxComponentStateChanged(bool bInIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CheckBoxWidget.OnCheckBoxComponentStateChanged");

	UDH_CheckBoxWidget_OnCheckBoxComponentStateChanged_Params params;
	params.bInIsChecked = bInIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CheckBoxWidget.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_CheckBoxWidget::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CheckBoxWidget.IsChecked");

	UDH_CheckBoxWidget_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CheckBoxWidget.GetBaseCheckBox
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCheckBox*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCheckBox* UDH_CheckBoxWidget::GetBaseCheckBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CheckBoxWidget.GetBaseCheckBox");

	UDH_CheckBoxWidget_GetBaseCheckBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CircularFillWidget.Update
// (Final, Native, Private)
// Parameters:
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::Update(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.Update");

	UDH_CircularFillWidget_Update_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetReverseReserved
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInReversedReserve             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetReverseReserved(bool bInReversedReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetReverseReserved");

	UDH_CircularFillWidget_SetReverseReserved_Params params;
	params.bInReversedReserve = bInReversedReserve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetReservedTint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FLinearColor            Tint                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_CircularFillWidget::SetReservedTint(const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetReservedTint");

	UDH_CircularFillWidget_SetReservedTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetReservedPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReservedPct                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSkipInterp                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetReservedPercent(float ReservedPct, bool bInSkipInterp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetReservedPercent");

	UDH_CircularFillWidget_SetReservedPercent_Params params;
	params.ReservedPct = ReservedPct;
	params.bInSkipInterp = bInSkipInterp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetMIDParentMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      InMIDParentMaterial            (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetMIDParentMaterial(class UMaterialInterface* InMIDParentMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetMIDParentMaterial");

	UDH_CircularFillWidget_SetMIDParentMaterial_Params params;
	params.InMIDParentMaterial = InMIDParentMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedReservedPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpolatedReservedPct        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetInterpolatedReservedPercent(float InterpolatedReservedPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedReservedPercent");

	UDH_CircularFillWidget_SetInterpolatedReservedPercent_Params params;
	params.InterpolatedReservedPct = InterpolatedReservedPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedInnerFillPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpolatedInnerFillPct       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetInterpolatedInnerFillPercent(float InterpolatedInnerFillPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedInnerFillPercent");

	UDH_CircularFillWidget_SetInterpolatedInnerFillPercent_Params params;
	params.InterpolatedInnerFillPct = InterpolatedInnerFillPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedFillPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpolatedFillPct            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetInterpolatedFillPercent(float InterpolatedFillPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedFillPercent");

	UDH_CircularFillWidget_SetInterpolatedFillPercent_Params params;
	params.InterpolatedFillPct = InterpolatedFillPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedDesiredPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpolatedDesiredPct         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetInterpolatedDesiredPercent(float InterpolatedDesiredPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedDesiredPercent");

	UDH_CircularFillWidget_SetInterpolatedDesiredPercent_Params params;
	params.InterpolatedDesiredPct = InterpolatedDesiredPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetInnerFillPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InnerFillPct                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSkipInterp                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetInnerFillPercent(float InnerFillPct, bool bInSkipInterp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetInnerFillPercent");

	UDH_CircularFillWidget_SetInnerFillPercent_Params params;
	params.InnerFillPct = InnerFillPct;
	params.bInSkipInterp = bInSkipInterp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetFillPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FillPct                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSkipInterp                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetFillPercent(float FillPct, bool bInSkipInterp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetFillPercent");

	UDH_CircularFillWidget_SetFillPercent_Params params;
	params.FillPct = FillPct;
	params.bInSkipInterp = bInSkipInterp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetDesiredPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DesiredPct                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSkipInterp                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CircularFillWidget::SetDesiredPercent(float DesiredPct, bool bInSkipInterp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetDesiredPercent");

	UDH_CircularFillWidget_SetDesiredPercent_Params params;
	params.DesiredPct = DesiredPct;
	params.bInSkipInterp = bInSkipInterp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.SetBaseTint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FLinearColor            Tint                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_CircularFillWidget::SetBaseTint(const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.SetBaseTint");

	UDH_CircularFillWidget_SetBaseTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_CircularFillWidget.OnCircularFillFillPercentChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_CircularFillWidget::OnCircularFillFillPercentChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CircularFillWidget.OnCircularFillFillPercentChangedSignature__DelegateSignature");

	UDH_CircularFillWidget_OnCircularFillFillPercentChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.GetFillPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_CircularFillWidget::GetFillPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.GetFillPercent");

	UDH_CircularFillWidget_GetFillPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateReservedPct
// (Final, Native, Private)

void UDH_CircularFillWidget::DesignTimeAlternateReservedPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateReservedPct");

	UDH_CircularFillWidget_DesignTimeAlternateReservedPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateInnerFillPct
// (Final, Native, Private)

void UDH_CircularFillWidget::DesignTimeAlternateInnerFillPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateInnerFillPct");

	UDH_CircularFillWidget_DesignTimeAlternateInnerFillPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateFillPct
// (Final, Native, Private)

void UDH_CircularFillWidget::DesignTimeAlternateFillPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateFillPct");

	UDH_CircularFillWidget_DesignTimeAlternateFillPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateDesiredPct
// (Final, Native, Private)

void UDH_CircularFillWidget::DesignTimeAlternateDesiredPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateDesiredPct");

	UDH_CircularFillWidget_DesignTimeAlternateDesiredPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_CloseButtonWidget.OnCloseButtonWidgetClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_CloseButtonWidget::OnCloseButtonWidgetClickedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CloseButtonWidget.OnCloseButtonWidgetClickedSignature__DelegateSignature");

	UDH_CloseButtonWidget_OnCloseButtonWidgetClickedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CloseButtonWidget.OnButtonClicked
// (Final, Native, Private)

void UDH_CloseButtonWidget::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CloseButtonWidget.OnButtonClicked");

	UDH_CloseButtonWidget_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumItemAvatar.SetShouldRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldRender                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_CompendiumItemAvatar::SetShouldRender(bool bShouldRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumItemAvatar.SetShouldRender");

	ADH_CompendiumItemAvatar_SetShouldRender_Params params;
	params.bShouldRender = bShouldRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumItemAvatar.ResetMeshOrientation
// (Final, Native, Public, BlueprintCallable)

void ADH_CompendiumItemAvatar::ResetMeshOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumItemAvatar.ResetMeshOrientation");

	ADH_CompendiumItemAvatar_ResetMeshOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumItemButtonViewWidget.OnBaseButtonClicked
// (Final, Native, Private)

void UDH_CompendiumItemButtonViewWidget::OnBaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumItemButtonViewWidget.OnBaseButtonClicked");

	UDH_CompendiumItemButtonViewWidget_OnBaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_CompendiumItemButtonViewWidget.CompendiumItemButtonViewWidgetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_CompendiumItemButtonViewWidget::CompendiumItemButtonViewWidgetSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CompendiumItemButtonViewWidget.CompendiumItemButtonViewWidgetSignature__DelegateSignature");

	UDH_CompendiumItemButtonViewWidget_CompendiumItemButtonViewWidgetSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumItemButtonWidget.OnViewClicked
// (Native, Protected)

void UDH_CompendiumItemButtonWidget::OnViewClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumItemButtonWidget.OnViewClicked");

	UDH_CompendiumItemButtonWidget_OnViewClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumTopicButtonViewWidget.OnBaseButtonClicked
// (Final, Native, Private)

void UDH_CompendiumTopicButtonViewWidget::OnBaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumTopicButtonViewWidget.OnBaseButtonClicked");

	UDH_CompendiumTopicButtonViewWidget_OnBaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_CompendiumTopicButtonViewWidget.CompendiumTopicButtonViewWidgetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_CompendiumTopicButtonViewWidget::CompendiumTopicButtonViewWidgetSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CompendiumTopicButtonViewWidget.CompendiumTopicButtonViewWidgetSignature__DelegateSignature");

	UDH_CompendiumTopicButtonViewWidget_CompendiumTopicButtonViewWidgetSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumTopicButtonWidget.OnViewClicked
// (Native, Protected)

void UDH_CompendiumTopicButtonWidget::OnViewClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumTopicButtonWidget.OnViewClicked");

	UDH_CompendiumTopicButtonWidget_OnViewClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CompendiumWidget.OnRichTextHyperlinkClicked
// (Final, Native, Private)
// Parameters:
// class FString                  ItemId                         (Parm, ZeroConstructor)

void UDH_CompendiumWidget::OnRichTextHyperlinkClicked(const class FString& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CompendiumWidget.OnRichTextHyperlinkClicked");

	UDH_CompendiumWidget_OnRichTextHyperlinkClicked_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ConfirmItemPurchaseOverlayWidget.OnItemPurchased
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class FString>          ItemCodes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_ConfirmItemPurchaseOverlayWidget::OnItemPurchased(TArray<class FString> ItemCodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ConfirmItemPurchaseOverlayWidget.OnItemPurchased");

	UDH_ConfirmItemPurchaseOverlayWidget_OnItemPurchased_Params params;
	params.ItemCodes = ItemCodes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ConnectToIPWidget.StartGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          IPAddress                      (ConstParm, Parm, ZeroConstructor)
// int                            Port                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ConnectToIPWidget::StartGame(TArray<unsigned char> IPAddress, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ConnectToIPWidget.StartGame");

	UDH_ConnectToIPWidget_StartGame_Params params;
	params.IPAddress = IPAddress;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ConnectToIPWidget.GetIPAddress
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// TArray<unsigned char>          Out_IPAddress                  (Parm, OutParm, ZeroConstructor)
// int                            Out_Port                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_ConnectToIPWidget::GetIPAddress(const class FString& Name, TArray<unsigned char>* Out_IPAddress, int* Out_Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ConnectToIPWidget.GetIPAddress");

	UDH_ConnectToIPWidget_GetIPAddress_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_IPAddress != nullptr)
		*Out_IPAddress = params.Out_IPAddress;
	if (Out_Port != nullptr)
		*Out_Port = params.Out_Port;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ConnectToIPWidget.BP_ShowConnectToIPAddressWidget
// (Event, Protected, BlueprintEvent)

void UDH_ConnectToIPWidget::BP_ShowConnectToIPAddressWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ConnectToIPWidget.BP_ShowConnectToIPAddressWidget");

	UDH_ConnectToIPWidget_BP_ShowConnectToIPAddressWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticFilterButton.OnFilterButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CosmeticFilterButton::OnFilterButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticFilterButton.OnFilterButtonClicked");

	UDH_CosmeticFilterButton_OnFilterButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemListWidget.ToggleFilter
// (Final, Native, Private)
// Parameters:
// unsigned char                  InFilter                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CosmeticItemListWidget::ToggleFilter(unsigned char InFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemListWidget.ToggleFilter");

	UDH_CosmeticItemListWidget_ToggleFilter_Params params;
	params.InFilter = InFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemListWidget.Show
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDH_CosmeticItemListWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemListWidget.Show");

	UDH_CosmeticItemListWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemListWidget.Hide
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDH_CosmeticItemListWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemListWidget.Hide");

	UDH_CosmeticItemListWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemListWidget.GenerateAvailableListObjects
// (Native, Protected)

void UDH_CosmeticItemListWidget::GenerateAvailableListObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemListWidget.GenerateAvailableListObjects");

	UDH_CosmeticItemListWidget_GenerateAvailableListObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemTransferWidget.TryShow
// (Final, Native, Private)

void UDH_CosmeticItemTransferWidget::TryShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemTransferWidget.TryShow");

	UDH_CosmeticItemTransferWidget_TryShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemViewWidget.OnCosmeticItemMouseLeave
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CosmeticItemViewWidget::OnCosmeticItemMouseLeave(class UDH_CosmeticItemBase* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemViewWidget.OnCosmeticItemMouseLeave");

	UDH_CosmeticItemViewWidget_OnCosmeticItemMouseLeave_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemViewWidget.OnCosmeticItemMouseEnter
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CosmeticItemViewWidget::OnCosmeticItemMouseEnter(class UDH_CosmeticItemBase* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemViewWidget.OnCosmeticItemMouseEnter");

	UDH_CosmeticItemViewWidget_OnCosmeticItemMouseEnter_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.Toggle
// (Final, Native, Private)

void UDH_CosmeticItemWidget::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.Toggle");

	UDH_CosmeticItemWidget_Toggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.Select
// (Final, Native, Public)
// Parameters:
// bool                           bDragged                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CosmeticItemWidget::Select(bool bDragged)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.Select");

	UDH_CosmeticItemWidget_Select_Params params;
	params.bDragged = bDragged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.OnCosmeticItemUnequipped
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CosmeticItemWidget::OnCosmeticItemUnequipped(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.OnCosmeticItemUnequipped");

	UDH_CosmeticItemWidget_OnCosmeticItemUnequipped_Params params;
	params.Item = Item;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.OnCosmeticItemEquipped
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CosmeticItemWidget::OnCosmeticItemEquipped(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.OnCosmeticItemEquipped");

	UDH_CosmeticItemWidget_OnCosmeticItemEquipped_Params params;
	params.Item = Item;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.GetTooltipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CosmeticItemTooltipWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CosmeticItemTooltipWidget* UDH_CosmeticItemWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.GetTooltipWidget");

	UDH_CosmeticItemWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.Deselect
// (Final, Native, Private)

void UDH_CosmeticItemWidget::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.Deselect");

	UDH_CosmeticItemWidget_Deselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UDH_CosmeticItemWidget::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.BP_OnSelected");

	UDH_CosmeticItemWidget_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CosmeticItemWidget.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UDH_CosmeticItemWidget::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CosmeticItemWidget.BP_OnDeselected");

	UDH_CosmeticItemWidget_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.UpdateVisibility
// (Final, Native, Protected, BlueprintCallable)

void UDH_CraftingInfoSubWidget::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.UpdateVisibility");

	UDH_CraftingInfoSubWidget_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_CraftingInfoSubWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.Show");

	UDH_CraftingInfoSubWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.ShouldBeVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_CraftingInfoSubWidget::ShouldBeVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.ShouldBeVisible");

	UDH_CraftingInfoSubWidget_ShouldBeVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetPreviousCraftingComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDH_CraftingComponent*   InPreviousCraftingComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingInfoSubWidget::SetPreviousCraftingComponent(class UDH_CraftingComponent* InPreviousCraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.SetPreviousCraftingComponent");

	UDH_CraftingInfoSubWidget_SetPreviousCraftingComponent_Params params;
	params.InPreviousCraftingComponent = InPreviousCraftingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCurrentInteractTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     NewInteractTarget              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingInfoSubWidget::SetCurrentInteractTarget(class UPrimitiveComponent* NewInteractTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCurrentInteractTarget");

	UDH_CraftingInfoSubWidget_SetCurrentInteractTarget_Params params;
	params.NewInteractTarget = NewInteractTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCraftingProject
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDH_CraftingProject*     InCraftingProject              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingInfoSubWidget::SetCraftingProject(class UDH_CraftingProject* InCraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCraftingProject");

	UDH_CraftingInfoSubWidget_SetCraftingProject_Params params;
	params.InCraftingProject = InCraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCraftingComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDH_CraftingComponent*   InCraftingComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingInfoSubWidget::SetCraftingComponent(class UDH_CraftingComponent* InCraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCraftingComponent");

	UDH_CraftingInfoSubWidget_SetCraftingComponent_Params params;
	params.InCraftingComponent = InCraftingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnWidgetAnimationHandlerBeginShow
// (Final, Native, Private)
// Parameters:
// class UDH_WidgetAnimationHandler* InAnimationHandler             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingInfoSubWidget::OnWidgetAnimationHandlerBeginShow(class UDH_WidgetAnimationHandler* InAnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.OnWidgetAnimationHandlerBeginShow");

	UDH_CraftingInfoSubWidget_OnWidgetAnimationHandlerBeginShow_Params params;
	params.InAnimationHandler = InAnimationHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCurrentInteractTargetChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingInfoSubWidget::OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCurrentInteractTargetChanged");

	UDH_CraftingInfoSubWidget_OnCurrentInteractTargetChanged_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCraftingProjectCompletedChanged
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     InCraftingProject              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingInfoSubWidget::OnCraftingProjectCompletedChanged(class UDH_CraftingProject* InCraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCraftingProjectCompletedChanged");

	UDH_CraftingInfoSubWidget_OnCraftingProjectCompletedChanged_Params params;
	params.InCraftingProject = InCraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCraftingProjectAbortedChanged
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     InCraftingProject              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingInfoSubWidget::OnCraftingProjectAbortedChanged(class UDH_CraftingProject* InCraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCraftingProjectAbortedChanged");

	UDH_CraftingInfoSubWidget_OnCraftingProjectAbortedChanged_Params params;
	params.InCraftingProject = InCraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_CraftingInfoSubWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.Hide");

	UDH_CraftingInfoSubWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetPreviousCraftingComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CraftingComponent* UDH_CraftingInfoSubWidget::GetPreviousCraftingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.GetPreviousCraftingComponent");

	UDH_CraftingInfoSubWidget_GetPreviousCraftingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCurrentInteractTarget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UDH_CraftingInfoSubWidget::GetCurrentInteractTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCurrentInteractTarget");

	UDH_CraftingInfoSubWidget_GetCurrentInteractTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCraftingProject
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingProject*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CraftingProject* UDH_CraftingInfoSubWidget::GetCraftingProject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCraftingProject");

	UDH_CraftingInfoSubWidget_GetCraftingProject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCraftingComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CraftingComponent* UDH_CraftingInfoSubWidget::GetCraftingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCraftingComponent");

	UDH_CraftingInfoSubWidget_GetCraftingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_OnSetVisible
// (Event, Protected, BlueprintEvent)

void UDH_CraftingInfoSubWidget::BP_OnSetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_OnSetVisible");

	UDH_CraftingInfoSubWidget_BP_OnSetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_OnCurrentInteractTargetChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     NewInteractTarget              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingInfoSubWidget::BP_OnCurrentInteractTargetChanged(class UPrimitiveComponent* NewInteractTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_OnCurrentInteractTargetChanged");

	UDH_CraftingInfoSubWidget_BP_OnCurrentInteractTargetChanged_Params params;
	params.NewInteractTarget = NewInteractTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_CraftingInfoSubWidget::BP_CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_CreateAnimationHandler");

	UDH_CraftingInfoSubWidget_BP_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingRecipeTooltipWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingRecipe*      InCraftingRecipe               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingRecipeTooltipWidget::Init(class UDH_CraftingRecipe* InCraftingRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeTooltipWidget.Init");

	UDH_CraftingRecipeTooltipWidget_Init_Params params;
	params.InCraftingRecipe = InCraftingRecipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeTooltipWidget.BP_OnInit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_CraftingRecipe*      InCraftingRecipe               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingRecipeTooltipWidget::BP_OnInit(class UDH_CraftingRecipe* InCraftingRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeTooltipWidget.BP_OnInit");

	UDH_CraftingRecipeTooltipWidget_BP_OnInit_Params params;
	params.InCraftingRecipe = InCraftingRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.SetFocused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFocused                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingRecipeWidget::SetFocused(bool bInFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.SetFocused");

	UDH_CraftingRecipeWidget_SetFocused_Params params;
	params.bInFocused = bInFocused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.OnInventoryManagerSlotContentsChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<int>                    InModifiedSlots                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_CraftingRecipeWidget::OnInventoryManagerSlotContentsChanged(class UDH_InventoryManager* InInventoryManager, TArray<int> InModifiedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.OnInventoryManagerSlotContentsChanged");

	UDH_CraftingRecipeWidget_OnInventoryManagerSlotContentsChanged_Params params;
	params.InInventoryManager = InInventoryManager;
	params.InModifiedSlots = InModifiedSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.OnCraftingProjectCompletedChanged
// (Native, Protected)
// Parameters:
// class UDH_CraftingProject*     InCraftingProject              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingRecipeWidget::OnCraftingProjectCompletedChanged(class UDH_CraftingProject* InCraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.OnCraftingProjectCompletedChanged");

	UDH_CraftingRecipeWidget_OnCraftingProjectCompletedChanged_Params params;
	params.InCraftingProject = InCraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.OnCraftingComponentLimitedRecipeCrafted
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingComponent*   InCraftingComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingRecipeWidget::OnCraftingComponentLimitedRecipeCrafted(class UDH_CraftingComponent* InCraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.OnCraftingComponentLimitedRecipeCrafted");

	UDH_CraftingRecipeWidget_OnCraftingComponentLimitedRecipeCrafted_Params params;
	params.InCraftingComponent = InCraftingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.IsCraftable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_CraftingRecipeWidget::IsCraftable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.IsCraftable");

	UDH_CraftingRecipeWidget_IsCraftable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.Init
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingRecipe*      InAssociatedRecipe             (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingComponent*   InCraftingComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingRecipeWidget::Init(class UDH_CraftingRecipe* InAssociatedRecipe, class UDH_CraftingComponent* InCraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.Init");

	UDH_CraftingRecipeWidget_Init_Params params;
	params.InAssociatedRecipe = InAssociatedRecipe;
	params.InCraftingComponent = InCraftingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.GetRecipeTooltip
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_CraftingRecipeWidget::GetRecipeTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.GetRecipeTooltip");

	UDH_CraftingRecipeWidget_GetRecipeTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.GetAssociatedRecipe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingRecipe*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CraftingRecipe* UDH_CraftingRecipeWidget::GetAssociatedRecipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.GetAssociatedRecipe");

	UDH_CraftingRecipeWidget_GetAssociatedRecipe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.Craft
// (Final, Native, Public, BlueprintCallable, Const)

void UDH_CraftingRecipeWidget::Craft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.Craft");

	UDH_CraftingRecipeWidget_Craft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingRecipeWidget.BP_OnPlayReadyAnimation
// (Event, Protected, BlueprintEvent)

void UDH_CraftingRecipeWidget::BP_OnPlayReadyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingRecipeWidget.BP_OnPlayReadyAnimation");

	UDH_CraftingRecipeWidget_BP_OnPlayReadyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_CraftingStationViewWidget.OnCraftingStationViewCloseSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_CraftingStationViewWidget::OnCraftingStationViewCloseSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CraftingStationViewWidget.OnCraftingStationViewCloseSignature__DelegateSignature");

	UDH_CraftingStationViewWidget_OnCraftingStationViewCloseSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CraftingStationViewWidget.OnCloseButtonClicked
// (Final, Native, Private)

void UDH_CraftingStationViewWidget::OnCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CraftingStationViewWidget.OnCloseButtonClicked");

	UDH_CraftingStationViewWidget_OnCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CustomGameSettingWidget.OnSliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CustomGameSettingWidget::OnSliderValueChanged(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CustomGameSettingWidget.OnSliderValueChanged");

	UDH_CustomGameSettingWidget_OnSliderValueChanged_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CustomGameSettingWidget.OnCheckboxStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           IsChecked                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CustomGameSettingWidget::OnCheckboxStateChanged(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CustomGameSettingWidget.OnCheckboxStateChanged");

	UDH_CustomGameSettingWidget_OnCheckboxStateChanged_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_CustomGameSettingWidget.GetSettingTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_CustomGameSettingWidget::GetSettingTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_CustomGameSettingWidget.GetSettingTooltip");

	UDH_CustomGameSettingWidget_GetSettingTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction DreadHungerUI.DH_CustomGameSettingWidget.CustomGameSettingChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// ECustomGameSetting             Setting                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CustomGameSettingWidget::CustomGameSettingChangedSignature__DelegateSignature(ECustomGameSetting Setting, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_CustomGameSettingWidget.CustomGameSettingChangedSignature__DelegateSignature");

	UDH_CustomGameSettingWidget_CustomGameSettingChangedSignature__DelegateSignature_Params params;
	params.Setting = Setting;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DaysUntilBlizzardWidget.UpdateAttributeView
// (Final, Native, Private)

void UDH_DaysUntilBlizzardWidget::UpdateAttributeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DaysUntilBlizzardWidget.UpdateAttributeView");

	UDH_DaysUntilBlizzardWidget_UpdateAttributeView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DaysUntilBlizzardWidget.OnDaysUntilBlizzardChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameState*           InGameState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DaysUntilBlizzardWidget::OnDaysUntilBlizzardChanged(class ADH_GameState* InGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DaysUntilBlizzardWidget.OnDaysUntilBlizzardChanged");

	UDH_DaysUntilBlizzardWidget_OnDaysUntilBlizzardChanged_Params params;
	params.InGameState = InGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DaysUntilBlizzardWidget.GetShowAnimation
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UDH_DaysUntilBlizzardWidget::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DaysUntilBlizzardWidget.GetShowAnimation");

	UDH_DaysUntilBlizzardWidget_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_DebugCheckBoxWidget.OnCheckStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DebugCheckBoxWidget::OnCheckStateChanged(bool bInChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DebugCheckBoxWidget.OnCheckStateChanged");

	UDH_DebugCheckBoxWidget_OnCheckStateChanged_Params params;
	params.bInChecked = bInChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DebugTextInputWidget.OnTextInputCommitted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       InCommitMethod                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DebugTextInputWidget::OnTextInputCommitted(const struct FText& InText, TEnumAsByte<ETextCommit> InCommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DebugTextInputWidget.OnTextInputCommitted");

	UDH_DebugTextInputWidget_OnTextInputCommitted_Params params;
	params.InText = InText;
	params.InCommitMethod = InCommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DebugWidgetsListWidget.OnAddDebugWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DebugWidgetsListWidget::OnAddDebugWidget(class UUserWidget* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DebugWidgetsListWidget.OnAddDebugWidget");

	UDH_DebugWidgetsListWidget_OnAddDebugWidget_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.SetStackCount
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventorySlotContents  InSlotContents                 (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_DraggedInventoryWidget::SetStackCount(const struct FInventorySlotContents& InSlotContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.SetStackCount");

	UDH_DraggedInventoryWidget_SetStackCount_Params params;
	params.InSlotContents = InSlotContents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.SetIcon
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor            InColorAndOpacity              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_DraggedInventoryWidget::SetIcon(const struct FSlateBrush& InBrush, const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.SetIcon");

	UDH_DraggedInventoryWidget_SetIcon_Params params;
	params.InBrush = InBrush;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.OnTransactingInventoryChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryTransactionComponent* InInventoryTransactionComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_DraggedInventoryWidget::OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InInventoryTransactionComponent, class UDH_InventoryManager* InInventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.OnTransactingInventoryChanged");

	UDH_DraggedInventoryWidget_OnTransactingInventoryChanged_Params params;
	params.InInventoryTransactionComponent = InInventoryTransactionComponent;
	params.InInventoryManager = InInventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.OnSingleDropModifierKeyHeldChanged
// (Final, Native, Private)
// Parameters:
// class UDH_MouseDragModifiersComponent* InMouseDragModifiersComponent  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_DraggedInventoryWidget::OnSingleDropModifierKeyHeldChanged(class UDH_MouseDragModifiersComponent* InMouseDragModifiersComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.OnSingleDropModifierKeyHeldChanged");

	UDH_DraggedInventoryWidget_OnSingleDropModifierKeyHeldChanged_Params params;
	params.InMouseDragModifiersComponent = InMouseDragModifiersComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.OnShowHotbarChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DraggedInventoryWidget::OnShowHotbarChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.OnShowHotbarChanged");

	UDH_DraggedInventoryWidget_OnShowHotbarChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.OnHumanCharacterDied
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DraggedInventoryWidget::OnHumanCharacterDied(class ADH_HumanCharacter* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.OnHumanCharacterDied");

	UDH_DraggedInventoryWidget_OnHumanCharacterDied_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.OnDropAnimationFinished
// (Final, Native, Private)

void UDH_DraggedInventoryWidget::OnDropAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.OnDropAnimationFinished");

	UDH_DraggedInventoryWidget_OnDropAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.HideDropResultNotification
// (Final, Native, Public, BlueprintCallable)

void UDH_DraggedInventoryWidget::HideDropResultNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.HideDropResultNotification");

	UDH_DraggedInventoryWidget_HideDropResultNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.GetSingleDropKeyHeld
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_DraggedInventoryWidget::GetSingleDropKeyHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.GetSingleDropKeyHeld");

	UDH_DraggedInventoryWidget_GetSingleDropKeyHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_DraggedInventoryWidget.GetModifiedStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_DraggedInventoryWidget::GetModifiedStackCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DraggedInventoryWidget.GetModifiedStackCount");

	UDH_DraggedInventoryWidget_GetModifiedStackCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_DropZoneWidget.OnFinishedDropping
// (Final, Native, Private)
// Parameters:
// class UDH_DropZoneInventoryDropper* Dropper                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DropZoneWidget::OnFinishedDropping(class UDH_DropZoneInventoryDropper* Dropper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_DropZoneWidget.OnFinishedDropping");

	UDH_DropZoneWidget_OnFinishedDropping_Params params;
	params.Dropper = Dropper;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PreviewAvatarWidget.OnMeshAppliedToAvatar
// (Final, Native, Private)

void UDH_PreviewAvatarWidget::OnMeshAppliedToAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PreviewAvatarWidget.OnMeshAppliedToAvatar");

	UDH_PreviewAvatarWidget_OnMeshAppliedToAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PreviewAvatarWidget.OnHideMeshLoadingAnimationFinished
// (Final, Native, Private)

void UDH_PreviewAvatarWidget::OnHideMeshLoadingAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PreviewAvatarWidget.OnHideMeshLoadingAnimationFinished");

	UDH_PreviewAvatarWidget_OnHideMeshLoadingAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PreviewAvatarWidget.OnAvatarCreated
// (Native, Protected)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_CosmeticPreviewAvatar* Avatar                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_PreviewAvatarWidget::OnAvatarCreated(class ADH_PlayerController* PlayerController, class ADH_CosmeticPreviewAvatar* Avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PreviewAvatarWidget.OnAvatarCreated");

	UDH_PreviewAvatarWidget_OnAvatarCreated_Params params;
	params.PlayerController = PlayerController;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EntitlementsShopWidget.OnReceivedEntitlementPrices
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_PriceDataWrapper    PriceData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_EntitlementsShopWidget::OnReceivedEntitlementPrices(const struct FDH_PriceDataWrapper& PriceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EntitlementsShopWidget.OnReceivedEntitlementPrices");

	UDH_EntitlementsShopWidget_OnReceivedEntitlementPrices_Params params;
	params.PriceData = PriceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EntitlementsShopWidget.OnPreviewCosmeticsChanged
// (Native, Protected)
// Parameters:
// TArray<class UDH_CosmeticItemBase*> ItemList                       (ConstParm, Parm, ZeroConstructor)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_EntitlementsShopWidget::OnPreviewCosmeticsChanged(TArray<class UDH_CosmeticItemBase*> ItemList, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EntitlementsShopWidget.OnPreviewCosmeticsChanged");

	UDH_EntitlementsShopWidget_OnPreviewCosmeticsChanged_Params params;
	params.ItemList = ItemList;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EntitlementsShopWidget.OnMerchantInteractedWith
// (Final, Native, Private)
// Parameters:
// class ADH_Merchant*            Merchant                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_EntitlementsShopWidget::OnMerchantInteractedWith(class ADH_Merchant* Merchant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EntitlementsShopWidget.OnMerchantInteractedWith");

	UDH_EntitlementsShopWidget_OnMerchantInteractedWith_Params params;
	params.Merchant = Merchant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EntitlementsShopWidget.OnItemPurchased
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class FString>          ItemCodes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_EntitlementsShopWidget::OnItemPurchased(TArray<class FString> ItemCodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EntitlementsShopWidget.OnItemPurchased");

	UDH_EntitlementsShopWidget_OnItemPurchased_Params params;
	params.ItemCodes = ItemCodes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EntitlementsShopWidget.OnCheckoutButtonClicked
// (Final, Native, Private)

void UDH_EntitlementsShopWidget::OnCheckoutButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EntitlementsShopWidget.OnCheckoutButtonClicked");

	UDH_EntitlementsShopWidget_OnCheckoutButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.Show
// (Final, Native, Public, BlueprintCallable)

void UDH_ErrorMessageViewWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.Show");

	UDH_ErrorMessageViewWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.SetTitleText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm)

void UDH_ErrorMessageViewWidget::SetTitleText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.SetTitleText");

	UDH_ErrorMessageViewWidget_SetTitleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.SetTitleBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ErrorMessageViewWidget::SetTitleBackgroundColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.SetTitleBackgroundColor");

	UDH_ErrorMessageViewWidget_SetTitleBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.SetBodyBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ErrorMessageViewWidget::SetBodyBackgroundColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.SetBodyBackgroundColor");

	UDH_ErrorMessageViewWidget_SetBodyBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.OnHidden
// (Final, Native, Protected, BlueprintCallable)

void UDH_ErrorMessageViewWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.OnHidden");

	UDH_ErrorMessageViewWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_ErrorMessageViewWidget.OnErrorMessageViewHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_ErrorMessageViewWidget::OnErrorMessageViewHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_ErrorMessageViewWidget.OnErrorMessageViewHiddenSignature__DelegateSignature");

	UDH_ErrorMessageViewWidget_OnErrorMessageViewHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.Hide
// (Final, Native, Public, BlueprintCallable)

void UDH_ErrorMessageViewWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.Hide");

	UDH_ErrorMessageViewWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_ErrorMessageViewWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnShow");

	UDH_ErrorMessageViewWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetTitleText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ErrorMessageViewWidget::BP_OnSetTitleText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetTitleText");

	UDH_ErrorMessageViewWidget_BP_OnSetTitleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetTitleBackgroundColor
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_ErrorMessageViewWidget::BP_OnSetTitleBackgroundColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetTitleBackgroundColor");

	UDH_ErrorMessageViewWidget_BP_OnSetTitleBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetBodyBackgroundColor
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_ErrorMessageViewWidget::BP_OnSetBodyBackgroundColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetBodyBackgroundColor");

	UDH_ErrorMessageViewWidget_BP_OnSetBodyBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnHide
// (Native, Event, Protected, BlueprintEvent)

void UDH_ErrorMessageViewWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnHide");

	UDH_ErrorMessageViewWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorsWidget.OnVivoxErrorsUpdated
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_VivoxError>  Errors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_ErrorsWidget::OnVivoxErrorsUpdated(TArray<struct FDH_VivoxError> Errors)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorsWidget.OnVivoxErrorsUpdated");

	UDH_ErrorsWidget_OnVivoxErrorsUpdated_Params params;
	params.Errors = Errors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorsWidget.OnOnlineErrorsUpdated
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_OnlineError> Errors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_ErrorsWidget::OnOnlineErrorsUpdated(TArray<struct FDH_OnlineError> Errors)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorsWidget.OnOnlineErrorsUpdated");

	UDH_ErrorsWidget_OnOnlineErrorsUpdated_Params params;
	params.Errors = Errors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorsWidget.OnMouseCursorVisibilityChanged
// (Final, Native, Private)
// Parameters:
// bool                           bCursorVisible                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ErrorsWidget::OnMouseCursorVisibilityChanged(bool bCursorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorsWidget.OnMouseCursorVisibilityChanged");

	UDH_ErrorsWidget_OnMouseCursorVisibilityChanged_Params params;
	params.bCursorVisible = bCursorVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorWidget.OnHidden
// (Final, Native, Protected, BlueprintCallable)

void UDH_ErrorWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorWidget.OnHidden");

	UDH_ErrorWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_ErrorWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorWidget.BP_OnShow");

	UDH_ErrorWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorWidget.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UDH_ErrorWidget::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorWidget.BP_OnItemsEmptied");

	UDH_ErrorWidget_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ErrorWidget.BP_OnHide
// (Native, Event, Protected, BlueprintEvent)

void UDH_ErrorWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ErrorWidget.BP_OnHide");

	UDH_ErrorWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.UpdateDisconnectButtonVisibility
// (Final, Native, Protected, BlueprintCallable)

void UDH_EscapeMenuQuitDialogWidget::UpdateDisconnectButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.UpdateDisconnectButtonVisibility");

	UDH_EscapeMenuQuitDialogWidget_UpdateDisconnectButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnRestartTutorialButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        Button                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_EscapeMenuQuitDialogWidget::OnRestartTutorialButtonClicked(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnRestartTutorialButtonClicked");

	UDH_EscapeMenuQuitDialogWidget_OnRestartTutorialButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnQuitToDesktopButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        Button                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_EscapeMenuQuitDialogWidget::OnQuitToDesktopButtonClicked(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnQuitToDesktopButtonClicked");

	UDH_EscapeMenuQuitDialogWidget_OnQuitToDesktopButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnOnlinePartyMembersChanged
// (Final, Native, Private)

void UDH_EscapeMenuQuitDialogWidget::OnOnlinePartyMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnOnlinePartyMembersChanged");

	UDH_EscapeMenuQuitDialogWidget_OnOnlinePartyMembersChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnLoginFinished
// (Final, Native, Private)

void UDH_EscapeMenuQuitDialogWidget::OnLoginFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnLoginFinished");

	UDH_EscapeMenuQuitDialogWidget_OnLoginFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_EscapeMenuQuitDialogWidget::OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature");

	UDH_EscapeMenuQuitDialogWidget_OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnDisconnectButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        Button                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_EscapeMenuQuitDialogWidget::OnDisconnectButtonClicked(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnDisconnectButtonClicked");

	UDH_EscapeMenuQuitDialogWidget_OnDisconnectButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuWidget.ShowDebugTester
// (Final, Native, Private)

void UDH_EscapeMenuWidget::ShowDebugTester()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuWidget.ShowDebugTester");

	UDH_EscapeMenuWidget_ShowDebugTester_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuWidget.OnSettingsButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_EscapeMenuWidget::OnSettingsButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuWidget.OnSettingsButtonClicked");

	UDH_EscapeMenuWidget_OnSettingsButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuWidget.OnQuitButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_EscapeMenuWidget::OnQuitButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuWidget.OnQuitButtonClicked");

	UDH_EscapeMenuWidget_OnQuitButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_EscapeMenuWidget.OnEscapeMenuQuitDialogWidgetHidden
// (Final, Native, Private)

void UDH_EscapeMenuWidget::OnEscapeMenuQuitDialogWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_EscapeMenuWidget.OnEscapeMenuQuitDialogWidgetHidden");

	UDH_EscapeMenuWidget_OnEscapeMenuQuitDialogWidgetHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.SetMapData
// (Final, Native, Public)
// Parameters:
// class UDH_MapData*             InMapData                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::SetMapData(class UDH_MapData* InMapData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.SetMapData");

	UDH_ExpeditionSettingsWidget_SetMapData_Params params;
	params.InMapData = InMapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnThrallValueChanged
// (Final, Native, Private)
// Parameters:
// ECustomGameSetting             Setting                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnThrallValueChanged(ECustomGameSetting Setting, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnThrallValueChanged");

	UDH_ExpeditionSettingsWidget_OnThrallValueChanged_Params params;
	params.Setting = Setting;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSettingsValueChanged
// (Final, Native, Private)
// Parameters:
// ECustomGameSetting             Setting                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnSettingsValueChanged(ECustomGameSetting Setting, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSettingsValueChanged");

	UDH_ExpeditionSettingsWidget_OnSettingsValueChanged_Params params;
	params.Setting = Setting;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSessionDestroyed
// (Final, Native, Private)

void UDH_ExpeditionSettingsWidget::OnSessionDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSessionDestroyed");

	UDH_ExpeditionSettingsWidget_OnSessionDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSandboxModeChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnSandboxModeChanged(bool bInChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSandboxModeChanged");

	UDH_ExpeditionSettingsWidget_OnSandboxModeChanged_Params params;
	params.bInChecked = bInChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnPublicCheckboxChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnPublicCheckboxChanged(bool bInChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnPublicCheckboxChanged");

	UDH_ExpeditionSettingsWidget_OnPublicCheckboxChanged_Params params;
	params.bInChecked = bInChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnDebugSetDesiredNumOfPlayers
// (Final, Native, Private)
// Parameters:
// int                            NumOfPlayers                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnDebugSetDesiredNumOfPlayers(int NumOfPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnDebugSetDesiredNumOfPlayers");

	UDH_ExpeditionSettingsWidget_OnDebugSetDesiredNumOfPlayers_Params params;
	params.NumOfPlayers = NumOfPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnDebugAdvertiseButtonClicked
// (Final, Native, Private)

void UDH_ExpeditionSettingsWidget::OnDebugAdvertiseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnDebugAdvertiseButtonClicked");

	UDH_ExpeditionSettingsWidget_OnDebugAdvertiseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnCrewCountSliderChanged
// (Final, Native, Private)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnCrewCountSliderChanged(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnCrewCountSliderChanged");

	UDH_ExpeditionSettingsWidget_OnCrewCountSliderChanged_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnCancelButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnCancelButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnCancelButtonClicked");

	UDH_ExpeditionSettingsWidget_OnCancelButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnAdvertiseButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_ExpeditionSettingsWidget::OnAdvertiseButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnAdvertiseButtonClicked");

	UDH_ExpeditionSettingsWidget_OnAdvertiseButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetThrallCountSetting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CustomGameSettingWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CustomGameSettingWidget* UDH_ExpeditionSettingsWidget::GetThrallCountSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetThrallCountSetting");

	UDH_ExpeditionSettingsWidget_GetThrallCountSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_MapData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_MapData* UDH_ExpeditionSettingsWidget::GetMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetMapData");

	UDH_ExpeditionSettingsWidget_GetMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetCrewCountSetting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CustomGameSettingWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CustomGameSettingWidget* UDH_ExpeditionSettingsWidget::GetCrewCountSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetCrewCountSetting");

	UDH_ExpeditionSettingsWidget_GetCrewCountSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_FindingLobbiesWidget.OnHidden
// (Final, Native, Protected, BlueprintCallable)

void UDH_FindingLobbiesWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FindingLobbiesWidget.OnHidden");

	UDH_FindingLobbiesWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FindingLobbiesWidget.OnAutoSearchChanged
// (Final, Native, Private)
// Parameters:
// bool                           bAutoSearching                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_FindingLobbiesWidget::OnAutoSearchChanged(bool bAutoSearching)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FindingLobbiesWidget.OnAutoSearchChanged");

	UDH_FindingLobbiesWidget_OnAutoSearchChanged_Params params;
	params.bAutoSearching = bAutoSearching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FindingLobbiesWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_FindingLobbiesWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FindingLobbiesWidget.Hide");

	UDH_FindingLobbiesWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FindingLobbiesWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_FindingLobbiesWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FindingLobbiesWidget.BP_OnShow");

	UDH_FindingLobbiesWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FindingLobbiesWidget.BP_OnHide
// (Native, Event, Protected, BlueprintEvent)

void UDH_FindingLobbiesWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FindingLobbiesWidget.BP_OnHide");

	UDH_FindingLobbiesWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FirstTimeCannibalWidget.OnFirstTimeCannibal
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_FirstTimeCannibalWidget::OnFirstTimeCannibal(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FirstTimeCannibalWidget.OnFirstTimeCannibal");

	UDH_FirstTimeCannibalWidget_OnFirstTimeCannibal_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FirstTimeCannibalWidget.GetShowAnimation
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UDH_FirstTimeCannibalWidget::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FirstTimeCannibalWidget.GetShowAnimation");

	UDH_FirstTimeCannibalWidget_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_FuelGaugeWidget.OnFailedToCraft
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingComponent*   InCraftingComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_CraftingRecipe*      InCraftingProject              (Parm, ZeroConstructor, IsPlainOldData)
// ECraftingFailReason            FailReason                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_FuelGaugeWidget::OnFailedToCraft(class UDH_CraftingComponent* InCraftingComp, class UDH_CraftingRecipe* InCraftingProject, ECraftingFailReason FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FuelGaugeWidget.OnFailedToCraft");

	UDH_FuelGaugeWidget_OnFailedToCraft_Params params;
	params.InCraftingComp = InCraftingComp;
	params.InCraftingProject = InCraftingProject;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FuelGaugeWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_HeatSourceComponent* InHeatSourceComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_FuelGaugeWidget::Init(class UDH_HeatSourceComponent* InHeatSourceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FuelGaugeWidget.Init");

	UDH_FuelGaugeWidget_Init_Params params;
	params.InHeatSourceComponent = InHeatSourceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_FuelGaugeWidget.GetHeatSourceComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_HeatSourceComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_HeatSourceComponent* UDH_FuelGaugeWidget::GetHeatSourceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FuelGaugeWidget.GetHeatSourceComponent");

	UDH_FuelGaugeWidget_GetHeatSourceComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_FuelGaugeWidget.GetBaseToolTipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_FuelGaugeWidget::GetBaseToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_FuelGaugeWidget.GetBaseToolTipWidget");

	UDH_FuelGaugeWidget_GetBaseToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_GameVictoryWidget.OnDisplayMatchEndMessage
// (Final, Native, Private)
// Parameters:
// EPlayerTeam                    InWinningTeam                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInWinner                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_GameVictoryWidget::OnDisplayMatchEndMessage(EPlayerTeam InWinningTeam, bool bInWinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GameVictoryWidget.OnDisplayMatchEndMessage");

	UDH_GameVictoryWidget_OnDisplayMatchEndMessage_Params params;
	params.InWinningTeam = InWinningTeam;
	params.bInWinner = bInWinner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GenericTooltipWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm)
// EDH_FontSizes                  InFontSize                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_GenericTooltipWidget::Init(const struct FText& InText, EDH_FontSizes InFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GenericTooltipWidget.Init");

	UDH_GenericTooltipWidget_Init_Params params;
	params.InText = InText;
	params.InFontSize = InFontSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GiveUpHintWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_GiveUpHintWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHintWidget.Show");

	UDH_GiveUpHintWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GiveUpHintWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_GiveUpHintWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHintWidget.Hide");

	UDH_GiveUpHintWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GiveUpHintWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_GiveUpHintWidget::BP_CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHintWidget.BP_CreateAnimationHandler");

	UDH_GiveUpHintWidget_BP_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_GiveUpHoldTimerWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHoldTimerWidget.Show");

	UDH_GiveUpHoldTimerWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.SetSuicideComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDH_SuicideComponent*    InSuicideComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_GiveUpHoldTimerWidget::SetSuicideComponent(class UDH_SuicideComponent* InSuicideComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHoldTimerWidget.SetSuicideComponent");

	UDH_GiveUpHoldTimerWidget_SetSuicideComponent_Params params;
	params.InSuicideComponent = InSuicideComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_GiveUpHoldTimerWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHoldTimerWidget.Hide");

	UDH_GiveUpHoldTimerWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.GetSuicideComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_SuicideComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_SuicideComponent* UDH_GiveUpHoldTimerWidget::GetSuicideComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHoldTimerWidget.GetSuicideComponent");

	UDH_GiveUpHoldTimerWidget_GetSuicideComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_GiveUpHoldTimerWidget::BP_CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GiveUpHoldTimerWidget.BP_CreateAnimationHandler");

	UDH_GiveUpHoldTimerWidget_BP_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellsChanged
// (Final, Native, Private)

void UDH_GrimoireSpellsPage::OnSpellsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellsChanged");

	UDH_GrimoireSpellsPage_OnSpellsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellDragEnd
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_GrimoireSpellsPage::OnSpellDragEnd(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellDragEnd");

	UDH_GrimoireSpellsPage_OnSpellDragEnd_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellDragBegin
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_GrimoireSpellsPage::OnSpellDragBegin(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellDragBegin");

	UDH_GrimoireSpellsPage_OnSpellDragBegin_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GrimoireWidget.ShowGrimoirePage
// (Final, Native, Public)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_GrimoireWidget::ShowGrimoirePage(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GrimoireWidget.ShowGrimoirePage");

	UDH_GrimoireWidget_ShowGrimoirePage_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_GrimoireWidget.HandleGrimoireClosure
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FKey                    InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UDH_GameViewportClient*  InViewportClient               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_GrimoireWidget::HandleGrimoireClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_GrimoireWidget.HandleGrimoireClosure");

	UDH_GrimoireWidget_HandleGrimoireClosure_Params params;
	params.InKey = InKey;
	params.InViewportClient = InViewportClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_HarvestingCraftingRecipeWidget.OnCraftingProjectAbortedChanged
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     InCraftingProject              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HarvestingCraftingRecipeWidget::OnCraftingProjectAbortedChanged(class UDH_CraftingProject* InCraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HarvestingCraftingRecipeWidget.OnCraftingProjectAbortedChanged");

	UDH_HarvestingCraftingRecipeWidget_OnCraftingProjectAbortedChanged_Params params;
	params.InCraftingProject = InCraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HarvestingCraftingRecipeWidget.OnCraftingComponentCurrentProjectsChanged
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingComponent*   InCraftingComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HarvestingCraftingRecipeWidget::OnCraftingComponentCurrentProjectsChanged(class UDH_CraftingComponent* InCraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HarvestingCraftingRecipeWidget.OnCraftingComponentCurrentProjectsChanged");

	UDH_HarvestingCraftingRecipeWidget_OnCraftingComponentCurrentProjectsChanged_Params params;
	params.InCraftingComponent = InCraftingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.OnSuccessfulTransfer
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             InSourceInventory              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryContainerWidget::OnSuccessfulTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InSourceInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.OnSuccessfulTransfer");

	UDH_InventoryContainerWidget_OnSuccessfulTransfer_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.InSourceInventory = InSourceInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.OnSuccessfulQuickTransfer
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             InTargetInventory              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryContainerWidget::OnSuccessfulQuickTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InTargetInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.OnSuccessfulQuickTransfer");

	UDH_InventoryContainerWidget_OnSuccessfulQuickTransfer_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.InTargetInventory = InTargetInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.OnInventoryManagerSlotCountChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SlotDelta                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryContainerWidget::OnInventoryManagerSlotCountChanged(class UDH_InventoryManager* InInventoryManager, int SlotDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.OnInventoryManagerSlotCountChanged");

	UDH_InventoryContainerWidget_OnInventoryManagerSlotCountChanged_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SlotDelta = SlotDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.OnInventoryManagerSlotContentsChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<int>                    ModifiedIndices                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_InventoryContainerWidget::OnInventoryManagerSlotContentsChanged(class UDH_InventoryManager* InInventoryManager, TArray<int> ModifiedIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.OnInventoryManagerSlotContentsChanged");

	UDH_InventoryContainerWidget_OnInventoryManagerSlotContentsChanged_Params params;
	params.InInventoryManager = InInventoryManager;
	params.ModifiedIndices = ModifiedIndices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.OnFailedQuickTransfer
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             InTargetInventory              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryContainerWidget::OnFailedQuickTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InTargetInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.OnFailedQuickTransfer");

	UDH_InventoryContainerWidget_OnFailedQuickTransfer_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.InTargetInventory = InTargetInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryContainerWidget::Init(class UDH_InventoryManager* InInventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.Init");

	UDH_InventoryContainerWidget_Init_Params params;
	params.InInventoryManager = InInventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventoryContainerWidget.GetInventoryManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryManager*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryManager* UDH_InventoryContainerWidget::GetInventoryManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventoryContainerWidget.GetInventoryManager");

	UDH_InventoryContainerWidget_GetInventoryManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_HotbarContainerWidget.LockSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLock                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            IgnoreIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarContainerWidget::LockSlots(bool bLock, int IgnoreIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarContainerWidget.LockSlots");

	UDH_HotbarContainerWidget_LockSlots_Params params;
	params.bLock = bLock;
	params.IgnoreIndex = IgnoreIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnTransactingInventoryChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryTransactionComponent* InInventoryTransactionComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventoryManager*    InInventoryManage              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InInventoryTransactionComponent, class UDH_InventoryManager* InInventoryManage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnTransactingInventoryChanged");

	UDH_HotbarVisibilityComponent_OnTransactingInventoryChanged_Params params;
	params.InInventoryTransactionComponent = InInventoryTransactionComponent;
	params.InInventoryManage = InInventoryManage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnSpiritWalkingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      InControlledHuman              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnSpiritWalkingChanged(class ADH_HumanCharacter* InControlledHuman)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnSpiritWalkingChanged");

	UDH_HotbarVisibilityComponent_OnSpiritWalkingChanged_Params params;
	params.InControlledHuman = InControlledHuman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnShowHotbarChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnShowHotbarChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnShowHotbarChanged");

	UDH_HotbarVisibilityComponent_OnShowHotbarChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnRestingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      InControlledHuman              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnRestingChanged(class ADH_HumanCharacter* InControlledHuman)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnRestingChanged");

	UDH_HotbarVisibilityComponent_OnRestingChanged_Params params;
	params.InControlledHuman = InControlledHuman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnInventoryContainerSlotContentsChanged
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             InInventoryContainerWidget     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnInventoryContainerSlotContentsChanged(class UUserWidget* InInventoryContainerWidget, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnInventoryContainerSlotContentsChanged");

	UDH_HotbarVisibilityComponent_OnInventoryContainerSlotContentsChanged_Params params;
	params.InInventoryContainerWidget = InInventoryContainerWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnHotbarSelectedIndexChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnHotbarSelectedIndexChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnHotbarSelectedIndexChanged");

	UDH_HotbarVisibilityComponent_OnHotbarSelectedIndexChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnCurrentInteractTargetChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnCurrentInteractTargetChanged");

	UDH_HotbarVisibilityComponent_OnCurrentInteractTargetChanged_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarVisibilityComponent::OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarVisibilityComponent.OnControlledHumanChanged");

	UDH_HotbarVisibilityComponent_OnControlledHumanChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotVisibilityComponent.SetAssociatedInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_Inventory*           NewAssociatedInventory         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarSlotVisibilityComponent::SetAssociatedInventory(class ADH_Inventory* NewAssociatedInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotVisibilityComponent.SetAssociatedInventory");

	UDH_HotbarSlotVisibilityComponent_SetAssociatedInventory_Params params;
	params.NewAssociatedInventory = NewAssociatedInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotVisibilityComponent.OnDurabilityChanged
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           Inventory                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarSlotVisibilityComponent::OnDurabilityChanged(class ADH_Inventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotVisibilityComponent.OnDurabilityChanged");

	UDH_HotbarSlotVisibilityComponent_OnDurabilityChanged_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.UpdateSlotContents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventorySlotContents  InSlotContents                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowAddedAnimationsToPlay    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::UpdateSlotContents(const struct FInventorySlotContents& InSlotContents, bool bAllowAddedAnimationsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.UpdateSlotContents");

	UDH_InventorySlotWidget_UpdateSlotContents_Params params;
	params.InSlotContents = InSlotContents;
	params.bAllowAddedAnimationsToPlay = bAllowAddedAnimationsToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRow                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.SetRow");

	UDH_InventorySlotWidget_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.SetPositionAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontal                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVerticalAlignment> InVertical                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::SetPositionAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontal, TEnumAsByte<EVerticalAlignment> InVertical)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.SetPositionAlignment");

	UDH_InventorySlotWidget_SetPositionAlignment_Params params;
	params.InHorizontal = InHorizontal;
	params.InVertical = InVertical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.SetOwningContainer
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventoryContainerWidget* InOwningContainer              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventorySlotWidget::SetOwningContainer(class UDH_InventoryContainerWidget* InOwningContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.SetOwningContainer");

	UDH_InventorySlotWidget_SetOwningContainer_Params params;
	params.InOwningContainer = InOwningContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumn                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.SetColumn");

	UDH_InventorySlotWidget_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.QuickLoot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLootAll                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::QuickLoot(bool bLootAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.QuickLoot");

	UDH_InventorySlotWidget_QuickLoot_Params params;
	params.bLootAll = bLootAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnUsesRemainingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           InInventory                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::OnUsesRemainingChanged(class ADH_Inventory* InInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnUsesRemainingChanged");

	UDH_InventorySlotWidget_OnUsesRemainingChanged_Params params;
	params.InInventory = InInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnStoredInventoryChanged
// (Native, Protected)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventorySlotWidget::OnStoredInventoryChanged(class UDH_InventoryManager* InInventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnStoredInventoryChanged");

	UDH_InventorySlotWidget_OnStoredInventoryChanged_Params params;
	params.InInventoryManager = InInventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnPlayerThrallChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::OnPlayerThrallChanged(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnPlayerThrallChanged");

	UDH_InventorySlotWidget_OnPlayerThrallChanged_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnItemPoisoned
// (Final, Native, Private)

void UDH_InventorySlotWidget::OnItemPoisoned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnItemPoisoned");

	UDH_InventorySlotWidget_OnItemPoisoned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotIndexChanged
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           InInventory                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::OnInventorySlotIndexChanged(class ADH_Inventory* InInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotIndexChanged");

	UDH_InventorySlotWidget_OnInventorySlotIndexChanged_Params params;
	params.InInventory = InInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotDragEnd
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             DraggedSlot                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventorySlotWidget::OnInventorySlotDragEnd(class UUserWidget* DraggedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotDragEnd");

	UDH_InventorySlotWidget_OnInventorySlotDragEnd_Params params;
	params.DraggedSlot = DraggedSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotDragBegin
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             DraggedSlot                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventorySlotWidget::OnInventorySlotDragBegin(class UUserWidget* DraggedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotDragBegin");

	UDH_InventorySlotWidget_OnInventorySlotDragBegin_Params params;
	params.DraggedSlot = DraggedSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnInventoryManagerSlotContentsChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<int>                    ModifiedSlots                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_InventorySlotWidget::OnInventoryManagerSlotContentsChanged(class UDH_InventoryManager* InInventoryManager, TArray<int> ModifiedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnInventoryManagerSlotContentsChanged");

	UDH_InventorySlotWidget_OnInventoryManagerSlotContentsChanged_Params params;
	params.InInventoryManager = InInventoryManager;
	params.ModifiedSlots = ModifiedSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnDurabilityChanged
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           InInventory                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::OnDurabilityChanged(class ADH_Inventory* InInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnDurabilityChanged");

	UDH_InventorySlotWidget_OnDurabilityChanged_Params params;
	params.InInventory = InInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnCurrentDragDropOperationDrop
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::OnCurrentDragDropOperationDrop(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnCurrentDragDropOperationDrop");

	UDH_InventorySlotWidget_OnCurrentDragDropOperationDrop_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnCurrentDragDropOperationCancelled
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::OnCurrentDragDropOperationCancelled(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnCurrentDragDropOperationCancelled");

	UDH_InventorySlotWidget_OnCurrentDragDropOperationCancelled_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.OnContainerInventoryChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    NewInventoryManager            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventoryManager*    PreviousInventoryManager       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventorySlotWidget::OnContainerInventoryChanged(class UDH_InventoryManager* NewInventoryManager, class UDH_InventoryManager* PreviousInventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.OnContainerInventoryChanged");

	UDH_InventorySlotWidget_OnContainerInventoryChanged_Params params;
	params.NewInventoryManager = NewInventoryManager;
	params.PreviousInventoryManager = PreviousInventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.Init
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InIndex                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotWidget::Init(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.Init");

	UDH_InventorySlotWidget_Init_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotWidget.HandleHitBoxImageMouseDown
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UDH_InventorySlotWidget::HandleHitBoxImageMouseDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.HandleHitBoxImageMouseDown");

	UDH_InventorySlotWidget_HandleHitBoxImageMouseDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventorySlotViewWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventorySlotViewWidget* UDH_InventorySlotWidget::GetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetView");

	UDH_InventorySlotWidget_GetView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetTooltipWidget
// (Final, Native, Private)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_InventorySlotWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetTooltipWidget");

	UDH_InventorySlotWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetSlotIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventorySlotWidget::GetSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetSlotIndex");

	UDH_InventorySlotWidget_GetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetRow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventorySlotWidget::GetRow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetRow");

	UDH_InventorySlotWidget_GetRow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetOwningContainer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryContainerWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryContainerWidget* UDH_InventorySlotWidget::GetOwningContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetOwningContainer");

	UDH_InventorySlotWidget_GetOwningContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetColumn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventorySlotWidget::GetColumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetColumn");

	UDH_InventorySlotWidget_GetColumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.GetAssociatedInventoryData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInventorySlotContents  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInventorySlotContents UDH_InventorySlotWidget::GetAssociatedInventoryData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.GetAssociatedInventoryData");

	UDH_InventorySlotWidget_GetAssociatedInventoryData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotWidget.CheckForArrival
// (Final, Native, Private)

void UDH_InventorySlotWidget::CheckForArrival()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotWidget.CheckForArrival");

	UDH_InventorySlotWidget_CheckForArrival_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.OnShouldShow
// (Final, Native, Private)

void UDH_HotbarSlotWidget::OnShouldShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.OnShouldShow");

	UDH_HotbarSlotWidget_OnShouldShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.OnShouldHide
// (Final, Native, Private)

void UDH_HotbarSlotWidget::OnShouldHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.OnShouldHide");

	UDH_HotbarSlotWidget_OnShouldHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.OnInteractFailed
// (Final, Native, Private)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HotbarSlotWidget::OnInteractFailed(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.OnInteractFailed");

	UDH_HotbarSlotWidget_OnInteractFailed_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.OnHotbarSelectedIndexChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarSlotWidget::OnHotbarSelectedIndexChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.OnHotbarSelectedIndexChanged");

	UDH_HotbarSlotWidget_OnHotbarSelectedIndexChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.OnFailedQuickTransfer
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             InTargetInventory              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HotbarSlotWidget::OnFailedQuickTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InTargetInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.OnFailedQuickTransfer");

	UDH_HotbarSlotWidget_OnFailedQuickTransfer_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.InTargetInventory = InTargetInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.OnCurrentInteractTargetChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HotbarSlotWidget::OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.OnCurrentInteractTargetChanged");

	UDH_HotbarSlotWidget_OnCurrentInteractTargetChanged_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarSlotWidget.GetSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_HotbarSlotWidget::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarSlotWidget.GetSize");

	UDH_HotbarSlotWidget_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_HotbarWidget.OnShowHotbarChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarWidget::OnShowHotbarChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarWidget.OnShowHotbarChanged");

	UDH_HotbarWidget_OnShowHotbarChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarWidget.OnShouldShow
// (Final, Native, Private)

void UDH_HotbarWidget::OnShouldShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarWidget.OnShouldShow");

	UDH_HotbarWidget_OnShouldShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarWidget.OnShouldHide
// (Final, Native, Private)

void UDH_HotbarWidget::OnShouldHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarWidget.OnShouldHide");

	UDH_HotbarWidget_OnShouldHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarWidget.OnPlayerControllerControlledHumanChanged");

	UDH_HotbarWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarWidget.OnInventoryContainerSlotContentsChanged
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             InInventoryContainerWidget     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarWidget::OnInventoryContainerSlotContentsChanged(class UUserWidget* InInventoryContainerWidget, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarWidget.OnInventoryContainerSlotContentsChanged");

	UDH_HotbarWidget_OnInventoryContainerSlotContentsChanged_Params params;
	params.InInventoryContainerWidget = InInventoryContainerWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HotbarWidget.OnHotbarSelectedIndexChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HotbarWidget::OnHotbarSelectedIndexChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HotbarWidget.OnHotbarSelectedIndexChanged");

	UDH_HotbarWidget_OnHotbarSelectedIndexChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HoverImageWidget.SetHoverBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InHoverBrush                   (Parm)

void UDH_HoverImageWidget::SetHoverBrush(const struct FSlateBrush& InHoverBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HoverImageWidget.SetHoverBrush");

	UDH_HoverImageWidget_SetHoverBrush_Params params;
	params.InHoverBrush = InHoverBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_HoverImageWidget.OnHoverImageHoveredSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_HoverImageWidget::OnHoverImageHoveredSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_HoverImageWidget.OnHoverImageHoveredSignature__DelegateSignature");

	UDH_HoverImageWidget_OnHoverImageHoveredSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetMinWidth
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InMinWidth                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HoverImageWidget::BP_OnSetMinWidth(float InMinWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetMinWidth");

	UDH_HoverImageWidget_BP_OnSetMinWidth_Params params;
	params.InMinWidth = InMinWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverOpacity
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InOpacity                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HoverImageWidget::BP_OnSetHoverOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverOpacity");

	UDH_HoverImageWidget_BP_OnSetHoverOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverImageSlotPadding
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMargin                 InPadding                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_HoverImageWidget::BP_OnSetHoverImageSlotPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverImageSlotPadding");

	UDH_HoverImageWidget_BP_OnSetHoverImageSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverBrush
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InHoverBrush                   (ConstParm, Parm)

void UDH_HoverImageWidget::BP_OnSetHoverBrush(const struct FSlateBrush& InHoverBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverBrush");

	UDH_HoverImageWidget_BP_OnSetHoverBrush_Params params;
	params.InHoverBrush = InHoverBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HUDWidget.OnPlayerControllerShowUIChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HUDWidget::OnPlayerControllerShowUIChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HUDWidget.OnPlayerControllerShowUIChanged");

	UDH_HUDWidget_OnPlayerControllerShowUIChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HUDWidget.OnCinematicModeChanged
// (Final, Native, Private)
// Parameters:
// bool                           bCinematicMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HUDWidget::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HUDWidget.OnCinematicModeChanged");

	UDH_HUDWidget_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HUDWidget.OnCheatManagerChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HUDWidget::OnCheatManagerChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HUDWidget.OnCheatManagerChanged");

	UDH_HUDWidget_OnCheatManagerChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HUDWidget.BP_OnWidgetInstanced
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget*             InstancedWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EDH_HUDLocationType            Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HUDWidget::BP_OnWidgetInstanced(class UUserWidget* InstancedWidget, EDH_HUDLocationType Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HUDWidget.BP_OnWidgetInstanced");

	UDH_HUDWidget_BP_OnWidgetInstanced_Params params;
	params.InstancedWidget = InstancedWidget;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HUDWidget.AddWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// EDH_HUDLocationType            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_HUDWidget::AddWidget(class UUserWidget* WidgetClass, EDH_HUDLocationType Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HUDWidget.AddWidget");

	UDH_HUDWidget_AddWidget_Params params;
	params.WidgetClass = WidgetClass;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HumanAttributesWidget.ShowHungerAndWarmth
// (Final, Native, Protected, BlueprintCallable)

void UDH_HumanAttributesWidget::ShowHungerAndWarmth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HumanAttributesWidget.ShowHungerAndWarmth");

	UDH_HumanAttributesWidget_ShowHungerAndWarmth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HumanAttributesWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_HumanAttributesWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HumanAttributesWidget.Show");

	UDH_HumanAttributesWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HumanAttributesWidget.HideHungerAndWarmth
// (Final, Native, Protected, BlueprintCallable)

void UDH_HumanAttributesWidget::HideHungerAndWarmth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HumanAttributesWidget.HideHungerAndWarmth");

	UDH_HumanAttributesWidget_HideHungerAndWarmth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HumanAttributesWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_HumanAttributesWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HumanAttributesWidget.Hide");

	UDH_HumanAttributesWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HumanAttributesWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// EDH_HumanAttributeAnimationHandlerType Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_HumanAttributesWidget::BP_CreateAnimationHandler(EDH_HumanAttributeAnimationHandlerType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HumanAttributesWidget.BP_CreateAnimationHandler");

	UDH_HumanAttributesWidget_BP_CreateAnimationHandler_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_HungerAttributeWidget.OnPlayerControllerPlayerStateChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HungerAttributeWidget::OnPlayerControllerPlayerStateChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HungerAttributeWidget.OnPlayerControllerPlayerStateChanged");

	UDH_HungerAttributeWidget_OnPlayerControllerPlayerStateChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HungerAttributeWidget.OnHungerIncreasingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HungerAttributeWidget::OnHungerIncreasingChanged(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HungerAttributeWidget.OnHungerIncreasingChanged");

	UDH_HungerAttributeWidget_OnHungerIncreasingChanged_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HungerAttributeWidget.OnControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HungerAttributeWidget::OnControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HungerAttributeWidget.OnControlledHumanChanged");

	UDH_HungerAttributeWidget_OnControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_HungerAttributeWidget.OnCannibalismChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HungerAttributeWidget::OnCannibalismChanged(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_HungerAttributeWidget.OnCannibalismChanged");

	UDH_HungerAttributeWidget_OnCannibalismChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.UpdateHint
// (Final, Native, Private)

void UDH_InteractHintWidget::UpdateHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.UpdateHint");

	UDH_InteractHintWidget_UpdateHint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.OnSelectedInventoryViewChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InteractHintWidget::OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.OnSelectedInventoryViewChanged");

	UDH_InteractHintWidget_OnSelectedInventoryViewChanged_Params params;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InteractHintWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.OnPlayerControllerControlledHumanChanged");

	UDH_InteractHintWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.OnMappingsChangedEvent
// (Final, Native, Private)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InteractHintWidget::OnMappingsChangedEvent(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.OnMappingsChangedEvent");

	UDH_InteractHintWidget_OnMappingsChangedEvent_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.OnInteractFailed
// (Final, Native, Private)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InteractHintWidget::OnInteractFailed(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.OnInteractFailed");

	UDH_InteractHintWidget_OnInteractFailed_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.OnCurrentInteractTargetChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InteractHintWidget::OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.OnCurrentInteractTargetChanged");

	UDH_InteractHintWidget_OnCurrentInteractTargetChanged_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InteractHintWidget.OnCurrentHelmsmanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_WarshipHelm*         WarshipHelm                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InteractHintWidget::OnCurrentHelmsmanChanged(class ADH_WarshipHelm* WarshipHelm)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InteractHintWidget.OnCurrentHelmsmanChanged");

	UDH_InteractHintWidget_OnCurrentHelmsmanChanged_Params params;
	params.WarshipHelm = WarshipHelm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.StopSuperCriticalAnimation
// (Final, Native, Public, BlueprintCallable)

void UDH_InventorySlotViewWidget::StopSuperCriticalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.StopSuperCriticalAnimation");

	UDH_InventorySlotViewWidget_StopSuperCriticalAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.StopCriticalAnimation
// (Final, Native, Public, BlueprintCallable)

void UDH_InventorySlotViewWidget::StopCriticalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.StopCriticalAnimation");

	UDH_InventorySlotViewWidget_StopCriticalAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.StartCriticalAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuperCritical                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::StartCriticalAnimation(bool bSuperCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.StartCriticalAnimation");

	UDH_InventorySlotViewWidget_StartCriticalAnimation_Params params;
	params.bSuperCritical = bSuperCritical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetStackCount
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventorySlotContents  SlotContents                   (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_InventorySlotViewWidget::SetStackCount(const struct FInventorySlotContents& SlotContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetStackCount");

	UDH_InventorySlotViewWidget_SetStackCount_Params params;
	params.SlotContents = SlotContents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetIconMaxSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIconMaxSize                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetIconMaxSize(bool bInIconMaxSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetIconMaxSize");

	UDH_InventorySlotViewWidget_SetIconMaxSize_Params params;
	params.bInIconMaxSize = bInIconMaxSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetIconColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InIconColor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetIconColor(const struct FLinearColor& InIconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetIconColor");

	UDH_InventorySlotViewWidget_SetIconColor_Params params;
	params.InIconColor = InIconColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetIcon");

	UDH_InventorySlotViewWidget_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillPct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FillPct                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetFillPct(float FillPct, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillPct");

	UDH_InventorySlotViewWidget_SetFillPct_Params params;
	params.FillPct = FillPct;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillFillColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InFillFillColor                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bInstant                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetFillFillColor(const struct FLinearColor& InFillFillColor, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillFillColor");

	UDH_InventorySlotViewWidget_SetFillFillColor_Params params;
	params.InFillFillColor = InFillFillColor;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillBaseColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InFillBaseColor                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bInstant                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetFillBaseColor(const struct FLinearColor& InFillBaseColor, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillBaseColor");

	UDH_InventorySlotViewWidget_SetFillBaseColor_Params params;
	params.InFillBaseColor = InFillBaseColor;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetBorderFillColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBorderFillColor              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bInstant                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetBorderFillColor(const struct FLinearColor& InBorderFillColor, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetBorderFillColor");

	UDH_InventorySlotViewWidget_SetBorderFillColor_Params params;
	params.InBorderFillColor = InBorderFillColor;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.SetBorderBaseColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBorderBaseColor              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bInstant                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::SetBorderBaseColor(const struct FLinearColor& InBorderBaseColor, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.SetBorderBaseColor");

	UDH_InventorySlotViewWidget_SetBorderBaseColor_Params params;
	params.InBorderBaseColor = InBorderBaseColor;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.Reset
// (Final, Native, Public, BlueprintCallable)

void UDH_InventorySlotViewWidget::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.Reset");

	UDH_InventorySlotViewWidget_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.PlayDenyAnimation
// (Final, Native, Public, BlueprintCallable)

void UDH_InventorySlotViewWidget::PlayDenyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.PlayDenyAnimation");

	UDH_InventorySlotViewWidget_PlayDenyAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.PlayAddedAnimation
// (Final, Native, Public, BlueprintCallable)

void UDH_InventorySlotViewWidget::PlayAddedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.PlayAddedAnimation");

	UDH_InventorySlotViewWidget_PlayAddedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.OnMaxStackWarnAnimationFinished
// (Final, Native, Private)

void UDH_InventorySlotViewWidget::OnMaxStackWarnAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.OnMaxStackWarnAnimationFinished");

	UDH_InventorySlotViewWidget_OnMaxStackWarnAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.GetSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventorySlotViewWidget::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.GetSize");

	UDH_InventorySlotViewWidget_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.GetIconColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UDH_InventorySlotViewWidget::GetIconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.GetIconColor");

	UDH_InventorySlotViewWidget_GetIconColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.GetIconBrush
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UDH_InventorySlotViewWidget::GetIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.GetIconBrush");

	UDH_InventorySlotViewWidget_GetIconBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.GetDesiredFillPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_InventorySlotViewWidget::GetDesiredFillPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.GetDesiredFillPct");

	UDH_InventorySlotViewWidget_GetDesiredFillPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStopSuperCriticalAnimation
// (Event, Protected, BlueprintEvent)

void UDH_InventorySlotViewWidget::BP_OnStopSuperCriticalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStopSuperCriticalAnimation");

	UDH_InventorySlotViewWidget_BP_OnStopSuperCriticalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStopCriticalAnimation
// (Event, Protected, BlueprintEvent)

void UDH_InventorySlotViewWidget::BP_OnStopCriticalAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStopCriticalAnimation");

	UDH_InventorySlotViewWidget_BP_OnStopCriticalAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStartCriticalAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSuperCritical                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnStartCriticalAnimation(bool bSuperCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStartCriticalAnimation");

	UDH_InventorySlotViewWidget_BP_OnStartCriticalAnimation_Params params;
	params.bSuperCritical = bSuperCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetSize
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InSize                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnSetSize(float InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetSize");

	UDH_InventorySlotViewWidget_BP_OnSetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIconScale
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               InIconScale                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnSetIconScale(const struct FVector2D& InIconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIconScale");

	UDH_InventorySlotViewWidget_BP_OnSetIconScale_Params params;
	params.InIconScale = InIconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIconColor
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor            InIconColor                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnSetIconColor(const struct FLinearColor& InIconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIconColor");

	UDH_InventorySlotViewWidget_BP_OnSetIconColor_Params params;
	params.InIconColor = InIconColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnSetIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIcon");

	UDH_InventorySlotViewWidget_BP_OnSetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnPlayDenyAnimation
// (Event, Protected, BlueprintEvent)

void UDH_InventorySlotViewWidget::BP_OnPlayDenyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnPlayDenyAnimation");

	UDH_InventorySlotViewWidget_BP_OnPlayDenyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnPlayAddedAnimation
// (Event, Protected, BlueprintEvent)

void UDH_InventorySlotViewWidget::BP_OnPlayAddedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnPlayAddedAnimation");

	UDH_InventorySlotViewWidget_BP_OnPlayAddedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitFillImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InFillMID                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnInitFillImage(class UMaterialInstanceDynamic* InFillMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitFillImage");

	UDH_InventorySlotViewWidget_BP_OnInitFillImage_Params params;
	params.InFillMID = InFillMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitDenyMaskImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*              DenyMaskTexture                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnInitDenyMaskImage(class UTexture2D* DenyMaskTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitDenyMaskImage");

	UDH_InventorySlotViewWidget_BP_OnInitDenyMaskImage_Params params;
	params.DenyMaskTexture = DenyMaskTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitBorderImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InBorderMID                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventorySlotViewWidget::BP_OnInitBorderImage(class UMaterialInstanceDynamic* InBorderMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitBorderImage");

	UDH_InventorySlotViewWidget_BP_OnInitBorderImage_Params params;
	params.InBorderMID = InBorderMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoinExpeditionButtonWidget.OnLobbiesRestrictionWidgetRestrictedChanged
// (Final, Native, Private)
// Parameters:
// bool                           bRestricted                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_JoinExpeditionButtonWidget::OnLobbiesRestrictionWidgetRestrictedChanged(bool bRestricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoinExpeditionButtonWidget.OnLobbiesRestrictionWidgetRestrictedChanged");

	UDH_JoinExpeditionButtonWidget_OnLobbiesRestrictionWidgetRestrictedChanged_Params params;
	params.bRestricted = bRestricted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_JoinExpeditionButtonWidget.OnJoinExpeditionButtonWidgetClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_JoinExpeditionButtonWidget::OnJoinExpeditionButtonWidgetClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_JoinExpeditionButtonWidget.OnJoinExpeditionButtonWidgetClicked__DelegateSignature");

	UDH_JoinExpeditionButtonWidget_OnJoinExpeditionButtonWidgetClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoinExpeditionButtonWidget.OnBaseButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_JoinExpeditionButtonWidget::OnBaseButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoinExpeditionButtonWidget.OnBaseButtonClicked");

	UDH_JoinExpeditionButtonWidget_OnBaseButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoinGameOverlayWidget.OnOnlyMeButtonClicked
// (Final, Native, Private)

void UDH_JoinGameOverlayWidget::OnOnlyMeButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoinGameOverlayWidget.OnOnlyMeButtonClicked");

	UDH_JoinGameOverlayWidget_OnOnlyMeButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoinGameOverlayWidget.OnEveryoneButtonClicked
// (Final, Native, Private)

void UDH_JoinGameOverlayWidget::OnEveryoneButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoinGameOverlayWidget.OnEveryoneButtonClicked");

	UDH_JoinGameOverlayWidget_OnEveryoneButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoiningOverlayWidget.ShowAbortButton
// (Final, Native, Private)

void UDH_JoiningOverlayWidget::ShowAbortButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoiningOverlayWidget.ShowAbortButton");

	UDH_JoiningOverlayWidget_ShowAbortButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoiningOverlayWidget.OnPendingNetGameConnectionCreated
// (Final, Native, Private)
// Parameters:
// class UPendingNetGame*         PendingNetGame                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_JoiningOverlayWidget::OnPendingNetGameConnectionCreated(class UPendingNetGame* PendingNetGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoiningOverlayWidget.OnPendingNetGameConnectionCreated");

	UDH_JoiningOverlayWidget_OnPendingNetGameConnectionCreated_Params params;
	params.PendingNetGame = PendingNetGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineSessionJoinSessionComplete
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_JoiningOverlayWidget::OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineSessionJoinSessionComplete");

	UDH_JoiningOverlayWidget_OnOnlineSessionJoinSessionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineSessionBeginJoin
// (Final, Native, Private)

void UDH_JoiningOverlayWidget::OnOnlineSessionBeginJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineSessionBeginJoin");

	UDH_JoiningOverlayWidget_OnOnlineSessionBeginJoin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineErrorsUpdated
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_OnlineError> InErrors                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_JoiningOverlayWidget::OnOnlineErrorsUpdated(TArray<struct FDH_OnlineError> InErrors)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineErrorsUpdated");

	UDH_JoiningOverlayWidget_OnOnlineErrorsUpdated_Params params;
	params.InErrors = InErrors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JoiningOverlayWidget.Cancel
// (Final, Native, Private)

void UDH_JoiningOverlayWidget::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JoiningOverlayWidget.Cancel");

	UDH_JoiningOverlayWidget_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JournalTopicButtonViewWidget.OnBaseButtonClicked
// (Final, Native, Private)

void UDH_JournalTopicButtonViewWidget::OnBaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JournalTopicButtonViewWidget.OnBaseButtonClicked");

	UDH_JournalTopicButtonViewWidget_OnBaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_JournalTopicButtonViewWidget.JournalTopicButtonViewWidgetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_JournalTopicButtonViewWidget::JournalTopicButtonViewWidgetSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_JournalTopicButtonViewWidget.JournalTopicButtonViewWidgetSignature__DelegateSignature");

	UDH_JournalTopicButtonViewWidget_JournalTopicButtonViewWidgetSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JournalTopicButtonWidget.OnViewClicked
// (Native, Protected)

void UDH_JournalTopicButtonWidget::OnViewClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JournalTopicButtonWidget.OnViewClicked");

	UDH_JournalTopicButtonWidget_OnViewClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JournalWidget.ShowJournalPage
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_JournalWidget::ShowJournalPage(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JournalWidget.ShowJournalPage");

	UDH_JournalWidget_ShowJournalPage_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JournalWidget.OnJournalToggled
// (Final, Native, Private)

void UDH_JournalWidget::OnJournalToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JournalWidget.OnJournalToggled");

	UDH_JournalWidget_OnJournalToggled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_JournalWidget.HandleJournalClosure
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FKey                    InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UDH_GameViewportClient*  InViewportClient               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_JournalWidget::HandleJournalClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_JournalWidget.HandleJournalClosure");

	UDH_JournalWidget_HandleJournalClosure_Params params;
	params.InKey = InKey;
	params.InViewportClient = InViewportClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_KeybindHintWidget.SetInteractionMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDH_KeybindInteractionMessage InInteractionMessage           (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_KeybindHintWidget::SetInteractionMessage(const struct FDH_KeybindInteractionMessage& InInteractionMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_KeybindHintWidget.SetInteractionMessage");

	UDH_KeybindHintWidget_SetInteractionMessage_Params params;
	params.InInteractionMessage = InInteractionMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_KickedOverlayWidget.OnKicked
// (Final, Native, Private)

void UDH_KickedOverlayWidget::OnKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_KickedOverlayWidget.OnKicked");

	UDH_KickedOverlayWidget_OnKicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LanguageDropDown.OnDropDownSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                  SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LanguageDropDown::OnDropDownSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LanguageDropDown.OnDropDownSelectionChanged");

	UDH_LanguageDropDown_OnDropDownSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.SetMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_MapData*             InMission                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LaunchExpeditionButtonWidget::SetMission(class UDH_MapData* InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.SetMission");

	UDH_LaunchExpeditionButtonWidget_SetMission_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_LaunchExpeditionButtonWidget::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.OnOnlineSessionUpdateComplete");

	UDH_LaunchExpeditionButtonWidget_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.LaunchExpedition
// (Final, Native, Protected, BlueprintCallable, Const)

void UDH_LaunchExpeditionButtonWidget::LaunchExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.LaunchExpedition");

	UDH_LaunchExpeditionButtonWidget_LaunchExpedition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.BP_SetEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LaunchExpeditionButtonWidget::BP_SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.BP_SetEnabled");

	UDH_LaunchExpeditionButtonWidget_BP_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LaunchTutorialButtonWidget.OnClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LaunchTutorialButtonWidget::OnClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LaunchTutorialButtonWidget.OnClicked");

	UDH_LaunchTutorialButtonWidget_OnClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoadingScreenWidget.ShowLoadingScreen
// (Final, Native, Private)
// Parameters:
// TScriptInterface<class UDH_LoadingScreenInterface> Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoadingScreenWidget::ShowLoadingScreen(const TScriptInterface<class UDH_LoadingScreenInterface>& Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoadingScreenWidget.ShowLoadingScreen");

	UDH_LoadingScreenWidget_ShowLoadingScreen_Params params;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoadingScreenWidget.Show
// (Native, Event, Protected, BlueprintEvent)

void UDH_LoadingScreenWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoadingScreenWidget.Show");

	UDH_LoadingScreenWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoadingScreenWidget.OnFinishedShow
// (Final, Native, Protected, BlueprintCallable)

void UDH_LoadingScreenWidget::OnFinishedShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoadingScreenWidget.OnFinishedShow");

	UDH_LoadingScreenWidget_OnFinishedShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RestrictionWidget.UpdateRestrictionText
// (Final, Native, Private)

void UDH_RestrictionWidget::UpdateRestrictionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RestrictionWidget.UpdateRestrictionText");

	UDH_RestrictionWidget_UpdateRestrictionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserOverlayWidget.BP_OnHandledEscape
// (Event, Protected, BlueprintEvent)

void UDH_LobbyBrowserOverlayWidget::BP_OnHandledEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserOverlayWidget.BP_OnHandledEscape");

	UDH_LobbyBrowserOverlayWidget_BP_OnHandledEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSetSelectedLanguageCodes
// (Final, Native, Private)

void UDH_LobbyBrowserWidget::OnSetSelectedLanguageCodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnSetSelectedLanguageCodes");

	UDH_LobbyBrowserWidget_OnSetSelectedLanguageCodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchForLobbiesStarted
// (Final, Native, Private)

void UDH_LobbyBrowserWidget::OnSearchForLobbiesStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchForLobbiesStarted");

	UDH_LobbyBrowserWidget_OnSearchForLobbiesStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchForLobbiesCompleteDelegate
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDH_OnlineSearchResult> SearchResults                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_LobbyBrowserWidget::OnSearchForLobbiesCompleteDelegate(bool bWasSuccessful, TArray<struct FDH_OnlineSearchResult> SearchResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchForLobbiesCompleteDelegate");

	UDH_LobbyBrowserWidget_OnSearchForLobbiesCompleteDelegate_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.SearchResults = SearchResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbyBrowserWidget::OnSearchButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchButtonClicked");

	UDH_LobbyBrowserWidget_OnSearchButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnLaunchExpeditionButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbyBrowserWidget::OnLaunchExpeditionButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnLaunchExpeditionButtonClicked");

	UDH_LobbyBrowserWidget_OnLaunchExpeditionButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnFailedToBeginToSearchForLobbies
// (Final, Native, Private)

void UDH_LobbyBrowserWidget::OnFailedToBeginToSearchForLobbies()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnFailedToBeginToSearchForLobbies");

	UDH_LobbyBrowserWidget_OnFailedToBeginToSearchForLobbies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnCloseButtonWidgetClicked
// (Final, Native, Private)

void UDH_LobbyBrowserWidget::OnCloseButtonWidgetClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnCloseButtonWidgetClicked");

	UDH_LobbyBrowserWidget_OnCloseButtonWidgetClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.OnAutoRefreshCheckBoxChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyBrowserWidget::OnAutoRefreshCheckBoxChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.OnAutoRefreshCheckBoxChanged");

	UDH_LobbyBrowserWidget_OnAutoRefreshCheckBoxChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.BP_OnCloseButtonClicked
// (Event, Protected, BlueprintEvent)

void UDH_LobbyBrowserWidget::BP_OnCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.BP_OnCloseButtonClicked");

	UDH_LobbyBrowserWidget_BP_OnCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.AddAutoRefreshTimer
// (Final, Native, Private)

void UDH_LobbyBrowserWidget::AddAutoRefreshTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.AddAutoRefreshTimer");

	UDH_LobbyBrowserWidget_AddAutoRefreshTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyBrowserWidget.AddAutoRefresh
// (Final, Native, Private)

void UDH_LobbyBrowserWidget::AddAutoRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyBrowserWidget.AddAutoRefresh");

	UDH_LobbyBrowserWidget_AddAutoRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerRoleChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         InChangedPlayer                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyInfoWidget::OnPlayerRoleChanged(class ADH_PlayerState* InChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerRoleChanged");

	UDH_LobbyInfoWidget_OnPlayerRoleChanged_Params params;
	params.InChangedPlayer = InChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerRemovedFromGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         RemovedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyInfoWidget::OnPlayerRemovedFromGame(class ADH_PlayerState* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerRemovedFromGame");

	UDH_LobbyInfoWidget_OnPlayerRemovedFromGame_Params params;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyInfoWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerControllerControlledHumanChanged");

	UDH_LobbyInfoWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyInfoWidget.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_LobbyInfoWidget::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyInfoWidget.OnOnlineSessionUpdateComplete");

	UDH_LobbyInfoWidget_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyInfoWidget.OnLobbyPlayerOnShipChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyInfoWidget::OnLobbyPlayerOnShipChanged(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyInfoWidget.OnLobbyPlayerOnShipChanged");

	UDH_LobbyInfoWidget_OnLobbyPlayerOnShipChanged_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnViewLastExpeditionButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        Button                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbyMissionMapWidget::OnViewLastExpeditionButtonClicked(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnViewLastExpeditionButtonClicked");

	UDH_LobbyMissionMapWidget_OnViewLastExpeditionButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnReverseShowNodesAnimationFinished
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnReverseShowNodesAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnReverseShowNodesAnimationFinished");

	UDH_LobbyMissionMapWidget_OnReverseShowNodesAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnOnlineSessionUpdateComplete");

	UDH_LobbyMissionMapWidget_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnOnlinePartyMembersChanged
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnOnlinePartyMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnOnlinePartyMembersChanged");

	UDH_LobbyMissionMapWidget_OnOnlinePartyMembersChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnNodeClicked
// (Final, Native, Private)
// Parameters:
// class UDH_LobbyMissionSelectionControlWidget* InNode                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbyMissionMapWidget::OnNodeClicked(class UDH_LobbyMissionSelectionControlWidget* InNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnNodeClicked");

	UDH_LobbyMissionMapWidget_OnNodeClicked_Params params;
	params.InNode = InNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnMissionDetailsWidgetBeginShow
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnMissionDetailsWidgetBeginShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnMissionDetailsWidgetBeginShow");

	UDH_LobbyMissionMapWidget_OnMissionDetailsWidgetBeginShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnMissionDetailsWidgetBeginHide
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnMissionDetailsWidgetBeginHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnMissionDetailsWidgetBeginHide");

	UDH_LobbyMissionMapWidget_OnMissionDetailsWidgetBeginHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnFadeOutAnimationFinished
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnFadeOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnFadeOutAnimationFinished");

	UDH_LobbyMissionMapWidget_OnFadeOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnDesiredAutoSearchForLobbies
// (Final, Native, Private)
// Parameters:
// bool                           bDesired                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyMissionMapWidget::OnDesiredAutoSearchForLobbies(bool bDesired)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnDesiredAutoSearchForLobbies");

	UDH_LobbyMissionMapWidget_OnDesiredAutoSearchForLobbies_Params params;
	params.bDesired = bDesired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnBrowseAllMapsButtonClicked
// (Final, Native, Private)

void UDH_LobbyMissionMapWidget::OnBrowseAllMapsButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.OnBrowseAllMapsButtonClicked");

	UDH_LobbyMissionMapWidget_OnBrowseAllMapsButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionMapWidget.AddNodes
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UWidget*>         InNodes                        (Parm, ZeroConstructor)

void UDH_LobbyMissionMapWidget::AddNodes(TArray<class UWidget*> InNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionMapWidget.AddNodes");

	UDH_LobbyMissionMapWidget_AddNodes_Params params;
	params.InNodes = InNodes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyMissionSelectionControlWidget::SetSelected(bool bInSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.SetSelected");

	UDH_LobbyMissionSelectionControlWidget_SetSelected_Params params;
	params.bInSelected = bInSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnSelectNodeButtonClicked
// (Final, Native, Private)

void UDH_LobbyMissionSelectionControlWidget::OnSelectNodeButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnSelectNodeButtonClicked");

	UDH_LobbyMissionSelectionControlWidget_OnSelectNodeButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_LobbyMissionSelectionControlWidget::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnOnlineSessionUpdateComplete");

	UDH_LobbyMissionSelectionControlWidget_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnMissionSelectionControlWidgetClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_LobbyMissionSelectionControlWidget* Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbyMissionSelectionControlWidget::OnMissionSelectionControlWidgetClickedSignature__DelegateSignature(class UDH_LobbyMissionSelectionControlWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnMissionSelectionControlWidgetClickedSignature__DelegateSignature");

	UDH_LobbyMissionSelectionControlWidget_OnMissionSelectionControlWidgetClickedSignature__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetNodeState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMissionNodeState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMissionNodeState UDH_LobbyMissionSelectionControlWidget::GetNodeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetNodeState");

	UDH_LobbyMissionSelectionControlWidget_GetNodeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetNodeIconTooltipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_LobbyMissionSelectionControlWidget::GetNodeIconTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetNodeIconTooltipWidget");

	UDH_LobbyMissionSelectionControlWidget_GetNodeIconTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetMissionData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_MapData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_MapData* UDH_LobbyMissionSelectionControlWidget::GetMissionData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetMissionData");

	UDH_LobbyMissionSelectionControlWidget_GetMissionData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetMapCompletions
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  MapName                        (Parm, ZeroConstructor)
// int                            Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Required                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDH_LobbyMissionSelectionControlWidget::GetMapCompletions(const class FString& MapName, int* Current, int* Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetMapCompletions");

	UDH_LobbyMissionSelectionControlWidget_GetMapCompletions_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current != nullptr)
		*Current = params.Current;
	if (Required != nullptr)
		*Required = params.Required;
}


// Function DreadHungerUI.DH_LobbyPlayersChangedWidget.OnPartyMembersChanged
// (Final, Native, Private)

void UDH_LobbyPlayersChangedWidget::OnPartyMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyPlayersChangedWidget.OnPartyMembersChanged");

	UDH_LobbyPlayersChangedWidget_OnPartyMembersChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyPlayersChangedWidget.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UDH_LobbyPlayersChangedWidget::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyPlayersChangedWidget.BP_OnItemsEmptied");

	UDH_LobbyPlayersChangedWidget_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbyPlayersChangedWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_LobbyPlayersChangedItemWidget* CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbyPlayersChangedWidget::BP_OnItemCreated(class UDH_LobbyPlayersChangedItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbyPlayersChangedWidget.BP_OnItemCreated");

	UDH_LobbyPlayersChangedWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnSelectAllCheckBoxStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultHeaderWidgetDropDown::OnSelectAllCheckBoxStateChanged(bool bInChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnSelectAllCheckBoxStateChanged");

	UDH_LobbySearchResultHeaderWidgetDropDown_OnSelectAllCheckBoxStateChanged_Params params;
	params.bInChecked = bInChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnLobbyBrowserWidgetShow
// (Final, Native, Private)

void UDH_LobbySearchResultHeaderWidgetDropDown::OnLobbyBrowserWidgetShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnLobbyBrowserWidgetShow");

	UDH_LobbySearchResultHeaderWidgetDropDown_OnLobbyBrowserWidgetShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnLanguageFilterButtonClicked
// (Final, Native, Private)
// Parameters:
// bool                           bToggleOn                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultHeaderWidgetDropDown::OnLanguageFilterButtonClicked(bool bToggleOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnLanguageFilterButtonClicked");

	UDH_LobbySearchResultHeaderWidgetDropDown_OnLanguageFilterButtonClicked_Params params;
	params.bToggleOn = bToggleOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnCheckBoxWidgetStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultHeaderWidgetDropDown::OnCheckBoxWidgetStateChanged(bool bInChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnCheckBoxWidgetStateChanged");

	UDH_LobbySearchResultHeaderWidgetDropDown_OnCheckBoxWidgetStateChanged_Params params;
	params.bInChecked = bInChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnSetSelectedLanguageCodes
// (Final, Native, Private)

void UDH_LobbySearchResultHeaderWidgetDropDownButton::OnSetSelectedLanguageCodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnSetSelectedLanguageCodes");

	UDH_LobbySearchResultHeaderWidgetDropDownButton_OnSetSelectedLanguageCodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnLanguageFilterDropDownHide
// (Final, Native, Private)

void UDH_LobbySearchResultHeaderWidgetDropDownButton::OnLanguageFilterDropDownHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnLanguageFilterDropDownHide");

	UDH_LobbySearchResultHeaderWidgetDropDownButton_OnLanguageFilterDropDownHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnLanguageFilterCheckBoxesChanged
// (Final, Native, Private)
// Parameters:
// int                            NumChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultHeaderWidgetDropDownButton::OnLanguageFilterCheckBoxesChanged(int NumChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnLanguageFilterCheckBoxesChanged");

	UDH_LobbySearchResultHeaderWidgetDropDownButton_OnLanguageFilterCheckBoxesChanged_Params params;
	params.NumChecked = NumChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnBaseButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbySearchResultHeaderWidgetDropDownButton::OnBaseButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnBaseButtonClicked");

	UDH_LobbySearchResultHeaderWidgetDropDownButton_OnBaseButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InCurrent                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InMax                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultPlayersWidget::SetPlayers(int InCurrent, int InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetPlayers");

	UDH_LobbySearchResultPlayersWidget_SetPlayers_Params params;
	params.InCurrent = InCurrent;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetMaxPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InMax                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultPlayersWidget::SetMaxPlayers(int InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetMaxPlayers");

	UDH_LobbySearchResultPlayersWidget_SetMaxPlayers_Params params;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetCurrentPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InCurrent                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySearchResultPlayersWidget::SetCurrentPlayers(int InCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetCurrentPlayers");

	UDH_LobbySearchResultPlayersWidget_SetCurrentPlayers_Params params;
	params.InCurrent = InCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySearchResultWidget.OnJoinButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbySearchResultWidget::OnJoinButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySearchResultWidget.OnJoinButtonClicked");

	UDH_LobbySearchResultWidget_OnJoinButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportItemWidget.Report
// (Final, Native, Protected, BlueprintCallable)

void UDH_LobbySlotReportItemWidget::Report()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportItemWidget.Report");

	UDH_LobbySlotReportItemWidget_Report_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_LobbySlotReportItemWidget.OnReportItemWidgetButtonClickSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EDH_PlayerReportReasonType     InReportReason                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotReportItemWidget::OnReportItemWidgetButtonClickSignature__DelegateSignature(EDH_PlayerReportReasonType InReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_LobbySlotReportItemWidget.OnReportItemWidgetButtonClickSignature__DelegateSignature");

	UDH_LobbySlotReportItemWidget_OnReportItemWidgetButtonClickSignature__DelegateSignature_Params params;
	params.InReportReason = InReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportItemWidget.BP_OnReportReasonSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InReportReason                 (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_LobbySlotReportItemWidget::BP_OnReportReasonSet(const struct FText& InReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportItemWidget.BP_OnReportReasonSet");

	UDH_LobbySlotReportItemWidget_BP_OnReportReasonSet_Params params;
	params.InReportReason = InReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.Show
// (Final, Native, Public, BlueprintCallable)

void UDH_LobbySlotReportListWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.Show");

	UDH_LobbySlotReportListWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.OnItemButtonClick
// (Final, Native, Private)
// Parameters:
// EDH_PlayerReportReasonType     InReportReason                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotReportListWidget::OnItemButtonClick(EDH_PlayerReportReasonType InReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.OnItemButtonClick");

	UDH_LobbySlotReportListWidget_OnItemButtonClick_Params params;
	params.InReportReason = InReportReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.OnHidden
// (Final, Native, Protected, BlueprintCallable)

void UDH_LobbySlotReportListWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.OnHidden");

	UDH_LobbySlotReportListWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.OnFloodIntervalExpired
// (Final, Native, Private)

void UDH_LobbySlotReportListWidget::OnFloodIntervalExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.OnFloodIntervalExpired");

	UDH_LobbySlotReportListWidget_OnFloodIntervalExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.Hide
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDH_LobbySlotReportListWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.Hide");

	UDH_LobbySlotReportListWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_LobbySlotReportListWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnShow");

	UDH_LobbySlotReportListWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UDH_LobbySlotReportListWidget::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnItemsEmptied");

	UDH_LobbySlotReportListWidget_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_LobbySlotReportItemWidget* CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LobbySlotReportListWidget::BP_OnItemCreated(class UDH_LobbySlotReportItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnItemCreated");

	UDH_LobbySlotReportListWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotsContainerWidget.OnOnlinePartyMembersChanged
// (Final, Native, Private)

void UDH_LobbySlotsContainerWidget::OnOnlinePartyMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotsContainerWidget.OnOnlinePartyMembersChanged");

	UDH_LobbySlotsContainerWidget_OnOnlinePartyMembersChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotsContainerWidget.OnExpectedUniqueNetIdsUpdated
// (Final, Native, Private)

void UDH_LobbySlotsContainerWidget::OnExpectedUniqueNetIdsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotsContainerWidget.OnExpectedUniqueNetIdsUpdated");

	UDH_LobbySlotsContainerWidget_OnExpectedUniqueNetIdsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotSpeakingWidget.OnVoiceChatParticipantChanged
// (Final, Native, Private)
// Parameters:
// class FString                  AccountName                    (Parm, ZeroConstructor)

void UDH_LobbySlotSpeakingWidget::OnVoiceChatParticipantChanged(const class FString& AccountName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotSpeakingWidget.OnVoiceChatParticipantChanged");

	UDH_LobbySlotSpeakingWidget_OnVoiceChatParticipantChanged_Params params;
	params.AccountName = AccountName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotSpeakingWidget.OnVivoxParticipantChanged
// (Final, Native, Private)
// Parameters:
// class FString                  AccountName                    (Parm, ZeroConstructor)

void UDH_LobbySlotSpeakingWidget::OnVivoxParticipantChanged(const class FString& AccountName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotSpeakingWidget.OnVivoxParticipantChanged");

	UDH_LobbySlotSpeakingWidget_OnVivoxParticipantChanged_Params params;
	params.AccountName = AccountName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotVolumeWidget.OnVolumeSliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotVolumeWidget::OnVolumeSliderValueChanged(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotVolumeWidget.OnVolumeSliderValueChanged");

	UDH_LobbySlotVolumeWidget_OnVolumeSliderValueChanged_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerUpdated
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         InChangedPlayer                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotWidget::OnPlayerUpdated(class ADH_PlayerState* InChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerUpdated");

	UDH_LobbySlotWidget_OnPlayerUpdated_Params params;
	params.InChangedPlayer = InChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerRemovedFromGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         AddedPlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotWidget::OnPlayerRemovedFromGame(class ADH_PlayerState* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerRemovedFromGame");

	UDH_LobbySlotWidget_OnPlayerRemovedFromGame_Params params;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerReconnectedToGameTimerExpired
// (Final, Native, Private)

void UDH_LobbySlotWidget::OnPlayerReconnectedToGameTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerReconnectedToGameTimerExpired");

	UDH_LobbySlotWidget_OnPlayerReconnectedToGameTimerExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerReconnectedToGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ReconnectingPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotWidget::OnPlayerReconnectedToGame(class ADH_PlayerState* ReconnectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerReconnectedToGame");

	UDH_LobbySlotWidget_OnPlayerReconnectedToGame_Params params;
	params.ReconnectingPlayer = ReconnectingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerMuteStatusChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         MutedPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotWidget::OnPlayerMuteStatusChanged(class ADH_PlayerState* MutedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerMuteStatusChanged");

	UDH_LobbySlotWidget_OnPlayerMuteStatusChanged_Params params;
	params.MutedPlayer = MutedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerContextMenuVolumeSliderChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FUniqueNetIdRepl        InUserId                       (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_LobbySlotWidget::OnPlayerContextMenuVolumeSliderChanged(const struct FUniqueNetIdRepl& InUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerContextMenuVolumeSliderChanged");

	UDH_LobbySlotWidget_OnPlayerContextMenuVolumeSliderChanged_Params params;
	params.InUserId = InUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerAddedToGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         AddedPlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotWidget::OnPlayerAddedToGame(class ADH_PlayerState* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerAddedToGame");

	UDH_LobbySlotWidget_OnPlayerAddedToGame_Params params;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnLobbyButtonClicked
// (Final, Native, Private)

void UDH_LobbySlotWidget::OnLobbyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnLobbyButtonClicked");

	UDH_LobbySlotWidget_OnLobbyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LobbySlotWidget.OnGameStateMatchStateChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameState*           InGameState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LobbySlotWidget::OnGameStateMatchStateChanged(class ADH_GameState* InGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LobbySlotWidget.OnGameStateMatchStateChanged");

	UDH_LobbySlotWidget_OnGameStateMatchStateChanged_Params params;
	params.InGameState = InGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginOverlayWidget.OnQuitToDesktopButtonClicked
// (Final, Native, Private)

void UDH_LoginOverlayWidget::OnQuitToDesktopButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginOverlayWidget.OnQuitToDesktopButtonClicked");

	UDH_LoginOverlayWidget_OnQuitToDesktopButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginOverlayWidget.OnLoginStepFinished
// (Final, Native, Private)
// Parameters:
// int                            StepsCompleted                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxSteps                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbandonFurtherSteps           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoginOverlayWidget::OnLoginStepFinished(int StepsCompleted, int MaxSteps, bool bAbandonFurtherSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginOverlayWidget.OnLoginStepFinished");

	UDH_LoginOverlayWidget_OnLoginStepFinished_Params params;
	params.StepsCompleted = StepsCompleted;
	params.MaxSteps = MaxSteps;
	params.bAbandonFurtherSteps = bAbandonFurtherSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginOverlayWidget.OnErrorsUpdated
// (Final, Native, Private)

void UDH_LoginOverlayWidget::OnErrorsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginOverlayWidget.OnErrorsUpdated");

	UDH_LoginOverlayWidget_OnErrorsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginStatusWidget.OnRetryingLoginStep
// (Final, Native, Private)
// Parameters:
// int                            TimeRemaining                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoginStatusWidget::OnRetryingLoginStep(int TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginStatusWidget.OnRetryingLoginStep");

	UDH_LoginStatusWidget_OnRetryingLoginStep_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginStatusWidget.OnLoginStepFinished
// (Final, Native, Private)
// Parameters:
// int                            StepsCompleted                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxSteps                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbandonFurtherSteps           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoginStatusWidget::OnLoginStepFinished(int StepsCompleted, int MaxSteps, bool bAbandonFurtherSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginStatusWidget.OnLoginStepFinished");

	UDH_LoginStatusWidget_OnLoginStepFinished_Params params;
	params.StepsCompleted = StepsCompleted;
	params.MaxSteps = MaxSteps;
	params.bAbandonFurtherSteps = bAbandonFurtherSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginStatusWidget.OnErrorsUpdated
// (Final, Native, Private)

void UDH_LoginStatusWidget::OnErrorsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginStatusWidget.OnErrorsUpdated");

	UDH_LoginStatusWidget_OnErrorsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginTesterWidget.OnTestLoginHandlerButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LoginTesterWidget::OnTestLoginHandlerButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginTesterWidget.OnTestLoginHandlerButtonClicked");

	UDH_LoginTesterWidget_OnTestLoginHandlerButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginTesterWidget.OnDefaultLoginHandlerButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LoginTesterWidget::OnDefaultLoginHandlerButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginTesterWidget.OnDefaultLoginHandlerButtonClicked");

	UDH_LoginTesterWidget_OnDefaultLoginHandlerButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginTesterWidget.OnCloseButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_LoginTesterWidget::OnCloseButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginTesterWidget.OnCloseButtonClicked");

	UDH_LoginTesterWidget_OnCloseButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_LoginTesterWidget.GetLoginStepPlatformTimeout
// (Final, Native, Private, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_LoginTesterWidget::GetLoginStepPlatformTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginTesterWidget.GetLoginStepPlatformTimeout");

	UDH_LoginTesterWidget_GetLoginStepPlatformTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_LoginTesterWidget.GetLoginStepPlatformError
// (Final, Native, Private, Const)
// Parameters:
// struct FDH_OnlineError         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_OnlineError UDH_LoginTesterWidget::GetLoginStepPlatformError()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LoginTesterWidget.GetLoginStepPlatformError");

	UDH_LoginTesterWidget_GetLoginStepPlatformError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_LootContainerWidget.OnCloseButtonClicked
// (Final, Native, Private)

void UDH_LootContainerWidget::OnCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_LootContainerWidget.OnCloseButtonClicked");

	UDH_LootContainerWidget_OnCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_MissionDetailsWidget.OnJoinExpeditionButtonWidgetClicked
// (Final, Native, Private)

void UDH_MissionDetailsWidget::OnJoinExpeditionButtonWidgetClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_MissionDetailsWidget.OnJoinExpeditionButtonWidgetClicked");

	UDH_MissionDetailsWidget_OnJoinExpeditionButtonWidgetClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_MissionDetailsWidget.OnBackButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MissionDetailsWidget::OnBackButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_MissionDetailsWidget.OnBackButtonClicked");

	UDH_MissionDetailsWidget_OnBackButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_MissionNodeTooltipWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_LobbyMissionSelectionControlWidget* OwningNode                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MissionNodeTooltipWidget::Init(class UDH_LobbyMissionSelectionControlWidget* OwningNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_MissionNodeTooltipWidget.Init");

	UDH_MissionNodeTooltipWidget_Init_Params params;
	params.OwningNode = OwningNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NamePlateWidget.ActualShow
// (Final, Native, Private)

void UDH_NamePlateWidget::ActualShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NamePlateWidget.ActualShow");

	UDH_NamePlateWidget_ActualShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NamePlateWidget.ActualHide
// (Final, Native, Private)

void UDH_NamePlateWidget::ActualHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NamePlateWidget.ActualHide");

	UDH_NamePlateWidget_ActualHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NetworkFailureOverlayWidget.UpdateTimeElapsed
// (Final, Native, Private)

void UDH_NetworkFailureOverlayWidget::UpdateTimeElapsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NetworkFailureOverlayWidget.UpdateTimeElapsed");

	UDH_NetworkFailureOverlayWidget_UpdateTimeElapsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NetworkFailureOverlayWidget.OnOnlineSessionJoinSessionComplete
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_NetworkFailureOverlayWidget::OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NetworkFailureOverlayWidget.OnOnlineSessionJoinSessionComplete");

	UDH_NetworkFailureOverlayWidget_OnOnlineSessionJoinSessionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NetworkFailureOverlayWidget.OnDisconnectButtonClicked
// (Final, Native, Private)

void UDH_NetworkFailureOverlayWidget::OnDisconnectButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NetworkFailureOverlayWidget.OnDisconnectButtonClicked");

	UDH_NetworkFailureOverlayWidget_OnDisconnectButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NewHostOverlayWidget.OnSessionMemberPromoted
// (Final, Native, Private)
// Parameters:
// bool                           bLocalIsHost                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_NewHostOverlayWidget::OnSessionMemberPromoted(bool bLocalIsHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NewHostOverlayWidget.OnSessionMemberPromoted");

	UDH_NewHostOverlayWidget_OnSessionMemberPromoted_Params params;
	params.bLocalIsHost = bLocalIsHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NewHostOverlayWidget.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_NewHostOverlayWidget::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NewHostOverlayWidget.OnOnlineSessionUpdateComplete");

	UDH_NewHostOverlayWidget_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_NewHostOverlayWidget.OnOKButtonClicked
// (Final, Native, Private)

void UDH_NewHostOverlayWidget::OnOKButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_NewHostOverlayWidget.OnOKButtonClicked");

	UDH_NewHostOverlayWidget_OnOKButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_OnlineErrorItemWidget.BP_OnErrorSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLocalizedText                (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  InRawError                     (Parm, ZeroConstructor)

void UDH_OnlineErrorItemWidget::BP_OnErrorSet(const struct FText& InLocalizedText, const class FString& InRawError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OnlineErrorItemWidget.BP_OnErrorSet");

	UDH_OnlineErrorItemWidget_BP_OnErrorSet_Params params;
	params.InLocalizedText = InLocalizedText;
	params.InRawError = InRawError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_OnlineErrorWidget.OnOnlineErrorsUpdated
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_OnlineError> InErrors                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_OnlineErrorWidget::OnOnlineErrorsUpdated(TArray<struct FDH_OnlineError> InErrors)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OnlineErrorWidget.OnOnlineErrorsUpdated");

	UDH_OnlineErrorWidget_OnOnlineErrorsUpdated_Params params;
	params.InErrors = InErrors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_OnlineErrorWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_OnlineErrorItemWidget* CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_OnlineErrorWidget::BP_OnItemCreated(class UDH_OnlineErrorItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OnlineErrorWidget.BP_OnItemCreated");

	UDH_OnlineErrorWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_OnlineFriendsListWidget.OnMoreButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_OnlineFriendsListWidget::OnMoreButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OnlineFriendsListWidget.OnMoreButtonClicked");

	UDH_OnlineFriendsListWidget_OnMoreButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_OnlineFriendsListWidget.HandleCrewInviteClosure
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FKey                    InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UDH_GameViewportClient*  InViewportClient               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_OnlineFriendsListWidget::HandleCrewInviteClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OnlineFriendsListWidget.HandleCrewInviteClosure");

	UDH_OnlineFriendsListWidget_HandleCrewInviteClosure_Params params;
	params.InKey = InKey;
	params.InViewportClient = InViewportClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_OnlineFriendsListWidget.GetOnlineFriendsListVisibility
// (Final, Native, Private, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_OnlineFriendsListWidget::GetOnlineFriendsListVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OnlineFriendsListWidget.GetOnlineFriendsListVisibility");

	UDH_OnlineFriendsListWidget_GetOnlineFriendsListVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_OpenSpellCastingHintWidget.OnSelectedInventoryViewChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_OpenSpellCastingHintWidget::OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OpenSpellCastingHintWidget.OnSelectedInventoryViewChanged");

	UDH_OpenSpellCastingHintWidget_OnSelectedInventoryViewChanged_Params params;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_OpenSpellCastingHintWidget.BP_IsBoneCharm
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADH_Inventory*           Inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_OpenSpellCastingHintWidget::BP_IsBoneCharm(class ADH_Inventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OpenSpellCastingHintWidget.BP_IsBoneCharm");

	UDH_OpenSpellCastingHintWidget_BP_IsBoneCharm_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_OverlayViewWidget.OnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_OverlayViewWidget::OnButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_OverlayViewWidget.OnButtonClicked");

	UDH_OverlayViewWidget_OnButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnReportButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_PlayerContextMenuWidget::OnReportButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerContextMenuWidget.OnReportButtonClicked");

	UDH_PlayerContextMenuWidget_OnReportButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnProfileButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_PlayerContextMenuWidget::OnProfileButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerContextMenuWidget.OnProfileButtonClicked");

	UDH_PlayerContextMenuWidget_OnProfileButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnPlayerMuteStatusChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         MutedPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PlayerContextMenuWidget::OnPlayerMuteStatusChanged(class ADH_PlayerState* MutedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerContextMenuWidget.OnPlayerMuteStatusChanged");

	UDH_PlayerContextMenuWidget_OnPlayerMuteStatusChanged_Params params;
	params.MutedPlayer = MutedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnPlayerContextMenuShown
// (Final, Native, Private)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_PlayerContextMenuWidget::OnPlayerContextMenuShown(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerContextMenuWidget.OnPlayerContextMenuShown");

	UDH_PlayerContextMenuWidget_OnPlayerContextMenuShown_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnMuteButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_PlayerContextMenuWidget::OnMuteButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerContextMenuWidget.OnMuteButtonClicked");

	UDH_PlayerContextMenuWidget_OnMuteButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnKickButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_PlayerContextMenuWidget::OnKickButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerContextMenuWidget.OnKickButtonClicked");

	UDH_PlayerContextMenuWidget_OnKickButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerReportCardAvatarWidget.OnBaseButtonClicked
// (Final, Native, Private)

void UDH_PlayerReportCardAvatarWidget::OnBaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerReportCardAvatarWidget.OnBaseButtonClicked");

	UDH_PlayerReportCardAvatarWidget_OnBaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PlayerStatsWidget.UpdateStats
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// EPlayerTeam                    InTeam                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PlayerStatsWidget::UpdateStats(EPlayerTeam InTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PlayerStatsWidget.UpdateStats");

	UDH_PlayerStatsWidget_UpdateStats_Params params;
	params.InTeam = InTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PokerGameTimerWidget.OnPokerGameTimeStatsChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_PokerGameTimeStat> InTimeStats                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_PokerGameTimerWidget::OnPokerGameTimeStatsChanged(TArray<struct FDH_PokerGameTimeStat> InTimeStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PokerGameTimerWidget.OnPokerGameTimeStatsChanged");

	UDH_PokerGameTimerWidget_OnPokerGameTimeStatsChanged_Params params;
	params.InTimeStats = InTimeStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PokerGameTimerWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_PokerGameTimerWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PokerGameTimerWidget.OnPlayerControllerControlledHumanChanged");

	UDH_PokerGameTimerWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameAvatarWidget.OnPlayerThrallChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         InChangedPlayer                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_PregameAvatarWidget::OnPlayerThrallChanged(class ADH_PlayerState* InChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameAvatarWidget.OnPlayerThrallChanged");

	UDH_PregameAvatarWidget_OnPlayerThrallChanged_Params params;
	params.InChangedPlayer = InChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameAvatarWidget.Init
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDH_PregameAvatarData   InData                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bOwnerIsThrall                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PregameAvatarWidget::Init(const struct FDH_PregameAvatarData& InData, bool bOwnerIsThrall)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameAvatarWidget.Init");

	UDH_PregameAvatarWidget_Init_Params params;
	params.InData = InData;
	params.bOwnerIsThrall = bOwnerIsThrall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.SetThrallCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            InThrallCount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PregameInstructionsMockControlsWidget::SetThrallCount(int InThrallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.SetThrallCount");

	UDH_PregameInstructionsMockControlsWidget_SetThrallCount_Params params;
	params.InThrallCount = InThrallCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.SetPlayerCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            InPlayerCount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PregameInstructionsMockControlsWidget::SetPlayerCount(int InPlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.SetPlayerCount");

	UDH_PregameInstructionsMockControlsWidget_SetPlayerCount_Params params;
	params.InPlayerCount = InPlayerCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnShowButtonClicked
// (Final, Native, Protected, BlueprintCallable)

void UDH_PregameInstructionsMockControlsWidget::OnShowButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnShowButtonClicked");

	UDH_PregameInstructionsMockControlsWidget_OnShowButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnNoPrestigeLevelsTextInputCommitted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_PregameInstructionsMockControlsWidget::OnNoPrestigeLevelsTextInputCommitted(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnNoPrestigeLevelsTextInputCommitted");

	UDH_PregameInstructionsMockControlsWidget_OnNoPrestigeLevelsTextInputCommitted_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnHideButtonClicked
// (Final, Native, Protected, BlueprintCallable)

void UDH_PregameInstructionsMockControlsWidget::OnHideButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnHideButtonClicked");

	UDH_PregameInstructionsMockControlsWidget_OnHideButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.GetPlayerCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_PregameInstructionsMockControlsWidget::GetPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.GetPlayerCount");

	UDH_PregameInstructionsMockControlsWidget_GetPlayerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.BP_GetThrallCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_PregameInstructionsMockControlsWidget::BP_GetThrallCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.BP_GetThrallCount");

	UDH_PregameInstructionsMockControlsWidget_BP_GetThrallCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_PregameInstructionsRealData.OnShowPregameInstructions
// (Final, Native, Private)
// Parameters:
// int                            InThrallCount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PregameInstructionsRealData::OnShowPregameInstructions(int InThrallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsRealData.OnShowPregameInstructions");

	UDH_PregameInstructionsRealData_OnShowPregameInstructions_Params params;
	params.InThrallCount = InThrallCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsRealData.OnMatchStarted
// (Final, Native, Private)

void UDH_PregameInstructionsRealData::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsRealData.OnMatchStarted");

	UDH_PregameInstructionsRealData_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsWidget.ShowTestingControls
// (Final, Native, Private)

void UDH_PregameInstructionsWidget::ShowTestingControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsWidget.ShowTestingControls");

	UDH_PregameInstructionsWidget_ShowTestingControls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsWidget.PopNextAvatar
// (Final, Native, Private)
// Parameters:
// int                            AvatarIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PregameInstructionsWidget::PopNextAvatar(int AvatarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsWidget.PopNextAvatar");

	UDH_PregameInstructionsWidget_PopNextAvatar_Params params;
	params.AvatarIndex = AvatarIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PregameInstructionsWidget.OnFinishedPoppingAvatars
// (Final, Native, Private)

void UDH_PregameInstructionsWidget::OnFinishedPoppingAvatars()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PregameInstructionsWidget.OnFinishedPoppingAvatars");

	UDH_PregameInstructionsWidget_OnFinishedPoppingAvatars_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrestigeOverlayWidget.ProcessTimeout
// (Final, Native, Private)

void UDH_PrestigeOverlayWidget::ProcessTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrestigeOverlayWidget.ProcessTimeout");

	UDH_PrestigeOverlayWidget_ProcessTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrestigeOverlayWidget.OnRoleSelectionPrestigeButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_PrestigeOverlayWidget::OnRoleSelectionPrestigeButtonClicked(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrestigeOverlayWidget.OnRoleSelectionPrestigeButtonClicked");

	UDH_PrestigeOverlayWidget_OnRoleSelectionPrestigeButtonClicked_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrestigeOverlayWidget.OnPrestigeButtonClicked
// (Final, Native, Private)

void UDH_PrestigeOverlayWidget::OnPrestigeButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrestigeOverlayWidget.OnPrestigeButtonClicked");

	UDH_PrestigeOverlayWidget_OnPrestigeButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrisonerAwakensWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_PrisonerAwakensWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrisonerAwakensWidget.Show");

	UDH_PrisonerAwakensWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrisonerAwakensWidget.OnPrisonerPawnControllerChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PrisonerPawn*        InPrisonerPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_PrisonerAwakensWidget::OnPrisonerPawnControllerChanged(class ADH_PrisonerPawn* InPrisonerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrisonerAwakensWidget.OnPrisonerPawnControllerChanged");

	UDH_PrisonerAwakensWidget_OnPrisonerPawnControllerChanged_Params params;
	params.InPrisonerPawn = InPrisonerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrisonerAwakensWidget.OnHidden
// (Final, Native, Protected, BlueprintCallable)

void UDH_PrisonerAwakensWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrisonerAwakensWidget.OnHidden");

	UDH_PrisonerAwakensWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrisonerAwakensWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_PrisonerAwakensWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrisonerAwakensWidget.Hide");

	UDH_PrisonerAwakensWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrisonerAwakensWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_PrisonerAwakensWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrisonerAwakensWidget.BP_OnShow");

	UDH_PrisonerAwakensWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PrisonerAwakensWidget.BP_OnHide
// (Native, Event, Protected, BlueprintEvent)

void UDH_PrisonerAwakensWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PrisonerAwakensWidget.BP_OnHide");

	UDH_PrisonerAwakensWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PublicGameSettingWidget.OnLobbiesRestrictionWidgetRestrictedChanged
// (Final, Native, Private)
// Parameters:
// bool                           bRestricted                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PublicGameSettingWidget::OnLobbiesRestrictionWidgetRestrictedChanged(bool bRestricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PublicGameSettingWidget.OnLobbiesRestrictionWidgetRestrictedChanged");

	UDH_PublicGameSettingWidget_OnLobbiesRestrictionWidgetRestrictedChanged_Params params;
	params.bRestricted = bRestricted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PushToTalkWidget.OnWantsToTalk
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantsToTalk                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PushToTalkWidget::OnWantsToTalk(class ADH_PlayerController* PlayerController, bool bWantsToTalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PushToTalkWidget.OnWantsToTalk");

	UDH_PushToTalkWidget_OnWantsToTalk_Params params;
	params.PlayerController = PlayerController;
	params.bWantsToTalk = bWantsToTalk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_PushToTalkWidget.OnPlayerControllerStateChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_PushToTalkWidget::OnPlayerControllerStateChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_PushToTalkWidget.OnPlayerControllerStateChanged");

	UDH_PushToTalkWidget_OnPlayerControllerStateChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuestInfoWidget.OnQuestStateCurrentScoreChanged
// (Final, Native, Protected)
// Parameters:
// class ADH_QuestState*          InQuestState                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentScore                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_QuestInfoWidget::OnQuestStateCurrentScoreChanged(class ADH_QuestState* InQuestState, int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuestInfoWidget.OnQuestStateCurrentScoreChanged");

	UDH_QuestInfoWidget_OnQuestStateCurrentScoreChanged_Params params;
	params.InQuestState = InQuestState;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuestInfoWidget.OnQuestStateCompletedChanged
// (Final, Native, Protected)
// Parameters:
// class ADH_QuestState*          InQuestState                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_QuestInfoWidget::OnQuestStateCompletedChanged(class ADH_QuestState* InQuestState, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuestInfoWidget.OnQuestStateCompletedChanged");

	UDH_QuestInfoWidget_OnQuestStateCompletedChanged_Params params;
	params.InQuestState = InQuestState;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuestInfoWidget.OnPlayerStateQuestChanged
// (Final, Native, Protected)
// Parameters:
// class ADH_PlayerState*         InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_QuestState*          InQuestState                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_QuestInfoWidget::OnPlayerStateQuestChanged(class ADH_PlayerState* InPlayerState, class ADH_QuestState* InQuestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuestInfoWidget.OnPlayerStateQuestChanged");

	UDH_QuestInfoWidget_OnPlayerStateQuestChanged_Params params;
	params.InPlayerState = InPlayerState;
	params.InQuestState = InQuestState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuestInfoWidget.BP_SetText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_QuestInfoWidget::BP_SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuestInfoWidget.BP_SetText");

	UDH_QuestInfoWidget_BP_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuestInfoWidget.BP_SetIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_QuestInfoWidget::BP_SetIcon(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuestInfoWidget.BP_SetIcon");

	UDH_QuestInfoWidget_BP_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuestInfoWidget.BP_Complete
// (Event, Protected, BlueprintEvent)

void UDH_QuestInfoWidget::BP_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuestInfoWidget.BP_Complete");

	UDH_QuestInfoWidget_BP_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.Show
// (Final, Native, Public, BlueprintCallable)

void UDH_QuickTransferInventoryWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.Show");

	UDH_QuickTransferInventoryWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.OnHidden
// (Final, Native, Protected, BlueprintCallable)

void UDH_QuickTransferInventoryWidget::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.OnHidden");

	UDH_QuickTransferInventoryWidget_OnHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventorySlotWidget* InSourceSlot                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventorySlotWidget* InTargetSlot                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_QuickTransferInventoryWidget::Init(class UDH_InventorySlotWidget* InSourceSlot, class UDH_InventorySlotWidget* InTargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.Init");

	UDH_QuickTransferInventoryWidget_Init_Params params;
	params.InSourceSlot = InSourceSlot;
	params.InTargetSlot = InTargetSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.Hide
// (Final, Native, Public, BlueprintCallable)

void UDH_QuickTransferInventoryWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.Hide");

	UDH_QuickTransferInventoryWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_QuickTransferInventoryWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnShow");

	UDH_QuickTransferInventoryWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnSetIcon
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UTexture2D*              IconTexture                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            IconColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_QuickTransferInventoryWidget::BP_OnSetIcon(class UTexture2D* IconTexture, const struct FLinearColor& IconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnSetIcon");

	UDH_QuickTransferInventoryWidget_BP_OnSetIcon_Params params;
	params.IconTexture = IconTexture;
	params.IconColor = IconColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnHide
// (Native, Event, Protected, BlueprintEvent)

void UDH_QuickTransferInventoryWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnHide");

	UDH_QuickTransferInventoryWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialCanvas.SetRotationOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRotationOffset               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialCanvas::SetRotationOffset(float InRotationOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialCanvas.SetRotationOffset");

	UDH_RadialCanvas_SetRotationOffset_Params params;
	params.InRotationOffset = InRotationOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialCanvas.SetAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAlignment                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialCanvas::SetAlignment(float InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialCanvas.SetAlignment");

	UDH_RadialCanvas_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialCanvas.GetRotationOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_RadialCanvas::GetRotationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialCanvas.GetRotationOffset");

	UDH_RadialCanvas_GetRotationOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialCanvas.GetAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_RadialCanvas::GetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialCanvas.GetAlignment");

	UDH_RadialCanvas_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialCanvas.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_RadialCanvasPanelSlot* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_RadialCanvasPanelSlot* UDH_RadialCanvas::AddChildToCanvas(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialCanvas.AddChildToCanvas");

	UDH_RadialCanvas_AddChildToCanvas_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.Show
// (Native, Public, BlueprintCallable)

void UDH_RadialMenuOptionBaseWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.Show");

	UDH_RadialMenuOptionBaseWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdate                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuOptionBaseWidget::SetSelected(bool bInSelected, bool bUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetSelected");

	UDH_RadialMenuOptionBaseWidget_SetSelected_Params params;
	params.bInSelected = bInSelected;
	params.bUpdate = bUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetPosition
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDH_RadialOptionPosition Position                       (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_RadialMenuOptionBaseWidget::SetPosition(const struct FDH_RadialOptionPosition& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetPosition");

	UDH_RadialMenuOptionBaseWidget_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetHintText
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FText                   InHintText                     (ConstParm, Parm)

void UDH_RadialMenuOptionBaseWidget::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetHintText");

	UDH_RadialMenuOptionBaseWidget_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.OnHintCanvasPanelHidden
// (Final, Native, Private)

void UDH_RadialMenuOptionBaseWidget::OnHintCanvasPanelHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.OnHintCanvasPanelHidden");

	UDH_RadialMenuOptionBaseWidget_OnHintCanvasPanelHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_RadialMenuOptionBaseWidget.OnCommittedAnimationFinishedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_RadialMenuOptionBaseWidget::OnCommittedAnimationFinishedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_RadialMenuOptionBaseWidget.OnCommittedAnimationFinishedSignature__DelegateSignature");

	UDH_RadialMenuOptionBaseWidget_OnCommittedAnimationFinishedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.Hide
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCommitting                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuOptionBaseWidget::Hide(bool bCommitting)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.Hide");

	UDH_RadialMenuOptionBaseWidget_Hide_Params params;
	params.bCommitting = bCommitting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_RadialMenuOptionBaseWidget::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.GetSelected");

	UDH_RadialMenuOptionBaseWidget_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_RadialMenuOptionBaseWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnShow");

	UDH_RadialMenuOptionBaseWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnSetHintText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InHintText                     (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_RadialMenuOptionBaseWidget::BP_OnSetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnSetHintText");

	UDH_RadialMenuOptionBaseWidget_BP_OnSetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetShowHintAnimation
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UDH_RadialMenuOptionBaseWidget::BP_OnGetShowHintAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetShowHintAnimation");

	UDH_RadialMenuOptionBaseWidget_BP_OnGetShowHintAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetShowAnimation
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UDH_RadialMenuOptionBaseWidget::BP_OnGetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetShowAnimation");

	UDH_RadialMenuOptionBaseWidget_BP_OnGetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetIconBorder
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBorder*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBorder* UDH_RadialMenuOptionBaseWidget::BP_OnGetIconBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetIconBorder");

	UDH_RadialMenuOptionBaseWidget_BP_OnGetIconBorder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetHintContainer
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_RadialMenuOptionBaseWidget::BP_OnGetHintContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetHintContainer");

	UDH_RadialMenuOptionBaseWidget_BP_OnGetHintContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetHintBorder
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBorder*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBorder* UDH_RadialMenuOptionBaseWidget::BP_OnGetHintBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetHintBorder");

	UDH_RadialMenuOptionBaseWidget_BP_OnGetHintBorder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetCommittedAnimation
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UDH_RadialMenuOptionBaseWidget::BP_OnGetCommittedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetCommittedAnimation");

	UDH_RadialMenuOptionBaseWidget_BP_OnGetCommittedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RadialMenuEmoteOptionWidget.SetLobbyEmote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_LobbyEmote*          InLobbyEmote                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuEmoteOptionWidget::SetLobbyEmote(class UDH_LobbyEmote* InLobbyEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuEmoteOptionWidget.SetLobbyEmote");

	UDH_RadialMenuEmoteOptionWidget_SetLobbyEmote_Params params;
	params.InLobbyEmote = InLobbyEmote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuEmoteOptionWidget.OnCommittedAnimFinished
// (Final, Native, Private)

void UDH_RadialMenuEmoteOptionWidget::OnCommittedAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuEmoteOptionWidget.OnCommittedAnimFinished");

	UDH_RadialMenuEmoteOptionWidget_OnCommittedAnimFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuEmotesWidget.OnControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuEmotesWidget::OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuEmotesWidget.OnControlledHumanChanged");

	UDH_RadialMenuEmotesWidget_OnControlledHumanChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSongOptionWidget.SetSong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_PhonographSong*      InSong                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSongOptionWidget::SetSong(class UDH_PhonographSong* InSong)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSongOptionWidget.SetSong");

	UDH_RadialMenuSongOptionWidget_SetSong_Params params;
	params.InSong = InSong;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSongOptionWidget.BP_OnSetIcon
// (Event, Protected, HasOutParms, BlueprintEvent)

void UDH_RadialMenuSongOptionWidget::BP_OnSetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSongOptionWidget.BP_OnSetIcon");

	UDH_RadialMenuSongOptionWidget_BP_OnSetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSongsWidget.OnSongSelection
// (Final, Native, Private)
// Parameters:
// class ADH_Phonograph*          InPhonograph                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSongsWidget::OnSongSelection(class ADH_Phonograph* InPhonograph)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSongsWidget.OnSongSelection");

	UDH_RadialMenuSongsWidget_OnSongSelection_Params params;
	params.InPhonograph = InPhonograph;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSongsWidget.OnControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSongsWidget::OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSongsWidget.OnControlledHumanChanged");

	UDH_RadialMenuSongsWidget_OnControlledHumanChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnSpellSelection
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSpellsWidget::OnSpellSelection(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnSpellSelection");

	UDH_RadialMenuSpellsWidget_OnSpellSelection_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnHumanCharacterDied
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSpellsWidget::OnHumanCharacterDied(class ADH_HumanCharacter* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnHumanCharacterDied");

	UDH_RadialMenuSpellsWidget_OnHumanCharacterDied_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnEquippedSpellsChanged
// (Final, Native, Private)
// Parameters:
// class ADH_SpellManager*        InSpellManager                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSpellsWidget::OnEquippedSpellsChanged(class ADH_SpellManager* InSpellManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnEquippedSpellsChanged");

	UDH_RadialMenuSpellsWidget_OnEquippedSpellsChanged_Params params;
	params.InSpellManager = InSpellManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RadialMenuSpellsWidget::OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnControlledHumanChanged");

	UDH_RadialMenuSpellsWidget_OnControlledHumanChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RateOfChangeArrowWidget.SetDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDH_RateOfChangeArrowDirection Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RateOfChangeArrowWidget::SetDirection(EDH_RateOfChangeArrowDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeArrowWidget.SetDirection");

	UDH_RateOfChangeArrowWidget_SetDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RateOfChangeArrowWidget.BP_GetMID
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UDH_RateOfChangeArrowWidget::BP_GetMID()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeArrowWidget.BP_GetMID");

	UDH_RateOfChangeArrowWidget_BP_GetMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RateOfChangeWidget.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewRate                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RateOfChangeWidget::SetRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeWidget.SetRate");

	UDH_RateOfChangeWidget_SetRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RateOfChangeWidget.SetMaxRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewMaxRate                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RateOfChangeWidget::SetMaxRate(float NewMaxRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeWidget.SetMaxRate");

	UDH_RateOfChangeWidget_SetMaxRate_Params params;
	params.NewMaxRate = NewMaxRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RateOfChangeWidget.CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_RateOfChangeWidget::CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeWidget.CreateAnimationHandler");

	UDH_RateOfChangeWidget_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RateOfChangeWidget.BP_OnSetArrowsVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            VisibleArrowsFlags             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RateOfChangeWidget::BP_OnSetArrowsVisible(int VisibleArrowsFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeWidget.BP_OnSetArrowsVisible");

	UDH_RateOfChangeWidget_BP_OnSetArrowsVisible_Params params;
	params.VisibleArrowsFlags = VisibleArrowsFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RateOfChangeWidget.BP_OnSetArrowDirection
// (Event, Protected, BlueprintEvent)
// Parameters:
// EDH_RateOfChangeArrowDirection Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RateOfChangeWidget::BP_OnSetArrowDirection(EDH_RateOfChangeArrowDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RateOfChangeWidget.BP_OnSetArrowDirection");

	UDH_RateOfChangeWidget_BP_OnSetArrowDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RecipeIngredientWidget.GetTooltipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryTooltipWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryTooltipWidget* UDH_RecipeIngredientWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RecipeIngredientWidget.GetTooltipWidget");

	UDH_RecipeIngredientWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RecipeIngredientWidget.BP_OnInit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// EInventoryType                 Type                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeCurrent                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchIconSizes                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowQuantity                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Description                    (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_RecipeIngredientWidget::BP_OnInit(EInventoryType Type, bool bIncludeCurrent, int Quantity, int Current, class UTexture2D* Icon, bool bMatchIconSizes, bool bShowQuantity, const struct FText& Title, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RecipeIngredientWidget.BP_OnInit");

	UDH_RecipeIngredientWidget_BP_OnInit_Params params;
	params.Type = Type;
	params.bIncludeCurrent = bIncludeCurrent;
	params.Quantity = Quantity;
	params.Current = Current;
	params.Icon = Icon;
	params.bMatchIconSizes = bMatchIconSizes;
	params.bShowQuantity = bShowQuantity;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReconnectOverlayWidget.Reconnect
// (Final, Native, Private)

void UDH_ReconnectOverlayWidget::Reconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReconnectOverlayWidget.Reconnect");

	UDH_ReconnectOverlayWidget_Reconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReconnectOverlayWidget.Abandon
// (Final, Native, Private)

void UDH_ReconnectOverlayWidget::Abandon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReconnectOverlayWidget.Abandon");

	UDH_ReconnectOverlayWidget_Abandon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RegionSelectButtonWidget.SetAsSelectedRegion
// (Final, Native, Protected, BlueprintCallable)

void UDH_RegionSelectButtonWidget::SetAsSelectedRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RegionSelectButtonWidget.SetAsSelectedRegion");

	UDH_RegionSelectButtonWidget_SetAsSelectedRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RegionSelectButtonWidget.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_RegionSelectButtonWidget::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RegionSelectButtonWidget.GetSelected");

	UDH_RegionSelectButtonWidget_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RegionSelectButtonWidget.BP_OnSelectedChanged
// (Event, Protected, BlueprintEvent)

void UDH_RegionSelectButtonWidget::BP_OnSelectedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RegionSelectButtonWidget.BP_OnSelectedChanged");

	UDH_RegionSelectButtonWidget_BP_OnSelectedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RegionSelectButtonWidget.BP_OnRegionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ShortName                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   LongName                       (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_RegionSelectButtonWidget::BP_OnRegionChanged(const struct FText& ShortName, const struct FText& LongName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RegionSelectButtonWidget.BP_OnRegionChanged");

	UDH_RegionSelectButtonWidget_BP_OnRegionChanged_Params params;
	params.ShortName = ShortName;
	params.LongName = LongName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RegionSelectWidget.BP_OnRegionButtonsEmptied
// (Event, Protected, BlueprintEvent)

void UDH_RegionSelectWidget::BP_OnRegionButtonsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RegionSelectWidget.BP_OnRegionButtonsEmptied");

	UDH_RegionSelectWidget_BP_OnRegionButtonsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RegionSelectWidget.BP_OnRegionButtonCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_RegionSelectButtonWidget* CreatedButton                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_RegionSelectWidget::BP_OnRegionButtonCreated(class UDH_RegionSelectButtonWidget* CreatedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RegionSelectWidget.BP_OnRegionButtonCreated");

	UDH_RegionSelectWidget_BP_OnRegionButtonCreated_Params params;
	params.CreatedButton = CreatedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReplayBrowserWidget.Show
// (Final, Native, Private, BlueprintCallable)

void UDH_ReplayBrowserWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayBrowserWidget.Show");

	UDH_ReplayBrowserWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReplayBrowserWidget.Hide
// (Final, Native, Private, BlueprintCallable)

void UDH_ReplayBrowserWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayBrowserWidget.Hide");

	UDH_ReplayBrowserWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReplayBrowserWidget.HasAnyValidReplays
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_ReplayBrowserWidget::HasAnyValidReplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayBrowserWidget.HasAnyValidReplays");

	UDH_ReplayBrowserWidget_HasAnyValidReplays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_ReplayBrowserWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnShow");

	UDH_ReplayBrowserWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnReplayWidgetCreated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UDH_ReplayItemWidget*    NewWidget                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_ReplayBrowserWidget::BP_OnReplayWidgetCreated(class UDH_ReplayItemWidget* NewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnReplayWidgetCreated");

	UDH_ReplayBrowserWidget_BP_OnReplayWidgetCreated_Params params;
	params.NewWidget = NewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnHide
// (Event, Protected, BlueprintEvent)

void UDH_ReplayBrowserWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnHide");

	UDH_ReplayBrowserWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReplayItemWidget.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_ReplayItemWidget::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayItemWidget.Load");

	UDH_ReplayItemWidget_Load_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ReplayItemWidget.BP_OnInitialized
// (Event, Public, BlueprintEvent)

void UDH_ReplayItemWidget::BP_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReplayItemWidget.BP_OnInitialized");

	UDH_ReplayItemWidget_BP_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RespawnTimerWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_RespawnTimerWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RespawnTimerWidget.Show");

	UDH_RespawnTimerWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RespawnTimerWidget.OnWidgetAnimationHandlerFinishedHide
// (Final, Native, Private)
// Parameters:
// class UDH_WidgetAnimationHandler* InAnimationHandler             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RespawnTimerWidget::OnWidgetAnimationHandlerFinishedHide(class UDH_WidgetAnimationHandler* InAnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RespawnTimerWidget.OnWidgetAnimationHandlerFinishedHide");

	UDH_RespawnTimerWidget_OnWidgetAnimationHandlerFinishedHide_Params params;
	params.InAnimationHandler = InAnimationHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RespawnTimerWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_RespawnTimerWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RespawnTimerWidget.Hide");

	UDH_RespawnTimerWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RespawnTimerWidget.BP_OnSetHidden
// (Event, Protected, BlueprintEvent)

void UDH_RespawnTimerWidget::BP_OnSetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RespawnTimerWidget.BP_OnSetHidden");

	UDH_RespawnTimerWidget_BP_OnSetHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RespawnTimerWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_RespawnTimerWidget::BP_CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RespawnTimerWidget.BP_CreateAnimationHandler");

	UDH_RespawnTimerWidget_BP_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ReviveTimeWidget.UpdateTimer
// (Final, Native, Private)

void UDH_ReviveTimeWidget::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReviveTimeWidget.UpdateTimer");

	UDH_ReviveTimeWidget_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReviveTimeWidget.OnRestingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ReviveTimeWidget::OnRestingChanged(class ADH_HumanCharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReviveTimeWidget.OnRestingChanged");

	UDH_ReviveTimeWidget_OnRestingChanged_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ReviveTimeWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ReviveTimeWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ReviveTimeWidget.OnPlayerControllerControlledHumanChanged");

	UDH_ReviveTimeWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleAvatarWidget.OnShowRoleCustomization
// (Final, Native, Private)
// Parameters:
// bool                           bShow                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleAvatarWidget::OnShowRoleCustomization(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleAvatarWidget.OnShowRoleCustomization");

	UDH_RoleAvatarWidget_OnShowRoleCustomization_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleAvatarWidget.OnRoleSelectionWidgetShown
// (Final, Native, Private)

void UDH_RoleAvatarWidget::OnRoleSelectionWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleAvatarWidget.OnRoleSelectionWidgetShown");

	UDH_RoleAvatarWidget_OnRoleSelectionWidgetShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleAvatarWidget.OnRoleSelectionWidgetHidden
// (Final, Native, Private)

void UDH_RoleAvatarWidget::OnRoleSelectionWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleAvatarWidget.OnRoleSelectionWidgetHidden");

	UDH_RoleAvatarWidget_OnRoleSelectionWidgetHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleAvatarWidget.GetAvatarSceneImageParentWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UDH_RoleAvatarWidget::GetAvatarSceneImageParentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleAvatarWidget.GetAvatarSceneImageParentWidget");

	UDH_RoleAvatarWidget_GetAvatarSceneImageParentWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RoleSelectionButtonWidget.OnViewClicked
// (Native, Protected)

void UDH_RoleSelectionButtonWidget::OnViewClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionButtonWidget.OnViewClicked");

	UDH_RoleSelectionButtonWidget_OnViewClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleCustomizationButtonWidget.GetCustomizationButtonTooltipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDH_RoleCustomizationButtonWidget::GetCustomizationButtonTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleCustomizationButtonWidget.GetCustomizationButtonTooltipWidget");

	UDH_RoleCustomizationButtonWidget_GetCustomizationButtonTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RoleCustomizationWidget.OnPreviewRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleCustomizationWidget::OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleCustomizationWidget.OnPreviewRole");

	UDH_RoleCustomizationWidget_OnPreviewRole_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.OnPreviewRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleDetailsEquipmentWidget::OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.OnPreviewRole");

	UDH_RoleDetailsEquipmentWidget_OnPreviewRole_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UDH_RoleDetailsEquipmentWidget::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.BP_OnItemsEmptied");

	UDH_RoleDetailsEquipmentWidget_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_RecipeIngredientWidget* CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_RoleDetailsEquipmentWidget::BP_OnItemCreated(class UDH_RecipeIngredientWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.BP_OnItemCreated");

	UDH_RoleDetailsEquipmentWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleDetailsWidget.OnShowRoleCustomization
// (Final, Native, Private)
// Parameters:
// bool                           bShow                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleDetailsWidget::OnShowRoleCustomization(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleDetailsWidget.OnShowRoleCustomization");

	UDH_RoleDetailsWidget_OnShowRoleCustomization_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleDetailsWidget.OnShowCustomizationAnimationFinished
// (Final, Native, Private)

void UDH_RoleDetailsWidget::OnShowCustomizationAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleDetailsWidget.OnShowCustomizationAnimationFinished");

	UDH_RoleDetailsWidget_OnShowCustomizationAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleDetailsWidget.OnPreviewRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleDetailsWidget::OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleDetailsWidget.OnPreviewRole");

	UDH_RoleDetailsWidget_OnPreviewRole_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePerkItemWidget.GetPerkData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_RolePerkData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_RolePerkData* UDH_RolePerkItemWidget::GetPerkData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePerkItemWidget.GetPerkData");

	UDH_RolePerkItemWidget_GetPerkData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_RolePerkItemWidget.BP_OnDescriptionSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_RolePerkItemWidget::BP_OnDescriptionSet(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePerkItemWidget.BP_OnDescriptionSet");

	UDH_RolePerkItemWidget_BP_OnDescriptionSet_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePerksWidget.OnPreviewRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RolePerksWidget::OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePerksWidget.OnPreviewRole");

	UDH_RolePerksWidget_OnPreviewRole_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePerksWidget.BP_OnPreviewRole
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RolePerksWidget::BP_OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePerksWidget.BP_OnPreviewRole");

	UDH_RolePerksWidget_BP_OnPreviewRole_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePerksWidget.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UDH_RolePerksWidget::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePerksWidget.BP_OnItemsEmptied");

	UDH_RolePerksWidget_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePerksWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_RolePerkItemWidget*  CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_RolePerksWidget::BP_OnItemCreated(class UDH_RolePerkItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePerksWidget.BP_OnItemCreated");

	UDH_RolePerksWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePrestigeButtonWidget.OnPreviewRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RolePrestigeButtonWidget::OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePrestigeButtonWidget.OnPreviewRole");

	UDH_RolePrestigeButtonWidget_OnPreviewRole_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RolePrestigeButtonWidget.OnInternalButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_RolePrestigeButtonWidget::OnInternalButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RolePrestigeButtonWidget.OnInternalButtonClicked");

	UDH_RolePrestigeButtonWidget_OnInternalButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_RoleSelectionButtonViewWidget.RoleSelectionButtonViewWidgetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_RoleSelectionButtonViewWidget::RoleSelectionButtonViewWidgetSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_RoleSelectionButtonViewWidget.RoleSelectionButtonViewWidgetSignature__DelegateSignature");

	UDH_RoleSelectionButtonViewWidget_RoleSelectionButtonViewWidgetSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionButtonViewWidget.OnBaseButtonClicked
// (Final, Native, Private)

void UDH_RoleSelectionButtonViewWidget::OnBaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionButtonViewWidget.OnBaseButtonClicked");

	UDH_RoleSelectionButtonViewWidget_OnBaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionConfirmationButton.SetDesiredRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InDesiredRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleSelectionConfirmationButton::SetDesiredRole(class UDH_PlayerRoleData* InDesiredRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionConfirmationButton.SetDesiredRole");

	UDH_RoleSelectionConfirmationButton_SetDesiredRole_Params params;
	params.InDesiredRole = InDesiredRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.SetDesiredRole
// (Final, Native, Private)
// Parameters:
// class UDH_PlayerRoleData*      InDesiredRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleSelectionWidget::SetDesiredRole(class UDH_PlayerRoleData* InDesiredRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.SetDesiredRole");

	UDH_RoleSelectionWidget_SetDesiredRole_Params params;
	params.InDesiredRole = InDesiredRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.PopulateRoles
// (Final, Native, Private)

void UDH_RoleSelectionWidget::PopulateRoles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.PopulateRoles");

	UDH_RoleSelectionWidget_PopulateRoles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.OnShowRoleCustomization
// (Final, Native, Private)
// Parameters:
// bool                           bShow                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleSelectionWidget::OnShowRoleCustomization(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.OnShowRoleCustomization");

	UDH_RoleSelectionWidget_OnShowRoleCustomization_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.OnPlayerRoleChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleSelectionWidget::OnPlayerRoleChanged(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.OnPlayerRoleChanged");

	UDH_RoleSelectionWidget_OnPlayerRoleChanged_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.OnFadeOutAnimationFinished
// (Final, Native, Private)

void UDH_RoleSelectionWidget::OnFadeOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.OnFadeOutAnimationFinished");

	UDH_RoleSelectionWidget_OnFadeOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.OnAvatarCreated
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_CosmeticPreviewAvatar* Avatar                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_RoleSelectionWidget::OnAvatarCreated(class ADH_PlayerController* PlayerController, class ADH_CosmeticPreviewAvatar* Avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.OnAvatarCreated");

	UDH_RoleSelectionWidget_OnAvatarCreated_Params params;
	params.PlayerController = PlayerController;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_RoleSelectionWidget.ChooseRoleSelection
// (Final, Native, Private)

void UDH_RoleSelectionWidget::ChooseRoleSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_RoleSelectionWidget.ChooseRoleSelection");

	UDH_RoleSelectionWidget_ChooseRoleSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SanityAttributeWidget.OnSanityIncreasingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SanityAttributeWidget::OnSanityIncreasingChanged(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SanityAttributeWidget.OnSanityIncreasingChanged");

	UDH_SanityAttributeWidget_OnSanityIncreasingChanged_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SanityAttributeWidget.OnControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SanityAttributeWidget::OnControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SanityAttributeWidget.OnControlledHumanChanged");

	UDH_SanityAttributeWidget_OnControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SaveConversionPopupWidget.ShowSaveConversionPopup
// (Final, Native, Private)

void UDH_SaveConversionPopupWidget::ShowSaveConversionPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SaveConversionPopupWidget.ShowSaveConversionPopup");

	UDH_SaveConversionPopupWidget_ShowSaveConversionPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardGameReportWidget.OnShowScoreboard
// (Final, Native, Private)
// Parameters:
// bool                           bShowScoreboard                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplayJustLoaded              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardGameReportWidget::OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardGameReportWidget.OnShowScoreboard");

	UDH_ScoreboardGameReportWidget_OnShowScoreboard_Params params;
	params.bShowScoreboard = bShowScoreboard;
	params.bReplayJustLoaded = bReplayJustLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardGameReportWidget.OnSelectAllPlayersButtonClicked
// (Final, Native, Private)

void UDH_ScoreboardGameReportWidget::OnSelectAllPlayersButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardGameReportWidget.OnSelectAllPlayersButtonClicked");

	UDH_ScoreboardGameReportWidget_OnSelectAllPlayersButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardGameReportWidget.BP_OnSetExpeditionDates
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FDateTime               StartDate                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FDateTime               EndDate                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_ScoreboardGameReportWidget::BP_OnSetExpeditionDates(const struct FDateTime& StartDate, const struct FDateTime& EndDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardGameReportWidget.BP_OnSetExpeditionDates");

	UDH_ScoreboardGameReportWidget_BP_OnSetExpeditionDates_Params params;
	params.StartDate = StartDate;
	params.EndDate = EndDate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSelected                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardPlayerListItemViewWidget::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetSelected");

	UDH_ScoreboardPlayerListItemViewWidget_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetPlayerImageTint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InTint                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_ScoreboardPlayerListItemViewWidget::SetPlayerImageTint(const struct FLinearColor& InTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetPlayerImageTint");

	UDH_ScoreboardPlayerListItemViewWidget_SetPlayerImageTint_Params params;
	params.InTint = InTint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetDead
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDead                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardPlayerListItemViewWidget::SetDead(bool bDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetDead");

	UDH_ScoreboardPlayerListItemViewWidget_SetDead_Params params;
	params.bDead = bDead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListItemWidget.SetIsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIsSelected                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardPlayerListItemWidget::SetIsSelected(bool bNewIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListItemWidget.SetIsSelected");

	UDH_ScoreboardPlayerListItemWidget_SetIsSelected_Params params;
	params.bNewIsSelected = bNewIsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListItemWidget.OnBaseButtonClicked
// (Final, Native, Private)

void UDH_ScoreboardPlayerListItemWidget::OnBaseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListItemWidget.OnBaseButtonClicked");

	UDH_ScoreboardPlayerListItemWidget_OnBaseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListWidget.OnShowScoreboard
// (Final, Native, Private)
// Parameters:
// bool                           bShowScoreboard                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplayJustLoaded              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardPlayerListWidget::OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListWidget.OnShowScoreboard");

	UDH_ScoreboardPlayerListWidget_OnShowScoreboard_Params params;
	params.bShowScoreboard = bShowScoreboard;
	params.bReplayJustLoaded = bReplayJustLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerListWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_ScoreboardPlayerListItemWidget* CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_ScoreboardPlayerListWidget::BP_OnItemCreated(class UDH_ScoreboardPlayerListItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerListWidget.BP_OnItemCreated");

	UDH_ScoreboardPlayerListWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.ShowDeeds
// (Final, Native, Public, BlueprintCallable)

void UDH_ScoreboardPlayerReportCardWidget::ShowDeeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.ShowDeeds");

	UDH_ScoreboardPlayerReportCardWidget_ShowDeeds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.OnTimelineFrameChanged
// (Final, Native, Private)

void UDH_ScoreboardPlayerReportCardWidget::OnTimelineFrameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.OnTimelineFrameChanged");

	UDH_ScoreboardPlayerReportCardWidget_OnTimelineFrameChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.OnSelectedIndicesChanged
// (Final, Native, Private, HasOutParms)

void UDH_ScoreboardPlayerReportCardWidget::OnSelectedIndicesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.OnSelectedIndicesChanged");

	UDH_ScoreboardPlayerReportCardWidget_OnSelectedIndicesChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.HideDeeds
// (Final, Native, Public, BlueprintCallable)

void UDH_ScoreboardPlayerReportCardWidget::HideDeeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.HideDeeds");

	UDH_ScoreboardPlayerReportCardWidget_HideDeeds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerReportListWidget.OnShowScoreboard
// (Final, Native, Private)
// Parameters:
// bool                           bShowScoreboard                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplayJustLoaded              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardPlayerReportListWidget::OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerReportListWidget.OnShowScoreboard");

	UDH_ScoreboardPlayerReportListWidget_OnShowScoreboard_Params params;
	params.bShowScoreboard = bShowScoreboard;
	params.bReplayJustLoaded = bReplayJustLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerReportListWidget.OnSelectedIndicesChanged
// (Final, Native, Private, HasOutParms)

void UDH_ScoreboardPlayerReportListWidget::OnSelectedIndicesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerReportListWidget.OnSelectedIndicesChanged");

	UDH_ScoreboardPlayerReportListWidget_OnSelectedIndicesChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardPlayerStatWidget.GetScoreTotal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_ScoreboardPlayerStatWidget::GetScoreTotal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardPlayerStatWidget.GetScoreTotal");

	UDH_ScoreboardPlayerStatWidget_GetScoreTotal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.StopScrubbing
// (Final, Native, Private)

void UDH_ScoreboardTimelineWidget::StopScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.StopScrubbing");

	UDH_ScoreboardTimelineWidget_StopScrubbing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.StartScrubbing
// (Final, Native, Private)

void UDH_ScoreboardTimelineWidget::StartScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.StartScrubbing");

	UDH_ScoreboardTimelineWidget_StartScrubbing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.SetIsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIsPlaying                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardTimelineWidget::SetIsPlaying(bool bNewIsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.SetIsPlaying");

	UDH_ScoreboardTimelineWidget_SetIsPlaying_Params params;
	params.bNewIsPlaying = bNewIsPlaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.ScrollPlaybackSpeed
// (Final, Native, Private)

void UDH_ScoreboardTimelineWidget::ScrollPlaybackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.ScrollPlaybackSpeed");

	UDH_ScoreboardTimelineWidget_ScrollPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnSliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardTimelineWidget::OnSliderValueChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnSliderValueChanged");

	UDH_ScoreboardTimelineWidget_OnSliderValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnShowScoreboard
// (Final, Native, Private)
// Parameters:
// bool                           bShowScoreboard                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplayJustLoaded              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardTimelineWidget::OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnShowScoreboard");

	UDH_ScoreboardTimelineWidget_OnShowScoreboard_Params params;
	params.bShowScoreboard = bShowScoreboard;
	params.bReplayJustLoaded = bReplayJustLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnScoreboardHidden
// (Final, Native, Private)

void UDH_ScoreboardTimelineWidget::OnScoreboardHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnScoreboardHidden");

	UDH_ScoreboardTimelineWidget_OnScoreboardHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnPlayButtonClicked
// (Final, Native, Private)

void UDH_ScoreboardTimelineWidget::OnPlayButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnPlayButtonClicked");

	UDH_ScoreboardTimelineWidget_OnPlayButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardWidget.SetSelectedIndices
// (Final, Native, Private, HasOutParms)

void UDH_ScoreboardWidget::SetSelectedIndices()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardWidget.SetSelectedIndices");

	UDH_ScoreboardWidget_SetSelectedIndices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardWidget.RemoveSelectedIndex
// (Final, Native, Private)
// Parameters:
// int                            InSelectedIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardWidget::RemoveSelectedIndex(int InSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardWidget.RemoveSelectedIndex");

	UDH_ScoreboardWidget_RemoveSelectedIndex_Params params;
	params.InSelectedIndex = InSelectedIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardWidget.OnShowScoreboard
// (Final, Native, Private)
// Parameters:
// bool                           bShowScoreboard                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplayJustLoaded              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardWidget::OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardWidget.OnShowScoreboard");

	UDH_ScoreboardWidget_OnShowScoreboard_Params params;
	params.bShowScoreboard = bShowScoreboard;
	params.bReplayJustLoaded = bReplayJustLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardWidget.OnCopyMatchIDButtonClicked
// (Final, Native, Private)

void UDH_ScoreboardWidget::OnCopyMatchIDButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardWidget.OnCopyMatchIDButtonClicked");

	UDH_ScoreboardWidget_OnCopyMatchIDButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardWidget.OnCloseButtonWidgetClicked
// (Final, Native, Private)

void UDH_ScoreboardWidget::OnCloseButtonWidgetClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardWidget.OnCloseButtonWidgetClicked");

	UDH_ScoreboardWidget_OnCloseButtonWidgetClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ScoreboardWidget.AddSelectedIndex
// (Final, Native, Private)
// Parameters:
// int                            InSelectedIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ScoreboardWidget::AddSelectedIndex(int InSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ScoreboardWidget.AddSelectedIndex");

	UDH_ScoreboardWidget_AddSelectedIndex_Params params;
	params.InSelectedIndex = InSelectedIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.Show
// (Final, Native, Protected, BlueprintCallable)

void UDH_ServerMessageViewWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.Show");

	UDH_ServerMessageViewWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.OnWidgetAnimationHandlerFinishedHide
// (Final, Native, Private)
// Parameters:
// class UDH_WidgetAnimationHandler* InAnimationHandler             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ServerMessageViewWidget::OnWidgetAnimationHandlerFinishedHide(class UDH_WidgetAnimationHandler* InAnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.OnWidgetAnimationHandlerFinishedHide");

	UDH_ServerMessageViewWidget_OnWidgetAnimationHandlerFinishedHide_Params params;
	params.InAnimationHandler = InAnimationHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.OnWidgetAnimationHandlerBeginShow
// (Final, Native, Private)
// Parameters:
// class UDH_WidgetAnimationHandler* InAnimationHandler             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ServerMessageViewWidget::OnWidgetAnimationHandlerBeginShow(class UDH_WidgetAnimationHandler* InAnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.OnWidgetAnimationHandlerBeginShow");

	UDH_ServerMessageViewWidget_OnWidgetAnimationHandlerBeginShow_Params params;
	params.InAnimationHandler = InAnimationHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.Hide
// (Final, Native, Protected, BlueprintCallable)

void UDH_ServerMessageViewWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.Hide");

	UDH_ServerMessageViewWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.BP_OnSetVisible
// (Event, Protected, BlueprintEvent)

void UDH_ServerMessageViewWidget::BP_OnSetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.BP_OnSetVisible");

	UDH_ServerMessageViewWidget_BP_OnSetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.BP_OnSetHidden
// (Event, Protected, BlueprintEvent)

void UDH_ServerMessageViewWidget::BP_OnSetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.BP_OnSetHidden");

	UDH_ServerMessageViewWidget_BP_OnSetHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ServerMessageViewWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_ServerMessageViewWidget::BP_CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ServerMessageViewWidget.BP_CreateAnimationHandler");

	UDH_ServerMessageViewWidget_BP_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_SettingsWidget.Show
// (Final, Native, Public, BlueprintCallable)

void UDH_SettingsWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SettingsWidget.Show");

	UDH_SettingsWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SettingsWidget.Hide
// (Final, Native, Public, BlueprintCallable)

void UDH_SettingsWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SettingsWidget.Hide");

	UDH_SettingsWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SettingsWidget.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UDH_SettingsWidget::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SettingsWidget.BP_OnShow");

	UDH_SettingsWidget_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SettingsWidget.BP_OnHide
// (Event, Protected, BlueprintEvent)

void UDH_SettingsWidget::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SettingsWidget.BP_OnHide");

	UDH_SettingsWidget_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipAttributesWidget.OnControlledShipChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      ShipController                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipAttributesWidget::OnControlledShipChanged(class ADH_HumanCharacter* ShipController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipAttributesWidget.OnControlledShipChanged");

	UDH_ShipAttributesWidget_OnControlledShipChanged_Params params;
	params.ShipController = ShipController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipAvatarWidget.OnShipCustomizationRegionChanged
// (Final, Native, Private)
// Parameters:
// EShipCustomizationRegion       InRegion                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipAvatarWidget::OnShipCustomizationRegionChanged(EShipCustomizationRegion InRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipAvatarWidget.OnShipCustomizationRegionChanged");

	UDH_ShipAvatarWidget_OnShipCustomizationRegionChanged_Params params;
	params.InRegion = InRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipCosmeticsShopWidget.RemoveAllEquippedCosmetics
// (Final, Native, Private)

void UDH_ShipCosmeticsShopWidget::RemoveAllEquippedCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipCosmeticsShopWidget.RemoveAllEquippedCosmetics");

	UDH_ShipCosmeticsShopWidget_RemoveAllEquippedCosmetics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipCosmeticsShopWidget.OnRegionSelected
// (Final, Native, Private)
// Parameters:
// unsigned char                  RegionIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipCosmeticsShopWidget::OnRegionSelected(unsigned char RegionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipCosmeticsShopWidget.OnRegionSelected");

	UDH_ShipCosmeticsShopWidget_OnRegionSelected_Params params;
	params.RegionIndex = RegionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipCosmeticsShopWidget.ConfirmShipCosmetics
// (Final, Native, Private)

void UDH_ShipCosmeticsShopWidget::ConfirmShipCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipCosmeticsShopWidget.ConfirmShipCosmetics");

	UDH_ShipCosmeticsShopWidget_ConfirmShipCosmetics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipObstructionWidget.Reset
// (Final, Native, Public)

void UDH_ShipObstructionWidget::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipObstructionWidget.Reset");

	UDH_ShipObstructionWidget_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_ShipObstructionWidget.OnObstructionDamageTimeUpdatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_ShipObstructionWidget* ShipObstructionWidget          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Time                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipObstructionWidget::OnObstructionDamageTimeUpdatedSignature__DelegateSignature(class UDH_ShipObstructionWidget* ShipObstructionWidget, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_ShipObstructionWidget.OnObstructionDamageTimeUpdatedSignature__DelegateSignature");

	UDH_ShipObstructionWidget_OnObstructionDamageTimeUpdatedSignature__DelegateSignature_Params params;
	params.ShipObstructionWidget = ShipObstructionWidget;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipObstructionWidget.OnHealthChanged
// (Final, Native, Private)
// Parameters:
// class ADH_DestructibleActor*   InObstruction                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipObstructionWidget::OnHealthChanged(class ADH_DestructibleActor* InObstruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipObstructionWidget.OnHealthChanged");

	UDH_ShipObstructionWidget_OnHealthChanged_Params params;
	params.InObstruction = InObstruction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipObstructionWidget.OnGameStateDistanceFromStartToEndChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameStateBase*       GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipObstructionWidget::OnGameStateDistanceFromStartToEndChanged(class ADH_GameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipObstructionWidget.OnGameStateDistanceFromStartToEndChanged");

	UDH_ShipObstructionWidget_OnGameStateDistanceFromStartToEndChanged_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipProgressWidget.UpdateVisibility
// (Final, Native, Private)
// Parameters:
// float                          InDeltaTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipProgressWidget::UpdateVisibility(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipProgressWidget.UpdateVisibility");

	UDH_ShipProgressWidget_UpdateVisibility_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipProgressWidget.OnWarshipChanged
// (Final, Native, Private)
// Parameters:
// class ADH_Warship*             InWarship                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipProgressWidget::OnWarshipChanged(class ADH_Warship* InWarship)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipProgressWidget.OnWarshipChanged");

	UDH_ShipProgressWidget_OnWarshipChanged_Params params;
	params.InWarship = InWarship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipProgressWidget.OnShipObstructionsChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameStateBase*       InGameState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipProgressWidget::OnShipObstructionsChanged(class ADH_GameStateBase* InGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipProgressWidget.OnShipObstructionsChanged");

	UDH_ShipProgressWidget_OnShipObstructionsChanged_Params params;
	params.InGameState = InGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipProgressWidget.OnObstructionDamageTimeUpdated
// (Final, Native, Private)
// Parameters:
// class UDH_ShipObstructionWidget* ShipObstructionWidget          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          InTime                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipProgressWidget::OnObstructionDamageTimeUpdated(class UDH_ShipObstructionWidget* ShipObstructionWidget, float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipProgressWidget.OnObstructionDamageTimeUpdated");

	UDH_ShipProgressWidget_OnObstructionDamageTimeUpdated_Params params;
	params.ShipObstructionWidget = ShipObstructionWidget;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipStatusWidget.OnWarshipHullIntegrityChanged
// (Final, Native, Private)
// Parameters:
// class ADH_Warship*             InWarship                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipStatusWidget::OnWarshipHullIntegrityChanged(class ADH_Warship* InWarship, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipStatusWidget.OnWarshipHullIntegrityChanged");

	UDH_ShipStatusWidget_OnWarshipHullIntegrityChanged_Params params;
	params.InWarship = InWarship;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipStatusWidget.OnPowderkegFuseUpdate
// (Final, Native, Private)
// Parameters:
// class ADH_InventoryPickup*     Powderkeg                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetonationTime                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipStatusWidget::OnPowderkegFuseUpdate(class ADH_InventoryPickup* Powderkeg, float DetonationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipStatusWidget.OnPowderkegFuseUpdate");

	UDH_ShipStatusWidget_OnPowderkegFuseUpdate_Params params;
	params.Powderkeg = Powderkeg;
	params.DetonationTime = DetonationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipStatusWidget.OnPlayerThrallChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipStatusWidget::OnPlayerThrallChanged(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipStatusWidget.OnPlayerThrallChanged");

	UDH_ShipStatusWidget_OnPlayerThrallChanged_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipStatusWidget.OnPlayerControllerPlayerStateChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipStatusWidget::OnPlayerControllerPlayerStateChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipStatusWidget.OnPlayerControllerPlayerStateChanged");

	UDH_ShipStatusWidget_OnPlayerControllerPlayerStateChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipStatusWidget.OnBoilerGunpowderChanged
// (Final, Native, Private)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipStatusWidget::OnBoilerGunpowderChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipStatusWidget.OnBoilerGunpowderChanged");

	UDH_ShipStatusWidget_OnBoilerGunpowderChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ShipStatusWidget.OnBoilerChanged
// (Final, Native, Private)
// Parameters:
// class ADH_WarshipBoiler*       Boiler                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ShipStatusWidget::OnBoilerChanged(class ADH_WarshipBoiler* Boiler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ShipStatusWidget.OnBoilerChanged");

	UDH_ShipStatusWidget_OnBoilerChanged_Params params;
	params.Boiler = Boiler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellSlotWidget.OnSpellDragEnd
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellSlotWidget::OnSpellDragEnd(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellSlotWidget.OnSpellDragEnd");

	UDH_SpellSlotWidget_OnSpellDragEnd_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellSlotWidget.OnSpellDragBegin
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellSlotWidget::OnSpellDragBegin(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellSlotWidget.OnSpellDragBegin");

	UDH_SpellSlotWidget_OnSpellDragBegin_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellSlotWidget.OnCurrentDragDropOperationDrop
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellSlotWidget::OnCurrentDragDropOperationDrop(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellSlotWidget.OnCurrentDragDropOperationDrop");

	UDH_SpellSlotWidget_OnCurrentDragDropOperationDrop_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellSlotWidget.OnCurrentDragDropOperationCancelled
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellSlotWidget::OnCurrentDragDropOperationCancelled(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellSlotWidget.OnCurrentDragDropOperationCancelled");

	UDH_SpellSlotWidget_OnCurrentDragDropOperationCancelled_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellSlotWidget.GetTooltipWidget
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryTooltipWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryTooltipWidget* UDH_SpellSlotWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellSlotWidget.GetTooltipWidget");

	UDH_SpellSlotWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_SpellWidget.Update
// (Final, Native, Private)

void UDH_SpellWidget::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.Update");

	UDH_SpellWidget_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.Toggle
// (Final, Native, Private)

void UDH_SpellWidget::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.Toggle");

	UDH_SpellWidget_Toggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.Select
// (Final, Native, Public)
// Parameters:
// bool                           bDragged                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellWidget::Select(bool bDragged)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.Select");

	UDH_SpellWidget_Select_Params params;
	params.bDragged = bDragged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.OnSpellSelected
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          InSpell                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellWidget::OnSpellSelected(class UDH_TotemSpell* InSpell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.OnSpellSelected");

	UDH_SpellWidget_OnSpellSelected_Params params;
	params.InSpell = InSpell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.OnSpellDeSelected
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          InSpell                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpellWidget::OnSpellDeSelected(class UDH_TotemSpell* InSpell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.OnSpellDeSelected");

	UDH_SpellWidget_OnSpellDeSelected_Params params;
	params.InSpell = InSpell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.GetTooltipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_SpellTooltipWidget*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_SpellTooltipWidget* UDH_SpellWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.GetTooltipWidget");

	UDH_SpellWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_SpellWidget.Deselect
// (Final, Native, Private)

void UDH_SpellWidget::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.Deselect");

	UDH_SpellWidget_Deselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UDH_SpellWidget::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.BP_OnSelected");

	UDH_SpellWidget_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpellWidget.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UDH_SpellWidget::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpellWidget.BP_OnDeselected");

	UDH_SpellWidget_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiedActorInfoWidget.OnSpyingChanged
// (Final, Native, Private)
// Parameters:
// bool                           bInSpying                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiedActorInfoWidget::OnSpyingChanged(bool bInSpying)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiedActorInfoWidget.OnSpyingChanged");

	UDH_SpiedActorInfoWidget_OnSpyingChanged_Params params;
	params.bInSpying = bInSpying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiedActorInfoWidget.OnSpiedTargetChanged
// (Final, Native, Private)
// Parameters:
// class AActor*                  InSpiedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiedActorInfoWidget::OnSpiedTargetChanged(class AActor* InSpiedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiedActorInfoWidget.OnSpiedTargetChanged");

	UDH_SpiedActorInfoWidget_OnSpiedTargetChanged_Params params;
	params.InSpiedActor = InSpiedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnSpiritWalkingChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiritWalkTimerWidget::OnSpiritWalkingChanged(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnSpiritWalkingChanged");

	UDH_SpiritWalkTimerWidget_OnSpiritWalkingChanged_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerDeadChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiritWalkTimerWidget::OnPlayerDeadChanged(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerDeadChanged");

	UDH_SpiritWalkTimerWidget_OnPlayerDeadChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerControllerPlayerStateChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiritWalkTimerWidget::OnPlayerControllerPlayerStateChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerControllerPlayerStateChanged");

	UDH_SpiritWalkTimerWidget_OnPlayerControllerPlayerStateChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiritWalkTimerWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerControllerControlledHumanChanged");

	UDH_SpiritWalkTimerWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnActiveSpellsChanged
// (Final, Native, Private)
// Parameters:
// class ADH_SpellManager*        SpellManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiritWalkTimerWidget::OnActiveSpellsChanged(class ADH_SpellManager* SpellManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnActiveSpellsChanged");

	UDH_SpiritWalkTimerWidget_OnActiveSpellsChanged_Params params;
	params.SpellManager = SpellManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.CreateAnimationHandler
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_SpiritWalkTimerWidget::CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.CreateAnimationHandler");

	UDH_SpiritWalkTimerWidget_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_SpiritWalkTimerWidget.BP_SetTimeRemaining
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          CurrentTimeRemaining           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_SpiritWalkTimerWidget::BP_SetTimeRemaining(float CurrentTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_SpiritWalkTimerWidget.BP_SetTimeRemaining");

	UDH_SpiritWalkTimerWidget_BP_SetTimeRemaining_Params params;
	params.CurrentTimeRemaining = CurrentTimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_StartingGameWidget.ShowAbortButton
// (Final, Native, Private)

void UDH_StartingGameWidget::ShowAbortButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_StartingGameWidget.ShowAbortButton");

	UDH_StartingGameWidget_ShowAbortButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_StartingGameWidget.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_StartingGameWidget::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_StartingGameWidget.OnOnlineSessionUpdateComplete");

	UDH_StartingGameWidget_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_StartingGameWidget.Abort
// (Final, Native, Private)

void UDH_StartingGameWidget::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_StartingGameWidget.Abort");

	UDH_StartingGameWidget_Abort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_StepIndicatorWidget.StartProgress
// (Final, Native, Public)

void UDH_StepIndicatorWidget::StartProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_StepIndicatorWidget.StartProgress");

	UDH_StepIndicatorWidget_StartProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHungerUI.DH_StepIndicatorWidget.OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_StepIndicatorWidget::OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHungerUI.DH_StepIndicatorWidget.OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature");

	UDH_StepIndicatorWidget_OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_StepIndicatorWidget.OnProgressFinished
// (Final, Native, Private)

void UDH_StepIndicatorWidget::OnProgressFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_StepIndicatorWidget.OnProgressFinished");

	UDH_StepIndicatorWidget_OnProgressFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_StepIndicatorWidget.DesignTimeTick
// (Final, Native, Private)

void UDH_StepIndicatorWidget::DesignTimeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_StepIndicatorWidget.DesignTimeTick");

	UDH_StepIndicatorWidget_DesignTimeTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanSlotWidget.OnCurrentDragDropOperationDrop
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TalismanSlotWidget::OnCurrentDragDropOperationDrop(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanSlotWidget.OnCurrentDragDropOperationDrop");

	UDH_TalismanSlotWidget_OnCurrentDragDropOperationDrop_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanSlotWidget.OnCurrentDragDropOperationCancelled
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TalismanSlotWidget::OnCurrentDragDropOperationCancelled(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanSlotWidget.OnCurrentDragDropOperationCancelled");

	UDH_TalismanSlotWidget_OnCurrentDragDropOperationCancelled_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanSlotWidget.GetTooltipWidget
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryTooltipWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryTooltipWidget* UDH_TalismanSlotWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanSlotWidget.GetTooltipWidget");

	UDH_TalismanSlotWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_TalismanWidget.Update
// (Final, Native, Private)

void UDH_TalismanWidget::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.Update");

	UDH_TalismanWidget_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanWidget.Toggle
// (Final, Native, Private)

void UDH_TalismanWidget::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.Toggle");

	UDH_TalismanWidget_Toggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanWidget.Select
// (Final, Native, Public)
// Parameters:
// bool                           bDragged                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TalismanWidget::Select(bool bDragged)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.Select");

	UDH_TalismanWidget_Select_Params params;
	params.bDragged = bDragged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanWidget.GetTooltipWidget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryTooltipWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryTooltipWidget* UDH_TalismanWidget::GetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.GetTooltipWidget");

	UDH_TalismanWidget_GetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_TalismanWidget.Deselect
// (Final, Native, Private)

void UDH_TalismanWidget::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.Deselect");

	UDH_TalismanWidget_Deselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanWidget.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UDH_TalismanWidget::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.BP_OnSelected");

	UDH_TalismanWidget_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TalismanWidget.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UDH_TalismanWidget::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TalismanWidget.BP_OnDeselected");

	UDH_TalismanWidget_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TextBlockWidget.SetTextColorNameOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InTextColorNameOverride        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TextBlockWidget::SetTextColorNameOverride(const struct FName& InTextColorNameOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TextBlockWidget.SetTextColorNameOverride");

	UDH_TextBlockWidget_SetTextColorNameOverride_Params params;
	params.InTextColorNameOverride = InTextColorNameOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TextBlockWidget.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm)

void UDH_TextBlockWidget::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TextBlockWidget.SetText");

	UDH_TextBlockWidget_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.SetSelectedSpell
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          InSpellClass                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::SetSelectedSpell(class UDH_TotemSpell* InSpellClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.SetSelectedSpell");

	UDH_ThrallBadgeWidget_SetSelectedSpell_Params params;
	params.InSpellClass = InSpellClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnUsingThrallVisionChanged
// (Final, Native, Private)
// Parameters:
// bool                           bUsingThrallVision             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnUsingThrallVisionChanged(bool bUsingThrallVision)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnUsingThrallVisionChanged");

	UDH_ThrallBadgeWidget_OnUsingThrallVisionChanged_Params params;
	params.bUsingThrallVision = bUsingThrallVision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnTotemCountChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnTotemCountChanged(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnTotemCountChanged");

	UDH_ThrallBadgeWidget_OnTotemCountChanged_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnSelectedInventoryViewChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnSelectedInventoryViewChanged");

	UDH_ThrallBadgeWidget_OnSelectedInventoryViewChanged_Params params;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerThrallChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnPlayerThrallChanged(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerThrallChanged");

	UDH_ThrallBadgeWidget_OnPlayerThrallChanged_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerReconnectedToGameTimerExpired
// (Final, Native, Private)

void UDH_ThrallBadgeWidget::OnPlayerReconnectedToGameTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerReconnectedToGameTimerExpired");

	UDH_ThrallBadgeWidget_OnPlayerReconnectedToGameTimerExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerReconnectedToGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ReconnectingPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnPlayerReconnectedToGame(class ADH_PlayerState* ReconnectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerReconnectedToGame");

	UDH_ThrallBadgeWidget_OnPlayerReconnectedToGame_Params params;
	params.ReconnectingPlayer = ReconnectingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerControllerControlledHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerControllerControlledHumanChanged");

	UDH_ThrallBadgeWidget_OnPlayerControllerControlledHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnMappingsChangedEvent
// (Final, Native, Private)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnMappingsChangedEvent(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnMappingsChangedEvent");

	UDH_ThrallBadgeWidget_OnMappingsChangedEvent_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnIncapacitatedChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallBadgeWidget::OnIncapacitatedChanged(class ADH_HumanCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnIncapacitatedChanged");

	UDH_ThrallBadgeWidget_OnIncapacitatedChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallBadgeWidget.OnActivateThrallVisionFailed
// (Final, Native, Private)

void UDH_ThrallBadgeWidget::OnActivateThrallVisionFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallBadgeWidget.OnActivateThrallVisionFailed");

	UDH_ThrallBadgeWidget_OnActivateThrallVisionFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.SetMessageData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FThrallMessageData      InMessageData                  (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ThrallMessageRadialOptionWidget::SetMessageData(const struct FThrallMessageData& InMessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.SetMessageData");

	UDH_ThrallMessageRadialOptionWidget_SetMessageData_Params params;
	params.InMessageData = InMessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.GetMessageData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FThrallMessageData      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FThrallMessageData UDH_ThrallMessageRadialOptionWidget::GetMessageData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.GetMessageData");

	UDH_ThrallMessageRadialOptionWidget_GetMessageData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.BP_OnSetLabelText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ThrallMessageRadialOptionWidget::BP_OnSetLabelText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.BP_OnSetLabelText");

	UDH_ThrallMessageRadialOptionWidget_BP_OnSetLabelText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.UpdateCooldownText
// (Final, Native, Private)

void UDH_ThrallSpellRadialOptionWidget::UpdateCooldownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.UpdateCooldownText");

	UDH_ThrallSpellRadialOptionWidget_UpdateCooldownText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.UpdateCastingState
// (Final, Native, Private)

void UDH_ThrallSpellRadialOptionWidget::UpdateCastingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.UpdateCastingState");

	UDH_ThrallSpellRadialOptionWidget_UpdateCastingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.Update
// (Final, Native, Public, BlueprintCallable)

void UDH_ThrallSpellRadialOptionWidget::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.Update");

	UDH_ThrallSpellRadialOptionWidget_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.SetSpell
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_TotemSpell*          InAssociatedSpell              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallSpellRadialOptionWidget::SetSpell(class UDH_TotemSpell* InAssociatedSpell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.SetSpell");

	UDH_ThrallSpellRadialOptionWidget_SetSpell_Params params;
	params.InAssociatedSpell = InAssociatedSpell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnUpdateTotemTargetsChanged
// (Final, Native, Private)

void UDH_ThrallSpellRadialOptionWidget::OnUpdateTotemTargetsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnUpdateTotemTargetsChanged");

	UDH_ThrallSpellRadialOptionWidget_OnUpdateTotemTargetsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerStateOwnedTotemsChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallSpellRadialOptionWidget::OnPlayerStateOwnedTotemsChanged(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerStateOwnedTotemsChanged");

	UDH_ThrallSpellRadialOptionWidget_OnPlayerStateOwnedTotemsChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerRemovedFromGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         RemovedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallSpellRadialOptionWidget::OnPlayerRemovedFromGame(class ADH_PlayerState* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerRemovedFromGame");

	UDH_ThrallSpellRadialOptionWidget_OnPlayerRemovedFromGame_Params params;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerAddedToGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         AddedPlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallSpellRadialOptionWidget::OnPlayerAddedToGame(class ADH_PlayerState* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerAddedToGame");

	UDH_ThrallSpellRadialOptionWidget_OnPlayerAddedToGame_Params params;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnCommittedAnimFinished
// (Final, Native, Private)

void UDH_ThrallSpellRadialOptionWidget::OnCommittedAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnCommittedAnimFinished");

	UDH_ThrallSpellRadialOptionWidget_OnCommittedAnimFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnActiveSpellsChanged
// (Final, Native, Private)
// Parameters:
// class ADH_SpellManager*        InSpellManager                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_ThrallSpellRadialOptionWidget::OnActiveSpellsChanged(class ADH_SpellManager* InSpellManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnActiveSpellsChanged");

	UDH_ThrallSpellRadialOptionWidget_OnActiveSpellsChanged_Params params;
	params.InSpellManager = InSpellManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetOnCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_ThrallSpellRadialOptionWidget::GetOnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetOnCooldown");

	UDH_ThrallSpellRadialOptionWidget_GetOnCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetLabelBorder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBorder*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBorder* UDH_ThrallSpellRadialOptionWidget::GetLabelBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetLabelBorder");

	UDH_ThrallSpellRadialOptionWidget_GetLabelBorder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetCanBeCast
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_ThrallSpellRadialOptionWidget::GetCanBeCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetCanBeCast");

	UDH_ThrallSpellRadialOptionWidget_GetCanBeCast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetAssociatedSpell
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_TotemSpell* UDH_ThrallSpellRadialOptionWidget::GetAssociatedSpell()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetAssociatedSpell");

	UDH_ThrallSpellRadialOptionWidget_GetAssociatedSpell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnTitleScreenLoginStatusWidgetShown
// (Final, Native, Private)

void UDH_TitleScreenContinueWidget::OnTitleScreenLoginStatusWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenContinueWidget.OnTitleScreenLoginStatusWidgetShown");

	UDH_TitleScreenContinueWidget_OnTitleScreenLoginStatusWidgetShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnOverlayWidgetShown
// (Final, Native, Private)
// Parameters:
// class UWidget*                 ShownWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_TitleScreenContinueWidget::OnOverlayWidgetShown(class UWidget* ShownWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenContinueWidget.OnOverlayWidgetShown");

	UDH_TitleScreenContinueWidget_OnOverlayWidgetShown_Params params;
	params.ShownWidget = ShownWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnOverlayWidgetHidden
// (Final, Native, Private)
// Parameters:
// class UWidget*                 HiddenWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_TitleScreenContinueWidget::OnOverlayWidgetHidden(class UWidget* HiddenWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenContinueWidget.OnOverlayWidgetHidden");

	UDH_TitleScreenContinueWidget_OnOverlayWidgetHidden_Params params;
	params.HiddenWidget = HiddenWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnLoginFinished
// (Final, Native, Private)

void UDH_TitleScreenContinueWidget::OnLoginFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenContinueWidget.OnLoginFinished");

	UDH_TitleScreenContinueWidget_OnLoginFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnInputTypeChanged
// (Final, Native, Private)
// Parameters:
// EDHInputType                   InputType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TitleScreenContinueWidget::OnInputTypeChanged(EDHInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenContinueWidget.OnInputTypeChanged");

	UDH_TitleScreenContinueWidget_OnInputTypeChanged_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenContinueWidget.ContinueKeyPressed
// (Final, Native, Private)

void UDH_TitleScreenContinueWidget::ContinueKeyPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenContinueWidget.ContinueKeyPressed");

	UDH_TitleScreenContinueWidget_ContinueKeyPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenNotificationOverlayWidget.OnQuitToDesktopButtonClicked
// (Final, Native, Private)

void UDH_TitleScreenNotificationOverlayWidget::OnQuitToDesktopButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenNotificationOverlayWidget.OnQuitToDesktopButtonClicked");

	UDH_TitleScreenNotificationOverlayWidget_OnQuitToDesktopButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenNotificationOverlayWidget.OnOKButtonClicked
// (Final, Native, Private)

void UDH_TitleScreenNotificationOverlayWidget::OnOKButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenNotificationOverlayWidget.OnOKButtonClicked");

	UDH_TitleScreenNotificationOverlayWidget_OnOKButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenTutorialChoiceWidget.OnMessageYesButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_TitleScreenTutorialChoiceWidget::OnMessageYesButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenTutorialChoiceWidget.OnMessageYesButtonClicked");

	UDH_TitleScreenTutorialChoiceWidget_OnMessageYesButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenTutorialChoiceWidget.OnMessageNoButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_TitleScreenTutorialChoiceWidget::OnMessageNoButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenTutorialChoiceWidget.OnMessageNoButtonClicked");

	UDH_TitleScreenTutorialChoiceWidget_OnMessageNoButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenWidget.OnPlayerInputReceived
// (Final, Native, Private)

void UDH_TitleScreenWidget::OnPlayerInputReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenWidget.OnPlayerInputReceived");

	UDH_TitleScreenWidget_OnPlayerInputReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenWidget.OnErrorsUpdated
// (Final, Native, Private)

void UDH_TitleScreenWidget::OnErrorsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenWidget.OnErrorsUpdated");

	UDH_TitleScreenWidget_OnErrorsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TitleScreenWidget.OnChoseTutorial
// (Final, Native, Private)
// Parameters:
// bool                           bInDesiresTutorial             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TitleScreenWidget::OnChoseTutorial(bool bInDesiresTutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TitleScreenWidget.OnChoseTutorial");

	UDH_TitleScreenWidget_OnChoseTutorial_Params params;
	params.bInDesiresTutorial = bInDesiresTutorial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialChapterButtonWidget.OnClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_TutorialChapterButtonWidget::OnClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialChapterButtonWidget.OnClicked");

	UDH_TutorialChapterButtonWidget_OnClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialChapterSelectButtonWidget.OnClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_TutorialChapterSelectButtonWidget::OnClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialChapterSelectButtonWidget.OnClicked");

	UDH_TutorialChapterSelectButtonWidget_OnClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialChapterSelectWidget.ShowChapters
// (Final, Native, Private)

void UDH_TutorialChapterSelectWidget::ShowChapters()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialChapterSelectWidget.ShowChapters");

	UDH_TutorialChapterSelectWidget_ShowChapters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialConceptWidget.OnConceptExpired
// (Final, Native, Private)

void UDH_TutorialConceptWidget::OnConceptExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialConceptWidget.OnConceptExpired");

	UDH_TutorialConceptWidget_OnConceptExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialConceptWidget.OnConceptChanged
// (Final, Native, Private)
// Parameters:
// struct FName                   NewConceptName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialConceptWidget::OnConceptChanged(const struct FName& NewConceptName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialConceptWidget.OnConceptChanged");

	UDH_TutorialConceptWidget_OnConceptChanged_Params params;
	params.NewConceptName = NewConceptName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialConceptWidget.OnAxisBindPressed
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialConceptWidget::OnAxisBindPressed(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialConceptWidget.OnAxisBindPressed");

	UDH_TutorialConceptWidget_OnAxisBindPressed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialConceptWidget.OnActionBindPressed
// (Final, Native, Private)
// Parameters:
// struct FKey                    Key                            (Parm)

void UDH_TutorialConceptWidget::OnActionBindPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialConceptWidget.OnActionBindPressed");

	UDH_TutorialConceptWidget_OnActionBindPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialConceptWidget.GetCurrentConceptName
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDH_TutorialConceptWidget::GetCurrentConceptName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialConceptWidget.GetCurrentConceptName");

	UDH_TutorialConceptWidget_GetCurrentConceptName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_TutorialIntroScreenWidget.OnTutorialChapterChanged
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialChapter*     NewChapter                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialIntroScreenWidget::OnTutorialChapterChanged(class UDH_TutorialChapter* NewChapter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialIntroScreenWidget.OnTutorialChapterChanged");

	UDH_TutorialIntroScreenWidget_OnTutorialChapterChanged_Params params;
	params.NewChapter = NewChapter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialObjectiveWidget.OnObjectiveCompleted
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialObjective*   CompletedObjective             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialObjectiveWidget::OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialObjectiveWidget.OnObjectiveCompleted");

	UDH_TutorialObjectiveWidget_OnObjectiveCompleted_Params params;
	params.CompletedObjective = CompletedObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_TutorialObjectiveWidget.OnObjectiveChanged
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialObjective*   NewObjective                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialObjectiveWidget::OnObjectiveChanged(class UDH_TutorialObjective* NewObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_TutorialObjectiveWidget.OnObjectiveChanged");

	UDH_TutorialObjectiveWidget_OnObjectiveChanged_Params params;
	params.NewObjective = NewObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_UnacceptedInventoryTypeWidget.BP_OnSetAcceptedType
// (Event, Protected, BlueprintEvent)
// Parameters:
// EInventoryType                 AllowedType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_UnacceptedInventoryTypeWidget::BP_OnSetAcceptedType(EInventoryType AllowedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_UnacceptedInventoryTypeWidget.BP_OnSetAcceptedType");

	UDH_UnacceptedInventoryTypeWidget_BP_OnSetAcceptedType_Params params;
	params.AllowedType = AllowedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_UseSpellCastingHintWidget.OnSelectedInventoryViewChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_UseSpellCastingHintWidget::OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_UseSpellCastingHintWidget.OnSelectedInventoryViewChanged");

	UDH_UseSpellCastingHintWidget_OnSelectedInventoryViewChanged_Params params;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_UseSpellCastingHintWidget.BP_IsBoneCharm
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADH_Inventory*           Inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_UseSpellCastingHintWidget::BP_IsBoneCharm(class ADH_Inventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_UseSpellCastingHintWidget.BP_IsBoneCharm");

	UDH_UseSpellCastingHintWidget_BP_IsBoneCharm_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_VersionWidget.GetVersionText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDH_VersionWidget::GetVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VersionWidget.GetVersionText");

	UDH_VersionWidget_GetVersionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHungerUI.DH_VivoxErrorItemWidget.BP_OnErrorSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLocalizedText                (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  InRawError                     (Parm, ZeroConstructor)

void UDH_VivoxErrorItemWidget::BP_OnErrorSet(const struct FText& InLocalizedText, const class FString& InRawError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VivoxErrorItemWidget.BP_OnErrorSet");

	UDH_VivoxErrorItemWidget_BP_OnErrorSet_Params params;
	params.InLocalizedText = InLocalizedText;
	params.InRawError = InRawError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VivoxErrorWidget.OnVivoxErrorsUpdated
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_VivoxError>  Errors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_VivoxErrorWidget::OnVivoxErrorsUpdated(TArray<struct FDH_VivoxError> Errors)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VivoxErrorWidget.OnVivoxErrorsUpdated");

	UDH_VivoxErrorWidget_OnVivoxErrorsUpdated_Params params;
	params.Errors = Errors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VivoxErrorWidget.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_VivoxErrorItemWidget* CreatedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_VivoxErrorWidget::BP_OnItemCreated(class UDH_VivoxErrorItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VivoxErrorWidget.BP_OnItemCreated");

	UDH_VivoxErrorWidget_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPEchoTestWidget.OnVivoxShowEchoTest
// (Final, Native, Private)

void UDH_VOIPEchoTestWidget::OnVivoxShowEchoTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPEchoTestWidget.OnVivoxShowEchoTest");

	UDH_VOIPEchoTestWidget_OnVivoxShowEchoTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPEchoTestWidget.OnVivoxHideEchoTest
// (Final, Native, Private)

void UDH_VOIPEchoTestWidget::OnVivoxHideEchoTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPEchoTestWidget.OnVivoxHideEchoTest");

	UDH_VOIPEchoTestWidget_OnVivoxHideEchoTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPEchoTestWidget.BP_UpdateAudioEnergyBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          AudioEnergy                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_VOIPEchoTestWidget::BP_UpdateAudioEnergyBar(float AudioEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPEchoTestWidget.BP_UpdateAudioEnergyBar");

	UDH_VOIPEchoTestWidget_BP_UpdateAudioEnergyBar_Params params;
	params.AudioEnergy = AudioEnergy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsButtonWidget.OnBaseButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        Button                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_VOIPProblemsButtonWidget::OnBaseButtonClicked(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsButtonWidget.OnBaseButtonClicked");

	UDH_VOIPProblemsButtonWidget_OnBaseButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsEOSButtonWidget.OnOnlinePartyMembersChanged
// (Final, Native, Protected)

void UDH_VOIPProblemsEOSButtonWidget::OnOnlinePartyMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsEOSButtonWidget.OnOnlinePartyMembersChanged");

	UDH_VOIPProblemsEOSButtonWidget_OnOnlinePartyMembersChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsWidget.OnStressTestCheckBoxChanged
// (Final, Native, Private)
// Parameters:
// bool                           bChecked                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_VOIPProblemsWidget::OnStressTestCheckBoxChanged(bool bChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsWidget.OnStressTestCheckBoxChanged");

	UDH_VOIPProblemsWidget_OnStressTestCheckBoxChanged_Params params;
	params.bChecked = bChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsWidget.OnStillHavingVOIPIssuesButtonClicked
// (Final, Native, Private)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_VOIPProblemsWidget::OnStillHavingVOIPIssuesButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsWidget.OnStillHavingVOIPIssuesButtonClicked");

	UDH_VOIPProblemsWidget_OnStillHavingVOIPIssuesButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsWidget.OnActionButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UDH_ButtonWidget*        InButton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_VOIPProblemsWidget::OnActionButtonClicked(class UDH_ButtonWidget* InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsWidget.OnActionButtonClicked");

	UDH_VOIPProblemsWidget_OnActionButtonClicked_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsEOSWidget.OnOnlineSessionJoinSessionComplete
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_VOIPProblemsEOSWidget::OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsEOSWidget.OnOnlineSessionJoinSessionComplete");

	UDH_VOIPProblemsEOSWidget_OnOnlineSessionJoinSessionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnVivoxLoggedIn
// (Final, Native, Private)

void UDH_VOIPProblemsVivoxWidget::OnVivoxLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnVivoxLoggedIn");

	UDH_VOIPProblemsVivoxWidget_OnVivoxLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnStartupVOIPIndicatorFinished
// (Final, Native, Private)

void UDH_VOIPProblemsVivoxWidget::OnStartupVOIPIndicatorFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnStartupVOIPIndicatorFinished");

	UDH_VOIPProblemsVivoxWidget_OnStartupVOIPIndicatorFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnShutDownVOIPIndicatorFinished
// (Final, Native, Private)

void UDH_VOIPProblemsVivoxWidget::OnShutDownVOIPIndicatorFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnShutDownVOIPIndicatorFinished");

	UDH_VOIPProblemsVivoxWidget_OnShutDownVOIPIndicatorFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_WorkbenchInventoryWidget.SetRepairComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_WorkbenchRepairComponent* InRepairComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_WorkbenchInventoryWidget::SetRepairComponent(class UDH_WorkbenchRepairComponent* InRepairComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_WorkbenchInventoryWidget.SetRepairComponent");

	UDH_WorkbenchInventoryWidget_SetRepairComponent_Params params;
	params.InRepairComponent = InRepairComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHungerUI.DH_WorkbenchInventoryWidget.GetRepairComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_WorkbenchRepairComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_WorkbenchRepairComponent* UDH_WorkbenchInventoryWidget::GetRepairComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerUI.DH_WorkbenchInventoryWidget.GetRepairComponent");

	UDH_WorkbenchInventoryWidget_GetRepairComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
