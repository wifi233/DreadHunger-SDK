                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_UMG_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// size:0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:
};


// Class UMG.Widget
// size:0x00E0 (0x0028 - 0x0108)
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0030(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0058(0x0014) (ZeroConstructor, InstancedReference)
	class UWidget*                                     ToolTipWidget;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0070(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x0080(0x0014) (ZeroConstructor, InstancedReference)
	struct FWidgetTransform                            RenderTransform;                                          // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVariable;                                              // 0x00B4(0x0001)
	unsigned char                                      bCreatedByConstructionScript;                             // 0x00B4(0x0001) (Transient)
	unsigned char                                      bIsEnabled;                                               // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverride_Cursor;                                         // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                     // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsVolatile;                                              // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWidgetClipping                                    Clipping;                                                 // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // 0x00C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RenderOpacity;                                            // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWidgetNavigation*                           Navigation;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EFlowDirectionPreference                           FlowDirectionPreference;                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x00D1(0x0027) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x00F8(0x0010) (ZeroConstructor, Transient)

	void SetVisibility(ESlateVisibility InVisibility)//offset:0x2498100;
	void SetUserFocus(class APlayerController* PlayerController)//offset:0x2497ED0;
	void SetToolTipText(const struct FText& InToolTipText)//offset:0x2497E00;
	void SetToolTip(class UWidget* Widget)//offset:0x2497D70;
	void SetRenderTranslation(const struct FVector2D& Translation)//offset:0x2497C60;
	void SetRenderTransformPivot(const struct FVector2D& Pivot)//offset:0x2497BE0;
	void SetRenderTransformAngle(float Angle)//offset:0x2497B60;
	void SetRenderTransform(const struct FWidgetTransform& InTransform)//offset:0x2497A80;
	void SetRenderShear(const struct FVector2D& Shear)//offset:0x2497A00;
	void SetRenderScale(const struct FVector2D& Scale)//offset:0x2497980;
	void SetRenderOpacity(float InOpacity)//offset:0x2497900;
	void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget)//offset:0x24977A0;
	void SetNavigationRuleCustomBoundary(EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)//offset:0x24976B0;
	void SetNavigationRuleCustom(EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)//offset:0x24975C0;
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule)//offset:0x24974F0;
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus)//offset:0x24973E0;
	void SetKeyboardFocus()//offset:0x24973C0;
	void SetIsEnabled(bool bInIsEnabled)//offset:0x2497330;
	void SetFocus()//offset:0x2497290;
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor)//offset:0x2497210;
	void SetClipping(EWidgetClipping InClipping)//offset:0x2497190;
	void SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus)//offset:0x24970C0;
	void ResetCursor()//offset:0x24970A0;
	void RemoveFromParent()//offset:0xF54860;
	struct FEventReply OnReply__DelegateSignature()//offset:0x13CEB30;
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	bool IsVisible()//offset:0x2497070;
	bool IsHovered()//offset:0x1F58020;
	void InvalidateLayoutAndVolatility()//offset:0x2497050;
	bool HasUserFocusedDescendants(class APlayerController* PlayerController)//offset:0x2496FB0;
	bool HasUserFocus(class APlayerController* PlayerController)//offset:0x2496F10;
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex)//offset:0x2496E40;
	bool HasMouseCapture()//offset:0x2496E10;
	bool HasKeyboardFocus()//offset:0x2496DE0;
	bool HasFocusedDescendants()//offset:0x2496DB0;
	bool HasAnyUserFocus()//offset:0x2496D80;
	class UWidget* GetWidget__DelegateSignature()//offset:0x13CEB30;
	ESlateVisibility GetVisibility()//offset:0x2496D50;
	struct FGeometry GetTickSpaceGeometry()//offset:0x2496C30;
	struct FText GetText__DelegateSignature()//offset:0x13CEB30;
	ESlateVisibility GetSlateVisibility__DelegateSignature()//offset:0x13CEB30;
	struct FSlateColor GetSlateColor__DelegateSignature()//offset:0x13CEB30;
	struct FSlateBrush GetSlateBrush__DelegateSignature()//offset:0x13CEB30;
	float GetRenderTransformAngle()//offset:0x2496BD0;
	struct FVector2D GetRenderScale()//offset:0x2496B90;
	float GetRenderOpacity()//offset:0x2496B60;
	class UPanelWidget* GetParent()//offset:0x2496B30;
	struct FGeometry GetPaintSpaceGeometry()//offset:0x2496AF0;
	class APlayerController* GetOwningPlayer()//offset:0x2496AC0;
	class ULocalPlayer* GetOwningLocalPlayer()//offset:0x2496A90;
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature()//offset:0x13CEB30;
	struct FLinearColor GetLinearColor__DelegateSignature()//offset:0x13CEB30;
	bool GetIsEnabled()//offset:0x2496A60;
	int GetInt32__DelegateSignature()//offset:0x13CEB30;
	class UGameInstance* GetGameInstance()//offset:0x2496A30;
	float GetFloat__DelegateSignature()//offset:0x13CEB30;
	struct FVector2D GetDesiredSize()//offset:0x24969C0;
	EWidgetClipping GetClipping()//offset:0x2496990;
	ECheckBoxState GetCheckBoxState__DelegateSignature()//offset:0x13CEB30;
	struct FGeometry GetCachedGeometry()//offset:0x2496950;
	bool GetBool__DelegateSignature()//offset:0x13CEB30;
	struct FText GetAccessibleText()//offset:0x24968B0;
	struct FText GetAccessibleSummaryText()//offset:0x2496810;
	class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item)//offset:0x13CEB30;
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item)//offset:0x13CEB30;
	void ForceVolatile(bool bForce)//offset:0x2496780;
	void ForceLayoutPrepass()//offset:0x2496760;
};


// Class UMG.UserWidget
// size:0x0158 (0x0108 - 0x0260)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0130(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct UEMulticastInlineDelegate                   OnVisibilityChanged;                                      // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0178(0x0018) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x01A0(0x0010) (ZeroConstructor, Transient)
	class UUMGSequenceTickManager*                     AnimationTickManager;                                     // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x01B8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x01C8(0x0010) (ZeroConstructor)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Priority;                                                 // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportsKeyboardFocus;                                   // 0x01E4(0x0001) (Deprecated)
	unsigned char                                      bIsFocusable;                                             // 0x01E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopAction;                                              // 0x01E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHasScriptImplementedTick;                                // 0x01E4(0x0001)
	unsigned char                                      bHasScriptImplementedPaint;                               // 0x01E4(0x0001)
	unsigned char                                      UnknownData02[0xB];                                       // 0x01E5(0x000B) MISSED OFFSET
	EWidgetTickFrequency                               TickFrequency;                                            // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	TArray<struct FAnimationEventBinding>              AnimationCallbacks;                                       // 0x0200(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0210(0x0050) MISSED OFFSET

	void UnregisterInputComponent()//offset:0x2494880;
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)//offset:0x24947A0;
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)//offset:0x24946C0;
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)//offset:0x2494630;
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)//offset:0x24945A0;
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime)//offset:0x13CEB30;
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType)//offset:0x24944D0;
	void StopListeningForAllInputActions()//offset:0x24944B0;
	void StopAnimationsAndLatentActions()//offset:0x2494490;
	void StopAnimation(class UWidgetAnimation* InAnimation)//offset:0x2494400;
	void StopAllAnimations()//offset:0x24943E0;
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)//offset:0x24940E0;
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)//offset:0x2494010;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2493F80;
	void SetOwningPlayer(class APlayerController* LocalPlayerController)//offset:0x2493EF0;
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay)//offset:0x2493E20;
	void SetInputActionPriority(int NewPriority)//offset:0x2493BC0;
	void SetInputActionBlocking(bool bShouldBlock)//offset:0x2493B30;
	void SetForegroundColor(const struct FSlateColor& InForegroundColor)//offset:0x24939C0;
	void SetDesiredSizeInViewport(const struct FVector2D& Size)//offset:0x2493940;
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)//offset:0x2493820;
	void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)//offset:0x2493750;
	void SetAnchorsInViewport(const struct FAnchors& Anchors)//offset:0x24936C0;
	void SetAlignmentInViewport(const struct FVector2D& Alignment)//offset:0x2493640;
	void ReverseAnimation(class UWidgetAnimation* InAnimation)//offset:0x24935B0;
	void RemoveFromViewport()//offset:0x2493590;
	void RegisterInputComponent()//offset:0x2493570;
	void PreConstruct(bool IsDesignTime)//offset:0x13CEB30;
	void PlaySound(class USoundBase* SoundToPlay)//offset:0x24934E0;
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)//offset:0x24932C0;
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)//offset:0x24931A0;
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)//offset:0x2493080;
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)//offset:0x2492EB0;
	float PauseAnimation(class UWidgetAnimation* InAnimation)//offset:0x2492E10;
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)//offset:0x13CEB30;
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)//offset:0x13CEB30;
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)//offset:0x13CEB30;
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)//offset:0x13CEB30;
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)//offset:0x13CEB30;
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)//offset:0x13CEB30;
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)//offset:0x13CEB30;
	void OnPaint(struct FPaintContext* Context)//offset:0x13CEB30;
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	void OnMouseLeave(const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	void OnMouseCaptureLost()//offset:0x13CEB30;
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)//offset:0x13CEB30;
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)//offset:0x13CEB30;
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)//offset:0x13CEB30;
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)//offset:0x13CEB30;
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)//offset:0x13CEB30;
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)//offset:0x13CEB30;
	void OnInitialized()//offset:0x13CEB30;
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)//offset:0x13CEB30;
	void OnFocusLost(const struct FFocusEvent& InFocusEvent)//offset:0x13CEB30;
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)//offset:0x13CEB30;
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)//offset:0x13CEB30;
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)//offset:0x13CEB30;
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)//offset:0x13CEB30;
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)//offset:0x13CEB30;
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)//offset:0x13CEB30;
	void OnAnimationStarted(class UWidgetAnimation* Animation)//offset:0x2492D80;
	void OnAnimationFinished(class UWidgetAnimation* Animation)//offset:0x2492CF0;
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)//offset:0x13CEB30;
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)//offset:0x13CEB30;
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)//offset:0x2492B60;
	bool IsPlayingAnimation()//offset:0x2492B30;
	bool IsListeningForInputAction(const struct FName& ActionName)//offset:0x2492A90;
	bool IsInViewport()//offset:0x2492840;
	bool IsInteractable()//offset:0x13CEB30;
	bool IsAnyAnimationPlaying()//offset:0x2492A60;
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)//offset:0x24929C0;
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation)//offset:0x2492920;
	class APlayerState* GetOwningPlayerState()//offset:0x24928D0;
	class APawn* GetOwningPlayerPawn()//offset:0x24928A0;
	class APlayerCameraManager* GetOwningPlayerCameraManager()//offset:0x2492870;
	bool GetIsVisible()//offset:0x2492840;
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)//offset:0x24927A0;
	struct FAnchors GetAnchorsInViewport()//offset:0x2492760;
	struct FVector2D GetAlignmentInViewport()//offset:0x2492720;
	void FlushAnimations()//offset:0x2492700;
	void Destruct()//offset:0x13CEB30;
	void Construct()//offset:0x13CEB30;
	void CancelLatentActions()//offset:0x24926A0;
	void BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)//offset:0x24925C0;
	void BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)//offset:0x24924E0;
	void BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag)//offset:0x2492360;
	void AddToViewport(int ZOrder)//offset:0x24922D0;
	bool AddToPlayerScreen(int ZOrder)//offset:0x2492230;
};


