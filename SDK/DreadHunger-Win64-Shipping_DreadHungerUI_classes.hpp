                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHungerUI_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DreadHungerUI.DH_VisibilityWidget
// size:0x0080 (0x0260 - 0x02E0)
class UDH_VisibilityWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	ESlateVisibility                                   VisibleVisibility;                                        // 0x0270(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   HiddenVisibility;                                         // 0x0271(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
	struct FGameplayTag                                ShowTag;                                                  // 0x0274(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       ForceHideTags;                                            // 0x0280(0x0020) (Edit, DisableEditOnInstance)
	float                                              ShowAnimationForwardPlaybackSpeed;                        // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowAnimationReversePlaybackSpeed;                        // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidgetAnimation*                            ShowAnimation;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            HideAnimation;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x02B8(0x0028) MISSED OFFSET

	void Show()//offset:0x1047AC0;
	void OnVisibilityWidgetHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnVisibilityTagsChanged(class UDH_UIVisibilityTagHandler* TagHandler)//offset:0x10822B0;
	void OnShown()//offset:0x106C960;
	void OnShow()//offset:0x788E90;
	void OnHide()//offset:0x788E70;
	void OnHidden()//offset:0x1081EF0;
	bool IsHiding()//offset:0x1081DB0;
	void InstantShow()//offset:0x1081D90;
	void InstantHide()//offset:0x1081D70;
	void Hide()//offset:0x1081D50;
	void BP_OnShown()//offset:0x13CEB30;
	void BP_OnHidden()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RadialMenuBaseWidget
// size:0x0098 (0x02E0 - 0x0378)
class UDH_RadialMenuBaseWidget : public UDH_VisibilityWidget
{
public:
	bool                                               bDesignTimeDrawDebug;                                     // 0x02E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                BaseNumberOfWidgets;                                      // 0x02E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseRotationalOffset;                                     // 0x02E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterButtonMaxRadius;                                    // 0x02EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterButtonDeselectedRadius;                             // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedColorName;                                        // 0x02F4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DeselectedColorName;                                      // 0x02FC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WidgetRadius;                                             // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MouseCursorBorderMaterial;                                // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CommitMessageSound;                                       // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SelectedMessageSound;                                     // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_RadialMenuOptionBaseWidget*              ItemClass;                                                // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasPanel*                                OptionsCanvas;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	TArray<class UDH_RadialMenuOptionBaseWidget*>      Items;                                                    // 0x0338(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UImage*                                      MouseCursorBorderImage;                                   // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BorderCursorArrow;                                        // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      CenterCursorImage;                                        // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0360(0x0018) MISSED OFFSET

	static float VecToAngle(const struct FVector2D& InVec)//offset:0x106CA50;
	void UpdateSelectedIndex()//offset:0x106CA30;
	void UpdateMouseCursor(const struct FVector2D& InCursorPosition)//offset:0x106C9A0;
	void SetCursorPosition(const struct FVector2D& InCursorCenter)//offset:0x106C520;
	void SetCanShow(bool bInCanShow)//offset:0x106C490;
	void PopulateOptions()//offset:0x106C3D0;
	void PlaySelectedSound()//offset:0x106C320;
	void OnCommittedOptionFinishedAnimations()//offset:0x106BB80;
	static bool IsSelectedIndex(const struct FFloatRange& SegmentAngles, float MouseAngle)//offset:0x106B9B0;
	class UWidgetAnimation* GetShowAnimation()//offset:0x104BF40;
	int GetSelectedIndexFromMouseAngle(float MouseAngle)//offset:0x106B780;
	int GetSelectedIndex()//offset:0xF53C10;
	static TArray<struct FFloatRange> GetSegmentAngles(int NumberOfSegments, float Radius, float RotationalOffset)//offset:0x106B620;
	class UCanvasPanel* GetOptionsCanvas()//offset:0x106B5E0;
	TArray<struct FDH_RadialOptionPosition> GetOptionPositions(float Radius, int NumberOfOptions)//offset:0x106B4D0;
	int GetNumberOfVisibleWidgets()//offset:0x106B4A0;
	bool GetMouseSelectMode()//offset:0x106B480;
	float GetMouseAngle()//offset:0x106B450;
	struct FVector2D GetCursorPosition()//offset:0x106B420;
	static float GetCenterAngle(float LowerAngle, float UpperAngle)//offset:0x106B350;
	bool GetCanShow()//offset:0x106B330;
	void DoSelectedAction()//offset:0x106B2F0;
	void CreateButtons()//offset:0x106B2D0;
	void BP_OnOptionSetVisible(int OptionIndex)//offset:0x106B240;
	void BP_OnOptionSetHidden(int OptionIndex)//offset:0x106B1B0;
	int BP_OnGetNumberOfOptions()//offset:0x106B120;
	void BP_OnDoSelectedAction()//offset:0x13CEB30;
	bool BP_OnCanUseRadial()//offset:0x106B030;
};


// Class DreadHungerUI.DH_ActionMappingRadialMenuWidget
// size:0x0028 (0x0378 - 0x03A0)
class UDH_ActionMappingRadialMenuWidget : public UDH_RadialMenuBaseWidget
{
public:
	struct FName                                       ActionMappingName;                                        // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0380(0x0020) MISSED OFFSET
};


// Class DreadHungerUI.DH_AttributeViewWidget
// size:0x0090 (0x0260 - 0x02F0)
class UDH_AttributeViewWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnAttributeViewWidgetCriticalChangedDelegate;             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxRateOfChange;                                          // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BorderPadding;                                            // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReversedReserved;                                        // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaysPopAnimation;                                       // 0x0279(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRateOfChange;                                        // 0x027A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x027B(0x0005) MISSED OFFSET
	class UMaterialInterface*                          FillMaterial;                                             // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReversedPulseThreshold;                                  // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	float                                              PulseThreshold;                                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_RateOfChangeWidget*                      RateOfChangeClass;                                        // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          IconMIDParent;                                            // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_RateOfChangeWidget*                      RateOfChangeWidget;                                       // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IconMID;                                                  // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	class UOverlay*                                    BaseOverlay;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Icon;                                                     // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PopIcon;                                                  // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    IconOverlay;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CircularFillWidget*                      CircularFill;                                             // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PopAnimation;                                             // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	void SetValue(float InValue)//offset:0x1044310;
	void SetTexture(class UTexture2D* InIconTexture)//offset:0x1044280;
	void SetRateOfChange(float InRate)//offset:0x1043F70;
	void SetMaxRateOfChange(float InMaxRate)//offset:0x1043EF0;
	void PlayPopAnimation()//offset:0x1043630;
	void OnCircularFillFillPercentChanged()//offset:0x1043580;
	void OnAttributeViewWidgetCriticalChangedSignature__DelegateSignature(class UDH_AttributeViewWidget* ViewWidget)//offset:0x13CEB30;
	void Init(class UTexture2D* InIconTexture, const struct FLinearColor& IconColor)//offset:0x1043340;
	float GetMaxRateOfChange()//offset:0x1043320;
	bool GetCritical()//offset:0x10432B0;
	class UDH_CircularFillWidget* GetCircularFill()//offset:0x1043290;
};


// Class DreadHungerUI.DH_AutoSearchForLobbiesButtonWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_AutoSearchForLobbiesButtonWidget : public UUserWidget
{
public:

	void AutoSearch()//offset:0x10431D0;
};


// Class DreadHungerUI.DH_LootContainerBaseWidget
// size:0x0020 (0x02E0 - 0x0300)
class UDH_LootContainerBaseWidget : public UDH_VisibilityWidget
{
public:

	void SetOwningCraftingComponent(class UDH_CraftingComponent* InOwningCraftingComponent)//offset:0x105BB40;
	void SetHeatSourceComponent(class UDH_HeatSourceComponent* InHeatSourceComponent)//offset:0x1063D70;
	void OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InInventoryTransactionComponent, class UDH_InventoryManager* InInventoryManager)//offset:0x1063AE0;
	class UDH_CraftingComponent* GetOwningCraftingComponent()//offset:0x1062DC0;
	class UDH_HeatSourceComponent* GetHeatSourceComponent()//offset:0x1062C70;
};


// Class DreadHungerUI.DH_CraftingStationWidget
// size:0x0028 (0x0300 - 0x0328)
class UDH_CraftingStationWidget : public UDH_LootContainerBaseWidget
{
public:
	class UUserWidget*                                 CraftingRecipeClass;                                      // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialNumOfRecipeButtons;                                // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UDH_CraftingStationViewWidget*               View;                                                     // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	void OnViewHidden()//offset:0x104CF00;
	void OnCraftingStationViewClose()//offset:0x104C4C0;
	void OnCraftingComponentActivated(class UActorComponent* Component, bool bReset)//offset:0x104C2D0;
	void OnCraftableRecipesChanged()//offset:0x104C2B0;
};


// Class DreadHungerUI.DH_BoilerInventoryWidget
// size:0x0008 (0x0328 - 0x0330)
class UDH_BoilerInventoryWidget : public UDH_CraftingStationWidget
{
public:
	class UDH_FuelGaugeWidget*                         FuelGauge;                                                // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_BrowseExpeditionsButtonWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_BrowseExpeditionsButtonWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnClickedDelegate;                                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LobbiesRestrictionWidget*                LobbiesRestriction;                                       // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	void OnLobbiesRestrictionWidgetRestrictedChanged(bool bRestricted)//offset:0x10435A0;
	void OnBrowseExpeditionsButtonWidgetClicked__DelegateSignature()//offset:0x13CEB30;
	void OnBaseButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1043440;
};


// Class DreadHungerUI.DH_ButtonWidget
// size:0x0190 (0x0260 - 0x03F0)
class UDH_ButtonWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnButtonControllerHoveredDelegate;                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bDesignTimeHovered;                                       // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeDisabled;                                      // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
	struct FMargin                                     ButtonSlotPadding;                                        // 0x0274(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWidth;                                                 // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HoverBrush;                                               // 0x0288(0x0088) (Edit)
	TEnumAsByte<EVerticalAlignment>                    HoverBrushVerticalAlignment;                              // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	struct FSlateBrush                                 DisabledBrush;                                            // 0x0318(0x0088) (Edit)
	TEnumAsByte<EVerticalAlignment>                    DisabledBrushVerticalAlignment;                           // 0x03A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  DisabledBrushHorizontalAlignment;                         // 0x03A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET
	class USoundBase*                                  OnHoverSound;                                             // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnClickedSound;                                           // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverOpacityLerpSpeed;                                    // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UButton*                                     BaseButton;                                               // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  ButtonSlot;                                               // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      DisabledImage;                                            // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnClickedDelegate;                                        // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void SetHoverBrush(const struct FSlateBrush& InHoverBrush)//offset:0x1043950;
	void OnButtonControllerHoveredSignature__DelegateSignature()//offset:0x13CEB30;
	void Clicked()//offset:0x788E70;
	void BP_OnSetMinWidth(float InMinWidth)//offset:0x13CEB30;
	void BP_OnSetHoverOpacity(float InOpacity)//offset:0x13CEB30;
	void BP_OnSetHoverBrushVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x13CEB30;
	void BP_OnSetHoverBrush(const struct FSlateBrush& InHoverBrush)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_BuyButtonTooltipItemWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_BuyButtonTooltipItemWidget : public UUserWidget
{
public:
	class UDH_CosmeticItemBase*                        DesignTimeItem;                                           // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_CosmeticItemViewWidget*                  View;                                                     // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CantAffordLabel;                                          // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_BuyButtonTooltipWidget
// size:0x0068 (0x0260 - 0x02C8)
class UDH_BuyButtonTooltipWidget : public UUserWidget
{
public:
	class UWrapBox*                                    NonBundleItems;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBox*                                    BundleItems;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDH_CosmeticBundle*>                  DesignTimeBundleItems;                                    // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_CosmeticItemBase*>                DesignTimeNonBundleItems;                                 // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_BuyButtonTooltipItemWidget*>      ItemWidgets;                                              // 0x0290(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UDH_CosmeticBundleTooltipWidget*>     BundleWidgets;                                            // 0x02A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UDH_BuyButtonTooltipItemWidget*              ItemWidgetClass;                                          // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CosmeticBundleTooltipWidget*             BundleWidgetClass;                                        // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreConstructedBundleCount;                                // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreConstructedItemCount;                                  // 0x02C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHungerUI.DH_OverlayWidget
// size:0x0018 (0x02E0 - 0x02F8)
class UDH_OverlayWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	bool                                               bUseViewForVisibilityAnimations;                          // 0x02E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	class UDH_OverlayViewWidget*                       View;                                                     // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_CantFindLobbyOverlayWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_CantFindLobbyOverlayWidget : public UDH_OverlayWidget
{
public:
};


// Class DreadHungerUI.DH_CheckBoxWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_CheckBoxWidget : public UUserWidget
{
public:
	float                                              Size;                                                     // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCheckBoxStateDelegate;                                  // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCheckBox*                                   BaseCheckBox;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetChecked(bool bInChecked)//offset:0x1043700;
	void OnCheckBoxWidgetStateChanged__DelegateSignature(bool bChecked)//offset:0x13CEB30;
	void OnCheckBoxComponentStateChanged(bool bInIsChecked)//offset:0x10434F0;
	bool IsChecked()//offset:0x1043410;
	class UCheckBox* GetBaseCheckBox()//offset:0x1043270;
};


// Class DreadHungerUI.DH_CircularFillWidget
// size:0x00E0 (0x0260 - 0x0340)
class UDH_CircularFillWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnCircularFillFillPercentChangedDelegate;                 // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DesignTimeFillLoopTime;                                   // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesignTimeDesiredLoopTime;                                // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesignTimeReservedLoopTime;                               // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesignTimeInnerFillLoopTime;                              // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpRate;                                               // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReversedReserve;                                         // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MIDParentMaterial;                                        // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BaseImage;                                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x02A8(0x0098) MISSED OFFSET

	void Update(float InDeltaTime)//offset:0x1044390;
	void SetReverseReserved(bool bInReversedReserve)//offset:0x1044160;
	void SetReservedTint(const struct FLinearColor& Tint)//offset:0x10440D0;
	void SetReservedPercent(float ReservedPct, bool bInSkipInterp)//offset:0x1043FF0;
	void SetMIDParentMaterial(class UMaterialInterface* InMIDParentMaterial)//offset:0x1043E60;
	void SetInterpolatedReservedPercent(float InterpolatedReservedPct)//offset:0x1043DE0;
	void SetInterpolatedInnerFillPercent(float InterpolatedInnerFillPct)//offset:0x1043D60;
	void SetInterpolatedFillPercent(float InterpolatedFillPct)//offset:0x1043CE0;
	void SetInterpolatedDesiredPercent(float InterpolatedDesiredPct)//offset:0x1043C60;
	void SetInnerFillPercent(float InnerFillPct, bool bInSkipInterp)//offset:0x1043B80;
	void SetFillPercent(float FillPct, bool bInSkipInterp)//offset:0x1043870;
	void SetDesiredPercent(float DesiredPct, bool bInSkipInterp)//offset:0x1043790;
	void SetBaseTint(const struct FLinearColor& Tint)//offset:0x1043670;
	void OnCircularFillFillPercentChangedSignature__DelegateSignature()//offset:0x13CEB30;
	float GetFillPercent()//offset:0x10432E0;
	void DesignTimeAlternateReservedPct()//offset:0x1043250;
	void DesignTimeAlternateInnerFillPct()//offset:0x1043230;
	void DesignTimeAlternateFillPct()//offset:0x1043210;
	void DesignTimeAlternateDesiredPct()//offset:0x10431F0;
};


// Class DreadHungerUI.DH_CloseButtonWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_CloseButtonWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnCloseButtonWidgetClickedDelegate;                       // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UButton*                                     BaseButton;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnCloseButtonWidgetClickedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnButtonClicked()//offset:0x10434D0;
};


