                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AutoSettings_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AutoSettings.InputLabel
// size:0x0030 (0x0260 - 0x0290)
class UInputLabel : public UUserWidget
{
public:
	int                                                MappingGroup;                                             // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                KeyGroup;                                                 // 0x0264(0x0008) (Edit, BlueprintVisible)
	bool                                               bUsePlayerKeyGroup;                                       // 0x026C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       IconTags;                                                 // 0x0270(0x0020) (Edit, BlueprintVisible)

	void UpdateLabel()//offset:0x788E70;
	void MappingsChanged(class APlayerController* Player)//offset:0x787470;
};


// Class AutoSettings.ActionLabel
// size:0x0068 (0x0290 - 0x02F8)
class UActionLabel : public UInputLabel
{
public:
	struct FName                                       ActionName;                                               // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyLabel*                                   KeyLabelWidgetClass;                                      // 0x0298(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class UWidget*                                     KeySeparatorWidgetClass;                                  // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                KeyContainer;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeyLabel*                                   PrimaryKeyLabel;                                          // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeyLabel*                                   ShiftLabel;                                               // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeyLabel*                                   CtrlLabel;                                                // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeyLabel*                                   AltLabel;                                                 // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeyLabel*                                   CmdLabel;                                                 // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ShiftSeparator;                                           // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     CtrlSeparator;                                            // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     AltSeparator;                                             // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     CmdSeparator;                                             // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class AutoSettings.InputMapping
// size:0x0038 (0x0260 - 0x0298)
class UInputMapping : public UUserWidget
{
public:
	int                                                MappingGroup;                                             // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                KeyGroup;                                                 // 0x0264(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       IconTags;                                                 // 0x0270(0x0020) (Edit, BlueprintVisible)
	class UBindCaptureButton*                          BindCaptureButton;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	void UpdateMapping()//offset:0x788E90;
	void UpdateLabel()//offset:0x788E70;
	void ChordCaptured(const struct FInputChord& InChord)//offset:0x785FD0;
	void BindChord(const struct FInputChord& InChord)//offset:0x785D10;
};


// Class AutoSettings.ActionMapping
// size:0x0010 (0x0298 - 0x02A8)
class UActionMapping : public UInputMapping
{
public:
	struct FName                                       ActionName;                                               // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActionLabel*                                ActionLabel;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class AutoSettings.AutoSettingsConfig
// size:0x0128 (0x0028 - 0x0150)
class UAutoSettingsConfig : public UObject
{
public:
	bool                                               bAutoInitializePlayerInputOverrides;                      // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowModifierKeys;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FText                                       ShiftModifierOverrideText;                                // 0x0030(0x0028) (Edit, Config)
	struct FText                                       CtrlModifierOverrideText;                                 // 0x0048(0x0028) (Edit, Config)
	struct FText                                       AltModifierOverrideText;                                  // 0x0060(0x0028) (Edit, Config)
	struct FText                                       CmdModifierOverrideText;                                  // 0x0078(0x0028) (Edit, Config)
	TArray<struct FInputMappingPreset>                 InputPresets;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               AllowMultipleBindingsPerKey;                              // 0x00A0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<struct FMappingGroupLink>                   MappingGroupLinks;                                        // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               BlacklistedActions;                                       // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               BlacklistedAxes;                                          // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKeyIconSet>                         KeyIconSets;                                              // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKeyFriendlyName>                    KeyFriendlyNames;                                         // 0x00E8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKeyGroup>                           KeyGroups;                                                // 0x00F8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKey>                                AllowedKeys;                                              // 0x0108(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKey>                                DisallowedKeys;                                           // 0x0118(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FKey>                                BindingEscapeKeys;                                        // 0x0128(0x0010) (Edit, ZeroConstructor, Config)
	float                                              MouseMoveCaptureDistance;                                 // 0x0138(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<struct FAxisAssociation>                    AxisAssociations;                                         // 0x0140(0x0010) (Edit, ZeroConstructor, Config)

	static struct FGameplayTag GetKeyGroupStatic(const struct FKey& Key)//offset:0x781430;
	static struct FText GetKeyFriendlyNameStatic(const struct FKey& Key)//offset:0x7812D0;
};


// Class AutoSettings.AutoSettingsPlayer
// size:0x0000 (0x0028 - 0x0028)
class UAutoSettingsPlayer : public UInterface
{
public:

	void SaveInputMappings(const struct FPlayerInputMappings& InputMappings)//offset:0x7818F0;
	class FString GetUniquePlayerIdentifier()//offset:0x7815F0;
	bool GetInputMappings(struct FPlayerInputMappings* InputMappings)//offset:0x781130;
	struct FInputMappingPreset GetDefaultInputMappingPreset()//offset:0x781020;
};


// Class AutoSettings.AutoSettingsValidationSubsystem
// size:0x0000 (0x0030 - 0x0030)
class UAutoSettingsValidationSubsystem : public UGameInstanceSubsystem
{
public:
};


// Class AutoSettings.AutoSettingWidget
// size:0x0050 (0x0260 - 0x02B0)
class UAutoSettingWidget : public UUserWidget
{
public:
	struct FName                                       CVarName;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USettingValueMask*                           ValueMask;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSave;                                                // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoApply;                                               // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       SettingTags;                                              // 0x0278(0x0020) (Edit, BlueprintVisible)
	class FString                                      CurrentValue;                                             // 0x0298(0x0010) (ZeroConstructor)
	bool                                               bHasUnappliedChange;                                      // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUnsavedChange;                                        // 0x02A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatingSettingSelection;                                // 0x02AA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x02AB(0x0005) MISSED OFFSET

	void UpdateSelection(const class FString& Value)//offset:0x781E10;
	void Save()//offset:0x7818D0;
	bool HasUnsavedChange()//offset:0x781690;
	bool HasUnappliedChange()//offset:0x781670;
	void Cancel()//offset:0x780C80;
	void ApplySettingValue(const class FString& Value, bool bSaveIfPossible)//offset:0x780B50;
	void Apply()//offset:0x780B30;
};


// Class AutoSettings.AxisLabel
// size:0x0018 (0x0290 - 0x02A8)
class UAxisLabel : public UInputLabel
{
public:
	struct FName                                       AxisName;                                                 // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UKeyLabel*                                   KeyLabel;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class AutoSettings.AxisMapping
// size:0x0018 (0x0298 - 0x02B0)
class UAxisMapping : public UInputMapping
{
public:
	struct FName                                       AxisName;                                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	class UAxisLabel*                                  AxisLabel;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class AutoSettings.BindCaptureButton
// size:0x0030 (0x0260 - 0x0290)
class UBindCaptureButton : public UUserWidget
{
public:
	struct FGameplayTag                                KeyGroup;                                                 // 0x0260(0x0008)
	class UBindCapturePrompt*                          BindCapturePromptClass;                                   // 0x0268(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	int                                                CapturePromptZOrder;                                      // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET
	class UBindCapturePrompt*                          Prompt;                                                   // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	class UBindCapturePrompt* StartCapture()//offset:0x781DE0;
	void InitializePrompt(class UBindCapturePrompt* PromptWidget)//offset:0x7816B0;
	void ChordCaptured(const struct FInputChord& Chord)//offset:0x780D50;
};


// Class AutoSettings.BindCapturePrompt
// size:0x0060 (0x0260 - 0x02C0)
class UBindCapturePrompt : public UUserWidget
{
public:
	bool                                               bIgnoreGameViewportInputWhileCapturing;                   // 0x0260(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRestrictKeyGroup;                                        // 0x0261(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBindingCaptureMode                                CaptureMode;                                              // 0x0262(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0263(0x0001) MISSED OFFSET
	struct FGameplayTag                                KeyGroup;                                                 // 0x0264(0x0008)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnChordCaptured;                                          // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnChordRejected;                                          // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCapturePromptClosed;                                    // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FKey>                                KeysDown;                                                 // 0x02A0(0x0010) (ZeroConstructor)
	bool                                               PreviousIgnoreInput;                                      // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	struct FVector2D                                   AccumulatedMouseDelta;                                    // 0x02B4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	bool IsKeyAllowed(const struct FKey& PrimaryKey)//offset:0x7817D0;
	struct FGameplayTag GetKeyGroup()//offset:0x781410;
	void Cancel()//offset:0x780CA0;
};


// Class AutoSettings.ToggleSetting
// size:0x0000 (0x02B0 - 0x02B0)
class UToggleSetting : public UAutoSettingWidget
{
public:

	void UpdateToggleState(bool State)//offset:0x78A660;
	void ToggleStateUpdated(bool State)//offset:0x780CC0;
};


// Class AutoSettings.CheckBoxSetting
// size:0x0008 (0x02B0 - 0x02B8)
class UCheckBoxSetting : public UToggleSetting
{
public:
	class UCheckBox*                                   CheckBox;                                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	void CheckBoxStateChanged(bool IsChecked)//offset:0x780CC0;
};


// Class AutoSettings.SelectSetting
// size:0x0020 (0x02B0 - 0x02D0)
class USelectSetting : public UAutoSettingWidget
{
public:
	TArray<struct FSettingOption>                      Options;                                                  // 0x02B0(0x0010) (Edit, ZeroConstructor)
	class USettingOptionFactory*                       OptionFactory;                                            // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatingSettingOptions;                                  // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET

	void UpdateOptions(TArray<struct FSettingOption> InOptions)//offset:0x788EB0;
	void RefreshOptions()//offset:0x7876A0;
};


// Class AutoSettings.ComboBoxSetting
// size:0x0008 (0x02D0 - 0x02D8)
class UComboBoxSetting : public USelectSetting
{
public:
	class UComboBoxString*                             ComboBox;                                                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	void ComboBoxSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)//offset:0x780E60;
};


// Class AutoSettings.ConsoleUtils
// size:0x0000 (0x0028 - 0x0028)
class UConsoleUtils : public UBlueprintFunctionLibrary
{
public:

	static void SetStringCVar(const struct FName& Name, const class FString& Value)//offset:0x781CC0;
	static void SetIntCVar(const struct FName& Name, int Value)//offset:0x781C00;
	static void SetFloatCVar(const struct FName& Name, float Value)//offset:0x781B40;
	static void SetBoolCVar(const struct FName& Name, bool Value)//offset:0x781A80;
	static bool IsCVarRegistered(const struct FName& Name)//offset:0x781740;
	static class FString GetStringCVar(const struct FName& Name)//offset:0x781520;
	static int GetIntCVar(const struct FName& Name)//offset:0x781240;
	static float GetFloatCVar(const struct FName& Name)//offset:0x7810A0;
	static bool GetBoolCVar(const struct FName& Name)//offset:0x780F90;
};


// Class AutoSettings.CVarChangeListener
// size:0x0058 (0x0028 - 0x0080)
class UCVarChangeListener : public UObject
{
public:
};


// Class AutoSettings.CVarChangeListenerManager
// size:0x0050 (0x0028 - 0x0078)
class UCVarChangeListenerManager : public UObject
{
public:
	TMap<struct FName, class UCVarChangeListener*>     Listeners;                                                // 0x0028(0x0050)

	static void AddStringCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x780A10;
	static void AddIntCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x7808F0;
	static void AddFloatCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x7807D0;
	static void AddBoolCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x7806B0;
};


// Class AutoSettings.GlobalKeyIconTagManager
// size:0x0030 (0x0028 - 0x0058)
class UGlobalKeyIconTagManager : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnGlobalKeyIconTagsModified;                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FGameplayTagContainer                       GlobalKeyIconTags;                                        // 0x0038(0x0020)

	static void SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags)//offset:0x788520;
	static class UTexture* GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags)//offset:0x786710;
};


// Class AutoSettings.InputMappingManager
// size:0x0038 (0x0028 - 0x0060)
class UInputMappingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnMappingsChanged;                                        // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPlayerInputMappings>                PlayerInputOverrides;                                     // 0x0040(0x0010) (ZeroConstructor, Config)
	TArray<class APlayerController*>                   RegisteredPlayerControllers;                              // 0x0050(0x0010) (ZeroConstructor)

	static void SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup)//offset:0x788B30;
	static void SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset, bool bIsCustomized)//offset:0x7889C0;
	static void SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag)//offset:0x788900;
	void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor)//offset:0x787520;
	static bool InitializePlayerInputOverridesStatic(class APlayerController* Player)//offset:0x7873E0;
	static struct FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player)//offset:0x786FC0;
	static struct FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, const struct FName& AxisName, float Scale, int MappingGroup)//offset:0x786E00;
	static struct FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, const struct FName& ActionName, int MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)//offset:0x786BF0;
	static TArray<struct FInputMappingPreset> GetDefaultInputPresets()//offset:0x786410;
	static class UInputMappingManager* Get()//offset:0x7862D0;
	static void AddPlayerAxisOverrideStatic(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)//offset:0x785900;
	void AddPlayerAxisOverride(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)//offset:0x7856F0;
	static void AddPlayerActionOverrideStatic(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)//offset:0x7854F0;
	void AddPlayerActionOverride(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)//offset:0x7852E0;
};