// Class UMG.RichTextBlockDecorator
// size:0x0000 (0x0028 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:
};


// Class UMG.PanelWidget
// size:0x0018 (0x0108 - 0x0120)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0108(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	bool RemoveChildAt(int Index)//offset:0x2483810;
	bool RemoveChild(class UWidget* Content)//offset:0x2483770;
	bool HasChild(class UWidget* Content)//offset:0x24835E0;
	bool HasAnyChildren()//offset:0x24835B0;
	int GetChildrenCount()//offset:0x2483260;
	int GetChildIndex(class UWidget* Content)//offset:0x24831C0;
	class UWidget* GetChildAt(int Index)//offset:0x2483120;
	TArray<class UWidget*> GetAllChildren()//offset:0x24830A0;
	void ClearChildren()//offset:0x2482FD0;
	class UPanelSlot* AddChild(class UWidget* Content)//offset:0x2482E90;
};


// Class UMG.PanelSlot
// size:0x0010 (0x0028 - 0x0038)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class UMG.AsyncTaskDownloadImage
// size:0x0020 (0x0030 - 0x0050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFail;                                                   // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static class UAsyncTaskDownloadImage* DownloadImage(const class FString& URL)//offset:0x24759A0;
};


// Class UMG.ContentWidget
// size:0x0000 (0x0120 - 0x0120)
class UContentWidget : public UPanelWidget
{
public:

	class UPanelSlot* SetContent(class UWidget* Content)//offset:0x247ABF0;
	class UPanelSlot* GetContentSlot()//offset:0x247A460;
	class UWidget* GetContent()//offset:0x247A430;
};


// Class UMG.BackgroundBlur
// size:0x00B8 (0x0120 - 0x01D8)
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                  // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAlphaToBlur;                                        // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0133(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2477820;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2477070;
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)//offset:0x2476CE0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2476930;
	void SetBlurStrength(float InStrength)//offset:0x24761D0;
	void SetBlurRadius(int InBlurRadius)//offset:0x2476140;
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)//offset:0x2475F90;
};


// Class UMG.BackgroundBlurSlot
// size:0x0028 (0x0038 - 0x0060)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24778A0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2477100;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24769B0;
};


// Class UMG.PropertyBinding
// size:0x0038 (0x0028 - 0x0060)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0030(0x0028)
	struct FName                                       DestinationProperty;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class UMG.BoolBinding
// size:0x0000 (0x0060 - 0x0060)
class UBoolBinding : public UPropertyBinding
{
public:

	bool GetValue()//offset:0x2475CB0;
};


// Class UMG.Border
// size:0x0150 (0x0120 - 0x0270)
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShowEffectWhenDisabled;                                  // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x0124(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0134(0x0014) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0158(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x01E0(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0200(0x0014) (ZeroConstructor, InstancedReference)
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x021C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x022C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x023C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x024C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x14];                                      // 0x025C(0x0014) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2477920;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2477190;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2476A30;
	void SetDesiredSizeScale(const struct FVector2D& InScale)//offset:0x24768B0;
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)//offset:0x2476820;
	void SetBrushFromTexture(class UTexture2D* Texture)//offset:0x2476580;
	void SetBrushFromObject(class UObject* Object)//offset:0x2476580;
	void SetBrushFromMaterial(class UMaterialInterface* Material)//offset:0x24764F0;
	void SetBrushFromAsset(class USlateBrushAsset* Asset)//offset:0x2476460;
	void SetBrushColor(const struct FLinearColor& InBrushColor)//offset:0x24763D0;
	void SetBrush(const struct FSlateBrush& InBrush)//offset:0x2476260;
	class UMaterialInstanceDynamic* GetDynamicMaterial()//offset:0x2475B70;
};


// Class UMG.BorderSlot
// size:0x0028 (0x0038 - 0x0060)
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24779A0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2477220;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2476AB0;
};


// Class UMG.BrushBinding
// size:0x0008 (0x0060 - 0x0068)
class UBrushBinding : public UPropertyBinding
{
public:

	struct FSlateBrush GetValue()//offset:0x2475CE0;
};


// Class UMG.Button
// size:0x0308 (0x0120 - 0x0428)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0120(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0128(0x0278) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x03C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x03C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnClicked;                                                // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPressed;                                                // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnReleased;                                               // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHovered;                                                // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUnhovered;                                              // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0418(0x0010) MISSED OFFSET

	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod)//offset:0x2477720;
	void SetStyle(const struct FButtonStyle& InStyle)//offset:0x2477640;
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod)//offset:0x2477440;
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)//offset:0x2476790;
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod)//offset:0x2476690;
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor)//offset:0x24760B0;
	bool IsPressed()//offset:0x2475E20;
};


// Class UMG.ButtonSlot
// size:0x0028 (0x0038 - 0x0060)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2477A20;
	void SetPadding(const struct FMargin& InPadding)//offset:0x24772B0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2476B30;
};


// Class UMG.CanvasPanel
// size:0x0010 (0x0120 - 0x0130)
class UCanvasPanel : public UPanelWidget
{
public:

	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content)//offset:0x2475900;
};


// Class UMG.CanvasPanelSlot
// size:0x0038 (0x0038 - 0x0070)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	void SetZOrder(int InZOrder)//offset:0x2477AA0;
	void SetSize(const struct FVector2D& InSize)//offset:0x24775C0;
	void SetPosition(const struct FVector2D& InPosition)//offset:0x24773C0;
	void SetOffsets(const struct FMargin& InOffset)//offset:0x2476FE0;
	void SetMinimum(const struct FVector2D& InMinimumAnchors)//offset:0x2476ED0;
	void SetMaximum(const struct FVector2D& InMaximumAnchors)//offset:0x2476E50;
	void SetLayout(const struct FAnchorData& InLayoutData)//offset:0x2476C40;
	void SetAutoSize(bool InbAutoSize)//offset:0x2476020;
	void SetAnchors(const struct FAnchors& InAnchors)//offset:0x2475F00;
	void SetAlignment(const struct FVector2D& InAlignment)//offset:0x2475E80;
	int GetZOrder()//offset:0x2475DC0;
	struct FVector2D GetSize()//offset:0x2475C70;
	struct FVector2D GetPosition()//offset:0x2475C30;
	struct FMargin GetOffsets()//offset:0x2475BF0;
	struct FAnchorData GetLayout()//offset:0x2475BA0;
	bool GetAutoSize()//offset:0x2475B10;
	struct FAnchors GetAnchors()//offset:0x2475AD0;
	struct FVector2D GetAlignment()//offset:0x2475A90;
};


// Class UMG.CheckBox
// size:0x0650 (0x0120 - 0x0770)
class UCheckBox : public UContentWidget
{
public:
	ECheckBoxState                                     CheckedState;                                             // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0124(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0138(0x0580) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x06F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x0700(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x070C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0720(0x0028) (Deprecated)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0749(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x074A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x074B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCheckStateChanged;                                      // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod)//offset:0x24777A0;
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod)//offset:0x24774C0;
	void SetIsChecked(bool InIsChecked)//offset:0x2476BB0;
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod)//offset:0x2476710;
	void SetCheckedState(ECheckBoxState InCheckedState)//offset:0x2476610;
	bool IsPressed()//offset:0x2475E50;
	bool IsChecked()//offset:0x2475DF0;
	ECheckBoxState GetCheckedState()//offset:0x2475B40;
};