// Class DreadHungerUI.DH_CompendiumItemBase
// size:0x00C0 (0x0030 - 0x00F0)
class UDH_CompendiumItemBase : public UDataAsset
{
public:
	struct FText                                       Title;                                                    // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	class FString                                      UniqueId;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0058(0x0028) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCompendiumItemStat>                 StatsArray;                                               // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x00A0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UAnimationAsset*                             Animation;                                                // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShownSound;                                               // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_CompendiumCreature
// size:0x0000 (0x00F0 - 0x00F0)
class UDH_CompendiumCreature : public UDH_CompendiumItemBase
{
public:
};


// Class DreadHungerUI.DH_CompendiumInventory
// size:0x0000 (0x00F0 - 0x00F0)
class UDH_CompendiumInventory : public UDH_CompendiumItemBase
{
public:
};


// Class DreadHungerUI.DH_CompendiumItemAvatar
// size:0x0040 (0x0220 - 0x0260)
class ADH_CompendiumItemAvatar : public AActor
{
public:
	int                                                RenderTargetWidth;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RenderTargetHeight;                                       // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      AvatarSkeletalMesh;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AvatarStaticMesh;                                         // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTextureRenderTarget2D*                      AvatarRT;                                                 // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDirectionalLightComponent*                  AvatarDirectionalLight;                                   // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_AvatarSceneCaptureComponent*             AvatarSceneCapture;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	void SetShouldRender(bool bShouldRender)//offset:0x10441F0;
	void ResetMeshOrientation()//offset:0x1043650;
};


// Class DreadHungerUI.DH_CompendiumItemAvatarWidget
// size:0x0050 (0x0260 - 0x02B0)
class UDH_CompendiumItemAvatarWidget : public UUserWidget
{
public:
	class UMaterialInterface*                          AvatarImageMaterial;                                      // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_CompendiumItemAvatar*                    AvatarClass;                                              // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ButtonClickSound;                                         // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      AvatarPortrait;                                           // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AvatarMID;                                                // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0298(0x0018) MISSED OFFSET
};


// Class DreadHungerUI.DH_CompendiumItemButtonViewWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_CompendiumItemButtonViewWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	struct FVector2D                                   UnavailableOverlaySize;                                   // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UnavailableImage;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     BaseButton;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnBaseButtonClicked()//offset:0x10434D0;
	void CompendiumItemButtonViewWidgetSignature__DelegateSignature()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_CompendiumItemButtonWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_CompendiumItemButtonWidget : public UUserWidget
{
public:
	class USoundBase*                                  ViewClickedSound;                                         // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MouseEnterSound;                                          // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      SelectedImage;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CompendiumItemButtonViewWidget*          View;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	void OnViewClicked()//offset:0x788E70;
};


// Class DreadHungerUI.DH_CompendiumItemStatWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_CompendiumItemStatWidget : public UUserWidget
{
public:
	class UImage*                                      Icon;                                                     // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Value;                                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_CompendiumSpell
// size:0x0000 (0x00F0 - 0x00F0)
class UDH_CompendiumSpell : public UDH_CompendiumItemBase
{
public:
};


// Class DreadHungerUI.DH_CompendiumStat
// size:0x0028 (0x0030 - 0x0058)
class UDH_CompendiumStat : public UDataAsset
{
public:
	struct FText                                       ToolTip;                                                  // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECompendiumValueDisplayFormat                      ValueFormat;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};


// Class DreadHungerUI.DH_CompendiumTopic
// size:0x0040 (0x0030 - 0x0070)
class UDH_CompendiumTopic : public UDataAsset
{
public:
	struct FText                                       Title;                                                    // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	class FString                                      UniqueId;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_CompendiumItemBase*>              Items;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHungerUI.DH_CompendiumTopicButtonViewWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_CompendiumTopicButtonViewWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	struct FVector2D                                   UnavailableOverlaySize;                                   // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UnavailableImage;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     BaseButton;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Icon;                                                     // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnBaseButtonClicked()//offset:0x10434D0;
	void CompendiumTopicButtonViewWidgetSignature__DelegateSignature()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_CompendiumTopicButtonWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_CompendiumTopicButtonWidget : public UUserWidget
{
public:
	class USoundBase*                                  ViewClickedSound;                                         // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MouseEnterSound;                                          // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      SelectedImage;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CompendiumTopicButtonViewWidget*         View;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	void OnViewClicked()//offset:0x788E70;
};


// Class DreadHungerUI.DH_JournalPageWidget
// size:0x0028 (0x02E0 - 0x0308)
class UDH_JournalPageWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class USoundBase*                                  OpenSound;                                                // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     CloseButton;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_CompendiumWidget
// size:0x00B0 (0x0308 - 0x03B8)
class UDH_CompendiumWidget : public UDH_JournalPageWidget
{
public:
	class UDH_CompendiumTopicButtonWidget*             TopicButtonWidgetClass;                                   // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CompendiumItemButtonWidget*              ItemButtonWidgetClass;                                    // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CompendiumItemStatWidget*                ItemStatWidgetClass;                                      // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0320(0x0030) MISSED OFFSET
	TArray<class UDH_CompendiumTopic*>                 Topics;                                                   // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDH_TextBlockWidget*                         TopicLabel;                                               // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ItemLabel;                                                // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      ItemIcon;                                                 // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              ItemDescription;                                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                StatsList;                                                // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBox*                                    TopicList;                                                // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ItemList;                                                 // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CompendiumItemAvatarWidget*              ItemAvatarWidget;                                         // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ItemShownSound;                                           // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_CompendiumItemBase*                      CurrentItem;                                              // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDH_CompendiumTopic*                         CurrentTopic;                                             // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void OnRichTextHyperlinkClicked(const class FString& ItemId)//offset:0x1048360;
};


// Class DreadHungerUI.DH_ConfirmItemPurchaseOverlayWidget
// size:0x0010 (0x02F8 - 0x0308)
class UDH_ConfirmItemPurchaseOverlayWidget : public UDH_OverlayWidget
{
public:
	class UDH_TextBlockWidget*                         SubTextLabel;                                             // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Throbber;                                                 // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnItemPurchased(TArray<class FString> ItemCodes)//offset:0x1048290;
};


// Class DreadHungerUI.DH_ConnectToIPWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_ConnectToIPWidget : public UUserWidget
{
public:

	void StartGame(TArray<unsigned char> IPAddress, int Port)//offset:0x1048780;
	bool GetIPAddress(const class FString& Name, TArray<unsigned char>* Out_IPAddress, int* Out_Port)//offset:0x1047BA0;
	void BP_ShowConnectToIPAddressWidget()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ContextMenuWidget
// size:0x0010 (0x02E0 - 0x02F0)
class UDH_ContextMenuWidget : public UDH_VisibilityWidget
{
public:
};


// Class DreadHungerUI.DH_CosmeticBundleTooltipWidget
// size:0x0038 (0x0260 - 0x0298)
class UDH_CosmeticBundleTooltipWidget : public UUserWidget
{
public:
	class UDH_CosmeticBundle*                          DesignTimeBundle;                                         // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWrapBox*                                    ItemContainer;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_BuyButtonTooltipItemWidget*              ItemWidgetClass;                                          // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_BuyButtonTooltipItemWidget*>      ItemWidgets;                                              // 0x0280(0x0010) (ExportObject, ZeroConstructor, Transient)
	int                                                MaxItems;                                                 // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreConstructedItemCount;                                  // 0x0294(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHungerUI.DH_CosmeticDropZoneWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_CosmeticDropZoneWidget : public UUserWidget
{
public:
	class UWidget*                                     DropZone;                                                 // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_CosmeticFilterButton
// size:0x0058 (0x0260 - 0x02B8)
class UDH_CosmeticFilterButton : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	class UObject*                                     NoIconTexture;                                            // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CosmeticFilterButtonTooltipWidget*       FilterTooltipClass;                                       // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFilterButtonSelectionType                         SelectionType;                                            // 0x0280(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UDH_ButtonWidget*                            FilterButton;                                             // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconBackground;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      SelectedImage;                                            // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CosmeticFilterButtonTooltipWidget*       FilterTooltip;                                            // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	void OnFilterButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1048200;
};


// Class DreadHungerUI.DH_CosmeticFilterButtonTooltipWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_CosmeticFilterButtonTooltipWidget : public UUserWidget
{
public:
	unsigned char                                      DesignTimeFilterType;                                     // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_CosmeticItemData
// size:0x0018 (0x0028 - 0x0040)
class UDH_CosmeticItemData : public UObject
{
public:
	class UDH_CosmeticItemBase*                        AssociatedItem;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};


// Class DreadHungerUI.DH_CosmeticItemDraggedWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_CosmeticItemDraggedWidget : public UUserWidget
{
public:
	class UDH_CosmeticItemBase*                        DesignTimeCosmeticItem;                                   // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_CosmeticItemViewWidget*                  View;                                                     // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_CosmeticItemListWidget
// size:0x0140 (0x0260 - 0x03A0)
class UDH_CosmeticItemListWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0260(0x0050) UNKNOWN PROPERTY: 
	TMap<unsigned char, class UObject*>                FilterImages;                                             // 0x02B0(0x0050) (Edit, DisableEditOnInstance)
	class USoundBase*                                  HoverSound;                                               // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CosmeticFilterButton*                    FilterButtonClass;                                        // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CosmeticsFilterSectionWidget*            FilterSectionClass;                                       // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_DebugButtonWidget*                       DebugButtonClass;                                         // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowSectionHeaders;                                      // 0x0320(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSingleSection;                                           // 0x0321(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0322(0x0006) MISSED OFFSET
	TArray<class UDH_CosmeticItemData*>                AvailableListObjects;                                     // 0x0328(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0338(0x0050) MISSED OFFSET
	class UVerticalBox*                                SectionsList;                                             // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  SectionScrollBox;                                         // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              FilterList;                                               // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void ToggleFilter(unsigned char InFilter)//offset:0x10488D0;
	void Show()//offset:0x788E90;
	void Hide()//offset:0x788E70;
	void GenerateAvailableListObjects()//offset:0x1047AC0;
};


// Class DreadHungerUI.DH_CosmeticItemTooltipWidget
// size:0x0038 (0x0260 - 0x0298)
class UDH_CosmeticItemTooltipWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         ItemNameLabel;                                            // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ItemBundleLabel;                                          // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ErrorsLabel;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              UnlockRequirementsLabel;                                  // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UnlockRequirementsIcon;                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                UnlockRequirementsBox;                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UnlockRequirementMID;                                     // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};


// Class DreadHungerUI.DH_CosmeticItemTransferWidget
// size:0x0048 (0x02E0 - 0x0328)
class UDH_CosmeticItemTransferWidget : public UDH_VisibilityWidget
{
public:
	float                                              InterpSpeed;                                              // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class UDH_CosmeticItemViewWidget*                  View;                                                     // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x02F0(0x0038) MISSED OFFSET

	void TryShow()//offset:0x1048950;
};


// Class DreadHungerUI.DH_CosmeticItemViewWidget
// size:0x00F0 (0x0260 - 0x0350)
class UDH_CosmeticItemViewWidget : public UUserWidget
{
public:
	bool                                               bDesignTimeSelected;                                      // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeHovered;                                       // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeOwned;                                         // 0x0262(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0263(0x0005) MISSED OFFSET
	class UDH_CosmeticItemBase*                        DesignTimeAssociatedItem;                                 // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    DebugTextBlockClass;                                      // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedColorName;                                        // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UnselectedColorName;                                      // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HoverColorColorName;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OwnedColorColorName;                                      // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             BorderTextures;                                           // 0x0298(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             FillTextures;                                             // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     UnknownTexture;                                           // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      BorderImage;                                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      FillImage;                                                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UnreleasedIcon;                                           // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    ErrorIcon;                                                // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PrestigeIcon;                                             // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    BaseSizeBox;                                              // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    BaseOverlay;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     OwnedBorder;                                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      OwnedIconImage;                                           // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     DiscountPercentageBorder;                                 // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         DiscountPercentageLabel;                                  // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTooltipItem;                                             // 0x0320(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0321(0x0027) MISSED OFFSET
	class UDH_TextBlockDebugWidget*                    Label;                                                    // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	void OnCosmeticItemMouseLeave(class UDH_CosmeticItemBase* InItem)//offset:0x1047F80;
	void OnCosmeticItemMouseEnter(class UDH_CosmeticItemBase* InItem)//offset:0x1047EF0;
};


// Class DreadHungerUI.DH_CosmeticItemWidget
// size:0x00C8 (0x0260 - 0x0328)
class UDH_CosmeticItemWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UDH_CosmeticItemTooltipWidget*               ToolTipClass;                                             // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CosmeticItemDraggedWidget*               DraggedWidgetClass;                                       // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CosmeticItemViewWidget*                  View;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CosmeticItemTooltipWidget*               CosmeticItemTooltipWidget;                                // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0288(0x00A0) MISSED OFFSET

	void Toggle()//offset:0x10488B0;
	void Select(bool bDragged)//offset:0x1048490;
	void OnCosmeticItemUnequipped(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)//offset:0x1048010;
	void OnCosmeticItemEquipped(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)//offset:0x1047E20;
	class UDH_CosmeticItemTooltipWidget* GetTooltipWidget()//offset:0x1047D40;
	void Deselect()//offset:0x1047AA0;
	void BP_OnSelected()//offset:0x13CEB30;
	void BP_OnDeselected()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_CosmeticsFilterSectionWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_CosmeticsFilterSectionWidget : public UUserWidget
{
public:
	unsigned char                                      DesignTimeFilter;                                         // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UTileView*                                   ItemsTileView;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                HeaderVerticalBox;                                        // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         HeaderLabel;                                              // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0280(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_CosmeticsListDataInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_CosmeticsListDataInterface : public UInterface
{
public:
};


// Class DreadHungerUI.DH_CraftingInfoSubWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_CraftingInfoSubWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0268(0x0020) MISSED OFFSET

	void UpdateVisibility()//offset:0x1048970;
	void Show()//offset:0x1048760;
	bool ShouldBeVisible()//offset:0x786600;
	void SetPreviousCraftingComponent(class UDH_CraftingComponent* InPreviousCraftingComponent)//offset:0x10486D0;
	void SetCurrentInteractTarget(class UPrimitiveComponent* NewInteractTarget)//offset:0x1048640;
	void SetCraftingProject(class UDH_CraftingProject* InCraftingProject)//offset:0x10485B0;
	void SetCraftingComponent(class UDH_CraftingComponent* InCraftingComponent)//offset:0x1048520;
	void OnWidgetAnimationHandlerBeginShow(class UDH_WidgetAnimationHandler* InAnimationHandler)//offset:0x1048400;
	void OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)//offset:0x1048170;
	void OnCraftingProjectCompletedChanged(class UDH_CraftingProject* InCraftingProject)//offset:0x10480E0;
	void OnCraftingProjectAbortedChanged(class UDH_CraftingProject* InCraftingProject)//offset:0x10480E0;
	void Hide()//offset:0x1047D70;
	class UDH_CraftingComponent* GetPreviousCraftingComponent()//offset:0x1047D00;
	class UPrimitiveComponent* GetCurrentInteractTarget()//offset:0x1047B60;
	class UDH_CraftingProject* GetCraftingProject()//offset:0x1047B20;
	class UDH_CraftingComponent* GetCraftingComponent()//offset:0x1047AE0;
	void BP_OnSetVisible()//offset:0x13CEB30;
	void BP_OnCurrentInteractTargetChanged(class UPrimitiveComponent* NewInteractTarget)//offset:0x13CEB30;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_CraftingRecipeTooltipWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_CraftingRecipeTooltipWidget : public UUserWidget
{
public:

	void Init(class UDH_CraftingRecipe* InCraftingRecipe)//offset:0x1047D90;
	void BP_OnInit(class UDH_CraftingRecipe* InCraftingRecipe)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_CraftingRecipeWidget
// size:0x0048 (0x02E0 - 0x0328)
class UDH_CraftingRecipeWidget : public UDH_VisibilityWidget
{
public:
	class USoundBase*                                  CraftSuccessSound;                                        // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CraftFailSound;                                           // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoverSound;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReadySound;                                               // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CraftingRecipeTooltipWidget*             ToolTipClass;                                             // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0308(0x0018) MISSED OFFSET
	class UDH_InventorySlotViewWidget*                 View;                                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetFocused(bool bInFocused)//offset:0x104CFB0;
	void OnInventoryManagerSlotContentsChanged(class UDH_InventoryManager* InInventoryManager, TArray<int> InModifiedSlots)//offset:0x104C6B0;
	void OnCraftingProjectCompletedChanged(class UDH_CraftingProject* InCraftingProject)//offset:0x104C430;
	void OnCraftingComponentLimitedRecipeCrafted(class UDH_CraftingComponent* InCraftingComponent)//offset:0x104C3A0;
	bool IsCraftable()//offset:0x104C0A0;
	void Init(class UDH_CraftingRecipe* InAssociatedRecipe, class UDH_CraftingComponent* InCraftingComponent)//offset:0x104BFD0;
	class UWidget* GetRecipeTooltip()//offset:0x104BEE0;
	class UDH_CraftingRecipe* GetAssociatedRecipe()//offset:0x104BE70;
	void Craft()//offset:0x104BE50;
	void BP_OnPlayReadyAnimation()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_CraftingStationViewWidget
// size:0x0060 (0x02E0 - 0x0340)
class UDH_CraftingStationViewWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	struct FMargin                                     BackgroundPadding;                                        // 0x02F0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InventorySlotsPerRow;                                     // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecipeWrapBoxSize;                                        // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BorderBackgroundTexture;                                  // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryContainerWidget*                IngredientsInventory;                                     // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  StationName;                                              // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBox*                                    RecipeList;                                               // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     BaseBorder;                                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    BaseSizeBox;                                              // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnCraftingStationViewCloseSignature__DelegateSignature()//offset:0x13CEB30;
	void OnCloseButtonClicked()//offset:0x104C290;
};


// Class DreadHungerUI.DH_CurrencyWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_CurrencyWidget : public UUserWidget
{
public:
	class UImage*                                      PoundsIconImage;                                          // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         PoundsLabel;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      ShillingsIconImage;                                       // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ShillingsLabel;                                           // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PenceIconImage;                                           // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         PenceLabel;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_CustomGameSettingWidget
// size:0x00F0 (0x0260 - 0x0350)
class UDH_CustomGameSettingWidget : public UUserWidget
{
public:
	class UDH_CustomGameSettings*                      DesignTimeSettingsList;                                   // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECustomGameSetting                                 AssociatedSetting;                                        // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FCustomGameSetting                          SettingData;                                              // 0x0270(0x0088) (Edit, BlueprintVisible)
	struct UEMulticastInlineDelegate                   OnValueChanged;                                           // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDH_GenericTooltipWidget*                    GenericTooltipWidgetClass;                                // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CheckBoxWidget*                          CheckBox;                                                 // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USlider*                                     Slider;                                                   // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ValueLabel;                                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                BaseVerticalBox;                                          // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     BaseBorder;                                               // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	void OnSliderValueChanged(float InValue)//offset:0x104CC90;
	void OnCheckboxStateChanged(bool IsChecked)//offset:0x104C1E0;
	class UWidget* GetSettingTooltip()//offset:0x104BF10;
	void CustomGameSettingChangedSignature__DelegateSignature(ECustomGameSetting Setting, float NewValue)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_DaysUntilBlizzardWidget
// size:0x0058 (0x02E0 - 0x0338)
class UDH_DaysUntilBlizzardWidget : public UDH_VisibilityWidget
{
public:
	float                                              HideDelay;                                                // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateAttributeViewDelay;                                 // 0x02E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USoundBase*>                          NewDaySound;                                              // 0x02E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  AttributeViewIcon;                                        // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRate;                                               // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DesignTimeDaysUntilBlizzard;                              // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   DesignTimeCurrentDate;                                    // 0x0308(0x0008) (Edit, ZeroConstructor)
	class UDH_TextBlockWidget*                         DateLabel;                                                // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         DaysLabel;                                                // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_AttributeViewWidget*                     AttributeView;                                            // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	void UpdateAttributeView()//offset:0x104D480;
	void OnDaysUntilBlizzardChanged(class ADH_GameState* InGameState)//offset:0x104C4E0;
	class UWidgetAnimation* GetShowAnimation()//offset:0x104BF40;
};


// Class DreadHungerUI.DH_DebugButtonWidget
// size:0x0028 (0x03F0 - 0x0418)
class UDH_DebugButtonWidget : public UDH_ButtonWidget
{
public:
	class FString                                      LabelText;                                                // 0x03F0(0x0010) (Edit, ZeroConstructor)
	EDH_FontSizes                                      FontSize;                                                 // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_WidthOverride;                                  // 0x0401(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0402(0x0002) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    BaseSizeBox;                                              // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_DebugInputWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_DebugInputWidget : public UUserWidget
{
public:
	float                                              MinLabelSize;                                             // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class FString                                      LabelText;                                                // 0x0268(0x0010) (Edit, ZeroConstructor)
	class USizeBox*                                    LabelSizeBox;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_DebugCheckBoxWidget
// size:0x0020 (0x0288 - 0x02A8)
class UDH_DebugCheckBoxWidget : public UDH_DebugInputWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET
	bool                                               bChecked;                                                 // 0x0298(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class UCheckBox*                                   InputCheckBox;                                            // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnCheckStateChanged(bool bInChecked)//offset:0x104C150;
};


// Class DreadHungerUI.DH_DebugStatWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_DebugStatWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         TitleLabel;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_DebugStatBooleanWidget
// size:0x0068 (0x0268 - 0x02D0)
class UDH_DebugStatBooleanWidget : public UDH_DebugStatWidget
{
public:
	class UCheckBox*                                   ValueCheckBox;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            FlashAnimation;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0278(0x0058) MISSED OFFSET
};


// Class DreadHungerUI.DH_DebugTextInputWidget
// size:0x0028 (0x0288 - 0x02B0)
class UDH_DebugTextInputWidget : public UDH_DebugInputWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET
	class FString                                      InputText;                                                // 0x0298(0x0010) (Edit, ZeroConstructor)
	class UEditableText*                               TextInput;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnTextInputCommitted(const struct FText& InText, TEnumAsByte<ETextCommit> InCommitMethod)//offset:0x104CD10;
};


// Class DreadHungerUI.DH_DebugWidgetsListWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_DebugWidgetsListWidget : public UUserWidget
{
public:
	TArray<class UUserWidget*>                         WidgetClasses;                                            // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UWrapBox*                                    List;                                                     // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnAddDebugWidget(class UUserWidget* InClass)//offset:0x104C0C0;
};


// Class DreadHungerUI.DH_DiscordButtonWidget
// size:0x0000 (0x03F0 - 0x03F0)
class UDH_DiscordButtonWidget : public UDH_ButtonWidget
{
public:
};


// Class DreadHungerUI.DH_DraggedInventoryWidget
// size:0x00B8 (0x0260 - 0x0318)
class UDH_DraggedInventoryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UObject*                                     DesignTimeIconImageTexture;                               // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      DropResultIconImage;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     ResultIconBorder;                                         // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         StackCountLabel;                                          // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                AdditionalWidgetsVerticalBox;                             // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowDropAnimation;                                        // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET
	struct FInventorySlotContents                      SlotContents;                                             // 0x02B0(0x0058)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	void SetStackCount(const struct FInventorySlotContents& InSlotContents)//offset:0x104D210;
	void SetIcon(const struct FSlateBrush& InBrush, const struct FLinearColor& InColorAndOpacity)//offset:0x104D040;
	void OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InInventoryTransactionComponent, class UDH_InventoryManager* InInventoryManager)//offset:0x104CE30;
	void OnSingleDropModifierKeyHeldChanged(class UDH_MouseDragModifiersComponent* InMouseDragModifiersComponent)//offset:0x104CC00;
	void OnShowHotbarChanged(class ADH_PlayerController* PlayerController)//offset:0x104CB70;
	void OnHumanCharacterDied(class ADH_HumanCharacter* DeadCharacter)//offset:0x104C620;
	void OnDropAnimationFinished()//offset:0x104C570;
	void HideDropResultNotification()//offset:0x104BFB0;
	bool GetSingleDropKeyHeld()//offset:0x104BF60;
	int GetModifiedStackCount()//offset:0x104BEB0;
};


// Class DreadHungerUI.DH_DropZoneWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_DropZoneWidget : public UUserWidget
{
public:
	TArray<class UDH_DropZoneInventoryDropper*>        Droppers;                                                 // 0x0260(0x0010) (ZeroConstructor, Transient)
	class UObject*                                     DropResultIcon;                                           // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DropResultIconColor;                                      // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      HitTestImage;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnFinishedDropping(class UDH_DropZoneInventoryDropper* Dropper)//offset:0x104C590;
};


// Class DreadHungerUI.DH_PreviewAvatarWidget
// size:0x0068 (0x0260 - 0x02C8)
class UDH_PreviewAvatarWidget : public UUserWidget
{
public:
	class UWidgetAnimation*                            ShowCustomizationAnimation;                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            HideMeshLoadingAnimation;                                 // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      AvatarPortrait;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MeshLoadingBackground;                                    // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    MeshLoadingOverlay;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CosmeticDropZoneWidget*                  DropZone;                                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AvatarMID;                                                // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET
	class UMaterialInterface*                          AvatarImageMaterial;                                      // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02B0(0x000C) MISSED OFFSET
	struct FVector2D                                   CachedViewportPosition;                                   // 0x02BC(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET

	void OnMeshAppliedToAvatar()//offset:0x106BD60;
	void OnHideMeshLoadingAnimationFinished()//offset:0x106BC70;
	void OnAvatarCreated(class ADH_PlayerController* PlayerController, class ADH_CosmeticPreviewAvatar* Avatar)//offset:0x106BAB0;
};


// Class DreadHungerUI.DH_EntitlementsShopAvatarWidget
// size:0x0000 (0x02C8 - 0x02C8)
class UDH_EntitlementsShopAvatarWidget : public UDH_PreviewAvatarWidget
{
public:
};


// Class DreadHungerUI.DH_EntitlementsShopWidget
// size:0x0168 (0x02E0 - 0x0448)
class UDH_EntitlementsShopWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	TArray<EDH_EntitlementsShopType>                   SupportedMerchants;                                       // 0x02E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  PurchaseCompletedSound;                                   // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DragEndTimer;                                             // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UDH_BuyButtonTooltipWidget*                  BuyButtonTooltipClass;                                    // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CosmeticItemListWidget*                  ItemsList;                                                // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PreviewAvatarWidget*                     Avatar;                                                   // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ShopTitleLabel;                                           // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CartFinalPriceLabel;                                      // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    CartOriginalPriceOverlay;                                 // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CartOriginalPriceLabel;                                   // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CartDiscountPercentageLabel;                              // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     CartDiscountPercentageBorder;                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     BuyInfoBorder;                                            // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleSelectionButtonWidget*               CheckoutButton;                                           // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_BuyButtonTooltipWidget*                  CheckoutButtonTooltip;                                    // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PriceChangeAnimation;                                     // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UDH_CosmeticItemBase*>                ShoppingCartItems;                                        // 0x0378(0x0010) (ZeroConstructor, Transient)
	TArray<class UDH_CosmeticItemBase*>                PreviewCosmetics;                                         // 0x0388(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x0398(0x00B0) MISSED OFFSET

	void OnReceivedEntitlementPrices(const struct FDH_PriceDataWrapper& PriceData)//offset:0x104CA30;
	void OnPreviewCosmeticsChanged(TArray<class UDH_CosmeticItemBase*> ItemList, unsigned char AppearanceIndex)//offset:0x104C900;
	void OnMerchantInteractedWith(class ADH_Merchant* Merchant)//offset:0x104C870;
	void OnItemPurchased(TArray<class FString> ItemCodes)//offset:0x104C7A0;
	void OnCheckoutButtonClicked()//offset:0x104C270;
};


// Class DreadHungerUI.DH_ErrorMessageViewWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_ErrorMessageViewWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnErrorMessageViewHiddenDelegate;                         // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void Show()//offset:0x104D460;
	void SetTitleText(const struct FText& InText)//offset:0x104D380;
	void SetTitleBackgroundColor(const struct FLinearColor& InColor)//offset:0x104D2F0;
	void SetBodyBackgroundColor(const struct FLinearColor& InColor)//offset:0x104CF20;
	void OnHidden()//offset:0x10434D0;
	void OnErrorMessageViewHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void Hide()//offset:0x104BF90;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnSetTitleText(const struct FText& InText)//offset:0x13CEB30;
	void BP_OnSetTitleBackgroundColor(const struct FLinearColor& InColor)//offset:0x13CEB30;
	void BP_OnSetBodyBackgroundColor(const struct FLinearColor& InColor)//offset:0x13CEB30;
	void BP_OnHide()//offset:0x788E70;
};


// Class DreadHungerUI.DH_ErrorsWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_ErrorsWidget : public UUserWidget
{
public:
	class UMaterialInterface*                          MIDParentMaterial;                                        // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Density;                                                  // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URetainerBox*                                BaseRetainerBox;                                          // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	void OnVivoxErrorsUpdated(TArray<struct FDH_VivoxError> Errors)//offset:0x1051B10;
	void OnOnlineErrorsUpdated(TArray<struct FDH_OnlineError> Errors)//offset:0x10513C0;
	void OnMouseCursorVisibilityChanged(bool bCursorVisible)//offset:0x1051330;
};


// Class DreadHungerUI.DH_ErrorWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_ErrorWidget : public UUserWidget
{
public:

	void OnHidden()//offset:0x10512F0;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnItemsEmptied()//offset:0x13CEB30;
	void BP_OnHide()//offset:0x788E70;
};


// Class DreadHungerUI.DH_EscapeMenuQuitDialogWidget
// size:0x0030 (0x02F0 - 0x0320)
class UDH_EscapeMenuQuitDialogWidget : public UDH_ContextMenuWidget
{
public:
	class UDH_ButtonWidget*                            RestartTutorialButton;                                    // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            DisconnectButton;                                         // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            QuitToDesktopButton;                                      // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         DisconnectTextBlock;                                      // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnEscapeMenuQuitDialogWidgetHiddenDelegate;               // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void UpdateDisconnectButtonVisibility()//offset:0x1051E50;
	void OnRestartTutorialButtonClicked(class UDH_ButtonWidget* Button)//offset:0x1051660;
	void OnQuitToDesktopButtonClicked(class UDH_ButtonWidget* Button)//offset:0x10515D0;
	void OnOnlinePartyMembersChanged()//offset:0x1051490;
	void OnLoginFinished()//offset:0x1051310;
	void OnEscapeMenuQuitDialogWidgetHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnDisconnectButtonClicked(class UDH_ButtonWidget* Button)//offset:0x1050F40;
};


// Class DreadHungerUI.DH_EscapeMenuWidget
// size:0x0088 (0x02E0 - 0x0368)
class UDH_EscapeMenuWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class UOverlay*                                    LobbyPlayersOverlay;                                      // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_SettingsWidget*                          SettingsUI;                                               // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_EscapeMenuQuitDialogWidget*              QuitDialog;                                               // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            SettingsButton;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            QuitButton;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    BaseOverlay;                                              // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LoginTesterWidget*                       LoginTesterClass;                                         // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0320(0x0048) MISSED OFFSET

	void ShowDebugTester()//offset:0x1051DA0;
	void OnSettingsButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x10517A0;
	void OnQuitButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1051540;
	void OnEscapeMenuQuitDialogWidgetHidden()//offset:0x1051130;
};


// Class DreadHungerUI.DH_ExpeditionSettingsWidget
// size:0x00F0 (0x02E0 - 0x03D0)
class UDH_ExpeditionSettingsWidget : public UDH_VisibilityWidget
{
public:
	class UDH_CustomGameSettings*                      DefaultGameSettings;                                      // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CustomGameSettingWidget*                 CustomGameSettingWidgetClass;                             // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UComboBoxString*                             RegionDropDown;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x02F8(0x0070) MISSED OFFSET
	class UDH_PublicGameSettingWidget*                 PublicSetting;                                            // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PublicGameSettingWidget*                 CreateServerSetting;                                      // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CustomGameSettingWidget*                 CrewCountSetting;                                         // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CustomGameSettingWidget*                 SandboxMode;                                              // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBox*                                    CustomRulesList;                                          // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LanguageDropDown*                        LanguageDropDown;                                         // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            CancelButton;                                             // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            AdvertiseButton;                                          // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ShipNameLabel;                                            // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	TArray<class UDH_CustomGameSettingWidget*>         AllDifficultySettings;                                    // 0x03C0(0x0010) (ExportObject, ZeroConstructor, Transient)

	void SetMapData(class UDH_MapData* InMapData)//offset:0x1051C80;
	void OnThrallValueChanged(ECustomGameSetting Setting, float NewValue)//offset:0x1051A40;
	void OnSettingsValueChanged(ECustomGameSetting Setting, float NewValue)//offset:0x1051830;
	void OnSessionDestroyed()//offset:0x1051780;
	void OnSandboxModeChanged(bool bInChecked)//offset:0x10516F0;
	void OnPublicCheckboxChanged(bool bInChecked)//offset:0x10514B0;
	void OnDebugSetDesiredNumOfPlayers(int NumOfPlayers)//offset:0x1050EB0;
	void OnDebugAdvertiseButtonClicked()//offset:0x806320;
	void OnCrewCountSliderChanged(float InValue)//offset:0x1050E30;
	void OnCancelButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1050C80;
	void OnAdvertiseButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1050B60;
	class UDH_CustomGameSettingWidget* GetThrallCountSetting()//offset:0x1050750;
	class UDH_MapData* GetMapData()//offset:0x1050710;
	class UDH_CustomGameSettingWidget* GetCrewCountSetting()//offset:0x10506B0;
};


// Class DreadHungerUI.DH_FindingLobbiesWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_FindingLobbiesWidget : public UUserWidget
{
public:

	void OnHidden()//offset:0x10512F0;
	void OnAutoSearchChanged(bool bAutoSearching)//offset:0x1050BF0;
	void Hide()//offset:0x10508B0;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnHide()//offset:0x788E70;
};


// Class DreadHungerUI.DH_FirstTimeCannibalWidget
// size:0x0030 (0x02E0 - 0x0310)
class UDH_FirstTimeCannibalWidget : public UDH_VisibilityWidget
{
public:
	float                                              HideDelay;                                                // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MIDParentMaterial;                                        // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      TransHungerImage;                                         // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	void OnFirstTimeCannibal(class ADH_PlayerState* PlayerState)//offset:0x1051260;
	class UWidgetAnimation* GetShowAnimation()//offset:0x104BF40;
};


// Class DreadHungerUI.DH_InventoryTooltipBaseWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_InventoryTooltipBaseWidget : public UUserWidget
{
public:
	TArray<class UObject*>                             Backgrounds;                                              // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       BorderBrushColorName;                                     // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         TitleTextBlock;                                           // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     BaseBorder;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_FuelGaugeTooltipWidget
// size:0x0000 (0x0288 - 0x0288)
class UDH_FuelGaugeTooltipWidget : public UDH_InventoryTooltipBaseWidget
{
public:
};


// Class DreadHungerUI.DH_FuelGaugeWidget
// size:0x0070 (0x0260 - 0x02D0)
class UDH_FuelGaugeWidget : public UUserWidget
{
public:
	class UDH_InventoryTooltipBaseWidget*              BaseToolTipWidgetClass;                                   // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LowColorName;                                             // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       HighColorName;                                            // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingRecipeWidget*                    BurnButton;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                FuelLevel;                                                // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      OutOfFuelPopImageA;                                       // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      OutOfFuelPopImageB;                                       // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            OutOfFuelPopAnimation;                                    // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	void OnFailedToCraft(class UDH_CraftingComponent* InCraftingComp, class UDH_CraftingRecipe* InCraftingProject, ECraftingFailReason FailReason)//offset:0x1051150;
	void Init(class UDH_HeatSourceComponent* InHeatSourceComponent)//offset:0x10508D0;
	class UDH_HeatSourceComponent* GetHeatSourceComponent()//offset:0x10506D0;
	class UWidget* GetBaseToolTipWidget()//offset:0x1050680;
};


// Class DreadHungerUI.DH_FuelValueHintWidget
// size:0x0070 (0x0260 - 0x02D0)
class UDH_FuelValueHintWidget : public UUserWidget
{
public:
	class ADH_Inventory*                               MaxFuelClass;                                             // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumScaler;                                             // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	TMap<EDH_FuelScale, struct FName>                  ColorNameOverrides;                                       // 0x0270(0x0050) (Edit, DisableEditOnInstance)
	float                                              DesignTimeFuelValue;                                      // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class UDH_TextBlockWidget*                         ValueLabel;                                               // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_GameAlreadyStartedWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_GameAlreadyStartedWidget : public UDH_OverlayWidget
{
public:
};


// Class DreadHungerUI.DH_GameVictoryWidget
// size:0x0040 (0x02E0 - 0x0320)
class UDH_GameVictoryWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	float                                              HideDelay;                                                // 0x02E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class USoundBase*                                  ThrallsWonMusic;                                          // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrallsLostMusic;                                         // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplorersWonMusic;                                        // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplorersLostMusic;                                       // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	void OnDisplayMatchEndMessage(EPlayerTeam InWinningTeam, bool bInWinner)//offset:0x1050FD0;
};


// Class DreadHungerUI.DH_GenericTooltipWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_GenericTooltipWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void Init(const struct FText& InText, EDH_FontSizes InFontSize)//offset:0x1050960;
};


// Class DreadHungerUI.DH_GiveUpHintWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_GiveUpHintWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void Show()//offset:0x1048760;
	void Hide()//offset:0x1047D70;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_GiveUpHoldTimerWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_GiveUpHoldTimerWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	void Show()//offset:0x1048760;
	void SetSuicideComponent(class UDH_SuicideComponent* InSuicideComponent)//offset:0x1051D10;
	void Hide()//offset:0x1047D70;
	class UDH_SuicideComponent* GetSuicideComponent()//offset:0x1047B60;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_GrimoirePageWidget
// size:0x0028 (0x02E0 - 0x0308)
class UDH_GrimoirePageWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class USoundBase*                                  OpenSound;                                                // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     CloseButton;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_GrimoireSpellsPage
// size:0x0048 (0x0308 - 0x0350)
class UDH_GrimoireSpellsPage : public UDH_GrimoirePageWidget
{
public:
	class UDH_RadialCanvas*                            SlotCanvas;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_SpellListWidget*                         SpellList;                                                // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_SpellConnectionWidget*                   SpellConnections;                                         // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BackgroundImage;                                          // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SpellDraggingSound;                                       // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SpellDragEndSound;                                        // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	void OnSpellsChanged()//offset:0x1051A20;
	void OnSpellDragEnd(class UDH_TotemSpell* Spell)//offset:0x1051990;
	void OnSpellDragBegin(class UDH_TotemSpell* Spell)//offset:0x1051900;
};


// Class DreadHungerUI.DH_GrimoireTalismansPage
// size:0x0028 (0x0308 - 0x0330)
class UDH_GrimoireTalismansPage : public UDH_GrimoirePageWidget
{
public:
	class UDH_TalismanWidget*                          TalismanWidgetClass;                                      // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTileView*                                   TalismanList;                                             // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                SlotCanvas;                                               // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
};


// Class DreadHungerUI.DH_GrimoireWidget
// size:0x0040 (0x02E0 - 0x0320)
class UDH_GrimoireWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class USoundBase*                                  OpenSound;                                                // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     CloseButton;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_GrimoireSpellsPage*                      SpellsPage;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            SpellsButton;                                             // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_GrimoireTalismansPage*                   TalismansPage;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            TalismansButton;                                          // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void ShowGrimoirePage(class UDH_ButtonWidget* InButton)//offset:0x1051DC0;
	bool HandleGrimoireClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)//offset:0x1050790;
};


// Class DreadHungerUI.DH_HarvestingCraftingRecipeWidget
// size:0x0000 (0x0328 - 0x0328)
class UDH_HarvestingCraftingRecipeWidget : public UDH_CraftingRecipeWidget
{
public:

	void OnCraftingProjectAbortedChanged(class UDH_CraftingProject* InCraftingProject)//offset:0x1050DA0;
	void OnCraftingComponentCurrentProjectsChanged(class UDH_CraftingComponent* InCraftingComponent)//offset:0x1050D10;
};


// Class DreadHungerUI.DH_InventoryContainerWidget
// size:0x0068 (0x0260 - 0x02C8)
class UDH_InventoryContainerWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	int                                                DefaultNumberOfSlots;                                     // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SlotsPerRow;                                              // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_InventorySlotWidget*                     SlotWidgetClass;                                          // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_QuickTransferInventoryWidget*            QuickTransferWidgetClass;                                 // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FailedTransferSound;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_InventorySlotWidget*>             Slots;                                                    // 0x0290(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET
	TArray<class UDH_QuickTransferInventoryWidget*>    QuickTransferWidgets;                                     // 0x02A8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	class UVerticalBox*                                BaseVerticalBox;                                          // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnSuccessfulTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InSourceInventory)//offset:0x10564C0;
	void OnSuccessfulQuickTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InTargetInventory)//offset:0x1056360;
	void OnInventoryManagerSlotCountChanged(class UDH_InventoryManager* InInventoryManager, int SlotDelta)//offset:0x1055D70;
	void OnInventoryManagerSlotContentsChanged(class UDH_InventoryManager* InInventoryManager, TArray<int> ModifiedIndices)//offset:0x1055C80;
	void OnFailedQuickTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InTargetInventory)//offset:0x1055620;
	void Init(class UDH_InventoryManager* InInventoryManager)//offset:0x1054F20;
	class UDH_InventoryManager* GetInventoryManager()//offset:0x1054E60;
};