// Class AutoSettings.KeyLabel
// size:0x0068 (0x0260 - 0x02C8)
class UKeyLabel : public UUserWidget
{
public:
	struct FText                                       KeyInvalidText;                                           // 0x0260(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       LabelOverride;                                            // 0x0278(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        Key;                                                      // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagContainer                       IconTags;                                                 // 0x02A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	void UpdateKeyLabel()//offset:0x13CEB30;
	void OnGlobalKeyIconTagsModified()//offset:0x787500;
	bool HasValidKey()//offset:0x7873B0;
	bool HasIcon()//offset:0x787380;
	ESlateVisibility GetIconVisibility()//offset:0x786890;
	struct FSlateBrush GetIconBrush()//offset:0x786660;
	class UTexture* GetIcon()//offset:0x786630;
	ESlateVisibility GetDisplayNameVisibility()//offset:0x786600;
	struct FText GetDisplayName()//offset:0x786560;
};


// Class AutoSettings.SliderSetting
// size:0x0008 (0x02B0 - 0x02B8)
class USliderSetting : public UAutoSettingWidget
{
public:
	float                                              LeftValue;                                                // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightValue;                                               // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	void UpdateSliderValue(float NormalizedValue, float RawValue)//offset:0x78A590;
	void SliderValueUpdated(float NormalizedValue)//offset:0x78A510;
	bool ShouldSaveCurrentValue()//offset:0x786890;
	void OnSliderValueUpdated(float NormalizedValue, float RawValue)//offset:0x13CEB30;
};


// Class AutoSettings.NativeSliderSetting
// size:0x0010 (0x02B8 - 0x02C8)
class UNativeSliderSetting : public USliderSetting
{
public:
	class USlider*                                     Slider;                                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bMouseCaptureInProgress;                                  // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET

	void SliderValueChanged(float NewValue)//offset:0x788DD0;
	void SliderMouseCaptureEnd()//offset:0x788DB0;
	void SliderMouseCaptureBegin()//offset:0x788D90;
};


// Class AutoSettings.RadioButton
// size:0x0040 (0x0260 - 0x02A0)
class URadioButton : public UUserWidget
{
public:
	struct UEMulticastInlineDelegate                   OnSelected;                                               // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FText                                       Label;                                                    // 0x0270(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      Value;                                                    // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Selected;                                                 // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET

	void UpdateSelected(bool InSelected)//offset:0x13CEB30;
	void UpdateLabel(const struct FText& InLabel)//offset:0x13CEB30;
	void TriggerSelection()//offset:0x788E50;
	void SetValue(const class FString& InValue)//offset:0x788C80;
	void SetSelected(bool InSelected)//offset:0x788BF0;
	void SetLabel(const struct FText& InLabel)//offset:0x7885F0;
	class FString GetValue()//offset:0x7871B0;
	bool GetSelected()//offset:0x787190;
	struct FText GetLabel()//offset:0x786990;
};


// Class AutoSettings.RadioSelect
// size:0x0040 (0x0260 - 0x02A0)
class URadioSelect : public UUserWidget
{
public:
	TArray<struct FSettingOption>                      Options;                                                  // 0x0260(0x0010) (Edit, ZeroConstructor)
	class URadioButton*                                RadioButtonClass;                                         // 0x0270(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	struct UEMulticastInlineDelegate                   SelectionChangedEvent;                                    // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPanelWidget*                                ButtonContainer;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class URadioButton*>                        RadioButtons;                                             // 0x0290(0x0010) (ExportObject, ZeroConstructor)

	void SetOptions(TArray<struct FSettingOption> InOptions)//offset:0x788710;
	void Select(const class FString& Value)//offset:0x788430;
	TArray<struct FSettingOption> GetOptions()//offset:0x786A20;
	void ButtonSelected(const class FString& Value)//offset:0x785E20;
};


// Class AutoSettings.RadioSelectSetting
// size:0x0010 (0x02D0 - 0x02E0)
class URadioSelectSetting : public USelectSetting
{
public:
	class URadioButton*                                RadioButtonClass;                                         // 0x02D0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class URadioSelect*                                RadioSelect;                                              // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	void RadioSelectionChanged(const class FString& Value)//offset:0x7875B0;
};


// Class AutoSettings.SettingOptionFactory
// size:0x0000 (0x0028 - 0x0028)
class USettingOptionFactory : public UObject
{
public:

	TArray<struct FSettingOption> ConstructOptions()//offset:0x7860E0;
};


// Class AutoSettings.ResolutionOptionFactory
// size:0x0000 (0x0028 - 0x0028)
class UResolutionOptionFactory : public USettingOptionFactory
{
public:
};


// Class AutoSettings.ResolutionStringUtils
// size:0x0000 (0x0028 - 0x0028)
class UResolutionStringUtils : public UBlueprintFunctionLibrary
{
public:
};


// Class AutoSettings.SettingValueMask
// size:0x0000 (0x0028 - 0x0028)
class USettingValueMask : public UObject
{
public:

	class FString RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue)//offset:0x78A240;
	class FString MaskValue(const class FString& ConsoleValue)//offset:0x78A110;
};


// Class AutoSettings.ResolutionValueMask
// size:0x0000 (0x0028 - 0x0028)
class UResolutionValueMask : public USettingValueMask
{
public:
};


// Class AutoSettings.SettingContainerUtils
// size:0x0000 (0x0028 - 0x0028)
class USettingContainerUtils : public UBlueprintFunctionLibrary
{
public:

	static void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)//offset:0x788230;
	static TArray<class UAutoSettingWidget*> GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)//offset:0x786300;
	static bool DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent)//offset:0x786200;
	static bool DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent)//offset:0x786130;
	static void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)//offset:0x785F10;
	static void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)//offset:0x785AF0;
};


// Class AutoSettings.SettingsManager
// size:0x0040 (0x0028 - 0x0068)
class USettingsManager : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSettingSaved;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class FString                                      IniName;                                                  // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      IniFilename;                                              // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      SectionName;                                              // 0x0058(0x0010) (ZeroConstructor)

	static void SaveSettingStatic(const struct FAutoSettingData& SettingData)//offset:0x7882F0;
	static void RegisterStringCVarSettingWithCallback(const struct FName& Name, const class FString& DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x788070;
	static void RegisterStringCVarSetting(const struct FName& Name, const class FString& DefaultValue, const class FString& Help)//offset:0x787F40;
	static void RegisterIntCVarSettingWithCallback(const struct FName& Name, int DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x787D90;
	static void RegisterIntCVarSetting(const struct FName& Name, int DefaultValue, const class FString& Help)//offset:0x787C80;
	static void RegisterFloatCVarSettingWithCallback(const struct FName& Name, float DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x787AC0;
	static void RegisterFloatCVarSetting(const struct FName& Name, float DefaultValue, const class FString& Help)//offset:0x7879A0;
	static void RegisterBoolCVarSettingWithCallback(const struct FName& Name, bool DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)//offset:0x7877F0;
	static void RegisterBoolCVarSetting(const struct FName& Name, bool DefaultValue, const class FString& Help)//offset:0x7876C0;
	static class FString GetValue(const struct FName& Key, bool bPreferConfigValue)//offset:0x787270;
	static class FString GetInitialValue(const struct FName& Key)//offset:0x7868C0;
	static void AutoDetectSettingsStatic()//offset:0x785CF0;
	static void ApplySettingStatic(const struct FAutoSettingData& SettingData)//offset:0x785BB0;
};


// Class AutoSettings.Spinner
// size:0x0030 (0x0260 - 0x0290)
class USpinner : public UUserWidget
{
public:
	TArray<struct FSettingOption>                      Options;                                                  // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAllowWrapping;                                           // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	struct UEMulticastInlineDelegate                   SelectionChangedEvent;                                    // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	void SelectValue(const class FString& Value)//offset:0x78A420;
	void SelectIndex(int Index)//offset:0x78A390;
	void Previous()//offset:0x78A220;
	void Next()//offset:0x78A200;
	bool HasValidPrevious()//offset:0x78A0E0;
	bool HasValidNext()//offset:0x78A0B0;
	struct FSettingOption GetCurrentOption()//offset:0x789FD0;
	int GetCurrentIndex()//offset:0x789FB0;
};


// Class AutoSettings.SpinnerSetting
// size:0x0008 (0x02D0 - 0x02D8)
class USpinnerSetting : public USelectSetting
{
public:
	class USpinner*                                    Spinner;                                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SpinnerSelectionChanged(const class FString& Value)//offset:0x7875B0;
};


// Class AutoSettings.WindowModeValueMask
// size:0x0000 (0x0028 - 0x0028)
class UWindowModeValueMask : public USettingValueMask
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