// Class UMG.CheckedStateBinding
// size:0x0008 (0x0060 - 0x0068)
class UCheckedStateBinding : public UPropertyBinding
{
public:

	ECheckBoxState GetValue()//offset:0x2475D90;
};


// Class UMG.CircularThrobber
// size:0x00B8 (0x0108 - 0x01C0)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0120(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bEnableRadius;                                            // 0x01A8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01A9(0x0017) MISSED OFFSET

	void SetRadius(float InRadius)//offset:0x2477540;
	void SetPeriod(float InPeriod)//offset:0x2477340;
	void SetNumberOfPieces(int InNumberOfPieces)//offset:0x2476F50;
};


// Class UMG.ColorBinding
// size:0x0008 (0x0060 - 0x0068)
class UColorBinding : public UPropertyBinding
{
public:

	struct FSlateColor GetSlateValue()//offset:0x247A6F0;
	struct FLinearColor GetLinearValue()//offset:0x247A4C0;
};


// Class UMG.ComboBox
// size:0x0038 (0x0108 - 0x0140)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0118(0x0014) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsFocusable;                                             // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0129(0x0017) MISSED OFFSET
};


// Class UMG.ComboBoxString
// size:0x0CF8 (0x0108 - 0x0E00)
class UComboBoxString : public UWidget
{
public:
	TArray<class FString>                              DefaultOptions;                                           // 0x0108(0x0010) (Edit, ZeroConstructor)
	class FString                                      SelectedOption;                                           // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0128(0x03F0) (Edit, BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x0518(0x07C8) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0CE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x0CF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0CF4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x0CF5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0CF6(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0CF8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0D50(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x0D78(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D79(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0D7C(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D8C(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSelectionChanged;                                       // 0x0D90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnOpening;                                                // 0x0DA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0DB0(0x0050) MISSED OFFSET

	void SetSelectedOption(const class FString& Option)//offset:0x247B620;
	void SetSelectedIndex(int Index)//offset:0x247B590;
	bool RemoveOption(const class FString& Option)//offset:0x247A9E0;
	void RefreshOptions()//offset:0x247A930;
	void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)//offset:0x13CEB30;
	void OnOpeningEvent__DelegateSignature()//offset:0x13CEB30;
	bool IsOpen()//offset:0x247A900;
	class FString GetSelectedOption()//offset:0x247A670;
	int GetSelectedIndex()//offset:0x247A640;
	int GetOptionCount()//offset:0x247A610;
	class FString GetOptionAtIndex(int Index)//offset:0x247A530;
	int FindOptionIndex(const class FString& Option)//offset:0x247A2F0;
	void ClearSelection()//offset:0x2479F40;
	void ClearOptions()//offset:0x2479F20;
	void AddOption(const class FString& Option)//offset:0x2479D90;
};


// Class UMG.DragDropOperation
// size:0x0060 (0x0028 - 0x0088)
class UDragDropOperation : public UObject
{
public:
	class FString                                      Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDragPivot                                         Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnDrop;                                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDragCancelled;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDragged;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void Drop(const struct FPointerEvent& PointerEvent)//offset:0x247A1C0;
	void Dragged(const struct FPointerEvent& PointerEvent)//offset:0x247A090;
	void DragCancelled(const struct FPointerEvent& PointerEvent)//offset:0x2479F60;
};


// Class UMG.DynamicEntryBoxBase
// size:0x00D0 (0x0108 - 0x01D8)
class UDynamicEntryBoxBase : public UWidget
{
public:
	EDynamicBoxType                                    EntryBoxType;                                             // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FVector2D                                   EntrySpacing;                                             // 0x010C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           SpacingPattern;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSlateChildSize                             EntrySizeRule;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment;                                 // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment;                                   // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	int                                                MaxElementSize;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRadialBoxSettings                          RadialBoxSettings;                                        // 0x0138(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0144(0x0014) MISSED OFFSET
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0158(0x0080) (Transient)

	void SetRadialSettings(const struct FRadialBoxSettings& InSettings)//offset:0x247B420;
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing)//offset:0x247AC90;
	int GetNumEntries()//offset:0x247A500;
	TArray<class UUserWidget*> GetAllEntries()//offset:0x247A3A0;
};


// Class UMG.DynamicEntryBox
// size:0x0008 (0x01D8 - 0x01E0)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UUserWidget*                                 EntryWidgetClass;                                         // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void Reset(bool bDeleteWidgets)//offset:0x247AA90;
	void RemoveEntry(class UUserWidget* EntryWidget)//offset:0x247A950;
	class UUserWidget* BP_CreateEntryOfClass(class UUserWidget* EntryClass)//offset:0x2479E60;
	class UUserWidget* BP_CreateEntry()//offset:0x2479E30;
};


// Class UMG.EditableText
// size:0x0358 (0x0108 - 0x0460)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0108(0x0028) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x0130(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0148(0x0014) (ZeroConstructor, InstancedReference)
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0158(0x0220) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0378(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x0388(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x0390(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0398(0x0058) (Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x03F0(0x0028) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0419(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0421(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0422(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0423(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0425(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0426(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0427(0x0001) (Edit)
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                   // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x042B(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnTextChanged;                                            // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTextCommitted;                                          // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	void SetText(const struct FText& InText)//offset:0x247B710;
	void SetJustification(TEnumAsByte<ETextJustify> InJustification)//offset:0x247B320;
	void SetIsReadOnly(bool InbIsReadyOnly)//offset:0x247B200;
	void SetIsPassword(bool InbIsPassword)//offset:0x247B0E0;
	void SetHintText(const struct FText& InHintText)//offset:0x247AE00;
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)//offset:0x13CEB30;
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)//offset:0x13CEB30;
	struct FText GetText()//offset:0x247A760;
};


// Class UMG.EditableTextBox
// size:0x0930 (0x0108 - 0x0A38)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0108(0x0028) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0130(0x07F8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0928(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x0930(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0948(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0958(0x0058) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x09B0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x09C0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x09D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x09E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x09E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09E2(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x09E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x09E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x09F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x09F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x09FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x09FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x09FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x09FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x09FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x09FF(0x0001) (Edit)
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                   // 0x0A00(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0A01(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0A03(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0A06(0x0002) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnTextChanged;                                            // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTextCommitted;                                          // 0x0A18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0A28(0x0010) MISSED OFFSET

	void SetText(const struct FText& InText)//offset:0x247B7F0;
	void SetJustification(TEnumAsByte<ETextJustify> InJustification)//offset:0x247B3A0;
	void SetIsReadOnly(bool bReadOnly)//offset:0x247B290;
	void SetIsPassword(bool bIsPassword)//offset:0x247B170;
	void SetHintText(const struct FText& InText)//offset:0x247AEE0;
	void SetError(const struct FText& InError)//offset:0x247AD20;
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)//offset:0x13CEB30;
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)//offset:0x13CEB30;
	bool HasError()//offset:0x247A8D0;
	struct FText GetText()//offset:0x247A800;
	void ClearError()//offset:0x2479F00;
};


// Class UMG.ExpandableArea
// size:0x0230 (0x0108 - 0x0338)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0110(0x0120) (Edit)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0230(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 BorderColor;                                              // 0x02B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsExpanded;                                              // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     HeaderPadding;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     AreaPadding;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnExpansionChanged;                                       // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWidget*                                     HeaderContent;                                            // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BodyContent;                                              // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	void SetIsExpanded_Animated(bool IsExpanded)//offset:0x247B050;
	void SetIsExpanded(bool IsExpanded)//offset:0x247AFC0;
	bool GetIsExpanded()//offset:0x247A490;
};


// Class UMG.FloatBinding
// size:0x0000 (0x0060 - 0x0060)
class UFloatBinding : public UPropertyBinding
{
public:

	float GetValue()//offset:0x247A8A0;
};


// Class UMG.GridPanel
// size:0x0030 (0x0120 - 0x0150)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	void SetRowFill(int ColumnIndex, float Coefficient)//offset:0x247B4C0;
	void SetColumnFill(int ColumnIndex, float Coefficient)//offset:0x247AB20;
	class UGridSlot* AddChildToGrid(class UWidget* Content, int InRow, int InColumn)//offset:0x2479C80;
};


// Class UMG.GridSlot
// size:0x0038 (0x0038 - 0x0070)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24801F0;
	void SetRowSpan(int InRowSpan)//offset:0x247FD50;
	void SetRow(int InRow)//offset:0x247FCC0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x247FBA0;
	void SetNudge(const struct FVector2D& InNudge)//offset:0x247FAA0;
	void SetLayer(int InLayer)//offset:0x247F930;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x247F750;
	void SetColumnSpan(int InColumnSpan)//offset:0x247F5D0;
	void SetColumn(int InColumn)//offset:0x247F540;
};


// Class UMG.HorizontalBox
// size:0x0010 (0x0120 - 0x0130)
class UHorizontalBox : public UPanelWidget
{
public:

	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content)//offset:0x247DB20;
};


// Class UMG.HorizontalBoxSlot
// size:0x0028 (0x0038 - 0x0060)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateChildSize                             Size;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2480270;
	void SetSize(const struct FSlateChildSize& InSize)//offset:0x24800E0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x247FC30;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x247F7D0;
};