// Class DreadHungerUI.DH_HotbarContainerWidget
// size:0x0000 (0x02C8 - 0x02C8)
class UDH_HotbarContainerWidget : public UDH_InventoryContainerWidget
{
public:

	void LockSlots(bool bLock, int IgnoreIndex)//offset:0x1050A90;
};


// Class DreadHungerUI.DH_HotbarVisibilityComponent
// size:0x0058 (0x0028 - 0x0080)
class UDH_HotbarVisibilityComponent : public UObject
{
public:

	void OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InInventoryTransactionComponent, class UDH_InventoryManager* InInventoryManage)//offset:0x1056620;
	void OnSpiritWalkingChanged(class ADH_HumanCharacter* InControlledHuman)//offset:0x1056130;
	void OnShowHotbarChanged(class ADH_PlayerController* InPlayerController)//offset:0x1055160;
	void OnRestingChanged(class ADH_HumanCharacter* InControlledHuman)//offset:0x1056130;
	void OnInventoryContainerSlotContentsChanged(class UUserWidget* InInventoryContainerWidget, int SlotIndex)//offset:0x1055AE0;
	void OnHotbarSelectedIndexChanged(class ADH_PlayerController* InPlayerController)//offset:0x1055810;
	void OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)//offset:0x10553A0;
	void OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)//offset:0x1055160;
};


// Class DreadHungerUI.DH_HotbarSlotVisibilityComponent
// size:0x0018 (0x0080 - 0x0098)
class UDH_HotbarSlotVisibilityComponent : public UDH_HotbarVisibilityComponent
{
public:

	void SetAssociatedInventory(class ADH_Inventory* NewAssociatedInventory)//offset:0x1051BF0;
	void OnDurabilityChanged(class ADH_Inventory* Inventory)//offset:0x10510A0;
};


// Class DreadHungerUI.DH_InventorySlotWidget
// size:0x01A8 (0x02E0 - 0x0488)
class UDH_InventorySlotWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	struct FLinearColor                                DefaultBorderFillColor;                                   // 0x02E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoverSoundCue;                                            // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  DesignTimeHorizontalPositionalAlignment;                  // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    DesignTimeVerticalPositionalAlignment;                    // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0302(0x0006) MISSED OFFSET
	struct FInventorySlotContents                      DesignTimeInventorySlotContents;                          // 0x0308(0x0058) (Edit)
	struct FName                                       CombinableColorName;                                      // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DragHoveringColorName;                                    // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedColorName;                                        // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HoveredColorName;                                         // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PoisonedColorName;                                        // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HotbarSlotColorName;                                      // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FriendColorName;                                          // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EnemyColorName;                                           // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_DraggedInventoryWidget*                  DraggedInventoryWidgetClass;                              // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_InventoryTooltipWidget*                  ToolTipClass;                                             // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     NoIconTexture;                                            // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_InventorySlotViewWidget*                 View;                                                     // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x03C0(0x0080) MISSED OFFSET
	class UObject*                                     LastSlotType;                                             // 0x0440(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDH_InventoryTooltipWidget*                  InventoryTooltipWidget;                                   // 0x0448(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0450(0x0010) MISSED OFFSET
	class UImage*                                      HitBoxImage;                                              // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0468(0x0020) MISSED OFFSET

	void UpdateSlotContents(const struct FInventorySlotContents& InSlotContents, bool bAllowAddedAnimationsToPlay)//offset:0x105BE80;
	void SetRow(int InRow)//offset:0x105BCA0;
	void SetPositionAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontal, TEnumAsByte<EVerticalAlignment> InVertical)//offset:0x105BBD0;
	void SetOwningContainer(class UDH_InventoryContainerWidget* InOwningContainer)//offset:0x105BB40;
	void SetColumn(int InColumn)//offset:0x105B8D0;
	void QuickLoot(bool bLootAll)//offset:0x105B840;
	void OnUsesRemainingChanged(class ADH_Inventory* InInventory)//offset:0x105B7B0;
	void OnStoredInventoryChanged(class UDH_InventoryManager* InInventoryManager)//offset:0x105B720;
	void OnPlayerThrallChanged(class ADH_PlayerState* ChangedPlayer)//offset:0x105B410;
	void OnItemPoisoned()//offset:0x105B0D0;
	void OnInventorySlotIndexChanged(class ADH_Inventory* InInventory)//offset:0x105B040;
	void OnInventorySlotDragEnd(class UUserWidget* DraggedSlot)//offset:0x105AFB0;
	void OnInventorySlotDragBegin(class UUserWidget* DraggedSlot)//offset:0x105AF20;
	void OnInventoryManagerSlotContentsChanged(class UDH_InventoryManager* InInventoryManager, TArray<int> ModifiedSlots)//offset:0x105AE30;
	void OnDurabilityChanged(class ADH_Inventory* InInventory)//offset:0x105AD40;
	void OnCurrentDragDropOperationDrop(class UDragDropOperation* Operation)//offset:0x105AB80;
	void OnCurrentDragDropOperationCancelled(class UDragDropOperation* Operation)//offset:0x105AB80;
	void OnContainerInventoryChanged(class UDH_InventoryManager* NewInventoryManager, class UDH_InventoryManager* PreviousInventoryManager)//offset:0x105AAB0;
	void Init(int InIndex)//offset:0x105A8C0;
	struct FEventReply HandleHitBoxImageMouseDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x105A6F0;
	class UDH_InventorySlotViewWidget* GetView()//offset:0x105A6D0;
	class UWidget* GetTooltipWidget()//offset:0x105A6A0;
	int GetSlotIndex()//offset:0x105A680;
	int GetRow()//offset:0x105A660;
	class UDH_InventoryContainerWidget* GetOwningContainer()//offset:0x105A620;
	int GetColumn()//offset:0x105A600;
	struct FInventorySlotContents GetAssociatedInventoryData()//offset:0x105A5A0;
	void CheckForArrival()//offset:0x105A580;
};


// Class DreadHungerUI.DH_HotbarSlotWidget
// size:0x0030 (0x0488 - 0x04B8)
class UDH_HotbarSlotWidget : public UDH_InventorySlotWidget
{
public:
	float                                              DisplayTime;                                              // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class UObject*                                     WrongStackTexture;                                        // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 WrongStackTooltipClass;                                   // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_HotbarSlotVisibilityComponent*           VisibilityComponent;                                      // 0x04A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET

	void OnShouldShow()//offset:0x1056290;
	void OnShouldHide()//offset:0x1056250;
	void OnInteractFailed(class UDH_InteractComponent* InInteractComponent)//offset:0x10559C0;
	void OnHotbarSelectedIndexChanged(class ADH_PlayerController* InPlayerController)//offset:0x1055780;
	void OnFailedQuickTransfer(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* InTargetInventory)//offset:0x10554C0;
	void OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)//offset:0x1055310;
	float GetSize()//offset:0x1054EA0;
};


// Class DreadHungerUI.DH_HotbarWidget
// size:0x0040 (0x0260 - 0x02A0)
class UDH_HotbarWidget : public UUserWidget
{
public:
	float                                              DisplayTime;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesignTimeOversizeItemIndex;                              // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BackgroundImage;                                          // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_HotbarContainerWidget*                   SlotContainer;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_HotbarVisibilityComponent*               VisibilityComponent;                                      // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ShowAnimation;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	void OnShowHotbarChanged(class ADH_PlayerController* PlayerController)//offset:0x10562D0;
	void OnShouldShow()//offset:0x10562B0;
	void OnShouldHide()//offset:0x1056270;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x1055EF0;
	void OnInventoryContainerSlotContentsChanged(class UUserWidget* InInventoryContainerWidget, int SlotIndex)//offset:0x1055BB0;
	void OnHotbarSelectedIndexChanged(class ADH_PlayerController* PlayerController)//offset:0x10558A0;
};


// Class DreadHungerUI.DH_HoverImageWidget
// size:0x00C8 (0x0260 - 0x0328)
class UDH_HoverImageWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnHoverImageHoveredDelegate;                              // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bDesignTimeHovered;                                       // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	struct FMargin                                     HoverImageSlotPadding;                                    // 0x0274(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWidth;                                                 // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HoverBrush;                                               // 0x0288(0x0088) (Edit)
	class USoundBase*                                  OnHoverSound;                                             // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverOpacityLerpSpeed;                                    // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x031C(0x000C) MISSED OFFSET

	void SetHoverBrush(const struct FSlateBrush& InHoverBrush)//offset:0x1056BB0;
	void OnHoverImageHoveredSignature__DelegateSignature()//offset:0x13CEB30;
	void BP_OnSetMinWidth(float InMinWidth)//offset:0x13CEB30;
	void BP_OnSetHoverOpacity(float InOpacity)//offset:0x13CEB30;
	void BP_OnSetHoverImageSlotPadding(const struct FMargin& InPadding)//offset:0x13CEB30;
	void BP_OnSetHoverBrush(const struct FSlateBrush& InHoverBrush)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_HUDWidget
// size:0x0038 (0x0260 - 0x0298)
class UDH_HUDWidget : public UUserWidget
{
public:
	class UOverlay*                                    DebugControlsOverlay;                                     // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_DebugControls*                           DebugControlsClass;                                       // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_DebugControls*                           DebugControls;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    AdditionalWidgetsOverlay;                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBox*                                    DebugWrapBox;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     HUDOverlay;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Overlays;                                                 // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnPlayerControllerShowUIChanged(class ADH_PlayerController* PlayerController)//offset:0x10560A0;
	void OnCinematicModeChanged(bool bCinematicMode)//offset:0x10550D0;
	void OnCheatManagerChanged(class ADH_PlayerController* PlayerController)//offset:0x1055040;
	void BP_OnWidgetInstanced(class UUserWidget* InstancedWidget, EDH_HUDLocationType Location)//offset:0x13CEB30;
	void AddWidget(class UUserWidget* WidgetClass, EDH_HUDLocationType Location)//offset:0x1054C90;
};


// Class DreadHungerUI.DH_HumanAttributesWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_HumanAttributesWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDH_WidgetAnimationHandler*                  HungerAndWarmthAnimationHandler;                          // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void ShowHungerAndWarmth()//offset:0x1057070;
	void Show()//offset:0x1048760;
	void HideHungerAndWarmth()//offset:0x1054F00;
	void Hide()//offset:0x1047D70;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler(EDH_HumanAttributeAnimationHandlerType Type)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_HumanAttributeWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_HumanAttributeWidget : public UUserWidget
{
public:
	class UTexture2D*                                  IconTexture;                                              // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_AttributeViewWidget*                     View;                                                     // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_HungerAttributeWidget
// size:0x0010 (0x0270 - 0x0280)
class UDH_HungerAttributeWidget : public UDH_HumanAttributeWidget
{
public:
	class UTexture2D*                                  CannibalTexture;                                          // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CannibalismChangedSound;                                  // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void OnPlayerControllerPlayerStateChanged(class ADH_PlayerController* PlayerController)//offset:0x1056010;
	void OnHungerIncreasingChanged(class ADH_HumanCharacter* HumanCharacter)//offset:0x1055930;
	void OnControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x10551F0;
	void OnCannibalismChanged(class ADH_PlayerState* PlayerState)//offset:0x1054FB0;
};


// Class DreadHungerUI.DH_HyperLinkRichTextBlockDecorator
// size:0x0510 (0x0028 - 0x0538)
class UDH_HyperLinkRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	struct FHyperlinkStyle                             Style;                                                    // 0x0028(0x0500) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0528(0x0010) MISSED OFFSET
};


// Class DreadHungerUI.DH_InteractHintWidget
// size:0x0018 (0x02E0 - 0x02F8)
class UDH_InteractHintWidget : public UDH_VisibilityWidget
{
public:
	class UDH_KeybindHintWidget*                       KeybindHint;                                              // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            FlashErrorAnimation;                                      // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET

	void UpdateHint()//offset:0x1057160;
	void OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)//offset:0x10561C0;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x1055F80;
	void OnMappingsChangedEvent(class APlayerController* PlayerController)//offset:0x1055E40;
	void OnInteractFailed(class UDH_InteractComponent* InInteractComponent)//offset:0x1055A50;
	void OnCurrentInteractTargetChanged(class UDH_InteractComponent* InInteractComponent)//offset:0x1055430;
	void OnCurrentHelmsmanChanged(class ADH_WarshipHelm* WarshipHelm)//offset:0x1055280;
};


// Class DreadHungerUI.DH_InventorySlotViewWidget
// size:0x0190 (0x0260 - 0x03F0)
class UDH_InventorySlotViewWidget : public UUserWidget
{
public:
	float                                              InterpSpeed;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FillImageParent;                                          // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          Fills;                                                    // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          BorderImageParent;                                        // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          Borders;                                                  // 0x0288(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Size;                                                     // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UObject*                                     EmptyIcon;                                                // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          DenyMaskTextures;                                         // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                DesiredBorderBaseColor;                                   // 0x02B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DesiredBorderFillColor;                                   // 0x02C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DesiredFillBaseColor;                                     // 0x02D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DesiredFillFillColor;                                     // 0x02E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesignTimeFillPct;                                        // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesignTimeCombineEffectScale;                             // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     DesignTimeIcon;                                           // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     DesignTimeSlotType;                                       // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DesignTimeQuantity;                                       // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	class UTextBlock*                                  StackCountLabel;                                          // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      StackBackground;                                          // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    LockIconOverlay;                                          // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    UpgradeIconOverlay;                                       // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            MaxStackWarnAnimation;                                    // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            MaxStackFlashAnimation;                                   // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0348(0x0080) MISSED OFFSET
	class UScaleBox*                                   BaseScaleBox;                                             // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x03D0(0x0020) MISSED OFFSET

