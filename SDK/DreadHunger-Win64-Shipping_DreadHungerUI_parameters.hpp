                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHungerUI_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DreadHungerUI.DH_VisibilityWidget.Show
struct UDH_VisibilityWidget_Show_Params
{
};

// DelegateFunction DreadHungerUI.DH_VisibilityWidget.OnVisibilityWidgetHiddenSignature__DelegateSignature
struct UDH_VisibilityWidget_OnVisibilityWidgetHiddenSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.OnVisibilityTagsChanged
struct UDH_VisibilityWidget_OnVisibilityTagsChanged_Params
{
	class UDH_UIVisibilityTagHandler*                  TagHandler;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_VisibilityWidget.OnShown
struct UDH_VisibilityWidget_OnShown_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.OnShow
struct UDH_VisibilityWidget_OnShow_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.OnHide
struct UDH_VisibilityWidget_OnHide_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.OnHidden
struct UDH_VisibilityWidget_OnHidden_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.IsHiding
struct UDH_VisibilityWidget_IsHiding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_VisibilityWidget.InstantShow
struct UDH_VisibilityWidget_InstantShow_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.InstantHide
struct UDH_VisibilityWidget_InstantHide_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.Hide
struct UDH_VisibilityWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.BP_OnShown
struct UDH_VisibilityWidget_BP_OnShown_Params
{
};

// Function DreadHungerUI.DH_VisibilityWidget.BP_OnHidden
struct UDH_VisibilityWidget_BP_OnHidden_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.VecToAngle
struct UDH_RadialMenuBaseWidget_VecToAngle_Params
{
	struct FVector2D                                   InVec;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.UpdateSelectedIndex
struct UDH_RadialMenuBaseWidget_UpdateSelectedIndex_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.UpdateMouseCursor
struct UDH_RadialMenuBaseWidget_UpdateMouseCursor_Params
{
	struct FVector2D                                   InCursorPosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.SetCursorPosition
struct UDH_RadialMenuBaseWidget_SetCursorPosition_Params
{
	struct FVector2D                                   InCursorCenter;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.SetCanShow
struct UDH_RadialMenuBaseWidget_SetCanShow_Params
{
	bool                                               bInCanShow;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.PopulateOptions
struct UDH_RadialMenuBaseWidget_PopulateOptions_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.PlaySelectedSound
struct UDH_RadialMenuBaseWidget_PlaySelectedSound_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.OnCommittedOptionFinishedAnimations
struct UDH_RadialMenuBaseWidget_OnCommittedOptionFinishedAnimations_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.IsSelectedIndex
struct UDH_RadialMenuBaseWidget_IsSelectedIndex_Params
{
	struct FFloatRange                                 SegmentAngles;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MouseAngle;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetShowAnimation
struct UDH_RadialMenuBaseWidget_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSelectedIndexFromMouseAngle
struct UDH_RadialMenuBaseWidget_GetSelectedIndexFromMouseAngle_Params
{
	float                                              MouseAngle;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSelectedIndex
struct UDH_RadialMenuBaseWidget_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetSegmentAngles
struct UDH_RadialMenuBaseWidget_GetSegmentAngles_Params
{
	int                                                NumberOfSegments;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationalOffset;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFloatRange>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetOptionsCanvas
struct UDH_RadialMenuBaseWidget_GetOptionsCanvas_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetOptionPositions
struct UDH_RadialMenuBaseWidget_GetOptionPositions_Params
{
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfOptions;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDH_RadialOptionPosition>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetNumberOfVisibleWidgets
struct UDH_RadialMenuBaseWidget_GetNumberOfVisibleWidgets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetMouseSelectMode
struct UDH_RadialMenuBaseWidget_GetMouseSelectMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetMouseAngle
struct UDH_RadialMenuBaseWidget_GetMouseAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCursorPosition
struct UDH_RadialMenuBaseWidget_GetCursorPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCenterAngle
struct UDH_RadialMenuBaseWidget_GetCenterAngle_Params
{
	float                                              LowerAngle;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpperAngle;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.GetCanShow
struct UDH_RadialMenuBaseWidget_GetCanShow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.DoSelectedAction
struct UDH_RadialMenuBaseWidget_DoSelectedAction_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.CreateButtons
struct UDH_RadialMenuBaseWidget_CreateButtons_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnOptionSetVisible
struct UDH_RadialMenuBaseWidget_BP_OnOptionSetVisible_Params
{
	int                                                OptionIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnOptionSetHidden
struct UDH_RadialMenuBaseWidget_BP_OnOptionSetHidden_Params
{
	int                                                OptionIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnGetNumberOfOptions
struct UDH_RadialMenuBaseWidget_BP_OnGetNumberOfOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnDoSelectedAction
struct UDH_RadialMenuBaseWidget_BP_OnDoSelectedAction_Params
{
};

// Function DreadHungerUI.DH_RadialMenuBaseWidget.BP_OnCanUseRadial
struct UDH_RadialMenuBaseWidget_BP_OnCanUseRadial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.SetValue
struct UDH_AttributeViewWidget_SetValue_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.SetTexture
struct UDH_AttributeViewWidget_SetTexture_Params
{
	class UTexture2D*                                  InIconTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.SetRateOfChange
struct UDH_AttributeViewWidget_SetRateOfChange_Params
{
	float                                              InRate;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.SetMaxRateOfChange
struct UDH_AttributeViewWidget_SetMaxRateOfChange_Params
{
	float                                              InMaxRate;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.PlayPopAnimation
struct UDH_AttributeViewWidget_PlayPopAnimation_Params
{
};

// Function DreadHungerUI.DH_AttributeViewWidget.OnCircularFillFillPercentChanged
struct UDH_AttributeViewWidget_OnCircularFillFillPercentChanged_Params
{
};

// DelegateFunction DreadHungerUI.DH_AttributeViewWidget.OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature
struct UDH_AttributeViewWidget_OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature_Params
{
	class UDH_AttributeViewWidget*                     ViewWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.Init
struct UDH_AttributeViewWidget_Init_Params
{
	class UTexture2D*                                  InIconTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.GetMaxRateOfChange
struct UDH_AttributeViewWidget_GetMaxRateOfChange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.GetCritical
struct UDH_AttributeViewWidget_GetCritical_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_AttributeViewWidget.GetCircularFill
struct UDH_AttributeViewWidget_GetCircularFill_Params
{
	class UDH_CircularFillWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_AutoSearchForLobbiesButtonWidget.AutoSearch
struct UDH_AutoSearchForLobbiesButtonWidget_AutoSearch_Params
{
};

// Function DreadHungerUI.DH_LootContainerBaseWidget.SetOwningCraftingComponent
struct UDH_LootContainerBaseWidget_SetOwningCraftingComponent_Params
{
	class UDH_CraftingComponent*                       InOwningCraftingComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LootContainerBaseWidget.SetHeatSourceComponent
struct UDH_LootContainerBaseWidget_SetHeatSourceComponent_Params
{
	class UDH_HeatSourceComponent*                     InHeatSourceComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LootContainerBaseWidget.OnTransactingInventoryChanged
struct UDH_LootContainerBaseWidget_OnTransactingInventoryChanged_Params
{
	class UDH_InventoryTransactionComponent*           InInventoryTransactionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LootContainerBaseWidget.GetOwningCraftingComponent
struct UDH_LootContainerBaseWidget_GetOwningCraftingComponent_Params
{
	class UDH_CraftingComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LootContainerBaseWidget.GetHeatSourceComponent
struct UDH_LootContainerBaseWidget_GetHeatSourceComponent_Params
{
	class UDH_HeatSourceComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingStationWidget.OnViewHidden
struct UDH_CraftingStationWidget_OnViewHidden_Params
{
};

// Function DreadHungerUI.DH_CraftingStationWidget.OnCraftingStationViewClose
struct UDH_CraftingStationWidget_OnCraftingStationViewClose_Params
{
};

// Function DreadHungerUI.DH_CraftingStationWidget.OnCraftingComponentActivated
struct UDH_CraftingStationWidget_OnCraftingComponentActivated_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingStationWidget.OnCraftableRecipesChanged
struct UDH_CraftingStationWidget_OnCraftableRecipesChanged_Params
{
};

// Function DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnLobbiesRestrictionWidgetRestrictedChanged
struct UDH_BrowseExpeditionsButtonWidget_OnLobbiesRestrictionWidgetRestrictedChanged_Params
{
	bool                                               bRestricted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature
struct UDH_BrowseExpeditionsButtonWidget_OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_BrowseExpeditionsButtonWidget.OnBaseButtonClicked
struct UDH_BrowseExpeditionsButtonWidget_OnBaseButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ButtonWidget.SetHoverBrush
struct UDH_ButtonWidget_SetHoverBrush_Params
{
	struct FSlateBrush                                 InHoverBrush;                                             // (Parm)
};

// DelegateFunction DreadHungerUI.DH_ButtonWidget.OnButtonControllerHoveredSignature__DelegateSignature
struct UDH_ButtonWidget_OnButtonControllerHoveredSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_ButtonWidget.Clicked
struct UDH_ButtonWidget_Clicked_Params
{
};

// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetMinWidth
struct UDH_ButtonWidget_BP_OnSetMinWidth_Params
{
	float                                              InMinWidth;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverOpacity
struct UDH_ButtonWidget_BP_OnSetHoverOpacity_Params
{
	float                                              InOpacity;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverBrushVerticalAlignment
struct UDH_ButtonWidget_BP_OnSetHoverBrushVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ButtonWidget.BP_OnSetHoverBrush
struct UDH_ButtonWidget_BP_OnSetHoverBrush_Params
{
	struct FSlateBrush                                 InHoverBrush;                                             // (ConstParm, Parm)
};

// Function DreadHungerUI.DH_CheckBoxWidget.SetChecked
struct UDH_CheckBoxWidget_SetChecked_Params
{
	bool                                               bInChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHungerUI.DH_CheckBoxWidget.OnCheckBoxWidgetStateChanged__DelegateSignature
struct UDH_CheckBoxWidget_OnCheckBoxWidgetStateChanged__DelegateSignature_Params
{
	bool                                               bChecked;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CheckBoxWidget.OnCheckBoxComponentStateChanged
struct UDH_CheckBoxWidget_OnCheckBoxComponentStateChanged_Params
{
	bool                                               bInIsChecked;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CheckBoxWidget.IsChecked
struct UDH_CheckBoxWidget_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CheckBoxWidget.GetBaseCheckBox
struct UDH_CheckBoxWidget_GetBaseCheckBox_Params
{
	class UCheckBox*                                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.Update
struct UDH_CircularFillWidget_Update_Params
{
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetReverseReserved
struct UDH_CircularFillWidget_SetReverseReserved_Params
{
	bool                                               bInReversedReserve;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetReservedTint
struct UDH_CircularFillWidget_SetReservedTint_Params
{
	struct FLinearColor                                Tint;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetReservedPercent
struct UDH_CircularFillWidget_SetReservedPercent_Params
{
	float                                              ReservedPct;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSkipInterp;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetMIDParentMaterial
struct UDH_CircularFillWidget_SetMIDParentMaterial_Params
{
	class UMaterialInterface*                          InMIDParentMaterial;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedReservedPercent
struct UDH_CircularFillWidget_SetInterpolatedReservedPercent_Params
{
	float                                              InterpolatedReservedPct;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedInnerFillPercent
struct UDH_CircularFillWidget_SetInterpolatedInnerFillPercent_Params
{
	float                                              InterpolatedInnerFillPct;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedFillPercent
struct UDH_CircularFillWidget_SetInterpolatedFillPercent_Params
{
	float                                              InterpolatedFillPct;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetInterpolatedDesiredPercent
struct UDH_CircularFillWidget_SetInterpolatedDesiredPercent_Params
{
	float                                              InterpolatedDesiredPct;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetInnerFillPercent
struct UDH_CircularFillWidget_SetInnerFillPercent_Params
{
	float                                              InnerFillPct;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSkipInterp;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetFillPercent
struct UDH_CircularFillWidget_SetFillPercent_Params
{
	float                                              FillPct;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSkipInterp;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetDesiredPercent
struct UDH_CircularFillWidget_SetDesiredPercent_Params
{
	float                                              DesiredPct;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSkipInterp;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.SetBaseTint
struct UDH_CircularFillWidget_SetBaseTint_Params
{
	struct FLinearColor                                Tint;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// DelegateFunction DreadHungerUI.DH_CircularFillWidget.OnCircularFillFillPercentChangedSignature__DelegateSignature
struct UDH_CircularFillWidget_OnCircularFillFillPercentChangedSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_CircularFillWidget.GetFillPercent
struct UDH_CircularFillWidget_GetFillPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateReservedPct
struct UDH_CircularFillWidget_DesignTimeAlternateReservedPct_Params
{
};

// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateInnerFillPct
struct UDH_CircularFillWidget_DesignTimeAlternateInnerFillPct_Params
{
};

// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateFillPct
struct UDH_CircularFillWidget_DesignTimeAlternateFillPct_Params
{
};

// Function DreadHungerUI.DH_CircularFillWidget.DesignTimeAlternateDesiredPct
struct UDH_CircularFillWidget_DesignTimeAlternateDesiredPct_Params
{
};

// DelegateFunction DreadHungerUI.DH_CloseButtonWidget.OnCloseButtonWidgetClickedSignature__DelegateSignature
struct UDH_CloseButtonWidget_OnCloseButtonWidgetClickedSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_CloseButtonWidget.OnButtonClicked
struct UDH_CloseButtonWidget_OnButtonClicked_Params
{
};

// Function DreadHungerUI.DH_CompendiumItemAvatar.SetShouldRender
struct ADH_CompendiumItemAvatar_SetShouldRender_Params
{
	bool                                               bShouldRender;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CompendiumItemAvatar.ResetMeshOrientation
struct ADH_CompendiumItemAvatar_ResetMeshOrientation_Params
{
};

// Function DreadHungerUI.DH_CompendiumItemButtonViewWidget.OnBaseButtonClicked
struct UDH_CompendiumItemButtonViewWidget_OnBaseButtonClicked_Params
{
};

// DelegateFunction DreadHungerUI.DH_CompendiumItemButtonViewWidget.CompendiumItemButtonViewWidgetSignature__DelegateSignature
struct UDH_CompendiumItemButtonViewWidget_CompendiumItemButtonViewWidgetSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_CompendiumItemButtonWidget.OnViewClicked
struct UDH_CompendiumItemButtonWidget_OnViewClicked_Params
{
};

// Function DreadHungerUI.DH_CompendiumTopicButtonViewWidget.OnBaseButtonClicked
struct UDH_CompendiumTopicButtonViewWidget_OnBaseButtonClicked_Params
{
};

// DelegateFunction DreadHungerUI.DH_CompendiumTopicButtonViewWidget.CompendiumTopicButtonViewWidgetSignature__DelegateSignature
struct UDH_CompendiumTopicButtonViewWidget_CompendiumTopicButtonViewWidgetSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_CompendiumTopicButtonWidget.OnViewClicked
struct UDH_CompendiumTopicButtonWidget_OnViewClicked_Params
{
};

// Function DreadHungerUI.DH_CompendiumWidget.OnRichTextHyperlinkClicked
struct UDH_CompendiumWidget_OnRichTextHyperlinkClicked_Params
{
	class FString                                      ItemId;                                                   // (Parm, ZeroConstructor)
};

// Function DreadHungerUI.DH_ConfirmItemPurchaseOverlayWidget.OnItemPurchased
struct UDH_ConfirmItemPurchaseOverlayWidget_OnItemPurchased_Params
{
	TArray<class FString>                              ItemCodes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_ConnectToIPWidget.StartGame
struct UDH_ConnectToIPWidget_StartGame_Params
{
	TArray<unsigned char>                              IPAddress;                                                // (ConstParm, Parm, ZeroConstructor)
	int                                                Port;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ConnectToIPWidget.GetIPAddress
struct UDH_ConnectToIPWidget_GetIPAddress_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Out_IPAddress;                                            // (Parm, OutParm, ZeroConstructor)
	int                                                Out_Port;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ConnectToIPWidget.BP_ShowConnectToIPAddressWidget
struct UDH_ConnectToIPWidget_BP_ShowConnectToIPAddressWidget_Params
{
};

// Function DreadHungerUI.DH_CosmeticFilterButton.OnFilterButtonClicked
struct UDH_CosmeticFilterButton_OnFilterButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemListWidget.ToggleFilter
struct UDH_CosmeticItemListWidget_ToggleFilter_Params
{
	unsigned char                                      InFilter;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemListWidget.Show
struct UDH_CosmeticItemListWidget_Show_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemListWidget.Hide
struct UDH_CosmeticItemListWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemListWidget.GenerateAvailableListObjects
struct UDH_CosmeticItemListWidget_GenerateAvailableListObjects_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemTransferWidget.TryShow
struct UDH_CosmeticItemTransferWidget_TryShow_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemViewWidget.OnCosmeticItemMouseLeave
struct UDH_CosmeticItemViewWidget_OnCosmeticItemMouseLeave_Params
{
	class UDH_CosmeticItemBase*                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemViewWidget.OnCosmeticItemMouseEnter
struct UDH_CosmeticItemViewWidget_OnCosmeticItemMouseEnter_Params
{
	class UDH_CosmeticItemBase*                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemWidget.Toggle
struct UDH_CosmeticItemWidget_Toggle_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemWidget.Select
struct UDH_CosmeticItemWidget_Select_Params
{
	bool                                               bDragged;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemWidget.OnCosmeticItemUnequipped
struct UDH_CosmeticItemWidget_OnCosmeticItemUnequipped_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemWidget.OnCosmeticItemEquipped
struct UDH_CosmeticItemWidget_OnCosmeticItemEquipped_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemWidget.GetTooltipWidget
struct UDH_CosmeticItemWidget_GetTooltipWidget_Params
{
	class UDH_CosmeticItemTooltipWidget*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CosmeticItemWidget.Deselect
struct UDH_CosmeticItemWidget_Deselect_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemWidget.BP_OnSelected
struct UDH_CosmeticItemWidget_BP_OnSelected_Params
{
};

// Function DreadHungerUI.DH_CosmeticItemWidget.BP_OnDeselected
struct UDH_CosmeticItemWidget_BP_OnDeselected_Params
{
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.UpdateVisibility
struct UDH_CraftingInfoSubWidget_UpdateVisibility_Params
{
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.Show
struct UDH_CraftingInfoSubWidget_Show_Params
{
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.ShouldBeVisible
struct UDH_CraftingInfoSubWidget_ShouldBeVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetPreviousCraftingComponent
struct UDH_CraftingInfoSubWidget_SetPreviousCraftingComponent_Params
{
	class UDH_CraftingComponent*                       InPreviousCraftingComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCurrentInteractTarget
struct UDH_CraftingInfoSubWidget_SetCurrentInteractTarget_Params
{
	class UPrimitiveComponent*                         NewInteractTarget;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCraftingProject
struct UDH_CraftingInfoSubWidget_SetCraftingProject_Params
{
	class UDH_CraftingProject*                         InCraftingProject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.SetCraftingComponent
struct UDH_CraftingInfoSubWidget_SetCraftingComponent_Params
{
	class UDH_CraftingComponent*                       InCraftingComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnWidgetAnimationHandlerBeginShow
struct UDH_CraftingInfoSubWidget_OnWidgetAnimationHandlerBeginShow_Params
{
	class UDH_WidgetAnimationHandler*                  InAnimationHandler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCurrentInteractTargetChanged
struct UDH_CraftingInfoSubWidget_OnCurrentInteractTargetChanged_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCraftingProjectCompletedChanged
struct UDH_CraftingInfoSubWidget_OnCraftingProjectCompletedChanged_Params
{
	class UDH_CraftingProject*                         InCraftingProject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.OnCraftingProjectAbortedChanged
struct UDH_CraftingInfoSubWidget_OnCraftingProjectAbortedChanged_Params
{
	class UDH_CraftingProject*                         InCraftingProject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.Hide
struct UDH_CraftingInfoSubWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetPreviousCraftingComponent
struct UDH_CraftingInfoSubWidget_GetPreviousCraftingComponent_Params
{
	class UDH_CraftingComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCurrentInteractTarget
struct UDH_CraftingInfoSubWidget_GetCurrentInteractTarget_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCraftingProject
struct UDH_CraftingInfoSubWidget_GetCraftingProject_Params
{
	class UDH_CraftingProject*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.GetCraftingComponent
struct UDH_CraftingInfoSubWidget_GetCraftingComponent_Params
{
	class UDH_CraftingComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_OnSetVisible
struct UDH_CraftingInfoSubWidget_BP_OnSetVisible_Params
{
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_OnCurrentInteractTargetChanged
struct UDH_CraftingInfoSubWidget_BP_OnCurrentInteractTargetChanged_Params
{
	class UPrimitiveComponent*                         NewInteractTarget;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingInfoSubWidget.BP_CreateAnimationHandler
struct UDH_CraftingInfoSubWidget_BP_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeTooltipWidget.Init
struct UDH_CraftingRecipeTooltipWidget_Init_Params
{
	class UDH_CraftingRecipe*                          InCraftingRecipe;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeTooltipWidget.BP_OnInit
struct UDH_CraftingRecipeTooltipWidget_BP_OnInit_Params
{
	class UDH_CraftingRecipe*                          InCraftingRecipe;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.SetFocused
struct UDH_CraftingRecipeWidget_SetFocused_Params
{
	bool                                               bInFocused;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.OnInventoryManagerSlotContentsChanged
struct UDH_CraftingRecipeWidget_OnInventoryManagerSlotContentsChanged_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        InModifiedSlots;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.OnCraftingProjectCompletedChanged
struct UDH_CraftingRecipeWidget_OnCraftingProjectCompletedChanged_Params
{
	class UDH_CraftingProject*                         InCraftingProject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.OnCraftingComponentLimitedRecipeCrafted
struct UDH_CraftingRecipeWidget_OnCraftingComponentLimitedRecipeCrafted_Params
{
	class UDH_CraftingComponent*                       InCraftingComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.IsCraftable
struct UDH_CraftingRecipeWidget_IsCraftable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.Init
struct UDH_CraftingRecipeWidget_Init_Params
{
	class UDH_CraftingRecipe*                          InAssociatedRecipe;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingComponent*                       InCraftingComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.GetRecipeTooltip
struct UDH_CraftingRecipeWidget_GetRecipeTooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.GetAssociatedRecipe
struct UDH_CraftingRecipeWidget_GetAssociatedRecipe_Params
{
	class UDH_CraftingRecipe*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.Craft
struct UDH_CraftingRecipeWidget_Craft_Params
{
};

// Function DreadHungerUI.DH_CraftingRecipeWidget.BP_OnPlayReadyAnimation
struct UDH_CraftingRecipeWidget_BP_OnPlayReadyAnimation_Params
{
};

// DelegateFunction DreadHungerUI.DH_CraftingStationViewWidget.OnCraftingStationViewCloseSignature__DelegateSignature
struct UDH_CraftingStationViewWidget_OnCraftingStationViewCloseSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_CraftingStationViewWidget.OnCloseButtonClicked
struct UDH_CraftingStationViewWidget_OnCloseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_CustomGameSettingWidget.OnSliderValueChanged
struct UDH_CustomGameSettingWidget_OnSliderValueChanged_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CustomGameSettingWidget.OnCheckboxStateChanged
struct UDH_CustomGameSettingWidget_OnCheckboxStateChanged_Params
{
	bool                                               IsChecked;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_CustomGameSettingWidget.GetSettingTooltip
struct UDH_CustomGameSettingWidget_GetSettingTooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHungerUI.DH_CustomGameSettingWidget.CustomGameSettingChangedSignature__DelegateSignature
struct UDH_CustomGameSettingWidget_CustomGameSettingChangedSignature__DelegateSignature_Params
{
	ECustomGameSetting                                 Setting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DaysUntilBlizzardWidget.UpdateAttributeView
struct UDH_DaysUntilBlizzardWidget_UpdateAttributeView_Params
{
};

// Function DreadHungerUI.DH_DaysUntilBlizzardWidget.OnDaysUntilBlizzardChanged
struct UDH_DaysUntilBlizzardWidget_OnDaysUntilBlizzardChanged_Params
{
	class ADH_GameState*                               InGameState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DaysUntilBlizzardWidget.GetShowAnimation
struct UDH_DaysUntilBlizzardWidget_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_DebugCheckBoxWidget.OnCheckStateChanged
struct UDH_DebugCheckBoxWidget_OnCheckStateChanged_Params
{
	bool                                               bInChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DebugTextInputWidget.OnTextInputCommitted
struct UDH_DebugTextInputWidget_OnTextInputCommitted_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           InCommitMethod;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DebugWidgetsListWidget.OnAddDebugWidget
struct UDH_DebugWidgetsListWidget_OnAddDebugWidget_Params
{
	class UUserWidget*                                 InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.SetStackCount
struct UDH_DraggedInventoryWidget_SetStackCount_Params
{
	struct FInventorySlotContents                      InSlotContents;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.SetIcon
struct UDH_DraggedInventoryWidget_SetIcon_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                InColorAndOpacity;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.OnTransactingInventoryChanged
struct UDH_DraggedInventoryWidget_OnTransactingInventoryChanged_Params
{
	class UDH_InventoryTransactionComponent*           InInventoryTransactionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.OnSingleDropModifierKeyHeldChanged
struct UDH_DraggedInventoryWidget_OnSingleDropModifierKeyHeldChanged_Params
{
	class UDH_MouseDragModifiersComponent*             InMouseDragModifiersComponent;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.OnShowHotbarChanged
struct UDH_DraggedInventoryWidget_OnShowHotbarChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.OnHumanCharacterDied
struct UDH_DraggedInventoryWidget_OnHumanCharacterDied_Params
{
	class ADH_HumanCharacter*                          DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.OnDropAnimationFinished
struct UDH_DraggedInventoryWidget_OnDropAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.HideDropResultNotification
struct UDH_DraggedInventoryWidget_HideDropResultNotification_Params
{
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.GetSingleDropKeyHeld
struct UDH_DraggedInventoryWidget_GetSingleDropKeyHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_DraggedInventoryWidget.GetModifiedStackCount
struct UDH_DraggedInventoryWidget_GetModifiedStackCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_DropZoneWidget.OnFinishedDropping
struct UDH_DropZoneWidget_OnFinishedDropping_Params
{
	class UDH_DropZoneInventoryDropper*                Dropper;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PreviewAvatarWidget.OnMeshAppliedToAvatar
struct UDH_PreviewAvatarWidget_OnMeshAppliedToAvatar_Params
{
};

// Function DreadHungerUI.DH_PreviewAvatarWidget.OnHideMeshLoadingAnimationFinished
struct UDH_PreviewAvatarWidget_OnHideMeshLoadingAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_PreviewAvatarWidget.OnAvatarCreated
struct UDH_PreviewAvatarWidget_OnAvatarCreated_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_CosmeticPreviewAvatar*                   Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_EntitlementsShopWidget.OnReceivedEntitlementPrices
struct UDH_EntitlementsShopWidget_OnReceivedEntitlementPrices_Params
{
	struct FDH_PriceDataWrapper                        PriceData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_EntitlementsShopWidget.OnPreviewCosmeticsChanged
struct UDH_EntitlementsShopWidget_OnPreviewCosmeticsChanged_Params
{
	TArray<class UDH_CosmeticItemBase*>                ItemList;                                                 // (ConstParm, Parm, ZeroConstructor)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_EntitlementsShopWidget.OnMerchantInteractedWith
struct UDH_EntitlementsShopWidget_OnMerchantInteractedWith_Params
{
	class ADH_Merchant*                                Merchant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_EntitlementsShopWidget.OnItemPurchased
struct UDH_EntitlementsShopWidget_OnItemPurchased_Params
{
	TArray<class FString>                              ItemCodes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_EntitlementsShopWidget.OnCheckoutButtonClicked
struct UDH_EntitlementsShopWidget_OnCheckoutButtonClicked_Params
{
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.Show
struct UDH_ErrorMessageViewWidget_Show_Params
{
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.SetTitleText
struct UDH_ErrorMessageViewWidget_SetTitleText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm)
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.SetTitleBackgroundColor
struct UDH_ErrorMessageViewWidget_SetTitleBackgroundColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.SetBodyBackgroundColor
struct UDH_ErrorMessageViewWidget_SetBodyBackgroundColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.OnHidden
struct UDH_ErrorMessageViewWidget_OnHidden_Params
{
};

// DelegateFunction DreadHungerUI.DH_ErrorMessageViewWidget.OnErrorMessageViewHiddenSignature__DelegateSignature
struct UDH_ErrorMessageViewWidget_OnErrorMessageViewHiddenSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.Hide
struct UDH_ErrorMessageViewWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnShow
struct UDH_ErrorMessageViewWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetTitleText
struct UDH_ErrorMessageViewWidget_BP_OnSetTitleText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetTitleBackgroundColor
struct UDH_ErrorMessageViewWidget_BP_OnSetTitleBackgroundColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnSetBodyBackgroundColor
struct UDH_ErrorMessageViewWidget_BP_OnSetBodyBackgroundColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ErrorMessageViewWidget.BP_OnHide
struct UDH_ErrorMessageViewWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_ErrorsWidget.OnVivoxErrorsUpdated
struct UDH_ErrorsWidget_OnVivoxErrorsUpdated_Params
{
	TArray<struct FDH_VivoxError>                      Errors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_ErrorsWidget.OnOnlineErrorsUpdated
struct UDH_ErrorsWidget_OnOnlineErrorsUpdated_Params
{
	TArray<struct FDH_OnlineError>                     Errors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_ErrorsWidget.OnMouseCursorVisibilityChanged
struct UDH_ErrorsWidget_OnMouseCursorVisibilityChanged_Params
{
	bool                                               bCursorVisible;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ErrorWidget.OnHidden
struct UDH_ErrorWidget_OnHidden_Params
{
};

// Function DreadHungerUI.DH_ErrorWidget.BP_OnShow
struct UDH_ErrorWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_ErrorWidget.BP_OnItemsEmptied
struct UDH_ErrorWidget_BP_OnItemsEmptied_Params
{
};

// Function DreadHungerUI.DH_ErrorWidget.BP_OnHide
struct UDH_ErrorWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.UpdateDisconnectButtonVisibility
struct UDH_EscapeMenuQuitDialogWidget_UpdateDisconnectButtonVisibility_Params
{
};

// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnRestartTutorialButtonClicked
struct UDH_EscapeMenuQuitDialogWidget_OnRestartTutorialButtonClicked_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnQuitToDesktopButtonClicked
struct UDH_EscapeMenuQuitDialogWidget_OnQuitToDesktopButtonClicked_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnOnlinePartyMembersChanged
struct UDH_EscapeMenuQuitDialogWidget_OnOnlinePartyMembersChanged_Params
{
};

// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnLoginFinished
struct UDH_EscapeMenuQuitDialogWidget_OnLoginFinished_Params
{
};

// DelegateFunction DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature
struct UDH_EscapeMenuQuitDialogWidget_OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_EscapeMenuQuitDialogWidget.OnDisconnectButtonClicked
struct UDH_EscapeMenuQuitDialogWidget_OnDisconnectButtonClicked_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_EscapeMenuWidget.ShowDebugTester
struct UDH_EscapeMenuWidget_ShowDebugTester_Params
{
};

// Function DreadHungerUI.DH_EscapeMenuWidget.OnSettingsButtonClicked
struct UDH_EscapeMenuWidget_OnSettingsButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_EscapeMenuWidget.OnQuitButtonClicked
struct UDH_EscapeMenuWidget_OnQuitButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_EscapeMenuWidget.OnEscapeMenuQuitDialogWidgetHidden
struct UDH_EscapeMenuWidget_OnEscapeMenuQuitDialogWidgetHidden_Params
{
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.SetMapData
struct UDH_ExpeditionSettingsWidget_SetMapData_Params
{
	class UDH_MapData*                                 InMapData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnThrallValueChanged
struct UDH_ExpeditionSettingsWidget_OnThrallValueChanged_Params
{
	ECustomGameSetting                                 Setting;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSettingsValueChanged
struct UDH_ExpeditionSettingsWidget_OnSettingsValueChanged_Params
{
	ECustomGameSetting                                 Setting;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSessionDestroyed
struct UDH_ExpeditionSettingsWidget_OnSessionDestroyed_Params
{
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnSandboxModeChanged
struct UDH_ExpeditionSettingsWidget_OnSandboxModeChanged_Params
{
	bool                                               bInChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnPublicCheckboxChanged
struct UDH_ExpeditionSettingsWidget_OnPublicCheckboxChanged_Params
{
	bool                                               bInChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnDebugSetDesiredNumOfPlayers
struct UDH_ExpeditionSettingsWidget_OnDebugSetDesiredNumOfPlayers_Params
{
	int                                                NumOfPlayers;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnDebugAdvertiseButtonClicked
struct UDH_ExpeditionSettingsWidget_OnDebugAdvertiseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnCrewCountSliderChanged
struct UDH_ExpeditionSettingsWidget_OnCrewCountSliderChanged_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnCancelButtonClicked
struct UDH_ExpeditionSettingsWidget_OnCancelButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.OnAdvertiseButtonClicked
struct UDH_ExpeditionSettingsWidget_OnAdvertiseButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetThrallCountSetting
struct UDH_ExpeditionSettingsWidget_GetThrallCountSetting_Params
{
	class UDH_CustomGameSettingWidget*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetMapData
struct UDH_ExpeditionSettingsWidget_GetMapData_Params
{
	class UDH_MapData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ExpeditionSettingsWidget.GetCrewCountSetting
struct UDH_ExpeditionSettingsWidget_GetCrewCountSetting_Params
{
	class UDH_CustomGameSettingWidget*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_FindingLobbiesWidget.OnHidden
struct UDH_FindingLobbiesWidget_OnHidden_Params
{
};

// Function DreadHungerUI.DH_FindingLobbiesWidget.OnAutoSearchChanged
struct UDH_FindingLobbiesWidget_OnAutoSearchChanged_Params
{
	bool                                               bAutoSearching;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_FindingLobbiesWidget.Hide
struct UDH_FindingLobbiesWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_FindingLobbiesWidget.BP_OnShow
struct UDH_FindingLobbiesWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_FindingLobbiesWidget.BP_OnHide
struct UDH_FindingLobbiesWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_FirstTimeCannibalWidget.OnFirstTimeCannibal
struct UDH_FirstTimeCannibalWidget_OnFirstTimeCannibal_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_FirstTimeCannibalWidget.GetShowAnimation
struct UDH_FirstTimeCannibalWidget_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_FuelGaugeWidget.OnFailedToCraft
struct UDH_FuelGaugeWidget_OnFailedToCraft_Params
{
	class UDH_CraftingComponent*                       InCraftingComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingRecipe*                          InCraftingProject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ECraftingFailReason                                FailReason;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_FuelGaugeWidget.Init
struct UDH_FuelGaugeWidget_Init_Params
{
	class UDH_HeatSourceComponent*                     InHeatSourceComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_FuelGaugeWidget.GetHeatSourceComponent
struct UDH_FuelGaugeWidget_GetHeatSourceComponent_Params
{
	class UDH_HeatSourceComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_FuelGaugeWidget.GetBaseToolTipWidget
struct UDH_FuelGaugeWidget_GetBaseToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_GameVictoryWidget.OnDisplayMatchEndMessage
struct UDH_GameVictoryWidget_OnDisplayMatchEndMessage_Params
{
	EPlayerTeam                                        InWinningTeam;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInWinner;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_GenericTooltipWidget.Init
struct UDH_GenericTooltipWidget_Init_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm)
	EDH_FontSizes                                      InFontSize;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_GiveUpHintWidget.Show
struct UDH_GiveUpHintWidget_Show_Params
{
};

// Function DreadHungerUI.DH_GiveUpHintWidget.Hide
struct UDH_GiveUpHintWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_GiveUpHintWidget.BP_CreateAnimationHandler
struct UDH_GiveUpHintWidget_BP_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.Show
struct UDH_GiveUpHoldTimerWidget_Show_Params
{
};

// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.SetSuicideComponent
struct UDH_GiveUpHoldTimerWidget_SetSuicideComponent_Params
{
	class UDH_SuicideComponent*                        InSuicideComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.Hide
struct UDH_GiveUpHoldTimerWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.GetSuicideComponent
struct UDH_GiveUpHoldTimerWidget_GetSuicideComponent_Params
{
	class UDH_SuicideComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_GiveUpHoldTimerWidget.BP_CreateAnimationHandler
struct UDH_GiveUpHoldTimerWidget_BP_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellsChanged
struct UDH_GrimoireSpellsPage_OnSpellsChanged_Params
{
};

// Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellDragEnd
struct UDH_GrimoireSpellsPage_OnSpellDragEnd_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_GrimoireSpellsPage.OnSpellDragBegin
struct UDH_GrimoireSpellsPage_OnSpellDragBegin_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_GrimoireWidget.ShowGrimoirePage
struct UDH_GrimoireWidget_ShowGrimoirePage_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_GrimoireWidget.HandleGrimoireClosure
struct UDH_GrimoireWidget_HandleGrimoireClosure_Params
{
	struct FKey                                        InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDH_GameViewportClient*                      InViewportClient;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_HarvestingCraftingRecipeWidget.OnCraftingProjectAbortedChanged
struct UDH_HarvestingCraftingRecipeWidget_OnCraftingProjectAbortedChanged_Params
{
	class UDH_CraftingProject*                         InCraftingProject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HarvestingCraftingRecipeWidget.OnCraftingComponentCurrentProjectsChanged
struct UDH_HarvestingCraftingRecipeWidget_OnCraftingComponentCurrentProjectsChanged_Params
{
	class UDH_CraftingComponent*                       InCraftingComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.OnSuccessfulTransfer
struct UDH_InventoryContainerWidget_OnSuccessfulTransfer_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 InSourceInventory;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.OnSuccessfulQuickTransfer
struct UDH_InventoryContainerWidget_OnSuccessfulQuickTransfer_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 InTargetInventory;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.OnInventoryManagerSlotCountChanged
struct UDH_InventoryContainerWidget_OnInventoryManagerSlotCountChanged_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SlotDelta;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.OnInventoryManagerSlotContentsChanged
struct UDH_InventoryContainerWidget_OnInventoryManagerSlotContentsChanged_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        ModifiedIndices;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.OnFailedQuickTransfer
struct UDH_InventoryContainerWidget_OnFailedQuickTransfer_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 InTargetInventory;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.Init
struct UDH_InventoryContainerWidget_Init_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventoryContainerWidget.GetInventoryManager
struct UDH_InventoryContainerWidget_GetInventoryManager_Params
{
	class UDH_InventoryManager*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarContainerWidget.LockSlots
struct UDH_HotbarContainerWidget_LockSlots_Params
{
	bool                                               bLock;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IgnoreIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnTransactingInventoryChanged
struct UDH_HotbarVisibilityComponent_OnTransactingInventoryChanged_Params
{
	class UDH_InventoryTransactionComponent*           InInventoryTransactionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        InInventoryManage;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnSpiritWalkingChanged
struct UDH_HotbarVisibilityComponent_OnSpiritWalkingChanged_Params
{
	class ADH_HumanCharacter*                          InControlledHuman;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnShowHotbarChanged
struct UDH_HotbarVisibilityComponent_OnShowHotbarChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnRestingChanged
struct UDH_HotbarVisibilityComponent_OnRestingChanged_Params
{
	class ADH_HumanCharacter*                          InControlledHuman;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnInventoryContainerSlotContentsChanged
struct UDH_HotbarVisibilityComponent_OnInventoryContainerSlotContentsChanged_Params
{
	class UUserWidget*                                 InInventoryContainerWidget;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnHotbarSelectedIndexChanged
struct UDH_HotbarVisibilityComponent_OnHotbarSelectedIndexChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnCurrentInteractTargetChanged
struct UDH_HotbarVisibilityComponent_OnCurrentInteractTargetChanged_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarVisibilityComponent.OnControlledHumanChanged
struct UDH_HotbarVisibilityComponent_OnControlledHumanChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarSlotVisibilityComponent.SetAssociatedInventory
struct UDH_HotbarSlotVisibilityComponent_SetAssociatedInventory_Params
{
	class ADH_Inventory*                               NewAssociatedInventory;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarSlotVisibilityComponent.OnDurabilityChanged
struct UDH_HotbarSlotVisibilityComponent_OnDurabilityChanged_Params
{
	class ADH_Inventory*                               Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.UpdateSlotContents
struct UDH_InventorySlotWidget_UpdateSlotContents_Params
{
	struct FInventorySlotContents                      InSlotContents;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowAddedAnimationsToPlay;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.SetRow
struct UDH_InventorySlotWidget_SetRow_Params
{
	int                                                InRow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.SetPositionAlignment
struct UDH_InventorySlotWidget_SetPositionAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontal;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    InVertical;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.SetOwningContainer
struct UDH_InventorySlotWidget_SetOwningContainer_Params
{
	class UDH_InventoryContainerWidget*                InOwningContainer;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.SetColumn
struct UDH_InventorySlotWidget_SetColumn_Params
{
	int                                                InColumn;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.QuickLoot
struct UDH_InventorySlotWidget_QuickLoot_Params
{
	bool                                               bLootAll;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnUsesRemainingChanged
struct UDH_InventorySlotWidget_OnUsesRemainingChanged_Params
{
	class ADH_Inventory*                               InInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnStoredInventoryChanged
struct UDH_InventorySlotWidget_OnStoredInventoryChanged_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnPlayerThrallChanged
struct UDH_InventorySlotWidget_OnPlayerThrallChanged_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnItemPoisoned
struct UDH_InventorySlotWidget_OnItemPoisoned_Params
{
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotIndexChanged
struct UDH_InventorySlotWidget_OnInventorySlotIndexChanged_Params
{
	class ADH_Inventory*                               InInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotDragEnd
struct UDH_InventorySlotWidget_OnInventorySlotDragEnd_Params
{
	class UUserWidget*                                 DraggedSlot;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnInventorySlotDragBegin
struct UDH_InventorySlotWidget_OnInventorySlotDragBegin_Params
{
	class UUserWidget*                                 DraggedSlot;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnInventoryManagerSlotContentsChanged
struct UDH_InventorySlotWidget_OnInventoryManagerSlotContentsChanged_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        ModifiedSlots;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnDurabilityChanged
struct UDH_InventorySlotWidget_OnDurabilityChanged_Params
{
	class ADH_Inventory*                               InInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnCurrentDragDropOperationDrop
struct UDH_InventorySlotWidget_OnCurrentDragDropOperationDrop_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnCurrentDragDropOperationCancelled
struct UDH_InventorySlotWidget_OnCurrentDragDropOperationCancelled_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.OnContainerInventoryChanged
struct UDH_InventorySlotWidget_OnContainerInventoryChanged_Params
{
	class UDH_InventoryManager*                        NewInventoryManager;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        PreviousInventoryManager;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.Init
struct UDH_InventorySlotWidget_Init_Params
{
	int                                                InIndex;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.HandleHitBoxImageMouseDown
struct UDH_InventorySlotWidget_HandleHitBoxImageMouseDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetView
struct UDH_InventorySlotWidget_GetView_Params
{
	class UDH_InventorySlotViewWidget*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetTooltipWidget
struct UDH_InventorySlotWidget_GetTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetSlotIndex
struct UDH_InventorySlotWidget_GetSlotIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetRow
struct UDH_InventorySlotWidget_GetRow_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetOwningContainer
struct UDH_InventorySlotWidget_GetOwningContainer_Params
{
	class UDH_InventoryContainerWidget*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetColumn
struct UDH_InventorySlotWidget_GetColumn_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotWidget.GetAssociatedInventoryData
struct UDH_InventorySlotWidget_GetAssociatedInventoryData_Params
{
	struct FInventorySlotContents                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHungerUI.DH_InventorySlotWidget.CheckForArrival
struct UDH_InventorySlotWidget_CheckForArrival_Params
{
};

// Function DreadHungerUI.DH_HotbarSlotWidget.OnShouldShow
struct UDH_HotbarSlotWidget_OnShouldShow_Params
{
};

// Function DreadHungerUI.DH_HotbarSlotWidget.OnShouldHide
struct UDH_HotbarSlotWidget_OnShouldHide_Params
{
};

// Function DreadHungerUI.DH_HotbarSlotWidget.OnInteractFailed
struct UDH_HotbarSlotWidget_OnInteractFailed_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarSlotWidget.OnHotbarSelectedIndexChanged
struct UDH_HotbarSlotWidget_OnHotbarSelectedIndexChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarSlotWidget.OnFailedQuickTransfer
struct UDH_HotbarSlotWidget_OnFailedQuickTransfer_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 InTargetInventory;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarSlotWidget.OnCurrentInteractTargetChanged
struct UDH_HotbarSlotWidget_OnCurrentInteractTargetChanged_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarSlotWidget.GetSize
struct UDH_HotbarSlotWidget_GetSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarWidget.OnShowHotbarChanged
struct UDH_HotbarWidget_OnShowHotbarChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarWidget.OnShouldShow
struct UDH_HotbarWidget_OnShouldShow_Params
{
};

// Function DreadHungerUI.DH_HotbarWidget.OnShouldHide
struct UDH_HotbarWidget_OnShouldHide_Params
{
};

// Function DreadHungerUI.DH_HotbarWidget.OnPlayerControllerControlledHumanChanged
struct UDH_HotbarWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarWidget.OnInventoryContainerSlotContentsChanged
struct UDH_HotbarWidget_OnInventoryContainerSlotContentsChanged_Params
{
	class UUserWidget*                                 InInventoryContainerWidget;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HotbarWidget.OnHotbarSelectedIndexChanged
struct UDH_HotbarWidget_OnHotbarSelectedIndexChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HoverImageWidget.SetHoverBrush
struct UDH_HoverImageWidget_SetHoverBrush_Params
{
	struct FSlateBrush                                 InHoverBrush;                                             // (Parm)
};

// DelegateFunction DreadHungerUI.DH_HoverImageWidget.OnHoverImageHoveredSignature__DelegateSignature
struct UDH_HoverImageWidget_OnHoverImageHoveredSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetMinWidth
struct UDH_HoverImageWidget_BP_OnSetMinWidth_Params
{
	float                                              InMinWidth;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverOpacity
struct UDH_HoverImageWidget_BP_OnSetHoverOpacity_Params
{
	float                                              InOpacity;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverImageSlotPadding
struct UDH_HoverImageWidget_BP_OnSetHoverImageSlotPadding_Params
{
	struct FMargin                                     InPadding;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_HoverImageWidget.BP_OnSetHoverBrush
struct UDH_HoverImageWidget_BP_OnSetHoverBrush_Params
{
	struct FSlateBrush                                 InHoverBrush;                                             // (ConstParm, Parm)
};

// Function DreadHungerUI.DH_HUDWidget.OnPlayerControllerShowUIChanged
struct UDH_HUDWidget_OnPlayerControllerShowUIChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HUDWidget.OnCinematicModeChanged
struct UDH_HUDWidget_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HUDWidget.OnCheatManagerChanged
struct UDH_HUDWidget_OnCheatManagerChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HUDWidget.BP_OnWidgetInstanced
struct UDH_HUDWidget_BP_OnWidgetInstanced_Params
{
	class UUserWidget*                                 InstancedWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDH_HUDLocationType                                Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HUDWidget.AddWidget
struct UDH_HUDWidget_AddWidget_Params
{
	class UUserWidget*                                 WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EDH_HUDLocationType                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HumanAttributesWidget.ShowHungerAndWarmth
struct UDH_HumanAttributesWidget_ShowHungerAndWarmth_Params
{
};

// Function DreadHungerUI.DH_HumanAttributesWidget.Show
struct UDH_HumanAttributesWidget_Show_Params
{
};

// Function DreadHungerUI.DH_HumanAttributesWidget.HideHungerAndWarmth
struct UDH_HumanAttributesWidget_HideHungerAndWarmth_Params
{
};

// Function DreadHungerUI.DH_HumanAttributesWidget.Hide
struct UDH_HumanAttributesWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_HumanAttributesWidget.BP_CreateAnimationHandler
struct UDH_HumanAttributesWidget_BP_CreateAnimationHandler_Params
{
	EDH_HumanAttributeAnimationHandlerType             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_HungerAttributeWidget.OnPlayerControllerPlayerStateChanged
struct UDH_HungerAttributeWidget_OnPlayerControllerPlayerStateChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HungerAttributeWidget.OnHungerIncreasingChanged
struct UDH_HungerAttributeWidget_OnHungerIncreasingChanged_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HungerAttributeWidget.OnControlledHumanChanged
struct UDH_HungerAttributeWidget_OnControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_HungerAttributeWidget.OnCannibalismChanged
struct UDH_HungerAttributeWidget_OnCannibalismChanged_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InteractHintWidget.UpdateHint
struct UDH_InteractHintWidget_UpdateHint_Params
{
};

// Function DreadHungerUI.DH_InteractHintWidget.OnSelectedInventoryViewChanged
struct UDH_InteractHintWidget_OnSelectedInventoryViewChanged_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InteractHintWidget.OnPlayerControllerControlledHumanChanged
struct UDH_InteractHintWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InteractHintWidget.OnMappingsChangedEvent
struct UDH_InteractHintWidget_OnMappingsChangedEvent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InteractHintWidget.OnInteractFailed
struct UDH_InteractHintWidget_OnInteractFailed_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InteractHintWidget.OnCurrentInteractTargetChanged
struct UDH_InteractHintWidget_OnCurrentInteractTargetChanged_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_InteractHintWidget.OnCurrentHelmsmanChanged
struct UDH_InteractHintWidget_OnCurrentHelmsmanChanged_Params
{
	class ADH_WarshipHelm*                             WarshipHelm;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.StopSuperCriticalAnimation
struct UDH_InventorySlotViewWidget_StopSuperCriticalAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.StopCriticalAnimation
struct UDH_InventorySlotViewWidget_StopCriticalAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.StartCriticalAnimation
struct UDH_InventorySlotViewWidget_StartCriticalAnimation_Params
{
	bool                                               bSuperCritical;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetStackCount
struct UDH_InventorySlotViewWidget_SetStackCount_Params
{
	struct FInventorySlotContents                      SlotContents;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetIconMaxSize
struct UDH_InventorySlotViewWidget_SetIconMaxSize_Params
{
	bool                                               bInIconMaxSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetIconColor
struct UDH_InventorySlotViewWidget_SetIconColor_Params
{
	struct FLinearColor                                InIconColor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetIcon
struct UDH_InventorySlotViewWidget_SetIcon_Params
{
	class UObject*                                     Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillPct
struct UDH_InventorySlotViewWidget_SetFillPct_Params
{
	float                                              FillPct;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillFillColor
struct UDH_InventorySlotViewWidget_SetFillFillColor_Params
{
	struct FLinearColor                                InFillFillColor;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bInstant;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetFillBaseColor
struct UDH_InventorySlotViewWidget_SetFillBaseColor_Params
{
	struct FLinearColor                                InFillBaseColor;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bInstant;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetBorderFillColor
struct UDH_InventorySlotViewWidget_SetBorderFillColor_Params
{
	struct FLinearColor                                InBorderFillColor;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bInstant;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.SetBorderBaseColor
struct UDH_InventorySlotViewWidget_SetBorderBaseColor_Params
{
	struct FLinearColor                                InBorderBaseColor;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bInstant;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.Reset
struct UDH_InventorySlotViewWidget_Reset_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.PlayDenyAnimation
struct UDH_InventorySlotViewWidget_PlayDenyAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.PlayAddedAnimation
struct UDH_InventorySlotViewWidget_PlayAddedAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.OnMaxStackWarnAnimationFinished
struct UDH_InventorySlotViewWidget_OnMaxStackWarnAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.GetSize
struct UDH_InventorySlotViewWidget_GetSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.GetIconColor
struct UDH_InventorySlotViewWidget_GetIconColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.GetIconBrush
struct UDH_InventorySlotViewWidget_GetIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.GetDesiredFillPct
struct UDH_InventorySlotViewWidget_GetDesiredFillPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStopSuperCriticalAnimation
struct UDH_InventorySlotViewWidget_BP_OnStopSuperCriticalAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStopCriticalAnimation
struct UDH_InventorySlotViewWidget_BP_OnStopCriticalAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnStartCriticalAnimation
struct UDH_InventorySlotViewWidget_BP_OnStartCriticalAnimation_Params
{
	bool                                               bSuperCritical;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetSize
struct UDH_InventorySlotViewWidget_BP_OnSetSize_Params
{
	float                                              InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIconScale
struct UDH_InventorySlotViewWidget_BP_OnSetIconScale_Params
{
	struct FVector2D                                   InIconScale;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIconColor
struct UDH_InventorySlotViewWidget_BP_OnSetIconColor_Params
{
	struct FLinearColor                                InIconColor;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnSetIcon
struct UDH_InventorySlotViewWidget_BP_OnSetIcon_Params
{
	class UObject*                                     Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnPlayDenyAnimation
struct UDH_InventorySlotViewWidget_BP_OnPlayDenyAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnPlayAddedAnimation
struct UDH_InventorySlotViewWidget_BP_OnPlayAddedAnimation_Params
{
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitFillImage
struct UDH_InventorySlotViewWidget_BP_OnInitFillImage_Params
{
	class UMaterialInstanceDynamic*                    InFillMID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitDenyMaskImage
struct UDH_InventorySlotViewWidget_BP_OnInitDenyMaskImage_Params
{
	class UTexture2D*                                  DenyMaskTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_InventorySlotViewWidget.BP_OnInitBorderImage
struct UDH_InventorySlotViewWidget_BP_OnInitBorderImage_Params
{
	class UMaterialInstanceDynamic*                    InBorderMID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_JoinExpeditionButtonWidget.OnLobbiesRestrictionWidgetRestrictedChanged
struct UDH_JoinExpeditionButtonWidget_OnLobbiesRestrictionWidgetRestrictedChanged_Params
{
	bool                                               bRestricted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHungerUI.DH_JoinExpeditionButtonWidget.OnJoinExpeditionButtonWidgetClicked__DelegateSignature
struct UDH_JoinExpeditionButtonWidget_OnJoinExpeditionButtonWidgetClicked__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_JoinExpeditionButtonWidget.OnBaseButtonClicked
struct UDH_JoinExpeditionButtonWidget_OnBaseButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_JoinGameOverlayWidget.OnOnlyMeButtonClicked
struct UDH_JoinGameOverlayWidget_OnOnlyMeButtonClicked_Params
{
};

// Function DreadHungerUI.DH_JoinGameOverlayWidget.OnEveryoneButtonClicked
struct UDH_JoinGameOverlayWidget_OnEveryoneButtonClicked_Params
{
};

// Function DreadHungerUI.DH_JoiningOverlayWidget.ShowAbortButton
struct UDH_JoiningOverlayWidget_ShowAbortButton_Params
{
};

// Function DreadHungerUI.DH_JoiningOverlayWidget.OnPendingNetGameConnectionCreated
struct UDH_JoiningOverlayWidget_OnPendingNetGameConnectionCreated_Params
{
	class UPendingNetGame*                             PendingNetGame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineSessionJoinSessionComplete
struct UDH_JoiningOverlayWidget_OnOnlineSessionJoinSessionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineSessionBeginJoin
struct UDH_JoiningOverlayWidget_OnOnlineSessionBeginJoin_Params
{
};

// Function DreadHungerUI.DH_JoiningOverlayWidget.OnOnlineErrorsUpdated
struct UDH_JoiningOverlayWidget_OnOnlineErrorsUpdated_Params
{
	TArray<struct FDH_OnlineError>                     InErrors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_JoiningOverlayWidget.Cancel
struct UDH_JoiningOverlayWidget_Cancel_Params
{
};

// Function DreadHungerUI.DH_JournalTopicButtonViewWidget.OnBaseButtonClicked
struct UDH_JournalTopicButtonViewWidget_OnBaseButtonClicked_Params
{
};

// DelegateFunction DreadHungerUI.DH_JournalTopicButtonViewWidget.JournalTopicButtonViewWidgetSignature__DelegateSignature
struct UDH_JournalTopicButtonViewWidget_JournalTopicButtonViewWidgetSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_JournalTopicButtonWidget.OnViewClicked
struct UDH_JournalTopicButtonWidget_OnViewClicked_Params
{
};

// Function DreadHungerUI.DH_JournalWidget.ShowJournalPage
struct UDH_JournalWidget_ShowJournalPage_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_JournalWidget.OnJournalToggled
struct UDH_JournalWidget_OnJournalToggled_Params
{
};

// Function DreadHungerUI.DH_JournalWidget.HandleJournalClosure
struct UDH_JournalWidget_HandleJournalClosure_Params
{
	struct FKey                                        InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDH_GameViewportClient*                      InViewportClient;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_KeybindHintWidget.SetInteractionMessage
struct UDH_KeybindHintWidget_SetInteractionMessage_Params
{
	struct FDH_KeybindInteractionMessage               InInteractionMessage;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_KickedOverlayWidget.OnKicked
struct UDH_KickedOverlayWidget_OnKicked_Params
{
};

// Function DreadHungerUI.DH_LanguageDropDown.OnDropDownSelectionChanged
struct UDH_LanguageDropDown_OnDropDownSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.SetMission
struct UDH_LaunchExpeditionButtonWidget_SetMission_Params
{
	class UDH_MapData*                                 InMission;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.OnOnlineSessionUpdateComplete
struct UDH_LaunchExpeditionButtonWidget_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.LaunchExpedition
struct UDH_LaunchExpeditionButtonWidget_LaunchExpedition_Params
{
};

// Function DreadHungerUI.DH_LaunchExpeditionButtonWidget.BP_SetEnabled
struct UDH_LaunchExpeditionButtonWidget_BP_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LaunchTutorialButtonWidget.OnClicked
struct UDH_LaunchTutorialButtonWidget_OnClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoadingScreenWidget.ShowLoadingScreen
struct UDH_LoadingScreenWidget_ShowLoadingScreen_Params
{
	TScriptInterface<class UDH_LoadingScreenInterface> Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoadingScreenWidget.Show
struct UDH_LoadingScreenWidget_Show_Params
{
};

// Function DreadHungerUI.DH_LoadingScreenWidget.OnFinishedShow
struct UDH_LoadingScreenWidget_OnFinishedShow_Params
{
};

// Function DreadHungerUI.DH_RestrictionWidget.UpdateRestrictionText
struct UDH_RestrictionWidget_UpdateRestrictionText_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserOverlayWidget.BP_OnHandledEscape
struct UDH_LobbyBrowserOverlayWidget_BP_OnHandledEscape_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSetSelectedLanguageCodes
struct UDH_LobbyBrowserWidget_OnSetSelectedLanguageCodes_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchForLobbiesStarted
struct UDH_LobbyBrowserWidget_OnSearchForLobbiesStarted_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchForLobbiesCompleteDelegate
struct UDH_LobbyBrowserWidget_OnSearchForLobbiesCompleteDelegate_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDH_OnlineSearchResult>              SearchResults;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnSearchButtonClicked
struct UDH_LobbyBrowserWidget_OnSearchButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnLaunchExpeditionButtonClicked
struct UDH_LobbyBrowserWidget_OnLaunchExpeditionButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnFailedToBeginToSearchForLobbies
struct UDH_LobbyBrowserWidget_OnFailedToBeginToSearchForLobbies_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnCloseButtonWidgetClicked
struct UDH_LobbyBrowserWidget_OnCloseButtonWidgetClicked_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.OnAutoRefreshCheckBoxChanged
struct UDH_LobbyBrowserWidget_OnAutoRefreshCheckBoxChanged_Params
{
	bool                                               bIsChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.BP_OnCloseButtonClicked
struct UDH_LobbyBrowserWidget_BP_OnCloseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.AddAutoRefreshTimer
struct UDH_LobbyBrowserWidget_AddAutoRefreshTimer_Params
{
};

// Function DreadHungerUI.DH_LobbyBrowserWidget.AddAutoRefresh
struct UDH_LobbyBrowserWidget_AddAutoRefresh_Params
{
};

// Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerRoleChanged
struct UDH_LobbyInfoWidget_OnPlayerRoleChanged_Params
{
	class ADH_PlayerState*                             InChangedPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerRemovedFromGame
struct UDH_LobbyInfoWidget_OnPlayerRemovedFromGame_Params
{
	class ADH_PlayerState*                             RemovedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyInfoWidget.OnPlayerControllerControlledHumanChanged
struct UDH_LobbyInfoWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyInfoWidget.OnOnlineSessionUpdateComplete
struct UDH_LobbyInfoWidget_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHungerUI.DH_LobbyInfoWidget.OnLobbyPlayerOnShipChanged
struct UDH_LobbyInfoWidget_OnLobbyPlayerOnShipChanged_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnViewLastExpeditionButtonClicked
struct UDH_LobbyMissionMapWidget_OnViewLastExpeditionButtonClicked_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnReverseShowNodesAnimationFinished
struct UDH_LobbyMissionMapWidget_OnReverseShowNodesAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnOnlineSessionUpdateComplete
struct UDH_LobbyMissionMapWidget_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnOnlinePartyMembersChanged
struct UDH_LobbyMissionMapWidget_OnOnlinePartyMembersChanged_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnNodeClicked
struct UDH_LobbyMissionMapWidget_OnNodeClicked_Params
{
	class UDH_LobbyMissionSelectionControlWidget*      InNode;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnMissionDetailsWidgetBeginShow
struct UDH_LobbyMissionMapWidget_OnMissionDetailsWidgetBeginShow_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnMissionDetailsWidgetBeginHide
struct UDH_LobbyMissionMapWidget_OnMissionDetailsWidgetBeginHide_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnFadeOutAnimationFinished
struct UDH_LobbyMissionMapWidget_OnFadeOutAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnDesiredAutoSearchForLobbies
struct UDH_LobbyMissionMapWidget_OnDesiredAutoSearchForLobbies_Params
{
	bool                                               bDesired;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.OnBrowseAllMapsButtonClicked
struct UDH_LobbyMissionMapWidget_OnBrowseAllMapsButtonClicked_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionMapWidget.AddNodes
struct UDH_LobbyMissionMapWidget_AddNodes_Params
{
	TArray<class UWidget*>                             InNodes;                                                  // (Parm, ZeroConstructor)
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.SetSelected
struct UDH_LobbyMissionSelectionControlWidget_SetSelected_Params
{
	bool                                               bInSelected;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnSelectNodeButtonClicked
struct UDH_LobbyMissionSelectionControlWidget_OnSelectNodeButtonClicked_Params
{
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnOnlineSessionUpdateComplete
struct UDH_LobbyMissionSelectionControlWidget_OnOnlineSessionUpdateComplete_Params
{
};

// DelegateFunction DreadHungerUI.DH_LobbyMissionSelectionControlWidget.OnMissionSelectionControlWidgetClickedSignature__DelegateSignature
struct UDH_LobbyMissionSelectionControlWidget_OnMissionSelectionControlWidgetClickedSignature__DelegateSignature_Params
{
	class UDH_LobbyMissionSelectionControlWidget*      Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetNodeState
struct UDH_LobbyMissionSelectionControlWidget_GetNodeState_Params
{
	EMissionNodeState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetNodeIconTooltipWidget
struct UDH_LobbyMissionSelectionControlWidget_GetNodeIconTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetMissionData
struct UDH_LobbyMissionSelectionControlWidget_GetMissionData_Params
{
	class UDH_MapData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyMissionSelectionControlWidget.GetMapCompletions
struct UDH_LobbyMissionSelectionControlWidget_GetMapCompletions_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	int                                                Current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Required;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbyPlayersChangedWidget.OnPartyMembersChanged
struct UDH_LobbyPlayersChangedWidget_OnPartyMembersChanged_Params
{
};

// Function DreadHungerUI.DH_LobbyPlayersChangedWidget.BP_OnItemsEmptied
struct UDH_LobbyPlayersChangedWidget_BP_OnItemsEmptied_Params
{
};

// Function DreadHungerUI.DH_LobbyPlayersChangedWidget.BP_OnItemCreated
struct UDH_LobbyPlayersChangedWidget_BP_OnItemCreated_Params
{
	class UDH_LobbyPlayersChangedItemWidget*           CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnSelectAllCheckBoxStateChanged
struct UDH_LobbySearchResultHeaderWidgetDropDown_OnSelectAllCheckBoxStateChanged_Params
{
	bool                                               bInChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnLobbyBrowserWidgetShow
struct UDH_LobbySearchResultHeaderWidgetDropDown_OnLobbyBrowserWidgetShow_Params
{
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnLanguageFilterButtonClicked
struct UDH_LobbySearchResultHeaderWidgetDropDown_OnLanguageFilterButtonClicked_Params
{
	bool                                               bToggleOn;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown.OnCheckBoxWidgetStateChanged
struct UDH_LobbySearchResultHeaderWidgetDropDown_OnCheckBoxWidgetStateChanged_Params
{
	bool                                               bInChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnSetSelectedLanguageCodes
struct UDH_LobbySearchResultHeaderWidgetDropDownButton_OnSetSelectedLanguageCodes_Params
{
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnLanguageFilterDropDownHide
struct UDH_LobbySearchResultHeaderWidgetDropDownButton_OnLanguageFilterDropDownHide_Params
{
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnLanguageFilterCheckBoxesChanged
struct UDH_LobbySearchResultHeaderWidgetDropDownButton_OnLanguageFilterCheckBoxesChanged_Params
{
	int                                                NumChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton.OnBaseButtonClicked
struct UDH_LobbySearchResultHeaderWidgetDropDownButton_OnBaseButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetPlayers
struct UDH_LobbySearchResultPlayersWidget_SetPlayers_Params
{
	int                                                InCurrent;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMax;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetMaxPlayers
struct UDH_LobbySearchResultPlayersWidget_SetMaxPlayers_Params
{
	int                                                InMax;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultPlayersWidget.SetCurrentPlayers
struct UDH_LobbySearchResultPlayersWidget_SetCurrentPlayers_Params
{
	int                                                InCurrent;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySearchResultWidget.OnJoinButtonClicked
struct UDH_LobbySearchResultWidget_OnJoinButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotReportItemWidget.Report
struct UDH_LobbySlotReportItemWidget_Report_Params
{
};

// DelegateFunction DreadHungerUI.DH_LobbySlotReportItemWidget.OnReportItemWidgetButtonClickSignature__DelegateSignature
struct UDH_LobbySlotReportItemWidget_OnReportItemWidgetButtonClickSignature__DelegateSignature_Params
{
	EDH_PlayerReportReasonType                         InReportReason;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotReportItemWidget.BP_OnReportReasonSet
struct UDH_LobbySlotReportItemWidget_BP_OnReportReasonSet_Params
{
	struct FText                                       InReportReason;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.Show
struct UDH_LobbySlotReportListWidget_Show_Params
{
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.OnItemButtonClick
struct UDH_LobbySlotReportListWidget_OnItemButtonClick_Params
{
	EDH_PlayerReportReasonType                         InReportReason;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.OnHidden
struct UDH_LobbySlotReportListWidget_OnHidden_Params
{
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.OnFloodIntervalExpired
struct UDH_LobbySlotReportListWidget_OnFloodIntervalExpired_Params
{
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.Hide
struct UDH_LobbySlotReportListWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnShow
struct UDH_LobbySlotReportListWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnItemsEmptied
struct UDH_LobbySlotReportListWidget_BP_OnItemsEmptied_Params
{
};

// Function DreadHungerUI.DH_LobbySlotReportListWidget.BP_OnItemCreated
struct UDH_LobbySlotReportListWidget_BP_OnItemCreated_Params
{
	class UDH_LobbySlotReportItemWidget*               CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotsContainerWidget.OnOnlinePartyMembersChanged
struct UDH_LobbySlotsContainerWidget_OnOnlinePartyMembersChanged_Params
{
};

// Function DreadHungerUI.DH_LobbySlotsContainerWidget.OnExpectedUniqueNetIdsUpdated
struct UDH_LobbySlotsContainerWidget_OnExpectedUniqueNetIdsUpdated_Params
{
};

// Function DreadHungerUI.DH_LobbySlotSpeakingWidget.OnVoiceChatParticipantChanged
struct UDH_LobbySlotSpeakingWidget_OnVoiceChatParticipantChanged_Params
{
	class FString                                      AccountName;                                              // (Parm, ZeroConstructor)
};

// Function DreadHungerUI.DH_LobbySlotSpeakingWidget.OnVivoxParticipantChanged
struct UDH_LobbySlotSpeakingWidget_OnVivoxParticipantChanged_Params
{
	class FString                                      AccountName;                                              // (Parm, ZeroConstructor)
};

// Function DreadHungerUI.DH_LobbySlotVolumeWidget.OnVolumeSliderValueChanged
struct UDH_LobbySlotVolumeWidget_OnVolumeSliderValueChanged_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerUpdated
struct UDH_LobbySlotWidget_OnPlayerUpdated_Params
{
	class ADH_PlayerState*                             InChangedPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerRemovedFromGame
struct UDH_LobbySlotWidget_OnPlayerRemovedFromGame_Params
{
	class ADH_PlayerState*                             AddedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerReconnectedToGameTimerExpired
struct UDH_LobbySlotWidget_OnPlayerReconnectedToGameTimerExpired_Params
{
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerReconnectedToGame
struct UDH_LobbySlotWidget_OnPlayerReconnectedToGame_Params
{
	class ADH_PlayerState*                             ReconnectingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerMuteStatusChanged
struct UDH_LobbySlotWidget_OnPlayerMuteStatusChanged_Params
{
	class ADH_PlayerState*                             MutedPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerContextMenuVolumeSliderChanged
struct UDH_LobbySlotWidget_OnPlayerContextMenuVolumeSliderChanged_Params
{
	struct FUniqueNetIdRepl                            InUserId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnPlayerAddedToGame
struct UDH_LobbySlotWidget_OnPlayerAddedToGame_Params
{
	class ADH_PlayerState*                             AddedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnLobbyButtonClicked
struct UDH_LobbySlotWidget_OnLobbyButtonClicked_Params
{
};

// Function DreadHungerUI.DH_LobbySlotWidget.OnGameStateMatchStateChanged
struct UDH_LobbySlotWidget_OnGameStateMatchStateChanged_Params
{
	class ADH_GameState*                               InGameState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginOverlayWidget.OnQuitToDesktopButtonClicked
struct UDH_LoginOverlayWidget_OnQuitToDesktopButtonClicked_Params
{
};

// Function DreadHungerUI.DH_LoginOverlayWidget.OnLoginStepFinished
struct UDH_LoginOverlayWidget_OnLoginStepFinished_Params
{
	int                                                StepsCompleted;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSteps;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbandonFurtherSteps;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginOverlayWidget.OnErrorsUpdated
struct UDH_LoginOverlayWidget_OnErrorsUpdated_Params
{
};

// Function DreadHungerUI.DH_LoginStatusWidget.OnRetryingLoginStep
struct UDH_LoginStatusWidget_OnRetryingLoginStep_Params
{
	int                                                TimeRemaining;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginStatusWidget.OnLoginStepFinished
struct UDH_LoginStatusWidget_OnLoginStepFinished_Params
{
	int                                                StepsCompleted;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSteps;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbandonFurtherSteps;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginStatusWidget.OnErrorsUpdated
struct UDH_LoginStatusWidget_OnErrorsUpdated_Params
{
};

// Function DreadHungerUI.DH_LoginTesterWidget.OnTestLoginHandlerButtonClicked
struct UDH_LoginTesterWidget_OnTestLoginHandlerButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginTesterWidget.OnDefaultLoginHandlerButtonClicked
struct UDH_LoginTesterWidget_OnDefaultLoginHandlerButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginTesterWidget.OnCloseButtonClicked
struct UDH_LoginTesterWidget_OnCloseButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginTesterWidget.GetLoginStepPlatformTimeout
struct UDH_LoginTesterWidget_GetLoginStepPlatformTimeout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_LoginTesterWidget.GetLoginStepPlatformError
struct UDH_LoginTesterWidget_GetLoginStepPlatformError_Params
{
	struct FDH_OnlineError                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHungerUI.DH_LootContainerWidget.OnCloseButtonClicked
struct UDH_LootContainerWidget_OnCloseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_MissionDetailsWidget.OnJoinExpeditionButtonWidgetClicked
struct UDH_MissionDetailsWidget_OnJoinExpeditionButtonWidgetClicked_Params
{
};

// Function DreadHungerUI.DH_MissionDetailsWidget.OnBackButtonClicked
struct UDH_MissionDetailsWidget_OnBackButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_MissionNodeTooltipWidget.Init
struct UDH_MissionNodeTooltipWidget_Init_Params
{
	class UDH_LobbyMissionSelectionControlWidget*      OwningNode;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_NamePlateWidget.ActualShow
struct UDH_NamePlateWidget_ActualShow_Params
{
};

// Function DreadHungerUI.DH_NamePlateWidget.ActualHide
struct UDH_NamePlateWidget_ActualHide_Params
{
};

// Function DreadHungerUI.DH_NetworkFailureOverlayWidget.UpdateTimeElapsed
struct UDH_NetworkFailureOverlayWidget_UpdateTimeElapsed_Params
{
};

// Function DreadHungerUI.DH_NetworkFailureOverlayWidget.OnOnlineSessionJoinSessionComplete
struct UDH_NetworkFailureOverlayWidget_OnOnlineSessionJoinSessionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_NetworkFailureOverlayWidget.OnDisconnectButtonClicked
struct UDH_NetworkFailureOverlayWidget_OnDisconnectButtonClicked_Params
{
};

// Function DreadHungerUI.DH_NewHostOverlayWidget.OnSessionMemberPromoted
struct UDH_NewHostOverlayWidget_OnSessionMemberPromoted_Params
{
	bool                                               bLocalIsHost;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_NewHostOverlayWidget.OnOnlineSessionUpdateComplete
struct UDH_NewHostOverlayWidget_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHungerUI.DH_NewHostOverlayWidget.OnOKButtonClicked
struct UDH_NewHostOverlayWidget_OnOKButtonClicked_Params
{
};

// Function DreadHungerUI.DH_OnlineErrorItemWidget.BP_OnErrorSet
struct UDH_OnlineErrorItemWidget_BP_OnErrorSet_Params
{
	struct FText                                       InLocalizedText;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      InRawError;                                               // (Parm, ZeroConstructor)
};

// Function DreadHungerUI.DH_OnlineErrorWidget.OnOnlineErrorsUpdated
struct UDH_OnlineErrorWidget_OnOnlineErrorsUpdated_Params
{
	TArray<struct FDH_OnlineError>                     InErrors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_OnlineErrorWidget.BP_OnItemCreated
struct UDH_OnlineErrorWidget_BP_OnItemCreated_Params
{
	class UDH_OnlineErrorItemWidget*                   CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_OnlineFriendsListWidget.OnMoreButtonClicked
struct UDH_OnlineFriendsListWidget_OnMoreButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_OnlineFriendsListWidget.HandleCrewInviteClosure
struct UDH_OnlineFriendsListWidget_HandleCrewInviteClosure_Params
{
	struct FKey                                        InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDH_GameViewportClient*                      InViewportClient;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_OnlineFriendsListWidget.GetOnlineFriendsListVisibility
struct UDH_OnlineFriendsListWidget_GetOnlineFriendsListVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_OpenSpellCastingHintWidget.OnSelectedInventoryViewChanged
struct UDH_OpenSpellCastingHintWidget_OnSelectedInventoryViewChanged_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_OpenSpellCastingHintWidget.BP_IsBoneCharm
struct UDH_OpenSpellCastingHintWidget_BP_IsBoneCharm_Params
{
	class ADH_Inventory*                               Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_OverlayViewWidget.OnButtonClicked
struct UDH_OverlayViewWidget_OnButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnReportButtonClicked
struct UDH_PlayerContextMenuWidget_OnReportButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnProfileButtonClicked
struct UDH_PlayerContextMenuWidget_OnProfileButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnPlayerMuteStatusChanged
struct UDH_PlayerContextMenuWidget_OnPlayerMuteStatusChanged_Params
{
	class ADH_PlayerState*                             MutedPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnPlayerContextMenuShown
struct UDH_PlayerContextMenuWidget_OnPlayerContextMenuShown_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnMuteButtonClicked
struct UDH_PlayerContextMenuWidget_OnMuteButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerContextMenuWidget.OnKickButtonClicked
struct UDH_PlayerContextMenuWidget_OnKickButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_PlayerReportCardAvatarWidget.OnBaseButtonClicked
struct UDH_PlayerReportCardAvatarWidget_OnBaseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_PlayerStatsWidget.UpdateStats
struct UDH_PlayerStatsWidget_UpdateStats_Params
{
	EPlayerTeam                                        InTeam;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PokerGameTimerWidget.OnPokerGameTimeStatsChanged
struct UDH_PokerGameTimerWidget_OnPokerGameTimeStatsChanged_Params
{
	TArray<struct FDH_PokerGameTimeStat>               InTimeStats;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_PokerGameTimerWidget.OnPlayerControllerControlledHumanChanged
struct UDH_PokerGameTimerWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameAvatarWidget.OnPlayerThrallChanged
struct UDH_PregameAvatarWidget_OnPlayerThrallChanged_Params
{
	class ADH_PlayerState*                             InChangedPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameAvatarWidget.Init
struct UDH_PregameAvatarWidget_Init_Params
{
	struct FDH_PregameAvatarData                       InData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bOwnerIsThrall;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.SetThrallCount
struct UDH_PregameInstructionsMockControlsWidget_SetThrallCount_Params
{
	int                                                InThrallCount;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.SetPlayerCount
struct UDH_PregameInstructionsMockControlsWidget_SetPlayerCount_Params
{
	int                                                InPlayerCount;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnShowButtonClicked
struct UDH_PregameInstructionsMockControlsWidget_OnShowButtonClicked_Params
{
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnNoPrestigeLevelsTextInputCommitted
struct UDH_PregameInstructionsMockControlsWidget_OnNoPrestigeLevelsTextInputCommitted_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.OnHideButtonClicked
struct UDH_PregameInstructionsMockControlsWidget_OnHideButtonClicked_Params
{
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.GetPlayerCount
struct UDH_PregameInstructionsMockControlsWidget_GetPlayerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsMockControlsWidget.BP_GetThrallCount
struct UDH_PregameInstructionsMockControlsWidget_BP_GetThrallCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsRealData.OnShowPregameInstructions
struct UDH_PregameInstructionsRealData_OnShowPregameInstructions_Params
{
	int                                                InThrallCount;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsRealData.OnMatchStarted
struct UDH_PregameInstructionsRealData_OnMatchStarted_Params
{
};

// Function DreadHungerUI.DH_PregameInstructionsWidget.ShowTestingControls
struct UDH_PregameInstructionsWidget_ShowTestingControls_Params
{
};

// Function DreadHungerUI.DH_PregameInstructionsWidget.PopNextAvatar
struct UDH_PregameInstructionsWidget_PopNextAvatar_Params
{
	int                                                AvatarIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PregameInstructionsWidget.OnFinishedPoppingAvatars
struct UDH_PregameInstructionsWidget_OnFinishedPoppingAvatars_Params
{
};

// Function DreadHungerUI.DH_PrestigeOverlayWidget.ProcessTimeout
struct UDH_PrestigeOverlayWidget_ProcessTimeout_Params
{
};

// Function DreadHungerUI.DH_PrestigeOverlayWidget.OnRoleSelectionPrestigeButtonClicked
struct UDH_PrestigeOverlayWidget_OnRoleSelectionPrestigeButtonClicked_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PrestigeOverlayWidget.OnPrestigeButtonClicked
struct UDH_PrestigeOverlayWidget_OnPrestigeButtonClicked_Params
{
};

// Function DreadHungerUI.DH_PrisonerAwakensWidget.Show
struct UDH_PrisonerAwakensWidget_Show_Params
{
};

// Function DreadHungerUI.DH_PrisonerAwakensWidget.OnPrisonerPawnControllerChanged
struct UDH_PrisonerAwakensWidget_OnPrisonerPawnControllerChanged_Params
{
	class ADH_PrisonerPawn*                            InPrisonerPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PrisonerAwakensWidget.OnHidden
struct UDH_PrisonerAwakensWidget_OnHidden_Params
{
};

// Function DreadHungerUI.DH_PrisonerAwakensWidget.Hide
struct UDH_PrisonerAwakensWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_PrisonerAwakensWidget.BP_OnShow
struct UDH_PrisonerAwakensWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_PrisonerAwakensWidget.BP_OnHide
struct UDH_PrisonerAwakensWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_PublicGameSettingWidget.OnLobbiesRestrictionWidgetRestrictedChanged
struct UDH_PublicGameSettingWidget_OnLobbiesRestrictionWidgetRestrictedChanged_Params
{
	bool                                               bRestricted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PushToTalkWidget.OnWantsToTalk
struct UDH_PushToTalkWidget_OnWantsToTalk_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToTalk;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_PushToTalkWidget.OnPlayerControllerStateChanged
struct UDH_PushToTalkWidget_OnPlayerControllerStateChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuestInfoWidget.OnQuestStateCurrentScoreChanged
struct UDH_QuestInfoWidget_OnQuestStateCurrentScoreChanged_Params
{
	class ADH_QuestState*                              InQuestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentScore;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuestInfoWidget.OnQuestStateCompletedChanged
struct UDH_QuestInfoWidget_OnQuestStateCompletedChanged_Params
{
	class ADH_QuestState*                              InQuestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuestInfoWidget.OnPlayerStateQuestChanged
struct UDH_QuestInfoWidget_OnPlayerStateQuestChanged_Params
{
	class ADH_PlayerState*                             InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_QuestState*                              InQuestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuestInfoWidget.BP_SetText
struct UDH_QuestInfoWidget_BP_SetText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_QuestInfoWidget.BP_SetIcon
struct UDH_QuestInfoWidget_BP_SetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuestInfoWidget.BP_Complete
struct UDH_QuestInfoWidget_BP_Complete_Params
{
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.Show
struct UDH_QuickTransferInventoryWidget_Show_Params
{
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.OnHidden
struct UDH_QuickTransferInventoryWidget_OnHidden_Params
{
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.Init
struct UDH_QuickTransferInventoryWidget_Init_Params
{
	class UDH_InventorySlotWidget*                     InSourceSlot;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventorySlotWidget*                     InTargetSlot;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.Hide
struct UDH_QuickTransferInventoryWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnShow
struct UDH_QuickTransferInventoryWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnSetIcon
struct UDH_QuickTransferInventoryWidget_BP_OnSetIcon_Params
{
	class UTexture2D*                                  IconTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_QuickTransferInventoryWidget.BP_OnHide
struct UDH_QuickTransferInventoryWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_RadialCanvas.SetRotationOffset
struct UDH_RadialCanvas_SetRotationOffset_Params
{
	float                                              InRotationOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialCanvas.SetAlignment
struct UDH_RadialCanvas_SetAlignment_Params
{
	float                                              InAlignment;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialCanvas.GetRotationOffset
struct UDH_RadialCanvas_GetRotationOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialCanvas.GetAlignment
struct UDH_RadialCanvas_GetAlignment_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialCanvas.AddChildToCanvas
struct UDH_RadialCanvas_AddChildToCanvas_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RadialCanvasPanelSlot*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.Show
struct UDH_RadialMenuOptionBaseWidget_Show_Params
{
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetSelected
struct UDH_RadialMenuOptionBaseWidget_SetSelected_Params
{
	bool                                               bInSelected;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdate;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetPosition
struct UDH_RadialMenuOptionBaseWidget_SetPosition_Params
{
	struct FDH_RadialOptionPosition                    Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.SetHintText
struct UDH_RadialMenuOptionBaseWidget_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (ConstParm, Parm)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.OnHintCanvasPanelHidden
struct UDH_RadialMenuOptionBaseWidget_OnHintCanvasPanelHidden_Params
{
};

// DelegateFunction DreadHungerUI.DH_RadialMenuOptionBaseWidget.OnCommittedAnimationFinishedSignature__DelegateSignature
struct UDH_RadialMenuOptionBaseWidget_OnCommittedAnimationFinishedSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.Hide
struct UDH_RadialMenuOptionBaseWidget_Hide_Params
{
	bool                                               bCommitting;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.GetSelected
struct UDH_RadialMenuOptionBaseWidget_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnShow
struct UDH_RadialMenuOptionBaseWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnSetHintText
struct UDH_RadialMenuOptionBaseWidget_BP_OnSetHintText_Params
{
	struct FText                                       InHintText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetShowHintAnimation
struct UDH_RadialMenuOptionBaseWidget_BP_OnGetShowHintAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetShowAnimation
struct UDH_RadialMenuOptionBaseWidget_BP_OnGetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetIconBorder
struct UDH_RadialMenuOptionBaseWidget_BP_OnGetIconBorder_Params
{
	class UBorder*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetHintContainer
struct UDH_RadialMenuOptionBaseWidget_BP_OnGetHintContainer_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetHintBorder
struct UDH_RadialMenuOptionBaseWidget_BP_OnGetHintBorder_Params
{
	class UBorder*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuOptionBaseWidget.BP_OnGetCommittedAnimation
struct UDH_RadialMenuOptionBaseWidget_BP_OnGetCommittedAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuEmoteOptionWidget.SetLobbyEmote
struct UDH_RadialMenuEmoteOptionWidget_SetLobbyEmote_Params
{
	class UDH_LobbyEmote*                              InLobbyEmote;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuEmoteOptionWidget.OnCommittedAnimFinished
struct UDH_RadialMenuEmoteOptionWidget_OnCommittedAnimFinished_Params
{
};

// Function DreadHungerUI.DH_RadialMenuEmotesWidget.OnControlledHumanChanged
struct UDH_RadialMenuEmotesWidget_OnControlledHumanChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSongOptionWidget.SetSong
struct UDH_RadialMenuSongOptionWidget_SetSong_Params
{
	class UDH_PhonographSong*                          InSong;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSongOptionWidget.BP_OnSetIcon
struct UDH_RadialMenuSongOptionWidget_BP_OnSetIcon_Params
{
};

// Function DreadHungerUI.DH_RadialMenuSongsWidget.OnSongSelection
struct UDH_RadialMenuSongsWidget_OnSongSelection_Params
{
	class ADH_Phonograph*                              InPhonograph;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSongsWidget.OnControlledHumanChanged
struct UDH_RadialMenuSongsWidget_OnControlledHumanChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnSpellSelection
struct UDH_RadialMenuSpellsWidget_OnSpellSelection_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnHumanCharacterDied
struct UDH_RadialMenuSpellsWidget_OnHumanCharacterDied_Params
{
	class ADH_HumanCharacter*                          DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnEquippedSpellsChanged
struct UDH_RadialMenuSpellsWidget_OnEquippedSpellsChanged_Params
{
	class ADH_SpellManager*                            InSpellManager;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RadialMenuSpellsWidget.OnControlledHumanChanged
struct UDH_RadialMenuSpellsWidget_OnControlledHumanChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeArrowWidget.SetDirection
struct UDH_RateOfChangeArrowWidget_SetDirection_Params
{
	EDH_RateOfChangeArrowDirection                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeArrowWidget.BP_GetMID
struct UDH_RateOfChangeArrowWidget_BP_GetMID_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeWidget.SetRate
struct UDH_RateOfChangeWidget_SetRate_Params
{
	float                                              NewRate;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeWidget.SetMaxRate
struct UDH_RateOfChangeWidget_SetMaxRate_Params
{
	float                                              NewMaxRate;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeWidget.CreateAnimationHandler
struct UDH_RateOfChangeWidget_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeWidget.BP_OnSetArrowsVisible
struct UDH_RateOfChangeWidget_BP_OnSetArrowsVisible_Params
{
	int                                                VisibleArrowsFlags;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RateOfChangeWidget.BP_OnSetArrowDirection
struct UDH_RateOfChangeWidget_BP_OnSetArrowDirection_Params
{
	EDH_RateOfChangeArrowDirection                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RecipeIngredientWidget.GetTooltipWidget
struct UDH_RecipeIngredientWidget_GetTooltipWidget_Params
{
	class UDH_InventoryTooltipWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RecipeIngredientWidget.BP_OnInit
struct UDH_RecipeIngredientWidget_BP_OnInit_Params
{
	EInventoryType                                     Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCurrent;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchIconSizes;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowQuantity;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_ReconnectOverlayWidget.Reconnect
struct UDH_ReconnectOverlayWidget_Reconnect_Params
{
};

// Function DreadHungerUI.DH_ReconnectOverlayWidget.Abandon
struct UDH_ReconnectOverlayWidget_Abandon_Params
{
};

// Function DreadHungerUI.DH_RegionSelectButtonWidget.SetAsSelectedRegion
struct UDH_RegionSelectButtonWidget_SetAsSelectedRegion_Params
{
};

// Function DreadHungerUI.DH_RegionSelectButtonWidget.GetSelected
struct UDH_RegionSelectButtonWidget_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RegionSelectButtonWidget.BP_OnSelectedChanged
struct UDH_RegionSelectButtonWidget_BP_OnSelectedChanged_Params
{
};

// Function DreadHungerUI.DH_RegionSelectButtonWidget.BP_OnRegionChanged
struct UDH_RegionSelectButtonWidget_BP_OnRegionChanged_Params
{
	struct FText                                       ShortName;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       LongName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_RegionSelectWidget.BP_OnRegionButtonsEmptied
struct UDH_RegionSelectWidget_BP_OnRegionButtonsEmptied_Params
{
};

// Function DreadHungerUI.DH_RegionSelectWidget.BP_OnRegionButtonCreated
struct UDH_RegionSelectWidget_BP_OnRegionButtonCreated_Params
{
	class UDH_RegionSelectButtonWidget*                CreatedButton;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ReplayBrowserWidget.Show
struct UDH_ReplayBrowserWidget_Show_Params
{
};

// Function DreadHungerUI.DH_ReplayBrowserWidget.Hide
struct UDH_ReplayBrowserWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_ReplayBrowserWidget.HasAnyValidReplays
struct UDH_ReplayBrowserWidget_HasAnyValidReplays_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnShow
struct UDH_ReplayBrowserWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnReplayWidgetCreated
struct UDH_ReplayBrowserWidget_BP_OnReplayWidgetCreated_Params
{
	class UDH_ReplayItemWidget*                        NewWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ReplayBrowserWidget.BP_OnHide
struct UDH_ReplayBrowserWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_ReplayItemWidget.Load
struct UDH_ReplayItemWidget_Load_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ReplayItemWidget.BP_OnInitialized
struct UDH_ReplayItemWidget_BP_OnInitialized_Params
{
};

// Function DreadHungerUI.DH_RespawnTimerWidget.Show
struct UDH_RespawnTimerWidget_Show_Params
{
};

// Function DreadHungerUI.DH_RespawnTimerWidget.OnWidgetAnimationHandlerFinishedHide
struct UDH_RespawnTimerWidget_OnWidgetAnimationHandlerFinishedHide_Params
{
	class UDH_WidgetAnimationHandler*                  InAnimationHandler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RespawnTimerWidget.Hide
struct UDH_RespawnTimerWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_RespawnTimerWidget.BP_OnSetHidden
struct UDH_RespawnTimerWidget_BP_OnSetHidden_Params
{
};

// Function DreadHungerUI.DH_RespawnTimerWidget.BP_CreateAnimationHandler
struct UDH_RespawnTimerWidget_BP_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ReviveTimeWidget.UpdateTimer
struct UDH_ReviveTimeWidget_UpdateTimer_Params
{
};

// Function DreadHungerUI.DH_ReviveTimeWidget.OnRestingChanged
struct UDH_ReviveTimeWidget_OnRestingChanged_Params
{
	class ADH_HumanCharacter*                          InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ReviveTimeWidget.OnPlayerControllerControlledHumanChanged
struct UDH_ReviveTimeWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleAvatarWidget.OnShowRoleCustomization
struct UDH_RoleAvatarWidget_OnShowRoleCustomization_Params
{
	bool                                               bShow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleAvatarWidget.OnRoleSelectionWidgetShown
struct UDH_RoleAvatarWidget_OnRoleSelectionWidgetShown_Params
{
};

// Function DreadHungerUI.DH_RoleAvatarWidget.OnRoleSelectionWidgetHidden
struct UDH_RoleAvatarWidget_OnRoleSelectionWidgetHidden_Params
{
};

// Function DreadHungerUI.DH_RoleAvatarWidget.GetAvatarSceneImageParentWidget
struct UDH_RoleAvatarWidget_GetAvatarSceneImageParentWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleSelectionButtonWidget.OnViewClicked
struct UDH_RoleSelectionButtonWidget_OnViewClicked_Params
{
};

// Function DreadHungerUI.DH_RoleCustomizationButtonWidget.GetCustomizationButtonTooltipWidget
struct UDH_RoleCustomizationButtonWidget_GetCustomizationButtonTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleCustomizationWidget.OnPreviewRole
struct UDH_RoleCustomizationWidget_OnPreviewRole_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.OnPreviewRole
struct UDH_RoleDetailsEquipmentWidget_OnPreviewRole_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.BP_OnItemsEmptied
struct UDH_RoleDetailsEquipmentWidget_BP_OnItemsEmptied_Params
{
};

// Function DreadHungerUI.DH_RoleDetailsEquipmentWidget.BP_OnItemCreated
struct UDH_RoleDetailsEquipmentWidget_BP_OnItemCreated_Params
{
	class UDH_RecipeIngredientWidget*                  CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleDetailsWidget.OnShowRoleCustomization
struct UDH_RoleDetailsWidget_OnShowRoleCustomization_Params
{
	bool                                               bShow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleDetailsWidget.OnShowCustomizationAnimationFinished
struct UDH_RoleDetailsWidget_OnShowCustomizationAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_RoleDetailsWidget.OnPreviewRole
struct UDH_RoleDetailsWidget_OnPreviewRole_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RolePerkItemWidget.GetPerkData
struct UDH_RolePerkItemWidget_GetPerkData_Params
{
	class UDH_RolePerkData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_RolePerkItemWidget.BP_OnDescriptionSet
struct UDH_RolePerkItemWidget_BP_OnDescriptionSet_Params
{
	struct FText                                       Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_RolePerksWidget.OnPreviewRole
struct UDH_RolePerksWidget_OnPreviewRole_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RolePerksWidget.BP_OnPreviewRole
struct UDH_RolePerksWidget_BP_OnPreviewRole_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RolePerksWidget.BP_OnItemsEmptied
struct UDH_RolePerksWidget_BP_OnItemsEmptied_Params
{
};

// Function DreadHungerUI.DH_RolePerksWidget.BP_OnItemCreated
struct UDH_RolePerksWidget_BP_OnItemCreated_Params
{
	class UDH_RolePerkItemWidget*                      CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_RolePrestigeButtonWidget.OnPreviewRole
struct UDH_RolePrestigeButtonWidget_OnPreviewRole_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RolePrestigeButtonWidget.OnInternalButtonClicked
struct UDH_RolePrestigeButtonWidget_OnInternalButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHungerUI.DH_RoleSelectionButtonViewWidget.RoleSelectionButtonViewWidgetSignature__DelegateSignature
struct UDH_RoleSelectionButtonViewWidget_RoleSelectionButtonViewWidgetSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_RoleSelectionButtonViewWidget.OnBaseButtonClicked
struct UDH_RoleSelectionButtonViewWidget_OnBaseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_RoleSelectionConfirmationButton.SetDesiredRole
struct UDH_RoleSelectionConfirmationButton_SetDesiredRole_Params
{
	class UDH_PlayerRoleData*                          InDesiredRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleSelectionWidget.SetDesiredRole
struct UDH_RoleSelectionWidget_SetDesiredRole_Params
{
	class UDH_PlayerRoleData*                          InDesiredRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleSelectionWidget.PopulateRoles
struct UDH_RoleSelectionWidget_PopulateRoles_Params
{
};

// Function DreadHungerUI.DH_RoleSelectionWidget.OnShowRoleCustomization
struct UDH_RoleSelectionWidget_OnShowRoleCustomization_Params
{
	bool                                               bShow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleSelectionWidget.OnPlayerRoleChanged
struct UDH_RoleSelectionWidget_OnPlayerRoleChanged_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleSelectionWidget.OnFadeOutAnimationFinished
struct UDH_RoleSelectionWidget_OnFadeOutAnimationFinished_Params
{
};

// Function DreadHungerUI.DH_RoleSelectionWidget.OnAvatarCreated
struct UDH_RoleSelectionWidget_OnAvatarCreated_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_CosmeticPreviewAvatar*                   Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_RoleSelectionWidget.ChooseRoleSelection
struct UDH_RoleSelectionWidget_ChooseRoleSelection_Params
{
};

// Function DreadHungerUI.DH_SanityAttributeWidget.OnSanityIncreasingChanged
struct UDH_SanityAttributeWidget_OnSanityIncreasingChanged_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SanityAttributeWidget.OnControlledHumanChanged
struct UDH_SanityAttributeWidget_OnControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SaveConversionPopupWidget.ShowSaveConversionPopup
struct UDH_SaveConversionPopupWidget_ShowSaveConversionPopup_Params
{
};

// Function DreadHungerUI.DH_ScoreboardGameReportWidget.OnShowScoreboard
struct UDH_ScoreboardGameReportWidget_OnShowScoreboard_Params
{
	bool                                               bShowScoreboard;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayJustLoaded;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardGameReportWidget.OnSelectAllPlayersButtonClicked
struct UDH_ScoreboardGameReportWidget_OnSelectAllPlayersButtonClicked_Params
{
};

// Function DreadHungerUI.DH_ScoreboardGameReportWidget.BP_OnSetExpeditionDates
struct UDH_ScoreboardGameReportWidget_BP_OnSetExpeditionDates_Params
{
	struct FDateTime                                   StartDate;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FDateTime                                   EndDate;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetSelected
struct UDH_ScoreboardPlayerListItemViewWidget_SetSelected_Params
{
	bool                                               bSelected;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetPlayerImageTint
struct UDH_ScoreboardPlayerListItemViewWidget_SetPlayerImageTint_Params
{
	struct FLinearColor                                InTint;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget.SetDead
struct UDH_ScoreboardPlayerListItemViewWidget_SetDead_Params
{
	bool                                               bDead;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerListItemWidget.SetIsSelected
struct UDH_ScoreboardPlayerListItemWidget_SetIsSelected_Params
{
	bool                                               bNewIsSelected;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerListItemWidget.OnBaseButtonClicked
struct UDH_ScoreboardPlayerListItemWidget_OnBaseButtonClicked_Params
{
};

// Function DreadHungerUI.DH_ScoreboardPlayerListWidget.OnShowScoreboard
struct UDH_ScoreboardPlayerListWidget_OnShowScoreboard_Params
{
	bool                                               bShowScoreboard;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayJustLoaded;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerListWidget.BP_OnItemCreated
struct UDH_ScoreboardPlayerListWidget_BP_OnItemCreated_Params
{
	class UDH_ScoreboardPlayerListItemWidget*          CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.ShowDeeds
struct UDH_ScoreboardPlayerReportCardWidget_ShowDeeds_Params
{
};

// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.OnTimelineFrameChanged
struct UDH_ScoreboardPlayerReportCardWidget_OnTimelineFrameChanged_Params
{
};

// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.OnSelectedIndicesChanged
struct UDH_ScoreboardPlayerReportCardWidget_OnSelectedIndicesChanged_Params
{
};

// Function DreadHungerUI.DH_ScoreboardPlayerReportCardWidget.HideDeeds
struct UDH_ScoreboardPlayerReportCardWidget_HideDeeds_Params
{
};

// Function DreadHungerUI.DH_ScoreboardPlayerReportListWidget.OnShowScoreboard
struct UDH_ScoreboardPlayerReportListWidget_OnShowScoreboard_Params
{
	bool                                               bShowScoreboard;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayJustLoaded;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardPlayerReportListWidget.OnSelectedIndicesChanged
struct UDH_ScoreboardPlayerReportListWidget_OnSelectedIndicesChanged_Params
{
};

// Function DreadHungerUI.DH_ScoreboardPlayerStatWidget.GetScoreTotal
struct UDH_ScoreboardPlayerStatWidget_GetScoreTotal_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.StopScrubbing
struct UDH_ScoreboardTimelineWidget_StopScrubbing_Params
{
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.StartScrubbing
struct UDH_ScoreboardTimelineWidget_StartScrubbing_Params
{
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.SetIsPlaying
struct UDH_ScoreboardTimelineWidget_SetIsPlaying_Params
{
	bool                                               bNewIsPlaying;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.ScrollPlaybackSpeed
struct UDH_ScoreboardTimelineWidget_ScrollPlaybackSpeed_Params
{
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnSliderValueChanged
struct UDH_ScoreboardTimelineWidget_OnSliderValueChanged_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnShowScoreboard
struct UDH_ScoreboardTimelineWidget_OnShowScoreboard_Params
{
	bool                                               bShowScoreboard;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayJustLoaded;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnScoreboardHidden
struct UDH_ScoreboardTimelineWidget_OnScoreboardHidden_Params
{
};

// Function DreadHungerUI.DH_ScoreboardTimelineWidget.OnPlayButtonClicked
struct UDH_ScoreboardTimelineWidget_OnPlayButtonClicked_Params
{
};

// Function DreadHungerUI.DH_ScoreboardWidget.SetSelectedIndices
struct UDH_ScoreboardWidget_SetSelectedIndices_Params
{
};

// Function DreadHungerUI.DH_ScoreboardWidget.RemoveSelectedIndex
struct UDH_ScoreboardWidget_RemoveSelectedIndex_Params
{
	int                                                InSelectedIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardWidget.OnShowScoreboard
struct UDH_ScoreboardWidget_OnShowScoreboard_Params
{
	bool                                               bShowScoreboard;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayJustLoaded;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ScoreboardWidget.OnCopyMatchIDButtonClicked
struct UDH_ScoreboardWidget_OnCopyMatchIDButtonClicked_Params
{
};

// Function DreadHungerUI.DH_ScoreboardWidget.OnCloseButtonWidgetClicked
struct UDH_ScoreboardWidget_OnCloseButtonWidgetClicked_Params
{
};

// Function DreadHungerUI.DH_ScoreboardWidget.AddSelectedIndex
struct UDH_ScoreboardWidget_AddSelectedIndex_Params
{
	int                                                InSelectedIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.Show
struct UDH_ServerMessageViewWidget_Show_Params
{
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.OnWidgetAnimationHandlerFinishedHide
struct UDH_ServerMessageViewWidget_OnWidgetAnimationHandlerFinishedHide_Params
{
	class UDH_WidgetAnimationHandler*                  InAnimationHandler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.OnWidgetAnimationHandlerBeginShow
struct UDH_ServerMessageViewWidget_OnWidgetAnimationHandlerBeginShow_Params
{
	class UDH_WidgetAnimationHandler*                  InAnimationHandler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.Hide
struct UDH_ServerMessageViewWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.BP_OnSetVisible
struct UDH_ServerMessageViewWidget_BP_OnSetVisible_Params
{
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.BP_OnSetHidden
struct UDH_ServerMessageViewWidget_BP_OnSetHidden_Params
{
};

// Function DreadHungerUI.DH_ServerMessageViewWidget.BP_CreateAnimationHandler
struct UDH_ServerMessageViewWidget_BP_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_SettingsWidget.Show
struct UDH_SettingsWidget_Show_Params
{
};

// Function DreadHungerUI.DH_SettingsWidget.Hide
struct UDH_SettingsWidget_Hide_Params
{
};

// Function DreadHungerUI.DH_SettingsWidget.BP_OnShow
struct UDH_SettingsWidget_BP_OnShow_Params
{
};

// Function DreadHungerUI.DH_SettingsWidget.BP_OnHide
struct UDH_SettingsWidget_BP_OnHide_Params
{
};

// Function DreadHungerUI.DH_ShipAttributesWidget.OnControlledShipChanged
struct UDH_ShipAttributesWidget_OnControlledShipChanged_Params
{
	class ADH_HumanCharacter*                          ShipController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipAvatarWidget.OnShipCustomizationRegionChanged
struct UDH_ShipAvatarWidget_OnShipCustomizationRegionChanged_Params
{
	EShipCustomizationRegion                           InRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipCosmeticsShopWidget.RemoveAllEquippedCosmetics
struct UDH_ShipCosmeticsShopWidget_RemoveAllEquippedCosmetics_Params
{
};

// Function DreadHungerUI.DH_ShipCosmeticsShopWidget.OnRegionSelected
struct UDH_ShipCosmeticsShopWidget_OnRegionSelected_Params
{
	unsigned char                                      RegionIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipCosmeticsShopWidget.ConfirmShipCosmetics
struct UDH_ShipCosmeticsShopWidget_ConfirmShipCosmetics_Params
{
};

// Function DreadHungerUI.DH_ShipObstructionWidget.Reset
struct UDH_ShipObstructionWidget_Reset_Params
{
};

// DelegateFunction DreadHungerUI.DH_ShipObstructionWidget.OnObstructionDamageTimeUpdatedSignature__DelegateSignature
struct UDH_ShipObstructionWidget_OnObstructionDamageTimeUpdatedSignature__DelegateSignature_Params
{
	class UDH_ShipObstructionWidget*                   ShipObstructionWidget;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipObstructionWidget.OnHealthChanged
struct UDH_ShipObstructionWidget_OnHealthChanged_Params
{
	class ADH_DestructibleActor*                       InObstruction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipObstructionWidget.OnGameStateDistanceFromStartToEndChanged
struct UDH_ShipObstructionWidget_OnGameStateDistanceFromStartToEndChanged_Params
{
	class ADH_GameStateBase*                           GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipProgressWidget.UpdateVisibility
struct UDH_ShipProgressWidget_UpdateVisibility_Params
{
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipProgressWidget.OnWarshipChanged
struct UDH_ShipProgressWidget_OnWarshipChanged_Params
{
	class ADH_Warship*                                 InWarship;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipProgressWidget.OnShipObstructionsChanged
struct UDH_ShipProgressWidget_OnShipObstructionsChanged_Params
{
	class ADH_GameStateBase*                           InGameState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipProgressWidget.OnObstructionDamageTimeUpdated
struct UDH_ShipProgressWidget_OnObstructionDamageTimeUpdated_Params
{
	class UDH_ShipObstructionWidget*                   ShipObstructionWidget;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InTime;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipStatusWidget.OnWarshipHullIntegrityChanged
struct UDH_ShipStatusWidget_OnWarshipHullIntegrityChanged_Params
{
	class ADH_Warship*                                 InWarship;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipStatusWidget.OnPowderkegFuseUpdate
struct UDH_ShipStatusWidget_OnPowderkegFuseUpdate_Params
{
	class ADH_InventoryPickup*                         Powderkeg;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DetonationTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipStatusWidget.OnPlayerThrallChanged
struct UDH_ShipStatusWidget_OnPlayerThrallChanged_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipStatusWidget.OnPlayerControllerPlayerStateChanged
struct UDH_ShipStatusWidget_OnPlayerControllerPlayerStateChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipStatusWidget.OnBoilerGunpowderChanged
struct UDH_ShipStatusWidget_OnBoilerGunpowderChanged_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ShipStatusWidget.OnBoilerChanged
struct UDH_ShipStatusWidget_OnBoilerChanged_Params
{
	class ADH_WarshipBoiler*                           Boiler;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellSlotWidget.OnSpellDragEnd
struct UDH_SpellSlotWidget_OnSpellDragEnd_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellSlotWidget.OnSpellDragBegin
struct UDH_SpellSlotWidget_OnSpellDragBegin_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellSlotWidget.OnCurrentDragDropOperationDrop
struct UDH_SpellSlotWidget_OnCurrentDragDropOperationDrop_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellSlotWidget.OnCurrentDragDropOperationCancelled
struct UDH_SpellSlotWidget_OnCurrentDragDropOperationCancelled_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellSlotWidget.GetTooltipWidget
struct UDH_SpellSlotWidget_GetTooltipWidget_Params
{
	class UDH_InventoryTooltipWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellWidget.Update
struct UDH_SpellWidget_Update_Params
{
};

// Function DreadHungerUI.DH_SpellWidget.Toggle
struct UDH_SpellWidget_Toggle_Params
{
};

// Function DreadHungerUI.DH_SpellWidget.Select
struct UDH_SpellWidget_Select_Params
{
	bool                                               bDragged;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellWidget.OnSpellSelected
struct UDH_SpellWidget_OnSpellSelected_Params
{
	class UDH_TotemSpell*                              InSpell;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellWidget.OnSpellDeSelected
struct UDH_SpellWidget_OnSpellDeSelected_Params
{
	class UDH_TotemSpell*                              InSpell;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellWidget.GetTooltipWidget
struct UDH_SpellWidget_GetTooltipWidget_Params
{
	class UDH_SpellTooltipWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpellWidget.Deselect
struct UDH_SpellWidget_Deselect_Params
{
};

// Function DreadHungerUI.DH_SpellWidget.BP_OnSelected
struct UDH_SpellWidget_BP_OnSelected_Params
{
};

// Function DreadHungerUI.DH_SpellWidget.BP_OnDeselected
struct UDH_SpellWidget_BP_OnDeselected_Params
{
};

// Function DreadHungerUI.DH_SpiedActorInfoWidget.OnSpyingChanged
struct UDH_SpiedActorInfoWidget_OnSpyingChanged_Params
{
	bool                                               bInSpying;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiedActorInfoWidget.OnSpiedTargetChanged
struct UDH_SpiedActorInfoWidget_OnSpiedTargetChanged_Params
{
	class AActor*                                      InSpiedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnSpiritWalkingChanged
struct UDH_SpiritWalkTimerWidget_OnSpiritWalkingChanged_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerDeadChanged
struct UDH_SpiritWalkTimerWidget_OnPlayerDeadChanged_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerControllerPlayerStateChanged
struct UDH_SpiritWalkTimerWidget_OnPlayerControllerPlayerStateChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnPlayerControllerControlledHumanChanged
struct UDH_SpiritWalkTimerWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.OnActiveSpellsChanged
struct UDH_SpiritWalkTimerWidget_OnActiveSpellsChanged_Params
{
	class ADH_SpellManager*                            SpellManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.CreateAnimationHandler
struct UDH_SpiritWalkTimerWidget_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_SpiritWalkTimerWidget.BP_SetTimeRemaining
struct UDH_SpiritWalkTimerWidget_BP_SetTimeRemaining_Params
{
	float                                              CurrentTimeRemaining;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_StartingGameWidget.ShowAbortButton
struct UDH_StartingGameWidget_ShowAbortButton_Params
{
};

// Function DreadHungerUI.DH_StartingGameWidget.OnOnlineSessionUpdateComplete
struct UDH_StartingGameWidget_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHungerUI.DH_StartingGameWidget.Abort
struct UDH_StartingGameWidget_Abort_Params
{
};

// Function DreadHungerUI.DH_StepIndicatorWidget.StartProgress
struct UDH_StepIndicatorWidget_StartProgress_Params
{
};

// DelegateFunction DreadHungerUI.DH_StepIndicatorWidget.OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature
struct UDH_StepIndicatorWidget_OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature_Params
{
};

// Function DreadHungerUI.DH_StepIndicatorWidget.OnProgressFinished
struct UDH_StepIndicatorWidget_OnProgressFinished_Params
{
};

// Function DreadHungerUI.DH_StepIndicatorWidget.DesignTimeTick
struct UDH_StepIndicatorWidget_DesignTimeTick_Params
{
};

// Function DreadHungerUI.DH_TalismanSlotWidget.OnCurrentDragDropOperationDrop
struct UDH_TalismanSlotWidget_OnCurrentDragDropOperationDrop_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TalismanSlotWidget.OnCurrentDragDropOperationCancelled
struct UDH_TalismanSlotWidget_OnCurrentDragDropOperationCancelled_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TalismanSlotWidget.GetTooltipWidget
struct UDH_TalismanSlotWidget_GetTooltipWidget_Params
{
	class UDH_InventoryTooltipWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TalismanWidget.Update
struct UDH_TalismanWidget_Update_Params
{
};

// Function DreadHungerUI.DH_TalismanWidget.Toggle
struct UDH_TalismanWidget_Toggle_Params
{
};

// Function DreadHungerUI.DH_TalismanWidget.Select
struct UDH_TalismanWidget_Select_Params
{
	bool                                               bDragged;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TalismanWidget.GetTooltipWidget
struct UDH_TalismanWidget_GetTooltipWidget_Params
{
	class UDH_InventoryTooltipWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TalismanWidget.Deselect
struct UDH_TalismanWidget_Deselect_Params
{
};

// Function DreadHungerUI.DH_TalismanWidget.BP_OnSelected
struct UDH_TalismanWidget_BP_OnSelected_Params
{
};

// Function DreadHungerUI.DH_TalismanWidget.BP_OnDeselected
struct UDH_TalismanWidget_BP_OnDeselected_Params
{
};

// Function DreadHungerUI.DH_TextBlockWidget.SetTextColorNameOverride
struct UDH_TextBlockWidget_SetTextColorNameOverride_Params
{
	struct FName                                       InTextColorNameOverride;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TextBlockWidget.SetText
struct UDH_TextBlockWidget_SetText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.SetSelectedSpell
struct UDH_ThrallBadgeWidget_SetSelectedSpell_Params
{
	class UDH_TotemSpell*                              InSpellClass;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnUsingThrallVisionChanged
struct UDH_ThrallBadgeWidget_OnUsingThrallVisionChanged_Params
{
	bool                                               bUsingThrallVision;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnTotemCountChanged
struct UDH_ThrallBadgeWidget_OnTotemCountChanged_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnSelectedInventoryViewChanged
struct UDH_ThrallBadgeWidget_OnSelectedInventoryViewChanged_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerThrallChanged
struct UDH_ThrallBadgeWidget_OnPlayerThrallChanged_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerReconnectedToGameTimerExpired
struct UDH_ThrallBadgeWidget_OnPlayerReconnectedToGameTimerExpired_Params
{
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerReconnectedToGame
struct UDH_ThrallBadgeWidget_OnPlayerReconnectedToGame_Params
{
	class ADH_PlayerState*                             ReconnectingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnPlayerControllerControlledHumanChanged
struct UDH_ThrallBadgeWidget_OnPlayerControllerControlledHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnMappingsChangedEvent
struct UDH_ThrallBadgeWidget_OnMappingsChangedEvent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnIncapacitatedChanged
struct UDH_ThrallBadgeWidget_OnIncapacitatedChanged_Params
{
	class ADH_HumanCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallBadgeWidget.OnActivateThrallVisionFailed
struct UDH_ThrallBadgeWidget_OnActivateThrallVisionFailed_Params
{
};

// Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.SetMessageData
struct UDH_ThrallMessageRadialOptionWidget_SetMessageData_Params
{
	struct FThrallMessageData                          InMessageData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.GetMessageData
struct UDH_ThrallMessageRadialOptionWidget_GetMessageData_Params
{
	struct FThrallMessageData                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHungerUI.DH_ThrallMessageRadialOptionWidget.BP_OnSetLabelText
struct UDH_ThrallMessageRadialOptionWidget_BP_OnSetLabelText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.UpdateCooldownText
struct UDH_ThrallSpellRadialOptionWidget_UpdateCooldownText_Params
{
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.UpdateCastingState
struct UDH_ThrallSpellRadialOptionWidget_UpdateCastingState_Params
{
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.Update
struct UDH_ThrallSpellRadialOptionWidget_Update_Params
{
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.SetSpell
struct UDH_ThrallSpellRadialOptionWidget_SetSpell_Params
{
	class UDH_TotemSpell*                              InAssociatedSpell;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnUpdateTotemTargetsChanged
struct UDH_ThrallSpellRadialOptionWidget_OnUpdateTotemTargetsChanged_Params
{
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerStateOwnedTotemsChanged
struct UDH_ThrallSpellRadialOptionWidget_OnPlayerStateOwnedTotemsChanged_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerRemovedFromGame
struct UDH_ThrallSpellRadialOptionWidget_OnPlayerRemovedFromGame_Params
{
	class ADH_PlayerState*                             RemovedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnPlayerAddedToGame
struct UDH_ThrallSpellRadialOptionWidget_OnPlayerAddedToGame_Params
{
	class ADH_PlayerState*                             AddedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnCommittedAnimFinished
struct UDH_ThrallSpellRadialOptionWidget_OnCommittedAnimFinished_Params
{
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.OnActiveSpellsChanged
struct UDH_ThrallSpellRadialOptionWidget_OnActiveSpellsChanged_Params
{
	class ADH_SpellManager*                            InSpellManager;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetOnCooldown
struct UDH_ThrallSpellRadialOptionWidget_GetOnCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetLabelBorder
struct UDH_ThrallSpellRadialOptionWidget_GetLabelBorder_Params
{
	class UBorder*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetCanBeCast
struct UDH_ThrallSpellRadialOptionWidget_GetCanBeCast_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_ThrallSpellRadialOptionWidget.GetAssociatedSpell
struct UDH_ThrallSpellRadialOptionWidget_GetAssociatedSpell_Params
{
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnTitleScreenLoginStatusWidgetShown
struct UDH_TitleScreenContinueWidget_OnTitleScreenLoginStatusWidgetShown_Params
{
};

// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnOverlayWidgetShown
struct UDH_TitleScreenContinueWidget_OnOverlayWidgetShown_Params
{
	class UWidget*                                     ShownWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnOverlayWidgetHidden
struct UDH_TitleScreenContinueWidget_OnOverlayWidgetHidden_Params
{
	class UWidget*                                     HiddenWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnLoginFinished
struct UDH_TitleScreenContinueWidget_OnLoginFinished_Params
{
};

// Function DreadHungerUI.DH_TitleScreenContinueWidget.OnInputTypeChanged
struct UDH_TitleScreenContinueWidget_OnInputTypeChanged_Params
{
	EDHInputType                                       InputType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TitleScreenContinueWidget.ContinueKeyPressed
struct UDH_TitleScreenContinueWidget_ContinueKeyPressed_Params
{
};

// Function DreadHungerUI.DH_TitleScreenNotificationOverlayWidget.OnQuitToDesktopButtonClicked
struct UDH_TitleScreenNotificationOverlayWidget_OnQuitToDesktopButtonClicked_Params
{
};

// Function DreadHungerUI.DH_TitleScreenNotificationOverlayWidget.OnOKButtonClicked
struct UDH_TitleScreenNotificationOverlayWidget_OnOKButtonClicked_Params
{
};

// Function DreadHungerUI.DH_TitleScreenTutorialChoiceWidget.OnMessageYesButtonClicked
struct UDH_TitleScreenTutorialChoiceWidget_OnMessageYesButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TitleScreenTutorialChoiceWidget.OnMessageNoButtonClicked
struct UDH_TitleScreenTutorialChoiceWidget_OnMessageNoButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TitleScreenWidget.OnPlayerInputReceived
struct UDH_TitleScreenWidget_OnPlayerInputReceived_Params
{
};

// Function DreadHungerUI.DH_TitleScreenWidget.OnErrorsUpdated
struct UDH_TitleScreenWidget_OnErrorsUpdated_Params
{
};

// Function DreadHungerUI.DH_TitleScreenWidget.OnChoseTutorial
struct UDH_TitleScreenWidget_OnChoseTutorial_Params
{
	bool                                               bInDesiresTutorial;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialChapterButtonWidget.OnClicked
struct UDH_TutorialChapterButtonWidget_OnClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialChapterSelectButtonWidget.OnClicked
struct UDH_TutorialChapterSelectButtonWidget_OnClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialChapterSelectWidget.ShowChapters
struct UDH_TutorialChapterSelectWidget_ShowChapters_Params
{
};

// Function DreadHungerUI.DH_TutorialConceptWidget.OnConceptExpired
struct UDH_TutorialConceptWidget_OnConceptExpired_Params
{
};

// Function DreadHungerUI.DH_TutorialConceptWidget.OnConceptChanged
struct UDH_TutorialConceptWidget_OnConceptChanged_Params
{
	struct FName                                       NewConceptName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialConceptWidget.OnAxisBindPressed
struct UDH_TutorialConceptWidget_OnAxisBindPressed_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialConceptWidget.OnActionBindPressed
struct UDH_TutorialConceptWidget_OnActionBindPressed_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function DreadHungerUI.DH_TutorialConceptWidget.GetCurrentConceptName
struct UDH_TutorialConceptWidget_GetCurrentConceptName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialIntroScreenWidget.OnTutorialChapterChanged
struct UDH_TutorialIntroScreenWidget_OnTutorialChapterChanged_Params
{
	class UDH_TutorialChapter*                         NewChapter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialObjectiveWidget.OnObjectiveCompleted
struct UDH_TutorialObjectiveWidget_OnObjectiveCompleted_Params
{
	class UDH_TutorialObjective*                       CompletedObjective;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_TutorialObjectiveWidget.OnObjectiveChanged
struct UDH_TutorialObjectiveWidget_OnObjectiveChanged_Params
{
	class UDH_TutorialObjective*                       NewObjective;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_UnacceptedInventoryTypeWidget.BP_OnSetAcceptedType
struct UDH_UnacceptedInventoryTypeWidget_BP_OnSetAcceptedType_Params
{
	EInventoryType                                     AllowedType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_UseSpellCastingHintWidget.OnSelectedInventoryViewChanged
struct UDH_UseSpellCastingHintWidget_OnSelectedInventoryViewChanged_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_UseSpellCastingHintWidget.BP_IsBoneCharm
struct UDH_UseSpellCastingHintWidget_BP_IsBoneCharm_Params
{
	class ADH_Inventory*                               Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHungerUI.DH_VersionWidget.GetVersionText
struct UDH_VersionWidget_GetVersionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHungerUI.DH_VivoxErrorItemWidget.BP_OnErrorSet
struct UDH_VivoxErrorItemWidget_BP_OnErrorSet_Params
{
	struct FText                                       InLocalizedText;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      InRawError;                                               // (Parm, ZeroConstructor)
};

// Function DreadHungerUI.DH_VivoxErrorWidget.OnVivoxErrorsUpdated
struct UDH_VivoxErrorWidget_OnVivoxErrorsUpdated_Params
{
	TArray<struct FDH_VivoxError>                      Errors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHungerUI.DH_VivoxErrorWidget.BP_OnItemCreated
struct UDH_VivoxErrorWidget_BP_OnItemCreated_Params
{
	class UDH_VivoxErrorItemWidget*                    CreatedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPEchoTestWidget.OnVivoxShowEchoTest
struct UDH_VOIPEchoTestWidget_OnVivoxShowEchoTest_Params
{
};

// Function DreadHungerUI.DH_VOIPEchoTestWidget.OnVivoxHideEchoTest
struct UDH_VOIPEchoTestWidget_OnVivoxHideEchoTest_Params
{
};

// Function DreadHungerUI.DH_VOIPEchoTestWidget.BP_UpdateAudioEnergyBar
struct UDH_VOIPEchoTestWidget_BP_UpdateAudioEnergyBar_Params
{
	float                                              AudioEnergy;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPProblemsButtonWidget.OnBaseButtonClicked
struct UDH_VOIPProblemsButtonWidget_OnBaseButtonClicked_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPProblemsEOSButtonWidget.OnOnlinePartyMembersChanged
struct UDH_VOIPProblemsEOSButtonWidget_OnOnlinePartyMembersChanged_Params
{
};

// Function DreadHungerUI.DH_VOIPProblemsWidget.OnStressTestCheckBoxChanged
struct UDH_VOIPProblemsWidget_OnStressTestCheckBoxChanged_Params
{
	bool                                               bChecked;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPProblemsWidget.OnStillHavingVOIPIssuesButtonClicked
struct UDH_VOIPProblemsWidget_OnStillHavingVOIPIssuesButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPProblemsWidget.OnActionButtonClicked
struct UDH_VOIPProblemsWidget_OnActionButtonClicked_Params
{
	class UDH_ButtonWidget*                            InButton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPProblemsEOSWidget.OnOnlineSessionJoinSessionComplete
struct UDH_VOIPProblemsEOSWidget_OnOnlineSessionJoinSessionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnVivoxLoggedIn
struct UDH_VOIPProblemsVivoxWidget_OnVivoxLoggedIn_Params
{
};

// Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnStartupVOIPIndicatorFinished
struct UDH_VOIPProblemsVivoxWidget_OnStartupVOIPIndicatorFinished_Params
{
};

// Function DreadHungerUI.DH_VOIPProblemsVivoxWidget.OnShutDownVOIPIndicatorFinished
struct UDH_VOIPProblemsVivoxWidget_OnShutDownVOIPIndicatorFinished_Params
{
};

// Function DreadHungerUI.DH_WorkbenchInventoryWidget.SetRepairComponent
struct UDH_WorkbenchInventoryWidget_SetRepairComponent_Params
{
	class UDH_WorkbenchRepairComponent*                InRepairComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHungerUI.DH_WorkbenchInventoryWidget.GetRepairComponent
struct UDH_WorkbenchInventoryWidget_GetRepairComponent_Params
{
	class UDH_WorkbenchRepairComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