// Class UMG.Image
// size:0x0108 (0x0108 - 0x0210)
class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0108(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0190(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01B0(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x01C4(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x01D4(0x003C) MISSED OFFSET

	void SetOpacity(float InOpacity)//offset:0x247FB20;
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)//offset:0x247F4B0;
	void SetBrushTintColor(const struct FSlateColor& TintColor)//offset:0x247F330;
	void SetBrushSize(const struct FVector2D& DesiredSize)//offset:0x247F2B0;
	void SetBrushResourceObject(class UObject* ResourceObject)//offset:0x247F220;
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)//offset:0x247F150;
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)//offset:0x247F080;
	void SetBrushFromSoftTexture(bool bMatchSize)//offset:0x247EF30;
	void SetBrushFromSoftMaterial()//offset:0x247EE20;
	void SetBrushFromMaterial(class UMaterialInterface* Material)//offset:0x247ED90;
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize)//offset:0x247ECA0;
	void SetBrushFromAsset(class USlateBrushAsset* Asset)//offset:0x247EC10;
	void SetBrush(const struct FSlateBrush& InBrush)//offset:0x247EA90;
	class UMaterialInstanceDynamic* GetDynamicMaterial()//offset:0x247E260;
};


// Class UMG.InputKeySelector
// size:0x05F8 (0x0108 - 0x0700)
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                              // 0x0108(0x0278) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0380(0x0270) (Edit, BlueprintVisible)
	struct FInputChord                                 SelectedKey;                                              // 0x05F0(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              Font;                                                     // 0x0610(0x0058) (Deprecated)
	struct FMargin                                     Margin;                                                   // 0x0668(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0678(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x0688(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NoKeySpecifiedText;                                       // 0x06A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowModifierKeys;                                       // 0x06B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGamepadKeys;                                        // 0x06B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06BA(0x0006) MISSED OFFSET
	TArray<struct FKey>                                EscapeKeys;                                               // 0x06C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct UEMulticastInlineDelegate                   OnKeySelected;                                            // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnIsSelectingKeyChanged;                                  // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	void SetTextBlockVisibility(ESlateVisibility InVisibility)//offset:0x2480170;
	void SetSelectedKey(const struct FInputChord& InSelectedKey)//offset:0x247FF70;
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)//offset:0x247F9C0;
	void SetKeySelectionText(const struct FText& InKeySelectionText)//offset:0x247F850;
	void SetEscapeKeys(TArray<struct FKey> InKeys)//offset:0x247F660;
	void SetAllowModifierKeys(bool bInAllowModifierKeys)//offset:0x247EA00;
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys)//offset:0x247E970;
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)//offset:0x13CEB30;
	void OnIsSelectingKeyChanged__DelegateSignature()//offset:0x13CEB30;
	bool GetIsSelectingKey()//offset:0x247E330;
};


// Class UMG.Int32Binding
// size:0x0000 (0x0060 - 0x0060)
class UInt32Binding : public UPropertyBinding
{
public:

	int GetValue()//offset:0x247E5A0;
};


// Class UMG.InvalidationBox
// size:0x0018 (0x0120 - 0x0138)
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CacheRelativeTransforms;                                  // 0x0121(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0122(0x0016) MISSED OFFSET

	void SetCanCache(bool CanCache)//offset:0x247F420;
	void InvalidateCache()//offset:0x806320;
	bool GetCanCache()//offset:0x247E1A0;
};


// Class UMG.UserListEntry
// size:0x0000 (0x0028 - 0x0028)
class UUserListEntry : public UInterface
{
public:

	void BP_OnItemSelectionChanged(bool bIsSelected)//offset:0x13CEB30;
	void BP_OnItemExpansionChanged(bool bIsExpanded)//offset:0x13CEB30;
	void BP_OnEntryReleased()//offset:0x13CEB30;
};


// Class UMG.UserListEntryLibrary
// size:0x0000 (0x0028 - 0x0028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static bool IsListItemSelected(const TScriptInterface<class UUserListEntry>& UserListEntry)//offset:0x247E670;
	static bool IsListItemExpanded(const TScriptInterface<class UUserListEntry>& UserListEntry)//offset:0x247E5D0;
	static class UListViewBase* GetOwningListView(const TScriptInterface<class UUserListEntry>& UserListEntry)//offset:0x247E500;
};


// Class UMG.UserObjectListEntry
// size:0x0000 (0x0028 - 0x0028)
class UUserObjectListEntry : public UUserListEntry
{
public:

	void OnListItemObjectSet(class UObject* ListItemObject)//offset:0x13CEB30;
};


// Class UMG.UserObjectListEntryLibrary
// size:0x0000 (0x0028 - 0x0028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UObject* GetListItemObject(const TScriptInterface<class UUserObjectListEntry>& UserObjectListEntry)//offset:0x247E400;
};


// Class UMG.ListViewBase
// size:0x0110 (0x0108 - 0x0218)
class UListViewBase : public UWidget
{
public:
	class UUserWidget*                                 EntryWidgetClass;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WheelScrollMultiplier;                                    // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScrollAnimation;                                   // 0x0114(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFixedLineOffset;                                   // 0x0115(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              FixedLineScrollOffset;                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   BP_OnEntryGenerated;                                      // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   BP_OnEntryReleased;                                       // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0140(0x0080) (Transient)
	unsigned char                                      UnknownData02[0x58];                                      // 0x01C0(0x0058) MISSED OFFSET

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier)//offset:0x24802F0;
	void SetScrollOffset(float InScrollOffset)//offset:0x247FDE0;
	void SetScrollbarVisibility(ESlateVisibility InVisibility)//offset:0x247FE60;
	void ScrollToTop()//offset:0x247E950;
	void ScrollToBottom()//offset:0x247E930;
	void RequestRefresh()//offset:0x247E880;
	void RegenerateAllEntries()//offset:0x247E7D0;
	TArray<class UUserWidget*> GetDisplayedEntryWidgets()//offset:0x247E1D0;
};


// Class UMG.ListView
// size:0x0150 (0x0218 - 0x0368)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0218(0x00C0) MISSED OFFSET
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x02D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x02DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSelectionOnClick;                                   // 0x02DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnFocusToSelection;                                  // 0x02E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickScrolling;                                // 0x02E5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	TArray<class UObject*>                             ListItems;                                                // 0x02E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   BP_OnEntryInitialized;                                    // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   BP_OnItemClicked;                                         // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   BP_OnItemDoubleClicked;                                   // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   BP_OnItemIsHoveredChanged;                                // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   BP_OnItemSelectionChanged;                                // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   BP_OnItemScrolledIntoView;                                // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode)//offset:0x2480060;
	void SetSelectedIndex(int Index)//offset:0x247FEE0;
	void ScrollIndexIntoView(int Index)//offset:0x247E8A0;
	void RemoveItem(class UObject* Item)//offset:0x247E7F0;
	void NavigateToIndex(int Index)//offset:0x247E740;
	bool IsRefreshPending()//offset:0x247E710;
	int GetNumItems()//offset:0x247E4D0;
	TArray<class UObject*> GetListItems()//offset:0x247E4A0;
	class UObject* GetItemAt(int Index)//offset:0x247E360;
	int GetIndexForItem(class UObject* Item)//offset:0x247E290;
	void ClearListItems()//offset:0x247E180;
	void BP_SetSelectedItem(class UObject* Item)//offset:0x247E0F0;
	void BP_SetListItems(TArray<class UObject*> InListItems)//offset:0x247E040;
	void BP_SetItemSelection(class UObject* Item, bool bSelected)//offset:0x247DF70;
	void BP_ScrollItemIntoView(class UObject* Item)//offset:0x247DEE0;
	void BP_NavigateToItem(class UObject* Item)//offset:0x247DE50;
	bool BP_IsItemVisible(class UObject* Item)//offset:0x247DDB0;
	bool BP_GetSelectedItems(TArray<class UObject*>* Items)//offset:0x247DCF0;
	class UObject* BP_GetSelectedItem()//offset:0x247DCC0;
	int BP_GetNumItemsSelected()//offset:0x247DC90;
	void BP_ClearSelection()//offset:0x247DC70;
	void BP_CancelScrollIntoView()//offset:0x247DC50;
	void AddItem(class UObject* Item)//offset:0x247DBC0;
};


// Class UMG.ListViewDesignerPreviewItem
// size:0x0000 (0x0028 - 0x0028)
class UListViewDesignerPreviewItem : public UObject
{
public:
};


// Class UMG.MenuAnchor
// size:0x0050 (0x0120 - 0x0170)
class UMenuAnchor : public UContentWidget
{
public:
	class UUserWidget*                                 MenuClass;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0128(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnGetUserMenuContentEvent;                                // 0x0138(0x0014) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFitInWindow;                                             // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x014A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseApplicationMenuStack;                                  // 0x014B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnMenuOpenChanged;                                        // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	void ToggleOpen(bool bFocusOnOpen)//offset:0x2484610;
	bool ShouldOpenDueToClick()//offset:0x24845E0;
	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement)//offset:0x2483FD0;
	void Open(bool bFocusMenu)//offset:0x24836E0;
	bool IsOpen()//offset:0x24836B0;
	bool HasOpenSubMenus()//offset:0x2483680;
	class UUserWidget* GetUserWidget__DelegateSignature()//offset:0x13CEB30;
	struct FVector2D GetMenuPosition()//offset:0x2483400;
	void FitInWindow(bool bFit)//offset:0x2483010;
	void Close()//offset:0x2482FF0;
};