	void StopSuperCriticalAnimation()//offset:0x1057140;
	void StopCriticalAnimation()//offset:0x1057120;
	void StartCriticalAnimation(bool bSuperCritical)//offset:0x1057090;
	void SetStackCount(const struct FInventorySlotContents& SlotContents)//offset:0x1056F90;
	void SetIconMaxSize(bool bInIconMaxSize)//offset:0x1056F00;
	void SetIconColor(const struct FLinearColor& InIconColor)//offset:0x1056E70;
	void SetIcon(class UObject* Icon)//offset:0x1056DE0;
	void SetFillPct(float FillPct, bool bInstant)//offset:0x1056AD0;
	void SetFillFillColor(const struct FLinearColor& InFillFillColor, bool bInstant)//offset:0x10569F0;
	void SetFillBaseColor(const struct FLinearColor& InFillBaseColor, bool bInstant)//offset:0x1056910;
	void SetBorderFillColor(const struct FLinearColor& InBorderFillColor, bool bInstant)//offset:0x1056830;
	void SetBorderBaseColor(const struct FLinearColor& InBorderBaseColor, bool bInstant)//offset:0x1056750;
	void Reset()//offset:0x1056730;
	void PlayDenyAnimation()//offset:0x1056710;
	void PlayAddedAnimation()//offset:0x10566F0;
	void OnMaxStackWarnAnimationFinished()//offset:0x1055ED0;
	int GetSize()//offset:0x1054ED0;
	struct FLinearColor GetIconColor()//offset:0x1054E30;
	struct FSlateBrush GetIconBrush()//offset:0x1054D80;
	float GetDesiredFillPct()//offset:0x1054D60;
	void BP_OnStopSuperCriticalAnimation()//offset:0x13CEB30;
	void BP_OnStopCriticalAnimation()//offset:0x13CEB30;
	void BP_OnStartCriticalAnimation(bool bSuperCritical)//offset:0x13CEB30;
	void BP_OnSetSize(float InSize)//offset:0x13CEB30;
	void BP_OnSetIconScale(const struct FVector2D& InIconScale)//offset:0x13CEB30;
	void BP_OnSetIconColor(const struct FLinearColor& InIconColor)//offset:0x13CEB30;
	void BP_OnSetIcon(class UObject* Icon)//offset:0x13CEB30;
	void BP_OnPlayDenyAnimation()//offset:0x13CEB30;
	void BP_OnPlayAddedAnimation()//offset:0x13CEB30;
	void BP_OnInitFillImage(class UMaterialInstanceDynamic* InFillMID)//offset:0x13CEB30;
	void BP_OnInitDenyMaskImage(class UTexture2D* DenyMaskTexture)//offset:0x13CEB30;
	void BP_OnInitBorderImage(class UMaterialInstanceDynamic* InBorderMID)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_InventoryTooltipWidget
// size:0x0098 (0x0288 - 0x0320)
class UDH_InventoryTooltipWidget : public UDH_InventoryTooltipBaseWidget
{
public:
	class UObject*                                     DesignTimeInventoryClass;                                 // 0x0288(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     IconBackground;                                           // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateFontInfo                              IconFontInfo;                                             // 0x0298(0x0058) (Edit, DisableEditOnInstance)
	class UDH_FuelValueHintWidget*                     FuelValueHint;                                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                BaseVerticalBox;                                          // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
	class USpacer*                                     ContentsSpacer;                                           // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0310(0x0010) MISSED OFFSET
};


// Class DreadHungerUI.DH_JoinExpeditionButtonWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_JoinExpeditionButtonWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnClickedDelegate;                                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LobbiesRestrictionWidget*                LobbiesRestriction;                                       // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	void OnLobbiesRestrictionWidgetRestrictedChanged(bool bRestricted)//offset:0x10435A0;
	void OnJoinExpeditionButtonWidgetClicked__DelegateSignature()//offset:0x13CEB30;
	void OnBaseButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1043440;
};


// Class DreadHungerUI.DH_JoinGameOverlayWidget
// size:0x0110 (0x02F8 - 0x0408)
class UDH_JoinGameOverlayWidget : public UDH_OverlayWidget
{
public:

	void OnOnlyMeButtonClicked()//offset:0x105B360;
	void OnEveryoneButtonClicked()//offset:0x105ADD0;
};


// Class DreadHungerUI.DH_JoiningOverlayWidget
// size:0x0028 (0x02F8 - 0x0320)
class UDH_JoiningOverlayWidget : public UDH_OverlayWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	TArray<struct FDH_OnlineError>                     PossibleErrors;                                           // 0x0300(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	void ShowAbortButton()//offset:0x105BD30;
	void OnPendingNetGameConnectionCreated(class UPendingNetGame* PendingNetGame)//offset:0x105B380;
	void OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)//offset:0x105B2B0;
	void OnOnlineSessionBeginJoin()//offset:0x105B290;
	void OnOnlineErrorsUpdated(TArray<struct FDH_OnlineError> InErrors)//offset:0x105B1C0;
	void Cancel()//offset:0x105A560;
};


// Class DreadHungerUI.DH_JournalPagesDataAsset
// size:0x0050 (0x0030 - 0x0080)
class UDH_JournalPagesDataAsset : public UDataAsset
{
public:
	TMap<class FString, struct FDH_JournalPages>       ThrallPages;                                              // 0x0030(0x0050) (Edit, DisableEditOnInstance)
};


// Class DreadHungerUI.DH_JournalTopicButtonViewWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_JournalTopicButtonViewWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	struct FVector2D                                   UnavailableOverlaySize;                                   // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UnavailableImage;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     BaseButton;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnBaseButtonClicked()//offset:0x10434D0;
	void JournalTopicButtonViewWidgetSignature__DelegateSignature()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_JournalTopicButtonWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_JournalTopicButtonWidget : public UUserWidget
{
public:
	class USoundBase*                                  ViewClickedSound;                                         // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MouseEnterSound;                                          // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_JournalTopicButtonViewWidget*            View;                                                     // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnViewClicked()//offset:0x788E70;
};


// Class DreadHungerUI.DH_JournalWidget
// size:0x0060 (0x02E0 - 0x0340)
class UDH_JournalWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class USoundBase*                                  OpenSound;                                                // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDesignTimeLobbyMap;                                      // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeTutorialMap;                                   // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeThrall;                                        // 0x02FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x02FB(0x0005) MISSED OFFSET
	class UButton*                                     CloseButton;                                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            StatsButton;                                              // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PlayerStatsWidget*                       StatsPage;                                                // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            GuideButton;                                              // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PlayerGuideWidget*                       GuidePage;                                                // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            CompendiumButton;                                         // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CompendiumWidget*                        CompendiumPage;                                           // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	void ShowJournalPage(class UDH_ButtonWidget* InButton)//offset:0x105BD50;
	void OnJournalToggled()//offset:0x105B0F0;
	bool HandleJournalClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)//offset:0x1050790;
};


// Class DreadHungerUI.DH_KeybindHintWidget
// size:0x0068 (0x0260 - 0x02C8)
class UDH_KeybindHintWidget : public UUserWidget
{
public:
	struct FDH_KeybindInteractionMessage               DesignTimeInteractionMessage;                             // 0x0260(0x0030) (Edit)
	class UDataTable*                                  ImageStyles;                                              // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ImageSize;                                                // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHorizontalBox*                              KeybindHorizontalBox;                                     // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      KeyImage;                                                 // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     FallbackKeyLabelBorder;                                   // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         FallbackKeyLabel;                                         // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MessageTextBlock;                                         // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetInteractionMessage(const struct FDH_KeybindInteractionMessage& InInteractionMessage)//offset:0x105B960;
};


// Class DreadHungerUI.DH_KickedOverlayWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_KickedOverlayWidget : public UDH_OverlayWidget
{
public:

	void OnKicked()//offset:0x105B110;
};


// Class DreadHungerUI.DH_LanguageDropDown
// size:0x0030 (0x0260 - 0x0290)
class UDH_LanguageDropDown : public UUserWidget
{
public:
	class UDH_LanguageCodeDataAsset*                   LanguageCodes;                                            // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UComboBoxString*                             DropDown;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0270(0x0020) MISSED OFFSET

	void OnDropDownSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)//offset:0x105AC10;
};


// Class DreadHungerUI.DH_LaunchExpeditionButtonWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_LaunchExpeditionButtonWidget : public UUserWidget
{
public:

	void SetMission(class UDH_MapData* InMission)//offset:0x105BAB0;
	void OnOnlineSessionUpdateComplete()//offset:0x105B340;
	void LaunchExpedition()//offset:0x105A950;
	void BP_SetEnabled(bool bEnabled)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_LaunchTutorialButtonWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_LaunchTutorialButtonWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         TextLabel;                                                // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnClicked(class UDH_ButtonWidget* InButton)//offset:0x105AA00;
};


// Class DreadHungerUI.DH_LoadingScreenWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_LoadingScreenWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	TScriptInterface<class UDH_LoadingScreenInterface> LatestCaller;                                             // 0x0268(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	void ShowLoadingScreen(const TScriptInterface<class UDH_LoadingScreenInterface>& Caller)//offset:0x105BDE0;
	void Show()//offset:0x788E70;
	void OnFinishedShow()//offset:0x105AE10;
};


// Class DreadHungerUI.DH_RestrictionWidget
// size:0x0030 (0x02E0 - 0x0310)
class UDH_RestrictionWidget : public UDH_VisibilityWidget
{
public:
	class UBorder*                                     BaseBorder;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	void UpdateRestrictionText()//offset:0x1071BF0;
};


// Class DreadHungerUI.DH_LobbiesRestrictionWidget
// size:0x0018 (0x0310 - 0x0328)
class UDH_LobbiesRestrictionWidget : public UDH_RestrictionWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET
	float                                              VerticalAlignment;                                        // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLeftAlign;                                               // 0x0324(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
};


// Class DreadHungerUI.DH_LobbyBrowserOverlayWidget
// size:0x0008 (0x02F8 - 0x0300)
class UDH_LobbyBrowserOverlayWidget : public UDH_OverlayWidget
{
public:
	class UDH_LobbyBrowserWidget*                      LobbyBrowser;                                             // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void BP_OnHandledEscape()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_LobbyBrowserWidget
// size:0x00B8 (0x02E0 - 0x0398)
class UDH_LobbyBrowserWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	float                                              AutoRefreshTimeInterval;                                  // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoRefresh;                                             // 0x02F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowMapName;                                             // 0x02F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02F6(0x0002) MISSED OFFSET
	class UDH_MapListDataAsset*                        MapList;                                                  // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoRefreshTextLengthLimit;                               // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UDH_TextBlockWidget*                         AutoRefreshLabelClass;                                    // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CheckBoxWidget*                          AutoRefreshCheckBoxClass;                                 // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UListView*                                   SearchResultsListView;                                    // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                NoLobbiesVerticalBox;                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         NoLobbiesLabel;                                           // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            SearchButton;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                SearchingForLobbiesVerticalBox;                           // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            LaunchExpeditionButton;                                   // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LobbySearchResultHeaderWidget*           Header;                                                   // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    AutoRefreshRightOverlay;                                  // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    AutoRefreshBottomOverlay;                                 // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CheckBoxWidget*                          AutoRefreshCheckBox;                                      // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	void OnSetSelectedLanguageCodes()//offset:0x105B700;
	void OnSearchForLobbiesStarted()//offset:0x105B6E0;
	void OnSearchForLobbiesCompleteDelegate(bool bWasSuccessful, TArray<struct FDH_OnlineSearchResult> SearchResults)//offset:0x105B530;
	void OnSearchButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x105B4A0;
	void OnLaunchExpeditionButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x105B130;
	void OnFailedToBeginToSearchForLobbies()//offset:0x105ADF0;
	void OnCloseButtonWidgetClicked()//offset:0x105AA90;
	void OnAutoRefreshCheckBoxChanged(bool bIsChecked)//offset:0x105A970;
	void BP_OnCloseButtonClicked()//offset:0x13CEB30;
	void AddAutoRefreshTimer()//offset:0x105A540;
	void AddAutoRefresh()//offset:0x105A520;
};


// Class DreadHungerUI.DH_LobbyInfoWidget
// size:0x0050 (0x02E0 - 0x0330)
class UDH_LobbyInfoWidget : public UDH_VisibilityWidget
{
public:
	class UDH_MapData*                                 DesignTimeMapData;                                        // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DesignTimeCurrentPlayerCount;                             // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DesignTimeDesiredPlayerCount;                             // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeHasPawn;                                       // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeHasCustomSettings;                             // 0x02F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeLobbyMap;                                      // 0x02F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02F3(0x0005) MISSED OFFSET
	class UDH_TextBlockWidget*                         PlayerCountLabel;                                         // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CustomSettingsLabel;                                      // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     CustomSettingsContainer;                                  // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         DestinationLabel;                                         // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0318(0x0018) MISSED OFFSET

	void OnPlayerRoleChanged(class ADH_PlayerState* InChangedPlayer)//offset:0x105F790;
	void OnPlayerRemovedFromGame(class ADH_PlayerState* RemovedPlayer)//offset:0x105F790;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* InPlayerController)//offset:0x105F9B0;
	void OnOnlineSessionUpdateComplete()//offset:0x105F930;
	void OnLobbyPlayerOnShipChanged(class ADH_HumanCharacter* HumanCharacter)//offset:0x105F790;
};


// Class DreadHungerUI.DH_LobbyIntroScreenWidget
// size:0x0048 (0x02E0 - 0x0328)
class UDH_LobbyIntroScreenWidget : public UDH_VisibilityWidget
{
public:
	class UDH_LoreDataAsset*                           LoreDataAsset;                                            // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EDH_DateTimeStyleType                              DateStyle;                                                // 0x02E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	class FString                                      DateStringKey;                                            // 0x02F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              HideDelay;                                                // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UDH_TextBlockWidget*                         DateLabel;                                                // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0310(0x0018) MISSED OFFSET
};


// Class DreadHungerUI.DH_LobbyInviteReceivedWidget
// size:0x0148 (0x02F8 - 0x0440)
class UDH_LobbyInviteReceivedWidget : public UDH_OverlayWidget
{
public:
	class USoundBase*                                  OnShowSound;                                              // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnAcceptSound;                                            // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnDeclineSound;                                           // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0310(0x0130) MISSED OFFSET
};


// Class DreadHungerUI.DH_LobbyMissionMapWidget
// size:0x00F8 (0x02E0 - 0x03D8)
class UDH_LobbyMissionMapWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class UTexture2D*                                  MapCompletionIcon;                                        // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShowSound;                                                // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HideSound;                                                // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MusicSound;                                               // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   SoundMixModifier;                                         // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MusicComponentFadeOutDuration;                            // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_MissionDetailsWidget*                    MissionDetails;                                           // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                MissionCanvas;                                            // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     LastExpeditionBorder;                                     // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            ViewLastExpeditionButton;                                 // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_BrowseExpeditionsButtonWidget*           BrowseAllMapsButton;                                      // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowNodesAnimation;                                       // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             MusicComponent;                                           // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0358(0x0080) MISSED OFFSET

	void OnViewLastExpeditionButtonClicked(class UDH_ButtonWidget* Button)//offset:0x105FB30;
	void OnReverseShowNodesAnimationFinished()//offset:0x105FA40;
	void OnOnlineSessionUpdateComplete()//offset:0x105F950;
	void OnOnlinePartyMembersChanged()//offset:0x105F8F0;
	void OnNodeClicked(class UDH_LobbyMissionSelectionControlWidget* InNode)//offset:0x105F860;
	void OnMissionDetailsWidgetBeginShow()//offset:0x105F840;
	void OnMissionDetailsWidgetBeginHide()//offset:0x105F820;
	void OnFadeOutAnimationFinished()//offset:0x105F4E0;
	void OnDesiredAutoSearchForLobbies(bool bDesired)//offset:0x105F430;
	void OnBrowseAllMapsButtonClicked()//offset:0x105F380;
	void AddNodes(TArray<class UWidget*> InNodes)//offset:0x105F080;
};


// Class DreadHungerUI.DH_LobbyMissionSelectionControlWidget
// size:0x00A0 (0x0260 - 0x0300)
class UDH_LobbyMissionSelectionControlWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	EMissionNodeState                                  DesignTimeNodeState;                                      // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DesignTimeDisabled;                                       // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	class UDH_MapData*                                 MissionData;                                              // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LockedMaterial;                                           // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          UnlockedMaterial;                                         // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ComingSoonMaterial;                                       // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IconSize;                                                 // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class USoundBase*                                  MissionSelectedSound;                                     // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissionNotSelectedSound;                                  // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissionSelectSound;                                       // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissionHoverSound;                                        // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_MissionNodeTooltipWidget*                NodeIconTooltipWidgetClass;                               // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     SelectNodeButton;                                         // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      SelectedImage;                                            // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            OnClickAnimation;                                         // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    LockedMaterialMID;                                        // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UnlockedMaterialMID;                                      // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ComingSoonMaterialMID;                                    // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void SetSelected(bool bInSelected)//offset:0x105FDD0;
	void OnSelectNodeButtonClicked()//offset:0x105FAF0;
	void OnOnlineSessionUpdateComplete()//offset:0x105F970;
	void OnMissionSelectionControlWidgetClickedSignature__DelegateSignature(class UDH_LobbyMissionSelectionControlWidget* Widget)//offset:0x13CEB30;
	EMissionNodeState GetNodeState()//offset:0x105F2D0;
	class UWidget* GetNodeIconTooltipWidget()//offset:0x105F2A0;
	class UDH_MapData* GetMissionData()//offset:0x1043270;
	void GetMapCompletions(const class FString& MapName, int* Current, int* Required)//offset:0x105F170;
};