// Class UMG.MouseCursorBinding
// size:0x0000 (0x0060 - 0x0060)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	TEnumAsByte<EMouseCursor> GetValue()//offset:0x2483580;
};


// Class UMG.MovieScene2DTransformPropertySystem
// size:0x0000 (0x0050 - 0x0050)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:
};


// Class UMG.MovieScene2DTransformSection
// size:0x0470 (0x00E8 - 0x0558)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieScene2DTransformMask                  TransformMask;                                            // 0x00F0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x00F8(0x00A0)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x0238(0x00A0)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                               // 0x02D8(0x00A0)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                               // 0x0418(0x00A0)
};


// Class UMG.MovieScene2DTransformTrack
// size:0x0000 (0x00A8 - 0x00A8)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:
};


// Class UMG.MovieSceneMarginSection
// size:0x0280 (0x00E8 - 0x0368)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     TopCurve;                                                 // 0x00E8(0x00A0)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     RightCurve;                                               // 0x0228(0x00A0)
	struct FMovieSceneFloatChannel                     BottomCurve;                                              // 0x02C8(0x00A0)
};


// Class UMG.MovieSceneMarginTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:
};


// Class UMG.MovieSceneWidgetMaterialTrack
// size:0x0020 (0x0088 - 0x00A8)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0090(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class UMG.TextLayoutWidget
// size:0x0020 (0x0108 - 0x0128)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0108(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x010B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoWrapText;                                             // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0114(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void SetJustification(TEnumAsByte<ETextJustify> InJustification)//offset:0x248CBA0;
};


// Class UMG.MultiLineEditableText
// size:0x0348 (0x0128 - 0x0470)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0028) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0028) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0168(0x0270) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x03E0(0x0058) (Deprecated)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearTextSelectionOnFocusLoss;                            // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x043A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x043B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x043C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x043D(0x0001) (Edit)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x043E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x043F(0x0001) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnTextChanged;                                            // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTextCommitted;                                          // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)//offset:0x2484530;
	void SetText(const struct FText& InText)//offset:0x24841B0;
	void SetIsReadOnly(bool bReadOnly)//offset:0x2483DA0;
	void SetHintText(const struct FText& InHintText)//offset:0x2483AD0;
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)//offset:0x13CEB30;
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)//offset:0x13CEB30;
	struct FText GetText()//offset:0x2483440;
	struct FText GetHintText()//offset:0x24832C0;
};


// Class UMG.MultiLineEditableTextBox
// size:0x0B70 (0x0128 - 0x0C98)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0028) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0028) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0168(0x07F8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0960(0x0270) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x0BD0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0BD1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0BD2(0x0001) (Edit)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0BD3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BD4(0x0004) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0BD8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0BE0(0x0058) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C38(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C48(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0C58(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnTextChanged;                                            // 0x0C68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTextCommitted;                                          // 0x0C78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0C88(0x0010) MISSED OFFSET

	void SetTextStyle(const struct FTextBlockStyle& InTextStyle)//offset:0x2484370;
	void SetText(const struct FText& InText)//offset:0x2484290;
	void SetIsReadOnly(bool bReadOnly)//offset:0x2483E30;
	void SetHintText(const struct FText& InHintText)//offset:0x2483BB0;
	void SetError(const struct FText& InError)//offset:0x2483960;
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)//offset:0x13CEB30;
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)//offset:0x13CEB30;
	struct FText GetText()//offset:0x24834E0;
	struct FText GetHintText()//offset:0x2483360;
};


// Class UMG.NamedSlot
// size:0x0010 (0x0120 - 0x0130)
class UNamedSlot : public UContentWidget
{
public:
};


// Class UMG.NamedSlotInterface
// size:0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:
};


// Class UMG.NativeWidgetHost
// size:0x0010 (0x0108 - 0x0118)
class UNativeWidgetHost : public UWidget
{
public:
};


// Class UMG.Overlay
// size:0x0010 (0x0120 - 0x0130)
class UOverlay : public UPanelWidget
{
public:

	class UOverlaySlot* AddChildToOverlay(class UWidget* Content)//offset:0x2482F30;
};


// Class UMG.OverlaySlot
// size:0x0020 (0x0038 - 0x0058)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24844B0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2483EC0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2483C90;
};


// Class UMG.ProgressBar
// size:0x0210 (0x0108 - 0x0318)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0108(0x01A0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x02B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x02B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x02C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Percent;                                                  // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x02CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02CE(0x0002) MISSED OFFSET
	struct FVector2D                                   BorderPadding;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             PercentDelegate;                                          // 0x02D8(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x02F8(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	void SetPercent(float InPercent)//offset:0x2483F50;
	void SetIsMarquee(bool InbIsMarquee)//offset:0x2483D10;
	void SetFillColorAndOpacity(const struct FLinearColor& InColor)//offset:0x2483A40;
};


// Class UMG.RetainerBox
// size:0x0030 (0x0120 - 0x0150)
class URetainerBox : public UContentWidget
{
public:
	bool                                               bRetainRender;                                            // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnInvalidation;                                     // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnPhase;                                            // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	int                                                Phase;                                                    // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	void SetTextureParameter(const struct FName& TextureParameter)//offset:0x2484420;
	void SetRetainRendering(bool bInRetainRendering)//offset:0x2484120;
	void SetRenderingPhase(int RenderPhase, int TotalPhases)//offset:0x2484050;
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial)//offset:0x24838D0;
	void RequestRender()//offset:0x24838B0;
	class UMaterialInstanceDynamic* GetEffectMaterial()//offset:0x2483290;
};


// Class UMG.RichTextBlock
// size:0x0550 (0x0128 - 0x0678)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0028) (Edit)
	class UDataTable*                                  TextStyleSet;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             DecoratorClasses;                                         // 0x0148(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideDefaultStyle;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyleOverride;                                 // 0x0160(0x0270) (Edit)
	float                                              MinDesiredWidth;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETextTransformPolicy                               TextTransformPolicy;                                      // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyle;                                         // 0x03D8(0x0270) (Transient)
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                       // 0x0648(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0658(0x0020) MISSED OFFSET

	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)//offset:0x24895E0;
	void SetTextStyleSet(class UDataTable* NewTextStyleSet)//offset:0x2489550;
	void SetText(const struct FText& InText)//offset:0x2489480;
	void SetMinDesiredWidth(float InMinDesiredWidth)//offset:0x2488BD0;
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)//offset:0x2488690;
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush)//offset:0x2488520;
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)//offset:0x24884A0;
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)//offset:0x2488410;
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo)//offset:0x24882F0;
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)//offset:0x2488200;
	void SetAutoWrapText(bool InAutoTextWrap)//offset:0x24880F0;
	struct FText GetText()//offset:0x24874A0;
	class URichTextBlockDecorator* GetDecoratorByClass(class URichTextBlockDecorator* DecoratorClass)//offset:0x2487220;
	void ClearAllDefaultStyleOverrides()//offset:0x2486D80;
};


// Class UMG.RichTextBlockImageDecorator
// size:0x0008 (0x0028 - 0x0030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class UMG.SafeZone
// size:0x0018 (0x0120 - 0x0138)
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadRight;                                                 // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadTop;                                                   // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadBottom;                                                // 0x0123(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)//offset:0x2489130;
};


// Class UMG.SafeZoneSlot
// size:0x0028 (0x0038 - 0x0060)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class UMG.ScaleBox
// size:0x0020 (0x0120 - 0x0140)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreInheritedScale;                                     // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0129(0x0017) MISSED OFFSET

	void SetUserSpecifiedScale(float InUserSpecifiedScale)//offset:0x2489660;
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection)//offset:0x2489400;
	void SetStretch(TEnumAsByte<EStretch> InStretch)//offset:0x2489380;
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)//offset:0x24888C0;
};


// Class UMG.ScaleBoxSlot
// size:0x0028 (0x0038 - 0x0060)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2477A20;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2488D50;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2476B30;
};


// Class UMG.ScrollBar
// size:0x0508 (0x0108 - 0x0610)
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0108(0x04D0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysShowScrollbarTrack;                                // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x05E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05E3(0x0001) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x05E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x05EC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x05FC(0x0014) MISSED OFFSET

	void SetState(float InOffsetFraction, float InThumbSizeFraction)//offset:0x24892B0;
};


// Class UMG.ScrollBox
// size:0x0760 (0x0120 - 0x0880)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0120(0x0228) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0348(0x04D0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0818(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0820(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0829(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x082A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x082B(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x082C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ScrollbarPadding;                                         // 0x0834(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbarTrack;                                 // 0x0845(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0846(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateWheelScrolling;                                   // 0x0847(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       NavigationDestination;                                    // 0x0848(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x084C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                   // 0x0850(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickDragScrolling;                            // 0x0851(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0852(0x0002) MISSED OFFSET
	float                                              WheelScrollMultiplier;                                    // 0x0854(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnUserScrolled;                                           // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0868(0x0018) MISSED OFFSET

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier)//offset:0x24897E0;
	void SetScrollOffset(float NewScrollOffset)//offset:0x2488F80;
	void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility)//offset:0x2488F00;
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)//offset:0x24890A0;
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)//offset:0x2489000;
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation)//offset:0x2488CD0;
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)//offset:0x2488180;
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)//offset:0x2488060;
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)//offset:0x2487FD0;
	void SetAllowOverscroll(bool NewAllowOverscroll)//offset:0x2487F40;
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding)//offset:0x2487DE0;
	void ScrollToStart()//offset:0x2487DC0;
	void ScrollToEnd()//offset:0x2487DA0;
	float GetViewOffsetFraction()//offset:0x2487540;
	float GetScrollOffsetOfEnd()//offset:0x2487470;
	float GetScrollOffset()//offset:0x2487440;
	void EndInertialScrolling()//offset:0x2486EA0;
};


// Class UMG.ScrollBoxSlot
// size:0x0020 (0x0038 - 0x0058)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24896E0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2488DE0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24887C0;
};


// Class UMG.SizeBox
// size:0x0038 (0x0120 - 0x0158)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAspectRatio;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverride_WidthOverride;                                  // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_HeightOverride;                                 // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredWidth;                                // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredHeight;                               // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredWidth;                                // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredHeight;                               // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinAspectRatio;                                 // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxAspectRatio;                                 // 0x0150(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	void SetWidthOverride(float InWidthOverride)//offset:0x2489860;
	void SetMinDesiredWidth(float InMinDesiredWidth)//offset:0x2488C50;
	void SetMinDesiredHeight(float InMinDesiredHeight)//offset:0x2488B50;
	void SetMinAspectRatio(float InMinAspectRatio)//offset:0x2488AD0;
	void SetMaxDesiredWidth(float InMaxDesiredWidth)//offset:0x2488A50;
	void SetMaxDesiredHeight(float InMaxDesiredHeight)//offset:0x24889D0;
	void SetMaxAspectRatio(float InMaxAspectRatio)//offset:0x2488950;
	void SetHeightOverride(float InHeightOverride)//offset:0x2488740;
	void ClearWidthOverride()//offset:0x2486E80;
	void ClearMinDesiredWidth()//offset:0x2486E60;
	void ClearMinDesiredHeight()//offset:0x2486E40;
	void ClearMinAspectRatio()//offset:0x2486E20;
	void ClearMaxDesiredWidth()//offset:0x2486E00;
	void ClearMaxDesiredHeight()//offset:0x2486DE0;
	void ClearMaxAspectRatio()//offset:0x2486DC0;
	void ClearHeightOverride()//offset:0x2486DA0;
};


// Class UMG.SizeBoxSlot
// size:0x0028 (0x0038 - 0x0060)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2489760;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2488E70;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2488840;
};


// Class UMG.SlateBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static struct FVector2D TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector)//offset:0x2489BE0;
	static struct FVector2D TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)//offset:0x2489AE0;
	static float TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)//offset:0x24899E0;
	static float TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)//offset:0x24898E0;
	static void ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)//offset:0x2487BC0;
	static void ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)//offset:0x2487A60;
	static void ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)//offset:0x2487960;
	static void LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)//offset:0x2487770;
	static struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)//offset:0x2487670;
	static bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)//offset:0x2487570;
	static struct FVector2D GetLocalTopLeft(const struct FGeometry& Geometry)//offset:0x2487380;
	static struct FVector2D GetLocalSize(const struct FGeometry& Geometry)//offset:0x24872C0;
	static struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry)//offset:0x2487160;
	static bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)//offset:0x2486EC0;
	static void AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)//offset:0x2486C20;
	static struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)//offset:0x2486B20;
};


// Class UMG.SlateVectorArtData
// size:0x0038 (0x0028 - 0x0060)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class UMG.SlateAccessibleWidgetData
// size:0x0058 (0x0028 - 0x0080)
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                               bCanChildrenBeAccessible;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	ESlateAccessibleBehavior                           AccessibleBehavior;                                       // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FText                                       AccessibleText;                                           // 0x0030(0x0028)
	struct FScriptDelegate                             AccessibleTextDelegate;                                   // 0x0048(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       AccessibleSummaryText;                                    // 0x0058(0x0028)
	struct FScriptDelegate                             AccessibleSummaryTextDelegate;                            // 0x0070(0x0014) (ZeroConstructor, InstancedReference)
};


// Class UMG.Slider
// size:0x03F0 (0x0108 - 0x04F8)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0014) (ZeroConstructor, InstancedReference)
	float                                              MinValue;                                                 // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0128(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x046C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x047C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x048D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               MouseUsesStep;                                            // 0x048E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresControllerLock;                                   // 0x048F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0494(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnMouseCaptureBegin;                                      // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMouseCaptureEnd;                                        // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControllerCaptureBegin;                                 // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControllerCaptureEnd;                                   // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnValueChanged;                                           // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	void SetValue(float InValue)//offset:0x248D930;
	void SetStepSize(float InValue)//offset:0x248D510;
	void SetSliderHandleColor(const struct FLinearColor& InValue)//offset:0x248D480;
	void SetSliderBarColor(const struct FLinearColor& InValue)//offset:0x248D3F0;
	void SetMinValue(float InValue)//offset:0x248D050;
	void SetMaxValue(float InValue)//offset:0x248CDC0;
	void SetLocked(bool InValue)//offset:0x248CC20;
	void SetIndentHandle(bool InValue)//offset:0x248CB10;
	float GetValue()//offset:0x248C360;
	float GetNormalizedValue()//offset:0x248C170;
};


// Class UMG.Spacer
// size:0x0018 (0x0108 - 0x0120)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	void SetSize(const struct FVector2D& InSize)//offset:0x248D370;
};


// Class UMG.SpinBox
// size:0x0418 (0x0108 - 0x0520)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0120(0x02E8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MinFractionalDigits;                                      // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxFractionalDigits;                                      // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUsesDeltaSnap;                                     // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              Delta;                                                    // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0428(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0489(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x048A(0x0006) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x0490(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct UEMulticastInlineDelegate                   OnValueChanged;                                           // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnValueCommitted;                                         // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnBeginSliderMovement;                                    // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnEndSliderMovement;                                      // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue;                                       // 0x04F8(0x0001) (Edit)
	unsigned char                                      bOverride_MaxValue;                                       // 0x04F8(0x0001) (Edit)
	unsigned char                                      bOverride_MinSliderValue;                                 // 0x04F8(0x0001) (Edit)
	unsigned char                                      bOverride_MaxSliderValue;                                 // 0x04F8(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x04FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x0504(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x050C(0x0014) MISSED OFFSET

	void SetValue(float NewValue)//offset:0x248D9B0;
	void SetMinValue(float NewValue)//offset:0x248D0D0;
	void SetMinSliderValue(float NewValue)//offset:0x248CFD0;
	void SetMinFractionalDigits(int NewValue)//offset:0x248CF40;
	void SetMaxValue(float NewValue)//offset:0x248CE40;
	void SetMaxSliderValue(float NewValue)//offset:0x248CD40;
	void SetMaxFractionalDigits(int NewValue)//offset:0x248CCB0;
	void SetForegroundColor(const struct FSlateColor& InForegroundColor)//offset:0x248CA20;
	void SetDelta(float NewValue)//offset:0x248C780;
	void SetAlwaysUsesDeltaSnap(bool bNewValue)//offset:0x248C3C0;
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)//offset:0x13CEB30;
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)//offset:0x13CEB30;
	void OnSpinBoxBeginSliderMovement__DelegateSignature()//offset:0x13CEB30;
	float GetValue()//offset:0x248C390;
	float GetMinValue()//offset:0x248C140;
	float GetMinSliderValue()//offset:0x248C110;
	int GetMinFractionalDigits()//offset:0x248C0E0;
	float GetMaxValue()//offset:0x248C0B0;
	float GetMaxSliderValue()//offset:0x248C080;
	int GetMaxFractionalDigits()//offset:0x248C050;
	float GetDelta()//offset:0x248BF80;
	bool GetAlwaysUsesDeltaSnap()//offset:0x248BF50;
	void ClearMinValue()//offset:0x248BF30;
	void ClearMinSliderValue()//offset:0x248BF10;
	void ClearMaxValue()//offset:0x248BEF0;
	void ClearMaxSliderValue()//offset:0x248BED0;
};


// Class UMG.TextBinding
// size:0x0008 (0x0060 - 0x0068)
class UTextBinding : public UPropertyBinding
{
public:

	struct FText GetTextValue()//offset:0x248C2C0;
	class FString GetStringValue()//offset:0x248C1A0;
};


// Class UMG.TextBlock
// size:0x0180 (0x0128 - 0x02A8)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0028) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0150(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0178(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0188(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 StrikeBrush;                                              // 0x01E0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0280(0x0014) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapWithInvalidationPanel;                               // 0x0294(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x0295(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	ETextTransformPolicy                               TextTransformPolicy;                                      // 0x0296(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSimpleTextMode;                                          // 0x0297(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET

	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)//offset:0x248D8B0;
	void SetText(const struct FText& InText)//offset:0x248D7C0;
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)//offset:0x248D590;
	void SetShadowOffset(const struct FVector2D& InShadowOffset)//offset:0x248D2F0;
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)//offset:0x248D260;
	void SetOpacity(float InOpacity)//offset:0x248D1E0;
	void SetMinDesiredWidth(float InMinDesiredWidth)//offset:0x248CEC0;
	void SetFont(const struct FSlateFontInfo& InFontInfo)//offset:0x248C900;
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)//offset:0x248C690;
	void SetAutoWrapText(bool InAutoTextWrap)//offset:0x248C600;
	struct FText GetText()//offset:0x248C220;
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial()//offset:0x248BFE0;
	class UMaterialInstanceDynamic* GetDynamicFontMaterial()//offset:0x248BFB0;
};