// Class DreadHungerUI.DH_LobbyPlayersChangedItemWidget
// size:0x00A8 (0x02E0 - 0x0388)
class UDH_LobbyPlayersChangedItemWidget : public UDH_VisibilityWidget
{
public:
	class USoundBase*                                  ArrivedSound;                                             // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LeftSound;                                                // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HideDelay;                                                // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BaseColorName;                                            // 0x02F4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ArrivedColorName;                                         // 0x02FC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftColorName;                                            // 0x0304(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseTintAmount;                                           // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BaseRetainerBoxMIDParent;                                 // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      DesignTimePlayerName;                                     // 0x0318(0x0010) (Edit, ZeroConstructor)
	EDH_LobbyPlayersChangedItemWidgetState             DesignTimeState;                                          // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class URetainerBox*                                BaseRetainerBox;                                          // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BackgroundImage;                                          // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpacer*                                     RatioTimer;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0350(0x0028) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BaseRetainerBoxMID;                                       // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_LobbyPlayersChangedWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_LobbyPlayersChangedWidget : public UUserWidget
{
public:
	class UDH_LobbyPlayersChangedItemWidget*           ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_LobbyPlayersChangedItemWidget*>   Items;                                                    // 0x0268(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0278(0x0010) MISSED OFFSET

	void OnPartyMembersChanged()//offset:0x105F990;
	void BP_OnItemsEmptied()//offset:0x13CEB30;
	void BP_OnItemCreated(class UDH_LobbyPlayersChangedItemWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_LobbySearchResultData
// size:0x0188 (0x0028 - 0x01B0)
class UDH_LobbySearchResultData : public UObject
{
public:
};


// Class DreadHungerUI.DH_LobbySearchResultHeaderWidget
// size:0x0058 (0x0260 - 0x02B8)
class UDH_LobbySearchResultHeaderWidget : public UUserWidget
{
public:
	class UDH_LobbySearchResultsFieldSizesDataAsset*   FieldSizes;                                               // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBorder*                                     BaseBorder;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         PlayerCountLabel;                                         // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MissionLabel;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         LobbyNameLabel;                                           // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RegionLabel;                                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpacer*                                     JoinGameButtonSpacer;                                     // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         TimeElapsedLabel;                                         // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         LanguageLabel;                                            // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 LanguageDropdownButton;                                   // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     LanguageContainer;                                        // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDown
// size:0x0050 (0x02F0 - 0x0340)
class UDH_LobbySearchResultHeaderWidgetDropDown : public UDH_ContextMenuWidget
{
public:
	TArray<struct FText>                               DesignTimeSelectedCodes;                                  // 0x02F0(0x0010) (Edit, ZeroConstructor)
	class UDH_LanguageCodeDataAsset*                   LanguagesDataAsset;                                       // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_DefaultLanguageFilterStateDataAsset*     DefaultLanguageFilterStateDataAsset;                      // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         LabelClass;                                               // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CheckBoxWidget*                          CheckBoxClass;                                            // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVerticalBox*                                LanguagesVerticalBox;                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CheckBoxWidget*                          SelectAllCheckBox;                                        // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDH_LanguageFilterCheckBox>          CheckBoxes;                                               // 0x0330(0x0010) (ZeroConstructor, Transient)

	void OnSelectAllCheckBoxStateChanged(bool bInChecked)//offset:0x105FA60;
	void OnLobbyBrowserWidgetShow()//offset:0x105F770;
	void OnLanguageFilterButtonClicked(bool bToggleOn)//offset:0x105F630;
	void OnCheckBoxWidgetStateChanged(bool bInChecked)//offset:0x105F3A0;
};


// Class DreadHungerUI.DH_LobbySearchResultHeaderWidgetDropDownButton
// size:0x0028 (0x0260 - 0x0288)
class UDH_LobbySearchResultHeaderWidgetDropDownButton : public UUserWidget
{
public:
	int                                                DesignTimeNumChecked;                                     // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     VerticalStripImage;                                       // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     WarningOverlay;                                           // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ButtonBackground;                                         // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnSetSelectedLanguageCodes()//offset:0x105FB10;
	void OnLanguageFilterDropDownHide()//offset:0x105F750;
	void OnLanguageFilterCheckBoxesChanged(int NumChecked)//offset:0x105F6C0;
	void OnBaseButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x105F2F0;
};


// Class DreadHungerUI.DH_LobbySearchResultPlayersWidget
// size:0x0038 (0x0260 - 0x0298)
class UDH_LobbySearchResultPlayersWidget : public UUserWidget
{
public:
	int                                                DesignTimeCurrentPlayers;                                 // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DesignTimeMaxPlayers;                                     // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumOfIcons;                                               // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class UObject*                                     IconTexture;                                              // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHorizontalBox*                              IconsContainer;                                           // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UImage*>                              IconImages;                                               // 0x0280(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	void SetPlayers(int InCurrent, int InMax)//offset:0x105FD00;
	void SetMaxPlayers(int InMax)//offset:0x105FC70;
	void SetCurrentPlayers(int InCurrent)//offset:0x105FBE0;
};


// Class DreadHungerUI.DH_LobbySearchResultsFieldSizesDataAsset
// size:0x0050 (0x0030 - 0x0080)
class UDH_LobbySearchResultsFieldSizesDataAsset : public UPrimaryDataAsset
{
public:
	TMap<struct FName, float>                          Sizes;                                                    // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};


// Class DreadHungerUI.DH_LobbySearchResultWidget
// size:0x0170 (0x0260 - 0x03D0)
class UDH_LobbySearchResultWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UDH_LobbySearchResultsFieldSizesDataAsset*   FieldSizes;                                               // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    TextBlockDebugWidgetClass;                                // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_LobbySearchResultPlayersWidget*          Players;                                                  // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MissionLabel;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         LobbyNameLabel;                                           // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         TimeElapsedLabel;                                         // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RegionLabel;                                              // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         LanguageLabel;                                            // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            JoinButton;                                               // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x118];                                     // 0x02B0(0x0118) MISSED OFFSET
	class UDH_TextBlockDebugWidget*                    DebugSessionId;                                           // 0x03C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	void OnJoinButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x105F5A0;
};


// Class DreadHungerUI.DH_LobbySlotReportItemWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_LobbySlotReportItemWidget : public UUserWidget
{
public:

	void Report()//offset:0x105FBC0;
	void OnReportItemWidgetButtonClickSignature__DelegateSignature(EDH_PlayerReportReasonType InReportReason)//offset:0x13CEB30;
	void BP_OnReportReasonSet(const struct FText& InReportReason)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_LobbySlotReportListWidget
// size:0x0040 (0x0260 - 0x02A0)
class UDH_LobbySlotReportListWidget : public UUserWidget
{
public:
	class UDH_LobbySlotReportItemWidget*               ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_LobbySlotReportItemWidget*>       Items;                                                    // 0x0268(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0278(0x0028) MISSED OFFSET

	void Show()//offset:0x105FE60;
	void OnItemButtonClick(EDH_PlayerReportReasonType InReportReason)//offset:0x105F520;
	void OnHidden()//offset:0x10512F0;
	void OnFloodIntervalExpired()//offset:0x105F500;
	void Hide()//offset:0x788E70;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnItemsEmptied()//offset:0x13CEB30;
	void BP_OnItemCreated(class UDH_LobbySlotReportItemWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_LobbySlotsContainerWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_LobbySlotsContainerWidget : public UUserWidget
{
public:
	bool                                               bContextMenuOnTop;                                        // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UDH_LobbySlotWidget*                         SlotClass;                                                // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 LobbyLeaderSpacerClass;                                   // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHorizontalBox*                              SlotContainer;                                            // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDH_LobbySlotWidget*>                 Slots;                                                    // 0x0280(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnOnlinePartyMembersChanged()//offset:0x105F910;
	void OnExpectedUniqueNetIdsUpdated()//offset:0x105F4C0;
};


// Class DreadHungerUI.DH_VOIPTalkingWidget
// size:0x0010 (0x02E0 - 0x02F0)
class UDH_VOIPTalkingWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class UProgressBar*                                Volume;                                                   // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_LobbySlotSpeakingWidget
// size:0x0000 (0x02F0 - 0x02F0)
class UDH_LobbySlotSpeakingWidget : public UDH_VOIPTalkingWidget
{
public:

	void OnVoiceChatParticipantChanged(const class FString& AccountName)//offset:0x1063C50;
	void OnVivoxParticipantChanged(const class FString& AccountName)//offset:0x1063BB0;
};


// Class DreadHungerUI.DH_LobbySlotVolumeWidget
// size:0x0038 (0x0260 - 0x0298)
class UDH_LobbySlotVolumeWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class USlider*                                     VolumeSlider;                                             // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      FilledImage;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HoveredImage;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpacer*                                     UnfilledSpacer;                                           // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0288(0x0010) MISSED OFFSET

	void OnVolumeSliderValueChanged(float InValue)//offset:0x1063CF0;
};


// Class DreadHungerUI.DH_LobbySlotWidget
// size:0x00D0 (0x0260 - 0x0330)
class UDH_LobbySlotWidget : public UUserWidget
{
public:
	class UDH_PlayerRoleData*                          DesignTimeRoleData;                                       // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeBothThrall;                                    // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	int                                                DesignTimePrestigeLevel;                                  // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeLocallyMuted;                                  // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeVolumeZero;                                    // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bContextMenuOnTop;                                        // 0x0272(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0273(0x0001) MISSED OFFSET
	int                                                MaxNameLength;                                            // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          BorderMasks;                                              // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     UnknownPlayerImage;                                       // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BorderMIDParent;                                          // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     LobbyButton;                                              // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LobbySlotSpeakingWidget*                 VOIP;                                                     // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         NameLabel;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    NameOverlay;                                              // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    PlusOverlay;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      AvatarImage;                                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      AvatarBorder;                                             // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      NameBackgroundImage;                                      // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      VerticalStripImage;                                       // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HorizontalStripImage;                                     // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MutedIcon;                                                // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      ZeroVolumeIcon;                                           // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PlayerContextMenuWidget*                 ContextMenu;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Throbber;                                                 // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0308(0x0018) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BorderMID;                                                // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	void OnPlayerUpdated(class ADH_PlayerState* InChangedPlayer)//offset:0x1063880;
	void OnPlayerRemovedFromGame(class ADH_PlayerState* AddedPlayer)//offset:0x10635C0;
	void OnPlayerReconnectedToGameTimerExpired()//offset:0x1063860;
	void OnPlayerReconnectedToGame(class ADH_PlayerState* ReconnectingPlayer)//offset:0x10637D0;
	void OnPlayerMuteStatusChanged(class ADH_PlayerState* MutedPlayer)//offset:0x1063740;
	void OnPlayerContextMenuVolumeSliderChanged(const struct FUniqueNetIdRepl& InUserId)//offset:0x1063650;
	void OnPlayerAddedToGame(class ADH_PlayerState* AddedPlayer)//offset:0x10635C0;
	void OnLobbyButtonClicked()//offset:0x1063150;
	void OnGameStateMatchStateChanged(class ADH_GameState* InGameState)//offset:0x10630A0;
};


// Class DreadHungerUI.DH_LoginOverlayWidget
// size:0x0008 (0x02F8 - 0x0300)
class UDH_LoginOverlayWidget : public UDH_OverlayWidget
{
public:
	class UDH_LoginStatusWidget*                       LoginStatus;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnQuitToDesktopButtonClicked()//offset:0x1063910;
	void OnLoginStepFinished(int StepsCompleted, int MaxSteps, bool bAbandonFurtherSteps)//offset:0x1063170;
	void OnErrorsUpdated()//offset:0x1063060;
};


// Class DreadHungerUI.DH_LoginProgressBarWidget
// size:0x0058 (0x0260 - 0x02B8)
class UDH_LoginProgressBarWidget : public UUserWidget
{
public:
	int                                                DesignTimeStepsCompleted;                                 // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DesignTimeMaxSteps;                                       // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EyeletTexture;                                            // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  EyeletTexture_Filled;                                     // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   EyeletSize;                                               // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasPanel*                                EyeletCanvasPanel;                                        // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                ProgressBar;                                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                CompleteColor;                                            // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                IncompleteColor;                                          // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_LoginStatusWidget
// size:0x00E0 (0x02E0 - 0x03C0)
class UDH_LoginStatusWidget : public UDH_VisibilityWidget
{
public:
	int                                                DesignTimeStepsCompleted;                                 // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DesignTimeMaxSteps;                                       // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeAbandonFurtherSteps;                           // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	TArray<struct FDH_Error>                           DesignTimeErrors;                                         // 0x02F0(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, bool>                           DesignTimeLoggedInPlatforms;                              // 0x0300(0x0050) (Edit)
	float                                              DesignTimeTimeRemaining;                                  // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNoticeContributesToSize;                                 // 0x0354(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UDH_TextBlockWidget*                         LabelClass;                                               // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidget*                                     LoginStatusBorder;                                        // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                LoginStatusVerticalBox;                                   // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     NoticeBorder;                                             // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                NoticeVerticalBox;                                        // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     RetryingBorder;                                           // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RetryingLabel;                                            // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LoginProgressBarWidget*                  ProgressBar;                                              // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                NoticeBorderCanvasPanel;                                  // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDH_TextBlockWidget*>                 NoticeLabels;                                             // 0x03A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UDH_TextBlockWidget*>                 LoginStatusLabels;                                        // 0x03B0(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnRetryingLoginStep(int TimeRemaining)//offset:0x1063930;
	void OnLoginStepFinished(int StepsCompleted, int MaxSteps, bool bAbandonFurtherSteps)//offset:0x1063280;
	void OnErrorsUpdated()//offset:0x1063080;
};


// Class DreadHungerUI.DH_LoginTesterWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_LoginTesterWidget : public UUserWidget
{
public:
	class UDH_DebugButtonWidget*                       CloseButton;                                              // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_DebugButtonWidget*                       DefaultLoginHandlerButton;                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_DebugButtonWidget*                       TestLoginHandlerButton;                                   // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_DebugCheckBoxWidget*                     PlatformLoginFailedCheckBoxInput;                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_DebugCheckBoxWidget*                     NoIdentityInterfaceCheckBoxInput;                         // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_DebugCheckBoxWidget*                     PlatformLoginTimeoutCheckBoxInput;                        // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnTestLoginHandlerButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1063A50;
	void OnDefaultLoginHandlerButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1062FB0;
	void OnCloseButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1062F20;
	bool GetLoginStepPlatformTimeout()//offset:0x1062D60;
	struct FDH_OnlineError GetLoginStepPlatformError()//offset:0x1062CB0;
};


// Class DreadHungerUI.DH_LootContainerWidget
// size:0x0018 (0x0300 - 0x0318)
class UDH_LootContainerWidget : public UDH_LootContainerBaseWidget
{
public:
	class UDH_InventoryContainerWidget*                InventoryContainer;                                       // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         TitleLabel;                                               // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnCloseButtonClicked()//offset:0x104C4C0;
};


// Class DreadHungerUI.DH_MissionDetailsWidget
// size:0x00B0 (0x02E0 - 0x0390)
class UDH_MissionDetailsWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET
	class UMaterialInterface*                          PreviewImageParentMaterial;                               // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  MapPreviewDefaultTexture;                                 // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MusicDestinationSelectFadeOutDuration;                    // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	class UDH_TextBlockWidget*                         MapNameLabel;                                             // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MapPlayerCountLabel;                                      // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MapDescriptionLabel;                                      // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PreviewImage;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            BackButton;                                               // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_JoinExpeditionButtonWidget*              JoinExpeditionButton;                                     // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LobbyBrowserWidget*                      LobbyBrowser;                                             // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_LaunchExpeditionButtonWidget*            LaunchExpeditionButton;                                   // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ExpeditionSettingsWidget*                ExpeditionSettings;                                       // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                ExpeditionOptionsList;                                    // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                TutorialOptionsList;                                      // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TutorialChapterSelectWidget*             TutorialChapters;                                         // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PreviewImageMID;                                          // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             MusicDestinationSelect;                                   // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	void OnJoinExpeditionButtonWidgetClicked()//offset:0x1063130;
	void OnBackButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1062E90;
};


// Class DreadHungerUI.DH_MissionNodeTooltipWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_MissionNodeTooltipWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         MapNameLabel;                                             // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    UnlockRequirementsOverlay;                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              UnlockRequirements;                                       // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                UnlockProgressBar;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         WinCountLabel;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void Init(class UDH_LobbyMissionSelectionControlWidget* OwningNode)//offset:0x1062E00;
};


// Class DreadHungerUI.DH_NamePlateViewWidget
// size:0x0008 (0x02E0 - 0x02E8)
class UDH_NamePlateViewWidget : public UDH_VisibilityWidget
{
public:
	class UDH_TextBlockWidget*                         Label;                                                    // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_NamePlateWidget
// size:0x0050 (0x0260 - 0x02B0)
class UDH_NamePlateWidget : public UUserWidget
{
public:
	float                                              DelayedShowTime;                                          // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayedHideTime;                                          // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRange;                                               // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IncapacitatedZOffset;                                     // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseEyeHeightMultiplier;                                  // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BodyInstanceBoneName;                                     // 0x0274(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UDH_NamePlateViewWidget*                     View;                                                     // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0288(0x0028) MISSED OFFSET

	void ActualShow()//offset:0x1062C50;
	void ActualHide()//offset:0x1062C30;
};


// Class DreadHungerUI.DH_NetworkFailureOverlayWidget
// size:0x0010 (0x02F8 - 0x0308)
class UDH_NetworkFailureOverlayWidget : public UDH_OverlayWidget
{
public:

	void UpdateTimeElapsed()//offset:0x1063E00;
	void OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)//offset:0x1063510;
	void OnDisconnectButtonClicked()//offset:0x1063040;
};


// Class DreadHungerUI.DH_NewHostOverlayWidget
// size:0x0008 (0x02F8 - 0x0300)
class UDH_NewHostOverlayWidget : public UDH_OverlayWidget
{
public:
	bool                                               bDesignTimeLocalIsHost;                                   // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET

	void OnSessionMemberPromoted(bool bLocalIsHost)//offset:0x10639C0;
	void OnOnlineSessionUpdateComplete()//offset:0x10635A0;
	void OnOKButtonClicked()//offset:0x1063420;
};


// Class DreadHungerUI.DH_OnlineDebugWidget
// size:0x0038 (0x0260 - 0x0298)
class UDH_OnlineDebugWidget : public UUserWidget
{
public:
	class UDH_TextBlockDebugWidget*                    TextBlockDebugWidgetClass;                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVerticalBox*                                Values;                                                   // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    PartyId;                                                  // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    MembersLabel;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                MembersList;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UDH_TextBlockDebugWidget*>            MEMBERS;                                                  // 0x0288(0x0010) (ExportObject, ZeroConstructor, Transient)
};


// Class DreadHungerUI.DH_OnlineErrorItemWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_OnlineErrorItemWidget : public UUserWidget
{
public:

	void BP_OnErrorSet(const struct FText& InLocalizedText, const class FString& InRawError)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_OnlineErrorWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_OnlineErrorWidget : public UDH_ErrorWidget
{
public:
	class UDH_OnlineErrorItemWidget*                   ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_OnlineErrorItemWidget*>           Items;                                                    // 0x0268(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnOnlineErrorsUpdated(TArray<struct FDH_OnlineError> InErrors)//offset:0x1063440;
	void BP_OnItemCreated(class UDH_OnlineErrorItemWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_OnlineFriendData
// size:0x0010 (0x0028 - 0x0038)
class UDH_OnlineFriendData : public UObject
{
public:
};


// Class DreadHungerUI.DH_OnlineFriendHeaderData
// size:0x0020 (0x0028 - 0x0048)
class UDH_OnlineFriendHeaderData : public UObject
{
public:
};


// Class DreadHungerUI.DH_OnlineFriendsListWidget
// size:0x0040 (0x02E0 - 0x0320)
class UDH_OnlineFriendsListWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	float                                              ListRefreshInterval;                                      // 0x02E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class USoundBase*                                  ShowSound;                                                // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HideSound;                                                // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UListView*                                   List;                                                     // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            MoreButton;                                               // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	void OnMoreButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1063390;
	bool HandleCrewInviteClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)//offset:0x1050790;
	bool GetOnlineFriendsListVisibility()//offset:0x1062D90;
};


// Class DreadHungerUI.DH_OnlineFriendWidget
// size:0x0090 (0x0260 - 0x02F0)
class UDH_OnlineFriendWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	float                                              MinTimeBetweenInvites;                                    // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class USoundBase*                                  InviteConfirmationSound;                                  // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    TextBlockDebugWidgetClass;                                // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBorder*                                     NameplateBorder;                                          // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     AvatarBorder;                                             // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      AvatarImage;                                              // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         NameLabel;                                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         StatusLabel;                                              // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    DebugFriendData;                                          // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x02B0(0x0040) MISSED OFFSET
};


// Class DreadHungerUI.DH_OnlinePartyDebugWidget
// size:0x0088 (0x0298 - 0x0320)
class UDH_OnlinePartyDebugWidget : public UDH_OnlineDebugWidget
{
public:
	class UDH_TextBlockDebugWidget*                    MatchMembersLabel;                                        // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                MatchMembersList;                                         // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UDH_TextBlockDebugWidget*>            MatchMembers;                                             // 0x02A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UDH_TextBlockDebugWidget*                    DesiredPlayerCount;                                       // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    Destination;                                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    ShipName;                                                 // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    VERSION;                                                  // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    LANGUAGE;                                                 // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    ServerURI;                                                // 0x02E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    PartyIdToJoin;                                            // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    Public;                                                   // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    Region;                                                   // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    CustomGameSettingsLabel;                                  // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                CustomGameSettingsList;                                   // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UDH_TextBlockDebugWidget*>            CustomGameSettings;                                       // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient)
};


// Class DreadHungerUI.DH_OnlineSessionDebugWidget
// size:0x0038 (0x0298 - 0x02D0)
class UDH_OnlineSessionDebugWidget : public UDH_OnlineDebugWidget
{
public:
	class UDH_TextBlockDebugWidget*                    Public;                                                   // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    DesiredPlayerCount;                                       // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    LANGUAGE;                                                 // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    Destination;                                              // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    VERSION;                                                  // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    SERVERREGION;                                             // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    KICKEDMEMBERS;                                            // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_OnlineVoiceDebugWidget
// size:0x0058 (0x0298 - 0x02F0)
class UDH_OnlineVoiceDebugWidget : public UDH_OnlineDebugWidget
{
public:
	class UDH_TextBlockDebugWidget*                    VoipChannelsLabel;                                        // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                VoipChannelsList;                                         // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UDH_TextBlockDebugWidget*>            VoipChannels;                                             // 0x02A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UDH_TextBlockDebugWidget*                    VoipParticipantsLabel;                                    // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                VoipParticipantsList;                                     // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UDH_TextBlockDebugWidget*>            VoipParticipants;                                         // 0x02C8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UDH_TextBlockDebugWidget*                    LocalPlayerStatus;                                        // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    SelectedInputDevice;                                      // 0x02E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    DefaultInputDevice;                                       // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_OpenSpellCastingHintWidget
// size:0x00A0 (0x02D8 - 0x0378)
class UDH_OpenSpellCastingHintWidget : public UDH_FirstTimeHintWidget
{
public:
	float                                              HoldOpenTime;                                             // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x02DC(0x009C) MISSED OFFSET

	void OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)//offset:0x10677C0;
	bool BP_IsBoneCharm(class ADH_Inventory* Inventory)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_OverlayViewErrorWidget
// size:0x0068 (0x02E0 - 0x0348)
class UDH_OverlayViewErrorWidget : public UDH_VisibilityWidget
{
public:
	TArray<class UObject*>                             CrossTextures;                                            // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UImage*                                      CrossImage;                                               // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     RawErrorBorder;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RawErrorLabel;                                            // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0310(0x0038) MISSED OFFSET
};


// Class DreadHungerUI.DH_OverlayViewWidget
// size:0x00D0 (0x02E0 - 0x03B0)
class UDH_OverlayViewWidget : public UDH_VisibilityWidget
{
public:
	struct FName                                       DesignTimeTitleFontStyle;                                 // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DesignTimeTitleText;                                      // 0x02E8(0x0028) (Edit)
	bool                                               DesignTimeThrobberVisible;                                // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DesignTimeTitleVisible;                                   // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0302(0x0006) MISSED OFFSET
	TArray<struct FDH_OverlayViewError>                DesignTimeErrors;                                         // 0x0308(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDH_OverlayViewButtonInfo>           DesignTimeButtonInfos;                                    // 0x0318(0x0010) (Edit, ZeroConstructor)
	float                                              ButtonMinWidth;                                           // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UDH_OverlayViewErrorWidget*                  ErrorWidgetClass;                                         // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ButtonWidget*                            ButtonClass;                                              // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         ButtonLabelClass;                                         // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         TitleLabel;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 Throbber;                                                 // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                ErrorWidgetsContainer;                                    // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BackgroundOverlay;                                        // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDH_OverlayViewErrorWidget*>          ErrorWidgets;                                             // 0x0368(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0378(0x0010) MISSED OFFSET
	class UHorizontalBox*                              ButtonsContainer;                                         // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDH_OverlayViewButton>               Buttons;                                                  // 0x0390(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET

	void OnButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1067110;
};


// Class DreadHungerUI.DH_PartyFullOverlayWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_PartyFullOverlayWidget : public UDH_OverlayWidget
{
public:
};


// Class DreadHungerUI.DH_PlayerContextMenuWidget
// size:0x0090 (0x02F0 - 0x0380)
class UDH_PlayerContextMenuWidget : public UDH_ContextMenuWidget
{
public:
	bool                                               bShowAboveOwningWidget;                                   // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEverShowMute;                                            // 0x02F1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bEverShowKick;                                            // 0x02F2(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bEverShowVolumeControl;                                   // 0x02F3(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bEverShowReport;                                          // 0x02F4(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bEverShowProfile;                                         // 0x02F5(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02F6(0x0002) MISSED OFFSET
	class UObject*                                     UnknownPlayerImage;                                       // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ButtonWidget*                            ButtonClass;                                              // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         LabelClass;                                               // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_LobbySlotReportListWidget*               ReportListClass;                                          // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_LobbySlotVolumeWidget*                   VolumeSliderClass;                                        // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVerticalBox*                                ButtonList;                                               // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            ReportButton;                                             // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_LobbySlotReportListWidget*               ReportList;                                               // 0x0330(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            ProfileButton;                                            // 0x0338(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            KickButton;                                               // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            MuteButton;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDH_LobbySlotVolumeWidget*                   VolumeSlider;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0358(0x0010) MISSED OFFSET
	class UDH_TextBlockWidget*                         NameLabel;                                                // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      AvatarImage;                                              // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	void OnReportButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1067730;
	void OnProfileButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x10676A0;
	void OnPlayerMuteStatusChanged(class ADH_PlayerState* MutedPlayer)//offset:0x10674D0;
	void OnPlayerContextMenuShown(class UWidget* Widget)//offset:0x10673B0;
	void OnMuteButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1067250;
	void OnKickButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x10671C0;
};


// Class DreadHungerUI.DH_PlayerCosmeticsShopWidget
// size:0x0008 (0x0448 - 0x0450)
class UDH_PlayerCosmeticsShopWidget : public UDH_EntitlementsShopWidget
{
public:
	class UDH_PlayerRoleData*                          CurrentRole;                                              // 0x0448(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};


// Class DreadHungerUI.DH_PlayerStatBarWidget
// size:0x0040 (0x0260 - 0x02A0)
class UDH_PlayerStatBarWidget : public UUserWidget
{
public:
	float                                              MinBarHeight;                                             // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BarWidth;                                                 // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBarHeight;                                             // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class UProgressBar*                                BarImage;                                                 // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         TitleLabel;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Icon;                                                     // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CountLabel;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
};


// Class DreadHungerUI.DH_PlayerGradeWidget
// size:0x0000 (0x02A0 - 0x02A0)
class UDH_PlayerGradeWidget : public UDH_PlayerStatBarWidget
{
public:
};


// Class DreadHungerUI.DH_PlayerGuideWidget
// size:0x0010 (0x0308 - 0x0318)
class UDH_PlayerGuideWidget : public UDH_JournalPageWidget
{
public:
	class URichTextBlock*                              ExplorerInstructions;                                     // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              ThrallInstructions;                                       // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_PlayerRankWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_PlayerRankWidget : public UUserWidget
{
public:
};


// Class DreadHungerUI.DH_PlayerReportCardAvatarWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_PlayerReportCardAvatarWidget : public UUserWidget
{
public:
	class UDH_ScoreboardPlayerListItemViewWidget*      View;                                                     // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     BaseButton;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PlayerContextMenuWidget*                 ContextMenu;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ScoreboardPlayerListItemTooltipWidget*   AvatarTooltipClass;                                       // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ScoreboardPlayerListItemTooltipWidget*   AvatarTooltip;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	void OnBaseButtonClicked()//offset:0x10670F0;
};


// Class DreadHungerUI.DH_PlayerStatsWidget
// size:0x0300 (0x0308 - 0x0608)
class UDH_PlayerStatsWidget : public UDH_JournalPageWidget
{
public:
	TMap<EPlayerTeamRole, class UDH_PlayerRoleData*>   DesignTimeRoles;                                          // 0x0308(0x0050) (Edit, DisableEditOnInstance)
	TArray<class UDH_MapData*>                         DesignTimeMaps;                                           // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDH_ScoreboardDataAsset*                     DesignTimeScoreboardData;                                 // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      AvatarImage;                                              // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         NameLabel;                                                // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PlayerRankBadge;                                          // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleExperienceBarWidget*                 ExperienceBar;                                            // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BackgroundImage;                                          // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<EPlayerTeam, class UTexture2D*>               BackgroundImages;                                         // 0x0398(0x0050) (Edit, DisableEditOnInstance)
	class UDH_TextBlockWidget*                         GamesAsTeamPercentageLabel;                               // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MostPlayedRoleAsThisTeamLabel;                            // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MostSuccessfulRoleAsThisTeamLabel;                        // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MostPlayedMapAsThisTeamLabel;                             // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MostSuccessfulMapAsThisTeamLabel;                         // 0x0408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         GamesAsThisTeamLabel;                                     // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         WinsAsTeamPercentageLabel;                                // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         WinsAsThisTeamLabel;                                      // 0x0420(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         AverageGradeLabel;                                        // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PlayerGradeWidget*                       GradeWidgetClass;                                         // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_PlayerStatBarWidget*                     StatBarWidgetClass;                                       // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHorizontalBox*                              GradesList;                                               // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              GamesByMapList;                                           // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              GamesByTeamList;                                          // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              GamesByRoleList;                                          // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      EarlyAccessBadge;                                         // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PlaytesterBadge;                                          // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x198];                                     // 0x0470(0x0198) MISSED OFFSET

	void UpdateStats(EPlayerTeam InTeam)//offset:0x1067990;
};


// Class DreadHungerUI.DH_PokerGameTimerWidget
// size:0x0038 (0x02E0 - 0x0318)
class UDH_PokerGameTimerWidget : public UDH_VisibilityWidget
{
public:
	class USoundBase*                                  PulseSound;                                               // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         RoundTimerTextBlock;                                      // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PulseAnimation;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F8(0x0020) MISSED OFFSET

	void OnPokerGameTimeStatsChanged(TArray<struct FDH_PokerGameTimeStat> InTimeStats)//offset:0x10675F0;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x1067440;
};


// Class DreadHungerUI.DH_PregameAvatarWidget
// size:0x0090 (0x0260 - 0x02F0)
class UDH_PregameAvatarWidget : public UUserWidget
{
public:
	struct FDH_PregameAvatarData                       DesignTimeData;                                           // 0x0260(0x0020) (Edit)
	bool                                               DesignTimeOwnerIsThrall;                                  // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class USoundBase*                                  PopAnimationSound;                                        // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BorderMIDParent;                                          // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          BorderMasks;                                              // 0x0298(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UImage*                                      AvatarImage;                                              // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BorderImage;                                              // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         NameLabel;                                                // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PopAnimation;                                             // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BorderMID;                                                // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x02D0(0x0020) MISSED OFFSET

	void OnPlayerThrallChanged(class ADH_PlayerState* InChangedPlayer)//offset:0x1067560;
	void Init(const struct FDH_PregameAvatarData& InData, bool bOwnerIsThrall)//offset:0x1066FF0;
};


// Class DreadHungerUI.DH_PregameInstructionsInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_PregameInstructionsInterface : public UInterface
{
public:
};


// Class DreadHungerUI.DH_PregameInstructionsMockControlsWidget
// size:0x0070 (0x0260 - 0x02D0)
class UDH_PregameInstructionsMockControlsWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	TArray<struct FDH_PregameAvatarData>               AllAvatarData;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bProvideNoAvatarData;                                     // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OwnerIsThrall;                                            // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x027A(0x0002) MISSED OFFSET
	int                                                PlayerCount;                                              // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThrallCount;                                              // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	TArray<int>                                        PrestigeLevelCount;                                       // 0x0288(0x0010) (Edit, ZeroConstructor)
	class UDH_DebugTextInputWidget*                    NoPrestigeLevelsTextInput;                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	void SetThrallCount(int InThrallCount)//offset:0x1067900;
	void SetPlayerCount(int InPlayerCount)//offset:0x1067870;
	void OnShowButtonClicked()//offset:0x1067850;
	void OnNoPrestigeLevelsTextInputCommitted(const struct FText& InText)//offset:0x10672E0;
	void OnHideButtonClicked()//offset:0x10671A0;
	int GetPlayerCount()//offset:0x1066FD0;
	int BP_GetThrallCount()//offset:0x1066FB0;
};


// Class DreadHungerUI.DH_PregameInstructionsRealData
// size:0x0058 (0x0028 - 0x0080)
class UDH_PregameInstructionsRealData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class ADH_LobbyPawn*                               LobbyPawnClass;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDH_PregameAvatarData>               AllAvatarData;                                            // 0x0038(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	void OnShowPregameInstructions(int InThrallCount)//offset:0x106C1C0;
	void OnMatchStarted()//offset:0x106BD40;
};


// Class DreadHungerUI.DH_PregameInstructionsWidget
// size:0x0098 (0x02E0 - 0x0378)
class UDH_PregameInstructionsWidget : public UDH_VisibilityWidget
{
public:
	class UDH_PregameAvatarWidget*                     PregameAvatarWidgetClass;                                 // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumWidgetsToPreconstruct;                                 // 0x02E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinishedPoppingAvatarsDelay;                              // 0x02EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PopNextAvatarDelay;                                       // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	class USoundBase*                                  ExplorerMusic;                                            // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrallMusic;                                              // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShowPregameTextSound;                                     // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_PregameInstructionsRealData*             RealDataClass;                                            // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_PregameInstructionsMockControlsWidget*   TestingControlsClass;                                     // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWrapBox*                                    PlayerAvatarsWrapBox;                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              TitleLabel;                                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              CallToActionLabel;                                        // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowPregameTextAnimation;                                 // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            HideTitleAnimation;                                       // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0348(0x0020) MISSED OFFSET
	TScriptInterface<class UDH_PregameInstructionsInterface> Data;                                                     // 0x0368(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	void ShowTestingControls()//offset:0x106C980;
	void PopNextAvatar(int AvatarIndex)//offset:0x106C340;
	void OnFinishedPoppingAvatars()//offset:0x106BC30;
};


// Class DreadHungerUI.DH_PrestigeOverlayWidget
// size:0x0030 (0x02F8 - 0x0328)
class UDH_PrestigeOverlayWidget : public UDH_OverlayWidget
{
public:
	EDH_PrestigeStage                                  DesignTimeStage;                                          // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	class UWidget*                                     PrestigeBeginContainer;                                   // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PrestigeProcessContainer;                                 // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PrestigeCompleteContainer;                                // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	void ProcessTimeout()//offset:0x106C3F0;
	void OnRoleSelectionPrestigeButtonClicked(class UDH_PlayerRoleData* InPreviewRole)//offset:0x106C130;
	void OnPrestigeButtonClicked()//offset:0x106BEE0;
};


// Class DreadHungerUI.DH_PrisonerAwakensWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_PrisonerAwakensWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	float                                              HideDelay;                                                // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	void Show()//offset:0x106C920;
	void OnPrisonerPawnControllerChanged(class ADH_PrisonerPawn* InPrisonerPawn)//offset:0x106BF00;
	void OnHidden()//offset:0x10512F0;
	void Hide()//offset:0x106B810;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnHide()//offset:0x788E70;
};


// Class DreadHungerUI.DH_PublicGameSettingWidget
// size:0x0010 (0x0350 - 0x0360)
class UDH_PublicGameSettingWidget : public UDH_CustomGameSettingWidget
{
public:
	class UDH_LobbiesRestrictionWidget*                LobbiesRestriction;                                       // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	void OnLobbiesRestrictionWidgetRestrictedChanged(bool bRestricted)//offset:0x106BCB0;
};


// Class DreadHungerUI.DH_PushToTalkWidget
// size:0x0020 (0x02F0 - 0x0310)
class UDH_PushToTalkWidget : public UDH_VOIPTalkingWidget
{
public:
	class UImage*                                      VOIPBanImage;                                             // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            VOIPBanAnimation;                                         // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	void OnWantsToTalk(class ADH_PlayerController* PlayerController, bool bWantsToTalk)//offset:0x106C250;
	void OnPlayerControllerStateChanged(class ADH_PlayerController* PlayerController)//offset:0x106BD80;
};


// Class DreadHungerUI.DH_QuestInfoWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_QuestInfoWidget : public UUserWidget
{
public:

	void OnQuestStateCurrentScoreChanged(class ADH_QuestState* InQuestState, int CurrentScore)//offset:0x106C060;
	void OnQuestStateCompletedChanged(class ADH_QuestState* InQuestState, bool bCompleted)//offset:0x106BF90;
	void OnPlayerStateQuestChanged(class ADH_PlayerState* InPlayerState, class ADH_QuestState* InQuestState)//offset:0x106BE10;
	void BP_SetText(const struct FText& Text)//offset:0x13CEB30;
	void BP_SetIcon(class UTexture2D* Icon)//offset:0x13CEB30;
	void BP_Complete()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_QuickTransferInventoryWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_QuickTransferInventoryWidget : public UUserWidget
{
public:
	float                                              InterpSpeed;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0264(0x0024) MISSED OFFSET

	void Show()//offset:0x106C940;
	void OnHidden()//offset:0x106BC50;
	void Init(class UDH_InventorySlotWidget* InSourceSlot, class UDH_InventorySlotWidget* InTargetSlot)//offset:0x106B8E0;
	void Hide()//offset:0x106B830;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnSetIcon(class UTexture2D* IconTexture, const struct FLinearColor& IconColor)//offset:0x13CEB30;
	void BP_OnHide()//offset:0x788E70;
};


// Class DreadHungerUI.DH_RadialCanvas
// size:0x0018 (0x0120 - 0x0138)
class UDH_RadialCanvas : public UPanelWidget
{
public:
	float                                              Alignment;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationOffset;                                           // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	void SetRotationOffset(float InRotationOffset)//offset:0x106C7D0;
	void SetAlignment(float InAlignment)//offset:0x106C410;
	float GetRotationOffset()//offset:0x106B600;
	float GetAlignment()//offset:0x106B310;
	class UDH_RadialCanvasPanelSlot* AddChildToCanvas(class UWidget* Content)//offset:0x106AF90;
};


// Class DreadHungerUI.DH_RadialCanvasPanelSlot
// size:0x0008 (0x0038 - 0x0040)
class UDH_RadialCanvasPanelSlot : public UPanelSlot
{
public:
};


// Class DreadHungerUI.DH_RadialMenuOptionBaseWidget
// size:0x0040 (0x0260 - 0x02A0)
class UDH_RadialMenuOptionBaseWidget : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnCommittedAnimationFinishedDelegate;                     // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              AlignmentOffset;                                          // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedColorName;                                        // 0x0274(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DeselectedColorName;                                      // 0x027C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0284(0x001C) MISSED OFFSET

	void Show()//offset:0x106C960;
	void SetSelected(bool bInSelected, bool bUpdate)//offset:0x106C850;
	void SetPosition(const struct FDH_RadialOptionPosition& Position)//offset:0x106C730;
	void SetHintText(const struct FText& InHintText)//offset:0x106C5B0;
	void OnHintCanvasPanelHidden()//offset:0x106BC90;
	void OnCommittedAnimationFinishedSignature__DelegateSignature()//offset:0x13CEB30;
	void Hide(bool bCommitting)//offset:0x106B850;
	bool GetSelected()//offset:0x106B760;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnSetHintText(const struct FText& InHintText)//offset:0x13CEB30;
	class UWidgetAnimation* BP_OnGetShowHintAnimation()//offset:0x106B180;
	class UWidgetAnimation* BP_OnGetShowAnimation()//offset:0x106B150;
	class UBorder* BP_OnGetIconBorder()//offset:0x106B0F0;
	class UWidget* BP_OnGetHintContainer()//offset:0x106B0C0;
	class UBorder* BP_OnGetHintBorder()//offset:0x106B090;
	class UWidgetAnimation* BP_OnGetCommittedAnimation()//offset:0x106B060;
};


// Class DreadHungerUI.DH_RadialMenuEmoteOptionWidget
// size:0x0090 (0x02A0 - 0x0330)
class UDH_RadialMenuEmoteOptionWidget : public UDH_RadialMenuOptionBaseWidget
{
public:
	class UMaterialInterface*                          IconBorderMIDParent;                                      // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HintBorderMIDParent;                                      // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDesignTimeSelected;                                      // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimePlaytester;                                    // 0x02B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeEarlyAccessPlayer;                             // 0x02B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02B3(0x0005) MISSED OFFSET
	class UDH_LobbyEmote*                              DesignTimeLobbyEmote;                                     // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     IconBorder;                                               // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     HintBorder;                                               // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                HintCanvasPanel;                                          // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         LabelTextBlock;                                           // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         SubLabelTextBlock;                                        // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowAnimation;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ShowHintAnimation;                                        // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            CommittedAnimation;                                       // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) MISSED OFFSET
	class UMaterialInstanceDynamic*                    IconBorderMID;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HintBorderMID;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	void SetLobbyEmote(class UDH_LobbyEmote* InLobbyEmote)//offset:0x106C6A0;
	void OnCommittedAnimFinished()//offset:0x10434D0;
};


// Class DreadHungerUI.DH_RadialMenuEmotesWidget
// size:0x0020 (0x03A0 - 0x03C0)
class UDH_RadialMenuEmotesWidget : public UDH_ActionMappingRadialMenuWidget
{
public:
	TArray<class UDH_LobbyEmote*>                      Emotes;                                                   // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_LobbyEmote*>                      EmotesToUse;                                              // 0x03B0(0x0010) (ZeroConstructor, Transient)

	void OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)//offset:0x106BBA0;
};


// Class DreadHungerUI.DH_RadialMenuSongOptionWidget
// size:0x0000 (0x02A0 - 0x02A0)
class UDH_RadialMenuSongOptionWidget : public UDH_RadialMenuOptionBaseWidget
{
public:

	void SetSong(class UDH_PhonographSong* InSong)//offset:0x1071B40;
	void BP_OnSetIcon()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RadialMenuSongsWidget
// size:0x0010 (0x0378 - 0x0388)
class UDH_RadialMenuSongsWidget : public UDH_RadialMenuBaseWidget
{
public:
	TArray<class UDH_PhonographSong*>                  Songs;                                                    // 0x0378(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void OnSongSelection(class ADH_Phonograph* InPhonograph)//offset:0x1071760;
	void OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)//offset:0x1070F20;
};


// Class DreadHungerUI.DH_RadialMenuSpellsWidget
// size:0x0010 (0x0378 - 0x0388)
class UDH_RadialMenuSpellsWidget : public UDH_RadialMenuBaseWidget
{
public:

	void OnSpellSelection(class ADH_PlayerController* InPlayerController)//offset:0x10717F0;
	void OnHumanCharacterDied(class ADH_HumanCharacter* DeadCharacter)//offset:0x10710D0;
	void OnEquippedSpellsChanged(class ADH_SpellManager* InSpellManager)//offset:0x1071040;
	void OnControlledHumanChanged(class ADH_PlayerController* InPlayerController)//offset:0x1070FB0;
};


// Class DreadHungerUI.DH_RateOfChangeArrowWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_RateOfChangeArrowWidget : public UUserWidget
{
public:
	int                                                Index;                                                    // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpAngle;                                                  // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownAngle;                                                // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDVectorParamName;                                       // 0x026C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET

	void SetDirection(EDH_RateOfChangeArrowDirection Direction)//offset:0x10719C0;
	class UMaterialInstanceDynamic* BP_GetMID()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RateOfChangeWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_RateOfChangeWidget : public UUserWidget
{
public:
	float                                              MaxRate;                                                  // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MidPointScale;                                            // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	void SetRate(float NewRate)//offset:0x1071AC0;
	void SetMaxRate(float NewMaxRate)//offset:0x1071A40;
	class UDH_WidgetAnimationHandler* CreateAnimationHandler()//offset:0x13CEB30;
	void BP_OnSetArrowsVisible(int VisibleArrowsFlags)//offset:0x13CEB30;
	void BP_OnSetArrowDirection(EDH_RateOfChangeArrowDirection Direction)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RecipeIngredientWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_RecipeIngredientWidget : public UUserWidget
{
public:
	class UDH_InventoryTooltipWidget*                  ToolTipClass;                                             // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_InventoryTooltipWidget*                  InventoryTooltipWidget;                                   // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0270(0x0018) MISSED OFFSET

	class UDH_InventoryTooltipWidget* GetTooltipWidget()//offset:0x1070E70;
	void BP_OnInit(EInventoryType Type, bool bIncludeCurrent, int Quantity, int Current, class UTexture2D* Icon, bool bMatchIconSizes, bool bShowQuantity, const struct FText& Title, const struct FText& Description)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ReconnectOverlayWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_ReconnectOverlayWidget : public UDH_OverlayWidget
{
public:

	void Reconnect()//offset:0x1071910;
	void Abandon()//offset:0x1070DA0;
};


// Class DreadHungerUI.DH_RegionSelectButtonWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_RegionSelectButtonWidget : public UUserWidget
{
public:
	bool                                               bSelected;                                                // 0x0260(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET

	void SetAsSelectedRegion()//offset:0x806320;
	bool GetSelected()//offset:0x1070E50;
	void BP_OnSelectedChanged()//offset:0x13CEB30;
	void BP_OnRegionChanged(const struct FText& ShortName, const struct FText& LongName)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RegionSelectWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_RegionSelectWidget : public UUserWidget
{
public:
	TArray<class UDH_RegionSelectButtonWidget*>        RegionButtons;                                            // 0x0260(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UDH_RegionSelectButtonWidget*                ButtonClass;                                              // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void BP_OnRegionButtonsEmptied()//offset:0x13CEB30;
	void BP_OnRegionButtonCreated(class UDH_RegionSelectButtonWidget* CreatedButton)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ReplayBrowserWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_ReplayBrowserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UDH_ReplayItemWidget*                        ReplayWidgetClass;                                        // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_ReplayItemWidget*>                ReplayWidgets;                                            // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient)

	void Show()//offset:0x1071BD0;
	void Hide()//offset:0x1070ED0;
	bool HasAnyValidReplays()//offset:0x1070EA0;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnReplayWidgetCreated(class UDH_ReplayItemWidget* NewWidget)//offset:0x13CEB30;
	void BP_OnHide()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ReplayItemWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_ReplayItemWidget : public UUserWidget
{
public:
	class UDH_MatchReplay*                             AssociatedReplay;                                         // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      AssociatedReplayFilePath;                                 // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   AssociatedReplayTimeStamp;                                // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	bool Load()//offset:0x1070EF0;
	void BP_OnInitialized()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RespawnTimerWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_RespawnTimerWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void Show()//offset:0x1048760;
	void OnWidgetAnimationHandlerFinishedHide(class UDH_WidgetAnimationHandler* InAnimationHandler)//offset:0x1071880;
	void Hide()//offset:0x1047D70;
	void BP_OnSetHidden()//offset:0x13CEB30;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ReviveTimeWidget
// size:0x0018 (0x02E0 - 0x02F8)
class UDH_ReviveTimeWidget : public UDH_VisibilityWidget
{
public:
	class UDH_TextBlockWidget*                         Label;                                                    // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E8(0x0010) MISSED OFFSET

	void UpdateTimer()//offset:0x1071C10;
	void OnRestingChanged(class ADH_HumanCharacter* InCharacter)//offset:0x1071550;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* InPlayerController)//offset:0x10711F0;
};


// Class DreadHungerUI.DH_RoleAvatarWidget
// size:0x0008 (0x02C8 - 0x02D0)
class UDH_RoleAvatarWidget : public UDH_PreviewAvatarWidget
{
public:

	void OnShowRoleCustomization(bool bShow)//offset:0x1071640;
	void OnRoleSelectionWidgetShown()//offset:0x1071600;
	void OnRoleSelectionWidgetHidden()//offset:0x10715E0;
	class UUserWidget* GetAvatarSceneImageParentWidget()//offset:0x1070DC0;
};


// Class DreadHungerUI.DH_RoleSelectionButtonWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_RoleSelectionButtonWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	class USoundBase*                                  ViewClickedSound;                                         // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MouseEnterSound;                                          // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_RoleSelectionButtonViewWidget*           View;                                                     // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnViewClicked()//offset:0x788E70;
};


// Class DreadHungerUI.DH_RoleCustomizationButtonWidget
// size:0x0008 (0x0288 - 0x0290)
class UDH_RoleCustomizationButtonWidget : public UDH_RoleSelectionButtonWidget
{
public:
	class UDH_GenericTooltipWidget*                    TooltipWidgetClass;                                       // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	class UWidget* GetCustomizationButtonTooltipWidget()//offset:0x1070DE0;
};


// Class DreadHungerUI.DH_RoleCustomizationWidget
// size:0x0010 (0x03A0 - 0x03B0)
class UDH_RoleCustomizationWidget : public UDH_CosmeticItemListWidget
{
public:

	void OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)//offset:0x1071280;
};


// Class DreadHungerUI.DH_RoleDetailsEquipmentWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_RoleDetailsEquipmentWidget : public UUserWidget
{
public:
	class UDH_RecipeIngredientWidget*                  ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultNumberOfItems;                                     // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	TArray<class UDH_RecipeIngredientWidget*>          Items;                                                    // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)//offset:0x1071310;
	void BP_OnItemsEmptied()//offset:0x13CEB30;
	void BP_OnItemCreated(class UDH_RecipeIngredientWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RoleDetailsWidget
// size:0x0068 (0x0260 - 0x02C8)
class UDH_RoleDetailsWidget : public UUserWidget
{
public:
	float                                              AvatarScaleBoxMinSize;                                    // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvatarScaleBoxMaxSize;                                    // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvatarScaleInterpSpeed;                                   // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class UDH_RoleDetailsEquipmentWidget*              Equipment;                                                // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RolePerksWidget*                         RolePerks;                                                // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RoleRankLabel;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RoleNameLabel;                                            // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleExperienceBarWidget*                 ExperienceBar;                                            // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScaleBox*                                   AvatarScaleBox;                                           // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleAvatarWidget*                        RoleAvatar;                                               // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowCustomizationAnimation;                               // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET

	void OnShowRoleCustomization(bool bShow)//offset:0x10716D0;
	void OnShowCustomizationAnimationFinished()//offset:0x1071620;
	void OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)//offset:0x10713A0;
};


// Class DreadHungerUI.DH_RoleExperienceBarWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_RoleExperienceBarWidget : public UUserWidget
{
public:
	class UProgressBar*                                ExperienceBar;                                            // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_RolePerkItemWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_RolePerkItemWidget : public UUserWidget
{
public:

	class UDH_RolePerkData* GetPerkData()//offset:0x1070E10;
	void BP_OnDescriptionSet(const struct FText& Description)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RolePerksWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_RolePerksWidget : public UUserWidget
{
public:
	class UDH_RolePerkItemWidget*                      ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultNumberOfItems;                                     // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	TArray<class UDH_RolePerkItemWidget*>              Items;                                                    // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)//offset:0x1071430;
	void BP_OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)//offset:0x13CEB30;
	void BP_OnItemsEmptied()//offset:0x13CEB30;
	void BP_OnItemCreated(class UDH_RolePerkItemWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_RolePrestigeButtonWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_RolePrestigeButtonWidget : public UUserWidget
{
public:
	class UDH_ButtonWidget*                            Button;                                                   // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	void OnPreviewRole(class UDH_PlayerRoleData* InPreviewRole)//offset:0x10714C0;
	void OnInternalButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1071160;
};


// Class DreadHungerUI.DH_RoleSelectionBackButtonWidget
// size:0x0000 (0x0290 - 0x0290)
class UDH_RoleSelectionBackButtonWidget : public UDH_RoleCustomizationButtonWidget
{
public:
};


// Class DreadHungerUI.DH_RoleSelectionButtonViewWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_RoleSelectionButtonViewWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	struct FVector2D                                   UnavailableOverlaySize;                                   // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UnavailableImage;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     BaseButton;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void RoleSelectionButtonViewWidgetSignature__DelegateSignature()//offset:0x13CEB30;
	void OnBaseButtonClicked()//offset:0x10434D0;
};


// Class DreadHungerUI.DH_RoleSelectionConfirmationButton
// size:0x0008 (0x0288 - 0x0290)
class UDH_RoleSelectionConfirmationButton : public UDH_RoleSelectionButtonWidget
{
public:

	void SetDesiredRole(class UDH_PlayerRoleData* InDesiredRole)//offset:0x1071930;
};


// Class DreadHungerUI.DH_RoleSelectionOptionWidget
// size:0x0020 (0x0288 - 0x02A8)
class UDH_RoleSelectionOptionWidget : public UDH_RoleSelectionButtonWidget
{
public:
	class UImage*                                      SelectedImage;                                            // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PrestigeImage;                                            // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET
};


// Class DreadHungerUI.DH_RoleSelectionWidget
// size:0x00A8 (0x02E0 - 0x0388)
class UDH_RoleSelectionWidget : public UDH_VisibilityWidget
{
public:
	TArray<class UDH_PlayerRoleData*>                  DesignTimePlayerRoleList;                                 // 0x02E0(0x0010) (Edit, ZeroConstructor)
	class UDH_RoleSelectionOptionWidget*               RoleOptionClass;                                          // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	class UWidgetSwitcher*                             CustomizationSwitcher;                                    // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                RoleList;                                                 // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BackButton;                                               // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     CustomizationButton;                                      // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleDetailsWidget*                       RoleDetails;                                              // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleCustomizationWidget*                 CustomizationPanel;                                       // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_RoleSelectionConfirmationButton*         ConfirmationButton;                                       // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            FadeInAnimation;                                          // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            FadeOutAnimation;                                         // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UDH_RoleSelectionOptionWidget*>       RoleOptions;                                              // 0x0348(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UDH_PlayerRoleData*                          FirstAvailableRole;                                       // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDH_PlayerRoleData*                          DesiredRole;                                              // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0368(0x0020) MISSED OFFSET

	void SetDesiredRole(class UDH_PlayerRoleData* InDesiredRole)//offset:0x10757C0;
	void PopulateRoles()//offset:0x1075660;
	void OnShowRoleCustomization(bool bShow)//offset:0x1075120;
	void OnPlayerRoleChanged(class ADH_PlayerState* ChangedPlayer)//offset:0x1074D40;
	void OnFadeOutAnimationFinished()//offset:0x1074D00;
	void OnAvatarCreated(class ADH_PlayerController* PlayerController, class ADH_CosmeticPreviewAvatar* Avatar)//offset:0x1074B40;
	void ChooseRoleSelection()//offset:0x1074B00;
};


// Class DreadHungerUI.DH_SanityAttributeWidget
// size:0x0000 (0x0270 - 0x0270)
class UDH_SanityAttributeWidget : public UDH_HumanAttributeWidget
{
public:

	void OnSanityIncreasingChanged(class ADH_HumanCharacter* HumanCharacter)//offset:0x1074DD0;
	void OnControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x1074C50;
};


// Class DreadHungerUI.DH_SaveConversionPopupWidget
// size:0x0020 (0x02F8 - 0x0318)
class UDH_SaveConversionPopupWidget : public UDH_OverlayWidget
{
public:
	class USoundBase*                                  OnShowSound;                                              // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnAcceptSound;                                            // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnDeclineSound;                                           // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	void ShowSaveConversionPopup()//offset:0x1075BF0;
};


// Class DreadHungerUI.DH_ScoreboardGameReportWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_ScoreboardGameReportWidget : public UUserWidget
{
public:
	class USoundBase*                                  AllPlayersSelectedSound;                                  // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AllPlayersDeselectedSound;                                // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URichTextBlock*                              OutcomeLabel;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     SelectAllPlayersButton;                                   // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ScoreboardPlayerListWidget*              PlayerList;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)//offset:0x10751B0;
	void OnSelectAllPlayersButtonClicked()//offset:0x1074E80;
	void BP_OnSetExpeditionDates(const struct FDateTime& StartDate, const struct FDateTime& EndDate)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ScoreboardPlayerListItemTooltipWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_ScoreboardPlayerListItemTooltipWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         TitleTextBlock;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_ScoreboardPlayerListItemViewWidget
// size:0x0090 (0x0260 - 0x02F0)
class UDH_ScoreboardPlayerListItemViewWidget : public UUserWidget
{
public:
	float                                              WidgetScale;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultImageSize;                                         // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultPadding;                                           // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             DeathMarkerTextures;                                      // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     UnknownPlayerImage;                                       // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          BorderMasks;                                              // 0x0288(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          BorderMIDParent;                                          // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DesignTimePrestigeLevel;                                  // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DesignTimePlayerImageTint;                                // 0x02A4(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeThrall;                                        // 0x02B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeSelected;                                      // 0x02B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeDead;                                          // 0x02B6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02B7(0x0001) MISSED OFFSET
	class UObject*                                     DesignTimePlayerImageTexture;                             // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DeathMarker;                                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PlayerImage;                                              // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      SelectedImage;                                            // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PlayerBorder;                                             // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BorderMID;                                                // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	void SetSelected(bool bSelected)//offset:0x1075A00;
	void SetPlayerImageTint(const struct FLinearColor& InTint)//offset:0x1075970;
	void SetDead(bool bDead)//offset:0x1075730;
};


// Class DreadHungerUI.DH_ScoreboardPlayerListItemWidget
// size:0x0050 (0x0260 - 0x02B0)
class UDH_ScoreboardPlayerListItemWidget : public UUserWidget
{
public:
	class UDH_ScoreboardPlayerListItemTooltipWidget*   ListItemTooltipClass;                                     // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReplayPlayerSelectSound;                                  // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReplayPlayerDeselectSound;                                // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ScoreboardPlayerListItemViewWidget*      View;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         PlayerLabel;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     BaseButton;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  Avatar;                                                   // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	class UDH_ScoreboardPlayerListItemTooltipWidget*   ListItemTooltip;                                          // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	void SetIsSelected(bool bNewIsSelected)//offset:0x10758E0;
	void OnBaseButtonClicked()//offset:0x1074C10;
};


// Class DreadHungerUI.DH_ScoreboardPlayerListWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_ScoreboardPlayerListWidget : public UUserWidget
{
public:
	class UDH_ScoreboardPlayerListItemWidget*          ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWrapBox*                                    PlayerList;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDH_ScoreboardPlayerListItemWidget*>  Items;                                                    // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)//offset:0x1075280;
	void BP_OnItemCreated(class UDH_ScoreboardPlayerListItemWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ScoreboardPlayerReportCardStoryDataAsset
// size:0x0150 (0x0030 - 0x0180)
class UDH_ScoreboardPlayerReportCardStoryDataAsset : public UDataAsset
{
public:
	struct FText                                       CannibalDescription;                                      // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       MurderDescription;                                        // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       KillDescription;                                          // 0x0060(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       BoilerFuelDescription;                                    // 0x0078(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<ECharacterDeathState, struct FText>           DeathStateDescriptions;                                   // 0x0090(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<EPlayerTeam, struct FText>                    TeamDescriptions;                                         // 0x00E0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<EPlayerMatchStatType, struct FText>           StatDescriptions;                                         // 0x0130(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};


// Class DreadHungerUI.DH_ScoreboardPlayerReportCardWidget
// size:0x00A8 (0x0260 - 0x0308)
class UDH_ScoreboardPlayerReportCardWidget : public UUserWidget
{
public:
	class UDH_ScoreboardPlayerStatWidget*              StatClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ScoreboardDataAsset*                     ScoreboardDataAsset;                                      // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FinalGradeSound;                                          // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_PlayerReportCardAvatarWidget*            Avatar;                                                   // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         TotalScoreLabel;                                          // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         GradeLabel;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         NameLabel;                                                // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RoleLabel;                                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  DeedsList;                                                // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    DeedsListSizeBox;                                         // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    PlayerNameSizeBox;                                        // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     GradeBorder;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowFinalGradeAnimation;                                  // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UDH_ScoreboardPlayerStatWidget*>      Stats;                                                    // 0x02C8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UDH_ScoreboardPlayerStatWidget*>      StatsToShow;                                              // 0x02D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E8(0x0020) MISSED OFFSET

	void ShowDeeds()//offset:0x1075BD0;
	void OnTimelineFrameChanged()//offset:0x1075640;
	void OnSelectedIndicesChanged()//offset:0x1074EA0;
	void HideDeeds()//offset:0x1074B20;
};


// Class DreadHungerUI.DH_ScoreboardPlayerReportListWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_ScoreboardPlayerReportListWidget : public UUserWidget
{
public:
	class UDH_ScoreboardPlayerReportCardWidget*        ReportCardClass;                                          // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWrapBox*                                    ReportsList;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDH_ScoreboardPlayerReportCardWidget*> Items;                                                    // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)//offset:0x1075350;
	void OnSelectedIndicesChanged()//offset:0x1074FE0;
};


// Class DreadHungerUI.DH_ScoreboardPlayerStatWidget
// size:0x0048 (0x0260 - 0x02A8)
class UDH_ScoreboardPlayerStatWidget : public UUserWidget
{
public:
	class UDH_ScoreboardDataAsset*                     ScoreboardDataAsset;                                      // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         ValueLabel;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CountLabel;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         DescriptionLabel;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            CountUpAnimation;                                         // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            FadeInAnimation;                                          // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0290(0x0018) MISSED OFFSET

	int GetScoreTotal()//offset:0x1054ED0;
};


// Class DreadHungerUI.DH_ScoreboardTimelineWidget
// size:0x0970 (0x0260 - 0x0BD0)
class UDH_ScoreboardTimelineWidget : public UUserWidget
{
public:
	class USoundBase*                                  ScrubSound;                                               // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PlaybackSound;                                            // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ShipIcon;                                                 // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     DoppelgangerIcon;                                         // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EPlayerMatchStatType, struct FScoreEventEffect> ScoreEventEffects;                                        // 0x0280(0x0050) (Edit, DisableEditOnInstance)
	struct FScoreEventEffect                           PlayerDeathEffect;                                        // 0x02D0(0x0028) (Edit, DisableEditOnInstance)
	struct FScoreEventEffect                           DoppelDeathEffect;                                        // 0x02F8(0x0028) (Edit, DisableEditOnInstance)
	TArray<float>                                      PlaybackSpeeds;                                           // 0x0320(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FButtonStyle                                PlayStyle;                                                // 0x0330(0x0278) (Edit, DisableEditOnInstance)
	struct FButtonStyle                                PauseStyle;                                               // 0x05A8(0x0278) (Edit, DisableEditOnInstance)
	struct FButtonStyle                                ReplayStyle;                                              // 0x0820(0x0278) (Edit, DisableEditOnInstance)
	class UMaterialInterface*                          MapOverheadParent;                                        // 0x0A98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MapTint;                                                  // 0x0AA0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PlaybackSpeedChangedSound;                                // 0x0AB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PlayingStartSound;                                        // 0x0AB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PlayingStopSound;                                         // 0x0AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UButton*                                     PlayButton;                                               // 0x0AC8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     PlaybackSpeedButton;                                      // 0x0AD0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CurrentTimeLabel;                                         // 0x0AD8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         PlaybackSpeedLabel;                                       // 0x0AE0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MapOverheadImage;                                         // 0x0AE8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USlider*                                     TimelineSlider;                                           // 0x0AF0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0AF8(0x0080) MISSED OFFSET
	TMap<EPlayerTeamRole, struct FRoleIconSet>         RoleIcons;                                                // 0x0B78(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0BC8(0x0008) MISSED OFFSET

	void StopScrubbing()//offset:0x1075C30;
	void StartScrubbing()//offset:0x1075C10;
	void SetIsPlaying(bool bNewIsPlaying)//offset:0x1075850;
	void ScrollPlaybackSpeed()//offset:0x1075710;
	void OnSliderValueChanged(float Value)//offset:0x10755C0;
	void OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)//offset:0x1075420;
	void OnScoreboardHidden()//offset:0x1074E60;
	void OnPlayButtonClicked()//offset:0x1074D20;
};


// Class DreadHungerUI.DH_ScoreboardUtility
// size:0x0000 (0x0028 - 0x0028)
class UDH_ScoreboardUtility : public UObject
{
public:
};


// Class DreadHungerUI.DH_ScoreboardWidget
// size:0x0090 (0x02E0 - 0x0370)
class UDH_ScoreboardWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class USoundBase*                                  OpenMusic;                                                // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CloseSound;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CopyReplaySound;                                          // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CloseButtonWidget*                       CloseButton;                                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     CopyMatchIDButton;                                        // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ScoreboardGameReportWidget*              GameReport;                                               // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0318(0x0058) MISSED OFFSET

	void SetSelectedIndices()//offset:0x1075A90;
	void RemoveSelectedIndex(int InSelectedIndex)//offset:0x1075680;
	void OnShowScoreboard(bool bShowScoreboard, bool bReplayJustLoaded)//offset:0x10754F0;
	void OnCopyMatchIDButtonClicked()//offset:0x1074CE0;
	void OnCloseButtonWidgetClicked()//offset:0x1074C30;
	void AddSelectedIndex(int InSelectedIndex)//offset:0x1074A70;
};


// Class DreadHungerUI.DH_ServerMessageViewWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_ServerMessageViewWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void Show()//offset:0x1048760;
	void OnWidgetAnimationHandlerFinishedHide(class UDH_WidgetAnimationHandler* InAnimationHandler)//offset:0x107A930;
	void OnWidgetAnimationHandlerBeginShow(class UDH_WidgetAnimationHandler* InAnimationHandler)//offset:0x107A8A0;
	void Hide()//offset:0x1047D70;
	void BP_OnSetVisible()//offset:0x13CEB30;
	void BP_OnSetHidden()//offset:0x13CEB30;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_SettingsWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_SettingsWidget : public UUserWidget
{
public:

	void Show()//offset:0x107AA90;
	void Hide()//offset:0x1079B40;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnHide()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ShipAttributesOutOfFuelWidget
// size:0x0000 (0x02E0 - 0x02E0)
class UDH_ShipAttributesOutOfFuelWidget : public UDH_VisibilityWidget
{
public:
};


// Class DreadHungerUI.DH_ShipAttributesWidget
// size:0x0070 (0x02E0 - 0x0350)
class UDH_ShipAttributesWidget : public UDH_VisibilityWidget
{
public:
	class UTexture2D*                                  HullIntegrityTexture;                                     // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FuelTexture;                                              // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  PressureTexture;                                          // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PressureBuildSound;                                       // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PressureReleaseSound;                                     // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_AttributeViewWidget*                     HullIntegrity;                                            // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_AttributeViewWidget*                     Fuel;                                                     // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_AttributeViewWidget*                     Pressure;                                                 // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ShipAttributesOutOfFuelWidget*           OutOfFuel;                                                // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET

	void OnControlledShipChanged(class ADH_HumanCharacter* ShipController)//offset:0x1079D10;
};


// Class DreadHungerUI.DH_ShipAvatarWidget
// size:0x0008 (0x02C8 - 0x02D0)
class UDH_ShipAvatarWidget : public UDH_PreviewAvatarWidget
{
public:
	class UWidgetAnimation*                            RegionTransitionAnimation;                                // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void OnShipCustomizationRegionChanged(EShipCustomizationRegion InRegion)//offset:0x107A2D0;
};


// Class DreadHungerUI.DH_ShipCosmeticsListWidget
// size:0x0050 (0x03A0 - 0x03F0)
class UDH_ShipCosmeticsListWidget : public UDH_CosmeticItemListWidget
{
public:
	TMap<EShipCosmeticType, struct FText>              SectionHeaders;                                           // 0x03A0(0x0050) (Edit, DisableEditOnInstance)
};


// Class DreadHungerUI.DH_ShipCosmeticsShopWidget
// size:0x0088 (0x0448 - 0x04D0)
class UDH_ShipCosmeticsShopWidget : public UDH_EntitlementsShopWidget
{
public:
	TMap<EShipCustomizationRegion, struct FShipCustomizationRegion> CustomizationRegions;                                     // 0x0448(0x0050) (Edit, DisableEditOnInstance)
	class UButton*                                     RemoveAllCosmeticsButton;                                 // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              RegionsList;                                              // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         ShipTitleLabel;                                           // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ShipRegionButtonWidget*                  RegionButtonWidgetClass;                                  // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x04B8(0x0018) MISSED OFFSET

	void RemoveAllEquippedCosmetics()//offset:0x107A9C0;
	void OnRegionSelected(unsigned char RegionIndex)//offset:0x107A250;
	void ConfirmShipCosmetics()//offset:0x1079A80;
};


// Class DreadHungerUI.DH_ShipIncidentWidget
// size:0x0020 (0x02E0 - 0x0300)
class UDH_ShipIncidentWidget : public UDH_VisibilityWidget
{
public:
	class UObject*                                     DesignTimeIconTexture;                                    // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesignTimeFillPercent;                                    // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UDH_ShipIncidentViewWidget*                  View;                                                     // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_ShipIncidentPowderkegWidget
// size:0x0010 (0x0300 - 0x0310)
class UDH_ShipIncidentPowderkegWidget : public UDH_ShipIncidentWidget
{
public:
	class ADH_InventoryPickup*                         Powderkeg;                                                // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_ShipIncidentViewWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_ShipIncidentViewWidget : public UUserWidget
{
public:
	class UImage*                                      IconImage;                                                // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CircularFillWidget*                      ProgressBar;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    BaseSizeBox;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_ShipObstructionWidget
// size:0x0050 (0x0260 - 0x02B0)
class UDH_ShipObstructionWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	class UMaterialInterface*                          ObstructionIconM;                                         // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      ObstructionImage;                                         // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            DamagedAnimation;                                         // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            DestroyedAnimation;                                       // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ObstructionIconMID;                                       // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0298(0x0018) MISSED OFFSET

	void Reset()//offset:0x107A9E0;
	void OnObstructionDamageTimeUpdatedSignature__DelegateSignature(class UDH_ShipObstructionWidget* ShipObstructionWidget, float Time)//offset:0x13CEB30;
	void OnHealthChanged(class ADH_DestructibleActor* InObstruction)//offset:0x1079E30;
	void OnGameStateDistanceFromStartToEndChanged(class ADH_GameStateBase* GameState)//offset:0x1079DA0;
};


// Class DreadHungerUI.DH_ShipProgressWidget
// size:0x0058 (0x0260 - 0x02B8)
class UDH_ShipProgressWidget : public UUserWidget
{
public:
	float                                              FadeInInterpSpeed;                                        // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutInterpSpeed;                                       // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ShipObstructionWidget*                   ShipObstructionWidgetClass;                               // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      WavesImage;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    BaseOverlay;                                              // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ShipStatusWidget*                        ShipStatusWidget;                                         // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                ProgressCanvas;                                           // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0290(0x0028) MISSED OFFSET

	void UpdateVisibility(float InDeltaTime)//offset:0x107AB30;
	void OnWarshipChanged(class ADH_Warship* InWarship)//offset:0x107A740;
	void OnShipObstructionsChanged(class ADH_GameStateBase* InGameState)//offset:0x107A350;
	void OnObstructionDamageTimeUpdated(class UDH_ShipObstructionWidget* ShipObstructionWidget, float InTime)//offset:0x1079EC0;
};


// Class DreadHungerUI.DH_ShipRegionButtonWidget
// size:0x0000 (0x02B8 - 0x02B8)
class UDH_ShipRegionButtonWidget : public UDH_CosmeticFilterButton
{
public:
};


// Class DreadHungerUI.DH_ShipStatusWidget
// size:0x00A0 (0x0260 - 0x0300)
class UDH_ShipStatusWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	TArray<float>                                      DesignTimePowderkegs;                                     // 0x0268(0x0010) (Edit, ZeroConstructor)
	bool                                               bDesignTimeEnabledSabotageUI;                             // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UMaterialInterface*                          ShipStatusM;                                              // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     BoilerSabotageIconTexture;                                // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     PowderkegSabotageIconTexture;                             // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ShipIncidentPowderkegWidget*             PowderkegSabotageClass;                                   // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowderkegSabotageSize;                                    // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowderkegSabotageSpacing;                                 // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      ShipImage;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            DamagedAnimation;                                         // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ShipStatusMID;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDH_ShipIncidentWidget*                      BoilerSabotage;                                           // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         GunpowderUnits;                                           // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                PowderkegSabotagesContainer;                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            GunpowderAddedAnimation;                                  // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADH_WarshipBoiler*                           ShipsBoiler;                                              // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	TArray<class UDH_ShipIncidentPowderkegWidget*>     PowderkegSabotages;                                       // 0x02F0(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnWarshipHullIntegrityChanged(class ADH_Warship* InWarship, float Delta)//offset:0x107A7D0;
	void OnPowderkegFuseUpdate(class ADH_InventoryPickup* Powderkeg, float DetonationTime)//offset:0x107A160;
	void OnPlayerThrallChanged(class ADH_PlayerState* ChangedPlayer)//offset:0x107A040;
	void OnPlayerControllerPlayerStateChanged(class ADH_PlayerController* PlayerController)//offset:0x107A040;
	void OnBoilerGunpowderChanged(int Amount)//offset:0x1079C80;
	void OnBoilerChanged(class ADH_WarshipBoiler* Boiler)//offset:0x1079BF0;
};


// Class DreadHungerUI.DH_SpellConnectionWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_SpellConnectionWidget : public UUserWidget
{
public:
};


// Class DreadHungerUI.DH_SpellDraggedWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_SpellDraggedWidget : public UUserWidget
{
public:
	class UDH_TotemSpell*                              DesignTimeSpell;                                          // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_SpellViewWidget*                         View;                                                     // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_SpellListWidget
// size:0x0060 (0x0260 - 0x02C0)
class UDH_SpellListWidget : public UUserWidget
{
public:
	class UDH_RadialCanvas*                            SpellList;                                                // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_SpellWidget*                             SpellWidgetClass;                                         // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_TotemSpell*>                      DesignTimeSpells;                                         // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0280(0x0040) MISSED OFFSET
};


// Class DreadHungerUI.DH_SpellSlotWidget
// size:0x0088 (0x0260 - 0x02E8)
class UDH_SpellSlotWidget : public UUserWidget
{
public:
	int                                                SlotIndex;                                                // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UDH_InventoryTooltipWidget*                  ToolTipClass;                                             // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_SpellDraggedWidget*                      DraggedWidgetClass;                                       // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_SpellViewWidget*                         SlottedSpell;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryTooltipWidget*                  SpellTooltipWidget;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowHighlightAnimation;                                   // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USoundBase*                                  SpellSwapSound;                                           // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DragHoverTint;                                            // 0x0298(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DragHighlightTint;                                        // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      HighlightEffect;                                          // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x02C0(0x0028) MISSED OFFSET

	void OnSpellDragEnd(class UDH_TotemSpell* Spell)//offset:0x107A500;
	void OnSpellDragBegin(class UDH_TotemSpell* Spell)//offset:0x107A470;
	void OnCurrentDragDropOperationDrop(class UDragDropOperation* Operation)//offset:0xF39610;
	void OnCurrentDragDropOperationCancelled(class UDragDropOperation* Operation)//offset:0xF39610;
	class UDH_InventoryTooltipWidget* GetTooltipWidget()//offset:0x1079AE0;
};


// Class DreadHungerUI.DH_SpellTooltipWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_SpellTooltipWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         SpellNameLabel;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              RankRequirementsLabel;                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      RankRequirementsIcon;                                     // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                RankRequirementsBox;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_SpellViewWidget
// size:0x0098 (0x0260 - 0x02F8)
class UDH_SpellViewWidget : public UUserWidget
{
public:
	bool                                               bDesignTimeSelected;                                      // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeHovered;                                       // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class UDH_TotemSpell*                              DesignTimeAssociatedSpell;                                // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    DebugTextBlockClass;                                      // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedColorName;                                        // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UnselectedColorName;                                      // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HoverColorColorName;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             BorderTextures;                                           // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             FillTextures;                                             // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     UnknownTexture;                                           // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      BorderImage;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      FillImage;                                                // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    BaseSizeBox;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    BaseOverlay;                                              // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	class UDH_TextBlockDebugWidget*                    Label;                                                    // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_SpellWidget
// size:0x0088 (0x0260 - 0x02E8)
class UDH_SpellWidget : public UUserWidget
{
public:
	class UDH_SpellTooltipWidget*                      ToolTipClass;                                             // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_SpellDraggedWidget*                      DraggedWidgetClass;                                       // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      LockedImage;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_SpellViewWidget*                         View;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_SpellTooltipWidget*                      SpellTooltipWidget;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0288(0x0060) MISSED OFFSET

	void Update()//offset:0x107AB10;
	void Toggle()//offset:0x107AAF0;
	void Select(bool bDragged)//offset:0x107AA00;
	void OnSpellSelected(class UDH_TotemSpell* InSpell)//offset:0x107A590;
	void OnSpellDeSelected(class UDH_TotemSpell* InSpell)//offset:0x107A3E0;
	class UDH_SpellTooltipWidget* GetTooltipWidget()//offset:0x1079B10;
	void Deselect()//offset:0x1079AA0;
	void BP_OnSelected()//offset:0x13CEB30;
	void BP_OnDeselected()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_SpiedActorInfoWidget
// size:0x0010 (0x02E0 - 0x02F0)
class UDH_SpiedActorInfoWidget : public UDH_VisibilityWidget
{
public:
	class UDH_TextBlockWidget*                         ActorLabel;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         StatusLabel;                                              // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnSpyingChanged(bool bInSpying)//offset:0x105F630;
	void OnSpiedTargetChanged(class AActor* InSpiedActor)//offset:0x107A620;
};


// Class DreadHungerUI.DH_SpiritWalkTimerWidget
// size:0x0020 (0x0260 - 0x0280)
class UDH_SpiritWalkTimerWidget : public UUserWidget
{
public:
	class UDH_TotemSpell*                              SpiritWalkClass;                                          // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	void OnSpiritWalkingChanged(class ADH_HumanCharacter* HumanCharacter)//offset:0x107A6B0;
	void OnPlayerDeadChanged(class ADH_PlayerState* PlayerState)//offset:0x107A0D0;
	void OnPlayerControllerPlayerStateChanged(class ADH_PlayerController* PlayerController)//offset:0x1079FB0;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x1079FB0;
	void OnActiveSpellsChanged(class ADH_SpellManager* SpellManager)//offset:0x1079B60;
	class UDH_WidgetAnimationHandler* CreateAnimationHandler()//offset:0x13CEB30;
	void BP_SetTimeRemaining(float CurrentTimeRemaining)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_StartingGameWidget
// size:0x0008 (0x02F8 - 0x0300)
class UDH_StartingGameWidget : public UDH_OverlayWidget
{
public:

	void ShowAbortButton()//offset:0x107AAB0;
	void OnOnlineSessionUpdateComplete()//offset:0x1079F90;
	void Abort()//offset:0x1079A60;
};


// Class DreadHungerUI.DH_StepIndicatorWidget
// size:0x00B0 (0x0260 - 0x0310)
class UDH_StepIndicatorWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	ECheckBoxState                                     CheckState;                                               // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartProgressOnPreconstruct;                             // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
	float                                              ProgressInterval;                                         // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // 0x0278(0x0028) (Edit)
	TMap<ECheckBoxState, class UObject*>               BackgroundTextures;                                       // 0x0290(0x0050) (Edit, DisableEditOnInstance)
	class UDH_CircularFillWidget*                      CircularFill;                                             // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Background;                                               // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x02F8(0x0018) MISSED OFFSET

	void StartProgress()//offset:0x107AAD0;
	void OnStepIndicatorWidgetProgressFinishedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnProgressFinished()//offset:0x107A230;
	void DesignTimeTick()//offset:0x1079AC0;
};


// Class DreadHungerUI.DH_TalismanDraggedWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_TalismanDraggedWidget : public UUserWidget
{
public:
	class UDH_PlayerTalisman*                          DesignTimeTalisman;                                       // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_TalismanViewWidget*                      View;                                                     // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_TalismanSlotWidget
// size:0x0048 (0x0260 - 0x02A8)
class UDH_TalismanSlotWidget : public UUserWidget
{
public:
	class UDH_InventoryTooltipWidget*                  ToolTipClass;                                             // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TalismanDraggedWidget*                   DraggedWidgetClass;                                       // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TalismanViewWidget*                      SlottedTalisman;                                          // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryTooltipWidget*                  TalismanTooltipWidget;                                    // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0280(0x0028) MISSED OFFSET

	void OnCurrentDragDropOperationDrop(class UDragDropOperation* Operation)//offset:0xF39610;
	void OnCurrentDragDropOperationCancelled(class UDragDropOperation* Operation)//offset:0xF39610;
	class UDH_InventoryTooltipWidget* GetTooltipWidget()//offset:0x107DD70;
};


// Class DreadHungerUI.DH_TalismanViewWidget
// size:0x0098 (0x0260 - 0x02F8)
class UDH_TalismanViewWidget : public UUserWidget
{
public:
	bool                                               bDesignTimeSelected;                                      // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDesignTimeHovered;                                       // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class UDH_PlayerTalisman*                          DesignTimeAssociatedTalisman;                             // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_TextBlockDebugWidget*                    DebugTextBlockClass;                                      // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedColorName;                                        // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UnselectedColorName;                                      // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HoverColorColorName;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             BorderTextures;                                           // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             FillTextures;                                             // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     UnknownTexture;                                           // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      BorderImage;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      FillImage;                                                // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBox*                                    BaseSizeBox;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    BaseOverlay;                                              // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	class UDH_TextBlockDebugWidget*                    Label;                                                    // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};


// Class DreadHungerUI.DH_TalismanWidget
// size:0x0050 (0x0260 - 0x02B0)
class UDH_TalismanWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UDH_InventoryTooltipWidget*                  ToolTipClass;                                             // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TalismanDraggedWidget*                   DraggedWidgetClass;                                       // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TalismanViewWidget*                      View;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryTooltipWidget*                  TalismanTooltipWidget;                                    // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0288(0x0028) MISSED OFFSET

	void Update()//offset:0x107EF40;
	void Toggle()//offset:0x107EF20;
	void Select(bool bDragged)//offset:0x107EAD0;
	class UDH_InventoryTooltipWidget* GetTooltipWidget()//offset:0x107DDA0;
	void Deselect()//offset:0x107DB90;
	void BP_OnSelected()//offset:0x13CEB30;
	void BP_OnDeselected()//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_TextBlockDebugWidget
// size:0x0028 (0x0260 - 0x0288)
class UDH_TextBlockDebugWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         Title;                                                    // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Value;                                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0270(0x0018) MISSED OFFSET
};


// Class DreadHungerUI.DH_TextBlockWidget
// size:0x00A8 (0x0260 - 0x0308)
class UDH_TextBlockWidget : public UUserWidget
{
public:
	struct FText                                       Text;                                                     // 0x0260(0x0028) (Edit)
	struct FName                                       TextColorNameOverride;                                    // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDH_FontSizes                                      FontSize;                                                 // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	struct FName                                       OutlineColorNameOverride;                                 // 0x0284(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutlineColorAlphaOverride;                                // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDH_TextOutlineType                                OutlineType;                                              // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	struct FName                                       FontStyle;                                                // 0x0294(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CustomFontSize;                                           // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrap;                                                // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x02A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	TMap<class UObject*, float>                        FontScales;                                               // 0x02A8(0x0050) (Edit, DisableEditOnInstance)
	class UDataTable*                                  Styles;                                                   // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextBlock*                                  Label;                                                    // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetTextColorNameOverride(const struct FName& InTextColorNameOverride)//offset:0x107EE70;
	void SetText(const struct FText& InText)//offset:0x107ED90;
};


// Class DreadHungerUI.DH_ThrallBadgeTierWidget
// size:0x0088 (0x0260 - 0x02E8)
class UDH_ThrallBadgeTierWidget : public UUserWidget
{
public:
	ETotemSpellTiers                                   DesignTimeTier;                                           // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   DesignTimeChargeTier;                                     // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class ADH_PlayerState*                             PlayerStateClass;                                         // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MIDParentMaterial;                                        // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ETotemSpellTiers, class USoundBase*>          TierPopSounds;                                            // 0x0278(0x0050) (Edit, DisableEditOnInstance)
	class UImage*                                      IconImage;                                                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PopAnimation;                                             // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
};


// Class DreadHungerUI.DH_ThrallBadgeWidget
// size:0x0098 (0x02E0 - 0x0378)
class UDH_ThrallBadgeWidget : public UDH_VisibilityWidget
{
public:
	float                                              DesignTimeChargeLevel;                                    // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class ADH_PlayerState*                             DesignTimePlayerStateClass;                               // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ThrallBadgeTierWidget*                   TierClass;                                                // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LevelUpSound;                                             // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ThrallSpellRadialOptionWidget*           SelectedSpellRadialOption;                                // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CircularFillWidget*                      SpellChargeLevel;                                         // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         TotemCountLabel;                                          // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    TierInstancesOverlay;                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_KeybindHintWidget*                       ThrallVisionKeybind;                                      // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_KeybindHintWidget*                       BoneDaggerKeybind;                                        // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ActivateThrallVisionFailureAnimation;                     // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            PulseIconAnimation;                                       // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            LevelUpAnimation;                                         // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0350(0x0028) MISSED OFFSET

	void SetSelectedSpell(class UDH_TotemSpell* InSpellClass)//offset:0x107EC70;
	void OnUsingThrallVisionChanged(bool bUsingThrallVision)//offset:0x107EA40;
	void OnTotemCountChanged(class ADH_GameState* GameState)//offset:0x107E990;
	void OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)//offset:0x107E900;
	void OnPlayerThrallChanged(class ADH_PlayerState* ChangedPlayer)//offset:0x107E850;
	void OnPlayerReconnectedToGameTimerExpired()//offset:0x107E7A0;
	void OnPlayerReconnectedToGame(class ADH_PlayerState* ReconnectingPlayer)//offset:0x107E710;
	void OnPlayerControllerControlledHumanChanged(class ADH_PlayerController* PlayerController)//offset:0x107E660;
	void OnMappingsChangedEvent(class APlayerController* PlayerController)//offset:0x107E390;
	void OnIncapacitatedChanged(class ADH_HumanCharacter* Character)//offset:0x107E260;
	void OnActivateThrallVisionFailed()//offset:0x107DEB0;
};


// Class DreadHungerUI.DH_ThrallMessageRadialOptionWidget
// size:0x0030 (0x02A0 - 0x02D0)
class UDH_ThrallMessageRadialOptionWidget : public UDH_RadialMenuOptionBaseWidget
{
public:

	void SetMessageData(const struct FThrallMessageData& InMessageData)//offset:0x107EB60;
	struct FThrallMessageData GetMessageData()//offset:0x107DC50;
	void BP_OnSetLabelText(const struct FText& InText)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_ThrallMessageRadialWidget
// size:0x0000 (0x03A0 - 0x03A0)
class UDH_ThrallMessageRadialWidget : public UDH_ActionMappingRadialMenuWidget
{
public:
};


// Class DreadHungerUI.DH_ThrallSpellRadialOptionWidget
// size:0x0090 (0x02A0 - 0x0330)
class UDH_ThrallSpellRadialOptionWidget : public UDH_RadialMenuOptionBaseWidget
{
public:
	class UObject*                                     NoIconObject;                                             // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         CooldownLabel;                                            // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    IconOverlay;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      TextBackground;                                           // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     LabelBorder;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     IconBorder;                                               // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                HintCanvasPanel;                                          // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ShowAnimation;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            CommittedAnimation;                                       // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ShowHintAnimation;                                        // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0300(0x0030) MISSED OFFSET

	void UpdateCooldownText()//offset:0x107EF80;
	void UpdateCastingState()//offset:0x107EF60;
	void Update()//offset:0x107EA20;
	void SetSpell(class UDH_TotemSpell* InAssociatedSpell)//offset:0x107ED00;
	void OnUpdateTotemTargetsChanged()//offset:0x107EA20;
	void OnPlayerStateOwnedTotemsChanged(class ADH_PlayerState* PlayerState)//offset:0x107E7C0;
	void OnPlayerRemovedFromGame(class ADH_PlayerState* RemovedPlayer)//offset:0x107DED0;
	void OnPlayerAddedToGame(class ADH_PlayerState* AddedPlayer)//offset:0x107DED0;
	void OnCommittedAnimFinished()//offset:0x10434D0;
	void OnActiveSpellsChanged(class ADH_SpellManager* InSpellManager)//offset:0x107DED0;
	bool GetOnCooldown()//offset:0x107DD50;
	class UBorder* GetLabelBorder()//offset:0x107DC30;
	bool GetCanBeCast()//offset:0x107DBD0;
	class UDH_TotemSpell* GetAssociatedSpell()//offset:0x107DBB0;
};


// Class DreadHungerUI.DH_TitleScreenContinueWidget
// size:0x0068 (0x02E0 - 0x0348)
class UDH_TitleScreenContinueWidget : public UDH_VisibilityWidget
{
public:
	class UButton*                                     MouseCaptureButton;                                       // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_KeybindHintWidget*                       ConfirmKeybind;                                           // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class UWidget>>              VisibleOverlayWidgetsStack;                               // 0x02F0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0300(0x0048) MISSED OFFSET

	void OnTitleScreenLoginStatusWidgetShown()//offset:0x107E220;
	void OnOverlayWidgetShown(class UWidget* ShownWidget)//offset:0x107E5D0;
	void OnOverlayWidgetHidden(class UWidget* HiddenWidget)//offset:0x107E540;
	void OnLoginFinished()//offset:0x107E370;
	void OnInputTypeChanged(EDHInputType InputType)//offset:0x107E2F0;
	void ContinueKeyPressed()//offset:0x107DB70;
};


// Class DreadHungerUI.DH_TitleScreenNotificationOverlayWidget
// size:0x0058 (0x02F8 - 0x0350)
class UDH_TitleScreenNotificationOverlayWidget : public UDH_OverlayWidget
{
public:
	struct FText                                       DesignTimeMajorText;                                      // 0x02F8(0x0028) (Edit)
	struct FText                                       DesignTimeMinorText;                                      // 0x0310(0x0028) (Edit)
	TArray<struct FText>                               DesignTimeListText;                                       // 0x0328(0x0010) (Edit, ZeroConstructor)
	bool                                               bDesignTimeCanContinue;                                   // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class UVerticalBox*                                ListLabelsVerticalBox;                                    // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         MinorMessageText;                                         // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnQuitToDesktopButtonClicked()//offset:0x107E8E0;
	void OnOKButtonClicked()//offset:0x107E220;
};


// Class DreadHungerUI.DH_TitleScreenTutorialChoiceWidget
// size:0x0010 (0x02E0 - 0x02F0)
class UDH_TitleScreenTutorialChoiceWidget : public UDH_VisibilityWidget
{
public:
	class UDH_ButtonWidget*                            MessageYesButton;                                         // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            MessageNoButton;                                          // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnMessageYesButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x107E4B0;
	void OnMessageNoButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x107E420;
};


// Class DreadHungerUI.DH_TitleScreenWidget
// size:0x0030 (0x02E0 - 0x0310)
class UDH_TitleScreenWidget : public UDH_VisibilityWidget
{
public:
	class UDH_DiscordButtonWidget*                     DiscordButton;                                            // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TitleScreenTutorialChoiceWidget*         TutorialChoice;                                           // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET
	class USoundBase*                                  TitleScreenMusic;                                         // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             TitleScreenMusicComponent;                                // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USoundBase*                                  LobbyTransitionMusic;                                     // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void OnPlayerInputReceived()//offset:0x107E6F0;
	void OnErrorsUpdated()//offset:0x107E240;
	void OnChoseTutorial(bool bInDesiresTutorial)//offset:0x107DFE0;
};


// Class DreadHungerUI.DH_TutorialChapterButtonWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_TutorialChapterButtonWidget : public UUserWidget
{
public:
	class UMaterialInterface*                          ThumbnailMIDParent;                                       // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         TextLabel;                                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Thumbnail;                                                // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ThumbnailMID;                                             // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	void OnClicked(class UDH_ButtonWidget* InButton)//offset:0x107E070;
};


// Class DreadHungerUI.DH_TutorialChapterSelectButtonWidget
// size:0x0010 (0x0260 - 0x0270)
class UDH_TutorialChapterSelectButtonWidget : public UUserWidget
{
public:
	class UDH_TextBlockWidget*                         TextLabel;                                                // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnClicked(class UDH_ButtonWidget* InButton)//offset:0x107E100;
};


// Class DreadHungerUI.DH_TutorialChapterSelectWidget
// size:0x0010 (0x02E0 - 0x02F0)
class UDH_TutorialChapterSelectWidget : public UDH_VisibilityWidget
{
public:
	class UDH_TutorialChapterButtonWidget*             TutorialChapterButtonWidgetClass;                         // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUniformGridPanel*                           ChapterList;                                              // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void ShowChapters()//offset:0x107EF00;
};


// Class DreadHungerUI.DH_TutorialConceptWidget
// size:0x0040 (0x02E0 - 0x0320)
class UDH_TutorialConceptWidget : public UDH_VisibilityWidget
{
public:
	class UDH_TextBlockWidget*                         TitleWidget;                                              // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              DescriptionWidget;                                        // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x02F0(0x0030) MISSED OFFSET

	void OnConceptExpired()//offset:0x107E220;
	void OnConceptChanged(const struct FName& NewConceptName)//offset:0x107E190;
	void OnAxisBindPressed(float Value)//offset:0x107DF60;
	void OnActionBindPressed(const struct FKey& Key)//offset:0x107DDD0;
	struct FName GetCurrentConceptName()//offset:0x107DBF0;
};


// Class DreadHungerUI.DH_TutorialIntroScreenWidget
// size:0x0030 (0x02E0 - 0x0310)
class UDH_TutorialIntroScreenWidget : public UDH_VisibilityWidget
{
public:
	class UDH_TextBlockWidget*                         TitleText;                                                // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         BodyText;                                                 // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	void OnTutorialChapterChanged(class UDH_TutorialChapter* NewChapter)//offset:0x1082220;
};


// Class DreadHungerUI.DH_TutorialObjectiveWidget
// size:0x0040 (0x02E0 - 0x0320)
class UDH_TutorialObjectiveWidget : public UDH_VisibilityWidget
{
public:
	class USoundBase*                                  NewObjectiveSound;                                        // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CompletionSound;                                          // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TextBlockWidget*                         TitleWidget;                                              // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              ProgressTextWidget;                                       // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    DividerOverlay;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            CompletedAnimation;                                       // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	void OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)//offset:0x1081FA0;
	void OnObjectiveChanged(class UDH_TutorialObjective* NewObjective)//offset:0x1081F10;
};


// Class DreadHungerUI.DH_UnacceptedInventoryTypeWidget
// size:0x0090 (0x0260 - 0x02F0)
class UDH_UnacceptedInventoryTypeWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	TArray<EInventoryType>                             DesignTimeAllowedInventory;                               // 0x0268(0x0010) (Edit, ZeroConstructor)
	bool                                               DesignTimeTextOnly;                                       // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UDH_InventoryListDataAsset*                  InventoryList;                                            // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     BackgroundTexture;                                        // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FontSize;                                                 // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UHorizontalBox*                              TypesHorizontalBox;                                       // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x02A0(0x0050) MISSED OFFSET

	void BP_OnSetAcceptedType(EInventoryType AllowedType)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_UseSpellCastingHintWidget
// size:0x0048 (0x02D8 - 0x0320)
class UDH_UseSpellCastingHintWidget : public UDH_FirstTimeHintWidget
{
public:

	void OnSelectedInventoryViewChanged(class UDH_InventoryManager* InventoryManager)//offset:0x10677C0;
	bool BP_IsBoneCharm(class ADH_Inventory* Inventory)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_VersionWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_VersionWidget : public UUserWidget
{
public:

	struct FText GetVersionText()//offset:0x1081CB0;
};


// Class DreadHungerUI.DH_VivoxErrorItemWidget
// size:0x0030 (0x0260 - 0x0290)
class UDH_VivoxErrorItemWidget : public UUserWidget
{
public:

	void BP_OnErrorSet(const struct FText& InLocalizedText, const class FString& InRawError)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_VivoxErrorWidget
// size:0x0018 (0x0260 - 0x0278)
class UDH_VivoxErrorWidget : public UDH_ErrorWidget
{
public:
	class UDH_VivoxErrorItemWidget*                    ItemClass;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_VivoxErrorItemWidget*>            Items;                                                    // 0x0268(0x0010) (ExportObject, ZeroConstructor, Transient)

	void OnVivoxErrorsUpdated(TArray<struct FDH_VivoxError> Errors)//offset:0x1082340;
	void BP_OnItemCreated(class UDH_VivoxErrorItemWidget* CreatedItem)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_VOIPEchoTestWidget
// size:0x0018 (0x02F8 - 0x0310)
class UDH_VOIPEchoTestWidget : public UDH_OverlayWidget
{
public:

	void OnVivoxShowEchoTest()//offset:0x806320;
	void OnVivoxHideEchoTest()//offset:0x806320;
	void BP_UpdateAudioEnergyBar(float AudioEnergy)//offset:0x13CEB30;
};


// Class DreadHungerUI.DH_VOIPProblemsButtonWidget
// size:0x0018 (0x02E0 - 0x02F8)
class UDH_VOIPProblemsButtonWidget : public UDH_VisibilityWidget
{
public:
	class UDH_VOIPProblemsWidget*                      ContextMenuClass;                                         // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ButtonWidget*                            BaseButton;                                               // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                ContextMenuCanvasPanel;                                   // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnBaseButtonClicked(class UDH_ButtonWidget* Button)//offset:0x1081E60;
};


// Class DreadHungerUI.DH_VOIPProblemsEOSButtonWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_VOIPProblemsEOSButtonWidget : public UDH_VOIPProblemsButtonWidget
{
public:

	void OnOnlinePartyMembersChanged()//offset:0x107E220;
};


// Class DreadHungerUI.DH_VOIPProblemsWidget
// size:0x0038 (0x02F0 - 0x0328)
class UDH_VOIPProblemsWidget : public UDH_ContextMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET
	class UDH_ButtonWidget*                            ActionButton;                                             // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCheckBox*                                   StressTestCheckBox;                                       // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	class UDH_ButtonWidget*                            StillHavingVOIPIssuesButton;                              // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     ActionBorder;                                             // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                ActionVerticalBox;                                        // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnStressTestCheckBoxChanged(bool bChecked)//offset:0x1082190;
	void OnStillHavingVOIPIssuesButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1082100;
	void OnActionButtonClicked(class UDH_ButtonWidget* InButton)//offset:0x1081DD0;
};


// Class DreadHungerUI.DH_VOIPProblemsEOSWidget
// size:0x0000 (0x0328 - 0x0328)
class UDH_VOIPProblemsEOSWidget : public UDH_VOIPProblemsWidget
{
public:

	void OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)//offset:0x1082030;
};


// Class DreadHungerUI.DH_VOIPProblemsVivoxButtonWidget
// size:0x0000 (0x02F8 - 0x02F8)
class UDH_VOIPProblemsVivoxButtonWidget : public UDH_VOIPProblemsButtonWidget
{
public:
};


// Class DreadHungerUI.DH_VOIPProblemsVivoxWidget
// size:0x0018 (0x0328 - 0x0340)
class UDH_VOIPProblemsVivoxWidget : public UDH_VOIPProblemsWidget
{
public:
	class UDH_StepIndicatorWidget*                     ShutDownVOIPIndicator;                                    // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_StepIndicatorWidget*                     StartUpVOIPIndicator;                                     // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     RestartStepsContainer;                                    // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnVivoxLoggedIn()//offset:0x1082420;
	void OnStartupVOIPIndicatorFinished()//offset:0x10820E0;
	void OnShutDownVOIPIndicatorFinished()//offset:0x10820C0;
};


// Class DreadHungerUI.DH_VOIPRestrictionWidget
// size:0x0000 (0x0310 - 0x0310)
class UDH_VOIPRestrictionWidget : public UDH_RestrictionWidget
{
public:
};


// Class DreadHungerUI.DH_WorkbenchInventoryWidget
// size:0x0010 (0x0328 - 0x0338)
class UDH_WorkbenchInventoryWidget : public UDH_CraftingStationWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UDH_CraftingRecipeWidget*                    RepairWidget;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetRepairComponent(class UDH_WorkbenchRepairComponent* InRepairComponent)//offset:0x1082440;
	class UDH_WorkbenchRepairComponent* GetRepairComponent()//offset:0x1081C70;
};


// Class DreadHungerUI.DH_XPProgressWidget
// size:0x00C0 (0x02E0 - 0x03A0)
class UDH_XPProgressWidget : public UDH_VisibilityWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class UDH_RolePerkLevelCurve*                      RankExperienceCurve;                                      // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShowSound;                                                // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HideSound;                                                // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NormalFillLoopSound;                                      // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NormalFillEndSound;                                       // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BonusFillLoopSound;                                       // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BonusFillEndSound;                                        // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LevelUpSound;                                             // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDH_XPProgressData                          DesignTimeData;                                           // 0x0328(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class UImage*                                      BonusImage;                                               // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      NewImage;                                                 // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UnfilledImage;                                            // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    BonusOverlay;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         RankLabel;                                                // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            NextLevelAnimation;                                       // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             NormalFillLoopAudioComponent;                             // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BonusFillLoopAudioComponent;                              // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0378(0x0028) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