// Class UMG.Throbber
// size:0x00A8 (0x0108 - 0x01B0)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x010E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	void SetNumberOfPieces(int InNumberOfPieces)//offset:0x248D150;
	void SetAnimateVertically(bool bInAnimateVertically)//offset:0x248C570;
	void SetAnimateOpacity(bool bInAnimateOpacity)//offset:0x248C4E0;
	void SetAnimateHorizontally(bool bInAnimateHorizontally)//offset:0x248C450;
};


// Class UMG.TileView
// size:0x0020 (0x0368 - 0x0388)
class UTileView : public UListView
{
public:
	float                                              EntryHeight;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryWidth;                                               // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EListItemAlignment                                 TileAlignment;                                            // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapHorizontalNavigation;                                // 0x0371(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0372(0x0016) MISSED OFFSET

	void SetEntryWidth(float NewWidth)//offset:0x248C880;
	void SetEntryHeight(float NewHeight)//offset:0x248C800;
	float GetEntryWidth()//offset:0x248C030;
	float GetEntryHeight()//offset:0x248C010;
};


// Class UMG.TreeView
// size:0x0058 (0x0368 - 0x03C0)
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	struct FScriptDelegate                             BP_OnGetItemChildren;                                     // 0x0378(0x0014) (Edit, ZeroConstructor, InstancedReference)
	struct UEMulticastInlineDelegate                   BP_OnItemExpansionChanged;                                // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0398(0x0028) MISSED OFFSET

	void SetItemExpansion(class UObject* Item, bool bExpandItem)//offset:0x2493C50;
	void ExpandAll()//offset:0x24926E0;
	void CollapseAll()//offset:0x24926C0;
};


// Class UMG.UMGSequencePlayer
// size:0x0550 (0x0028 - 0x0578)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x0420(0x00E8)
	unsigned char                                      UnknownData02[0x70];                                      // 0x0508(0x0070) MISSED OFFSET

	void SetUserTag(const struct FName& InUserTag)//offset:0x24942D0;
	struct FName GetUserTag()//offset:0x2492900;
};


// Class UMG.UMGSequenceTickManager
// size:0x00F8 (0x0028 - 0x0120)
class UUMGSequenceTickManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: 
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0080(0x00A0) MISSED OFFSET
};


// Class UMG.UniformGridPanel
// size:0x0028 (0x0120 - 0x0148)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotWidth;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	void SetSlotPadding(const struct FMargin& InSlotPadding)//offset:0x2494240;
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)//offset:0x2493DA0;
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)//offset:0x2493D20;
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn)//offset:0x2492120;
};


// Class UMG.UniformGridSlot
// size:0x0018 (0x0038 - 0x0050)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2494360;
	void SetRow(int InRow)//offset:0x24941B0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x2493AB0;
	void SetColumn(int InColumn)//offset:0x24938B0;
};


// Class UMG.VerticalBox
// size:0x0010 (0x0120 - 0x0130)
class UVerticalBox : public UPanelWidget
{
public:

	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content)//offset:0x2496500;
};


// Class UMG.VerticalBoxSlot
// size:0x0028 (0x0038 - 0x0060)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                             Size;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x2497F60;
	void SetSize(const struct FSlateChildSize& InSize)//offset:0x2497CE0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x2497870;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24972B0;
};


// Class UMG.Viewport
// size:0x0048 (0x0120 - 0x0168)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0120(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0130(0x0038) MISSED OFFSET

	class AActor* Spawn(class AActor* ActorClass)//offset:0x2498180;
	void SetViewRotation(const struct FRotator& Rotation)//offset:0x2498070;
	void SetViewLocation(const struct FVector& Location)//offset:0x2497FE0;
	struct FRotator GetViewRotation()//offset:0x2496CE0;
	class UWorld* GetViewportWorld()//offset:0x2496D20;
	struct FVector GetViewLocation()//offset:0x2496CA0;
};


// Class UMG.VisibilityBinding
// size:0x0000 (0x0060 - 0x0060)
class UVisibilityBinding : public UPropertyBinding
{
public:

	ESlateVisibility GetValue()//offset:0x2496C70;
};


// Class UMG.WidgetAnimation
// size:0x0030 (0x0060 - 0x0090)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0068(0x0010) (ZeroConstructor)
	bool                                               bLegacyFinishOnStop;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class FString                                      DisplayLabel;                                             // 0x0080(0x0010) (ZeroConstructor)

	void UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)//offset:0x2498420;
	void UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)//offset:0x2498340;
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget)//offset:0x24982B0;
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget)//offset:0x2498220;
	float GetStartTime()//offset:0x2496C00;
	float GetEndTime()//offset:0x2496A00;
	void BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)//offset:0x2496680;
	void BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)//offset:0x24965A0;
};


// Class UMG.WidgetAnimationDelegateBinding
// size:0x0010 (0x0028 - 0x0038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                          // 0x0028(0x0010) (ZeroConstructor)
};


// Class UMG.WidgetAnimationPlayCallbackProxy
// size:0x0020 (0x0028 - 0x0048)
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   Finished;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)//offset:0x249B2E0;
	static class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)//offset:0x249B0C0;
};


// Class UMG.WidgetBinding
// size:0x0000 (0x0060 - 0x0060)
class UWidgetBinding : public UPropertyBinding
{
public:

	class UWidget* GetValue()//offset:0x249D670;
};


// Class UMG.WidgetBlueprintGeneratedClass
// size:0x0040 (0x0328 - 0x0368)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClassRequiresNativeTick;                                 // 0x0330(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x0338(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x0348(0x0010) (ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x0358(0x0010) (ZeroConstructor)
};


// Class UMG.WidgetBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static struct FEventReply UnlockMouse(struct FEventReply* Reply)//offset:0x249F670;
	static struct FEventReply Unhandled()//offset:0x249F600;
	static void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)//offset:0x249F3E0;
	static void SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate)//offset:0x249F350;
	static void SetWindowTitleBarCloseButtonActive(bool bActive)//offset:0x249F2D0;
	static struct FEventReply SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)//offset:0x249AB60;
	static struct FEventReply SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)//offset:0x249EC30;
	static void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode)//offset:0x249EAA0;
	static void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)//offset:0x249E9A0;
	static void SetInputMode_GameOnly(class APlayerController* PlayerController)//offset:0x249E920;
	static void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)//offset:0x249E7D0;
	static void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)//offset:0x249E670;
	static bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)//offset:0x249E530;
	static void SetFocusToGameViewport()//offset:0x249E490;
	static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)//offset:0x249E1A0;
	static void SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)//offset:0x249DFF0;
	static void SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)//offset:0x249DFF0;
	static void RestorePreviousWindowTitleBarState()//offset:0x249DF40;
	static struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply)//offset:0x249DE30;
	static struct FEventReply ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)//offset:0x249AE00;
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature()//offset:0x13CEB30;
	static struct FSlateBrush NoResourceBrush()//offset:0x249DD80;
	static struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)//offset:0x249DBE0;
	static struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)//offset:0x249DA40;
	static struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)//offset:0x249D930;
	static struct FEventReply LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)//offset:0x249D800;
	static bool IsDragDropping()//offset:0x249D7A0;
	static struct FEventReply Handled()//offset:0x249D730;
	static void GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)//offset:0x249D480;
	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)//offset:0x249D220;
	static struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event)//offset:0x249D0D0;
	static struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)//offset:0x249CFF0;
	static struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event)//offset:0x249CED0;
	static struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)//offset:0x249CDF0;
	static class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush)//offset:0x249CC60;
	static class UDragDropOperation* GetDragDroppingContent()//offset:0x249CBD0;
	static class UTexture2D* GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)//offset:0x249CA00;
	static class UMaterialInterface* GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)//offset:0x249C890;
	static class UObject* GetBrushResource(const struct FSlateBrush& Brush)//offset:0x249C720;
	static void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UInterface* Interface, bool TopLevelOnly)//offset:0x249C5B0;
	static void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UUserWidget* WidgetClass, bool TopLevelOnly)//offset:0x249C440;
	static struct FEventReply EndDragDrop(struct FEventReply* Reply)//offset:0x249C350;
	static void DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint)//offset:0x249C0D0;
	static void DrawText(struct FPaintContext* Context, const class FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint)//offset:0x249BF40;
	static void DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)//offset:0x249BD60;
	static void DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)//offset:0x249BB50;
	static void DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)//offset:0x249B990;
	static void DismissAllMenus()//offset:0x249B970;
	static struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)//offset:0x249B720;
	static struct FEventReply DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)//offset:0x249B540;
	static class UDragDropOperation* CreateDragDropOperation(class UDragDropOperation* OperationClass)//offset:0x249B030;
	static class UUserWidget* Create(class UObject* WorldContextObject, class UUserWidget* WidgetType, class APlayerController* OwningPlayer)//offset:0x249AF30;
	static struct FEventReply ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)//offset:0x249AE00;
	static struct FEventReply CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)//offset:0x249ACD0;
	static struct FEventReply CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)//offset:0x249AB60;
	static void CancelDragDrop()//offset:0x249AB40;
};


// Class UMG.WidgetComponent
// size:0x0120 (0x0480 - 0x05A0)
class UWidgetComponent : public UMeshComponent
{
public:
	class UUserWidget*                                 WidgetClass;                                              // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x0490(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRedrawRequested;                                         // 0x0491(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0492(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // 0x04A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x04AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveHardwareInput;                                    // 0x04B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowFocusable;                                         // 0x04B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWindowVisibility                                  WindowVisibility;                                         // 0x04B6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyGammaCorrection;                                    // 0x04B7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x04C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x04D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetBlendMode                                   BlendMode;                                                // 0x04E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x04E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x04E6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x04E7(0x0001) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x0530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bEditTimeUsable;                                          // 0x0531(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0532(0x0002) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x0534(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWidgetGeometryMode                                GeometryMode;                                             // 0x0540(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETickMode                                          TickMode;                                                 // 0x0548(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x27];                                      // 0x0549(0x0027) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0570(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x28];                                      // 0x0578(0x0028) MISSED OFFSET

	void SetWindowVisibility(EWindowVisibility InVisibility)//offset:0x249F580;
	void SetWindowFocusable(bool bInWindowFocusable)//offset:0x249F240;
	void SetWidgetSpace(EWidgetSpace NewSpace)//offset:0x249F1C0;
	void SetWidget(class UUserWidget* Widget)//offset:0x249F130;
	void SetTwoSided(bool bWantTwoSided)//offset:0x249F0A0;
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)//offset:0x249F010;
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen)//offset:0x249EF80;
	void SetTickMode(ETickMode InTickMode)//offset:0x249EF00;
	void SetRedrawTime(float InRedrawTime)//offset:0x249EE80;
	void SetPivot(const struct FVector2D& InPivot)//offset:0x249EDF0;
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer)//offset:0x249ED60;
	void SetManuallyRedraw(bool bUseManualRedraw)//offset:0x249EBA0;
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode)//offset:0x249E4B0;
	void SetDrawSize(const struct FVector2D& Size)//offset:0x249E410;
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)//offset:0x249E380;
	void SetCylinderArcAngle(float InCylinderArcAngle)//offset:0x249E300;
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)//offset:0x249DF60;
	void RequestRedraw()//offset:0x249DF20;
	bool IsWidgetVisible()//offset:0x249D7D0;
	EWindowVisibility GetWindowVisiblility()//offset:0x249D710;
	bool GetWindowFocusable()//offset:0x249D6F0;
	EWidgetSpace GetWidgetSpace()//offset:0x249D6D0;
	class UUserWidget* GetWidget()//offset:0x249D6A0;
	class UUserWidget* GetUserWidgetObject()//offset:0x249D640;
	bool GetTwoSided()//offset:0x249D620;
	bool GetTickWhenOffscreen()//offset:0x249D600;
	class UTextureRenderTarget2D* GetRenderTarget()//offset:0x249D450;
	float GetRedrawTime()//offset:0x249D430;
	struct FVector2D GetPivot()//offset:0x249D400;
	class ULocalPlayer* GetOwnerPlayer()//offset:0x249D3D0;
	class UMaterialInstanceDynamic* GetMaterialInstance()//offset:0x249D3A0;
	bool GetManuallyRedraw()//offset:0x1F57F40;
	EWidgetGeometryMode GetGeometryMode()//offset:0x249CDD0;
	struct FVector2D GetDrawSize()//offset:0x249CC20;
	bool GetDrawAtDesiredSize()//offset:0x249CC00;
	float GetCylinderArcAngle()//offset:0x249CBB0;
	struct FVector2D GetCurrentDrawSize()//offset:0x249CB70;
};


// Class UMG.WidgetInteractionComponent
// size:0x0200 (0x0200 - 0x0400)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0200(0x0018) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PointerIndex;                                             // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWidgetInteractionSource                           InteractionSource;                                        // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHitTesting;                                        // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x022B(0x0001) MISSED OFFSET
	float                                              DebugSphereLineThickness;                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLineThickness;                                       // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DebugColor;                                               // 0x0234(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x0244(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x02C0(0x008C) (Transient, IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x034C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x0354(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x0360(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FHitResult                                  LastHitResult;                                            // 0x0368(0x008C) (Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x03F4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x03F5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x03F6(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x9];                                       // 0x03F7(0x0009) MISSED OFFSET

	void SetFocus(class UWidget* FocusWidget)//offset:0x24A2600;
	void SetCustomHitResult(const struct FHitResult& HitResult)//offset:0x24A2410;
	bool SendKeyChar(const class FString& Characters, bool bRepeat)//offset:0x24A2230;
	void ScrollWheel(float ScrollDelta)//offset:0x24A21A0;
	void ReleasePointerKey(const struct FKey& Key)//offset:0x24A2030;
	bool ReleaseKey(const struct FKey& Key)//offset:0x24A1F30;
	void PressPointerKey(const struct FKey& Key)//offset:0x24A1CD0;
	bool PressKey(const struct FKey& Key, bool bRepeat)//offset:0x24A1B90;
	bool PressAndReleaseKey(const struct FKey& Key)//offset:0x24A1A90;
	bool IsOverInteractableWidget()//offset:0x24A1A60;
	bool IsOverHitTestVisibleWidget()//offset:0x24A1A30;
	bool IsOverFocusableWidget()//offset:0x24A1A00;
	struct FHitResult GetLastHitResult()//offset:0x24A1430;
	class UWidgetComponent* GetHoveredWidgetComponent()//offset:0x24A1400;
	struct FVector2D Get2DHitLocation()//offset:0x24A1360;
};


// Class UMG.WidgetLayoutLibrary
// size:0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget)//offset:0x24A3490;
	static class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget)//offset:0x24A3400;
	static class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget)//offset:0x24A3370;
	static class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget)//offset:0x24A32E0;
	static class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget)//offset:0x24A3250;
	static class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget)//offset:0x24A31C0;
	static class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget)//offset:0x24A3130;
	static class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget)//offset:0x24A30A0;
	static class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget)//offset:0x24A3010;
	static class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget)//offset:0x24A2F80;
	static class UGridSlot* SlotAsGridSlot(class UWidget* Widget)//offset:0x24A2EF0;
	static class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget)//offset:0x24A2E60;
	static class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget)//offset:0x24A2DD0;
	static void RemoveAllWidgets(class UObject* WorldContextObject)//offset:0x24A2120;
	static bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)//offset:0x24A1DC0;
	static struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject)//offset:0x24A18B0;
	static struct FVector2D GetViewportSize(class UObject* WorldContextObject)//offset:0x24A1820;
	static float GetViewportScale(class UObject* WorldContextObject)//offset:0x24A1790;
	static struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)//offset:0x24A16E0;
	static bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)//offset:0x24A1590;
	static struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject)//offset:0x24A1500;
	static struct FVector2D GetMousePositionOnPlatform()//offset:0x24A14C0;
};


// Class UMG.WidgetNavigation
// size:0x00D8 (0x0028 - 0x0100)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
};


// Class UMG.WidgetSwitcher
// size:0x0018 (0x0120 - 0x0138)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	void SetActiveWidgetIndex(int Index)//offset:0x24A2380;
	void SetActiveWidget(class UWidget* Widget)//offset:0x247ED90;
	class UWidget* GetWidgetAtIndex(int Index)//offset:0x24A1960;
	int GetNumWidgets()//offset:0x24A16B0;
	int GetActiveWidgetIndex()//offset:0x24A13D0;
	class UWidget* GetActiveWidget()//offset:0x24A13A0;
};


// Class UMG.WidgetSwitcherSlot
// size:0x0020 (0x0038 - 0x0058)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24A2B50;
	void SetPadding(const struct FMargin& InPadding)//offset:0x24A2910;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24A2690;
};


// Class UMG.WidgetTree
// size:0x0008 (0x0028 - 0x0030)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class UMG.WindowTitleBarArea
// size:0x0020 (0x0120 - 0x0140)
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleClickTogglesFullscreen;                            // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0122(0x001E) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24A2BD0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x24A29A0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24A2710;
};


// Class UMG.WindowTitleBarAreaSlot
// size:0x0028 (0x0038 - 0x0060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24A2C50;
	void SetPadding(const struct FMargin& InPadding)//offset:0x24A2A30;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24A2790;
};


// Class UMG.WrapBox
// size:0x0028 (0x0120 - 0x0148)
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WrapWidth;                                                // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              WrapSize;                                                 // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExplicitWrapWidth;                                       // 0x0130(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExplicitWrapSize;                                        // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x0133(0x0015) MISSED OFFSET

	void SetWrapSize(float InWrapSize)//offset:0x24A2D50;
	void SetInnerSlotPadding(const struct FVector2D& InPadding)//offset:0x24A2890;
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content)//offset:0x24A12C0;
};


// Class UMG.WrapBoxSlot
// size:0x0028 (0x0038 - 0x0060)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x24A2CD0;
	void SetPadding(const struct FMargin& InPadding)//offset:0x24A2AC0;
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)//offset:0x24A2810;
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)//offset:0x24A2580;
	void SetFillEmptySpace(bool InbFillEmptySpace)//offset:0x24A24F0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
