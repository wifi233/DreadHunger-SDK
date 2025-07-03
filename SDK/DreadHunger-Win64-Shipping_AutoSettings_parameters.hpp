                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AutoSettings_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AutoSettings.InputLabel.UpdateLabel
struct UInputLabel_UpdateLabel_Params
{
};

// Function AutoSettings.InputLabel.MappingsChanged
struct UInputLabel_MappingsChanged_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.InputMapping.UpdateMapping
struct UInputMapping_UpdateMapping_Params
{
};

// Function AutoSettings.InputMapping.UpdateLabel
struct UInputMapping_UpdateLabel_Params
{
};

// Function AutoSettings.InputMapping.ChordCaptured
struct UInputMapping_ChordCaptured_Params
{
	struct FInputChord                                 InChord;                                                  // (Parm)
};

// Function AutoSettings.InputMapping.BindChord
struct UInputMapping_BindChord_Params
{
	struct FInputChord                                 InChord;                                                  // (Parm)
};

// Function AutoSettings.AutoSettingsConfig.GetKeyGroupStatic
struct UAutoSettingsConfig_GetKeyGroupStatic_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.AutoSettingsConfig.GetKeyFriendlyNameStatic
struct UAutoSettingsConfig_GetKeyFriendlyNameStatic_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.AutoSettingsPlayer.SaveInputMappings
struct UAutoSettingsPlayer_SaveInputMappings_Params
{
	struct FPlayerInputMappings                        InputMappings;                                            // (Parm)
};

// Function AutoSettings.AutoSettingsPlayer.GetUniquePlayerIdentifier
struct UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.AutoSettingsPlayer.GetInputMappings
struct UAutoSettingsPlayer_GetInputMappings_Params
{
	struct FPlayerInputMappings                        InputMappings;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.AutoSettingsPlayer.GetDefaultInputMappingPreset
struct UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params
{
	struct FInputMappingPreset                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.AutoSettingWidget.UpdateSelection
struct UAutoSettingWidget_UpdateSelection_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function AutoSettings.AutoSettingWidget.Save
struct UAutoSettingWidget_Save_Params
{
};

// Function AutoSettings.AutoSettingWidget.HasUnsavedChange
struct UAutoSettingWidget_HasUnsavedChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.AutoSettingWidget.HasUnappliedChange
struct UAutoSettingWidget_HasUnappliedChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.AutoSettingWidget.Cancel
struct UAutoSettingWidget_Cancel_Params
{
};

// Function AutoSettings.AutoSettingWidget.ApplySettingValue
struct UAutoSettingWidget_ApplySettingValue_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
	bool                                               bSaveIfPossible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.AutoSettingWidget.Apply
struct UAutoSettingWidget_Apply_Params
{
};

// Function AutoSettings.BindCaptureButton.StartCapture
struct UBindCaptureButton_StartCapture_Params
{
	class UBindCapturePrompt*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AutoSettings.BindCaptureButton.InitializePrompt
struct UBindCaptureButton_InitializePrompt_Params
{
	class UBindCapturePrompt*                          PromptWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AutoSettings.BindCaptureButton.ChordCaptured
struct UBindCaptureButton_ChordCaptured_Params
{
	struct FInputChord                                 Chord;                                                    // (Parm)
};

// Function AutoSettings.BindCapturePrompt.IsKeyAllowed
struct UBindCapturePrompt_IsKeyAllowed_Params
{
	struct FKey                                        PrimaryKey;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.BindCapturePrompt.GetKeyGroup
struct UBindCapturePrompt_GetKeyGroup_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.BindCapturePrompt.Cancel
struct UBindCapturePrompt_Cancel_Params
{
};

// Function AutoSettings.ToggleSetting.UpdateToggleState
struct UToggleSetting_UpdateToggleState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.ToggleSetting.ToggleStateUpdated
struct UToggleSetting_ToggleStateUpdated_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
struct UCheckBoxSetting_CheckBoxStateChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SelectSetting.UpdateOptions
struct USelectSetting_UpdateOptions_Params
{
	TArray<struct FSettingOption>                      InOptions;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AutoSettings.SelectSetting.RefreshOptions
struct USelectSetting_RefreshOptions_Params
{
};

// Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
struct UComboBoxSetting_ComboBoxSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.SetStringCVar
struct UConsoleUtils_SetStringCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function AutoSettings.ConsoleUtils.SetIntCVar
struct UConsoleUtils_SetIntCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.SetFloatCVar
struct UConsoleUtils_SetFloatCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.SetBoolCVar
struct UConsoleUtils_SetBoolCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.IsCVarRegistered
struct UConsoleUtils_IsCVarRegistered_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.GetStringCVar
struct UConsoleUtils_GetStringCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.ConsoleUtils.GetIntCVar
struct UConsoleUtils_GetIntCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.GetFloatCVar
struct UConsoleUtils_GetFloatCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.ConsoleUtils.GetBoolCVar
struct UConsoleUtils_GetBoolCVar_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
struct UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
struct UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
struct UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
struct UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.GlobalKeyIconTagManager.SetGlobalKeyIconTags
struct UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params
{
	struct FGameplayTagContainer                       InGlobalIconTags;                                         // (Parm)
};

// Function AutoSettings.GlobalKeyIconTagManager.GetIconForKey
struct UGlobalKeyIconTagManager_GetIconForKey_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	struct FGameplayTagContainer                       IconTags;                                                 // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.SetPlayerKeyGroupStatic
struct UInputMappingManager_SetPlayerKeyGroupStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                KeyGroup;                                                 // (Parm)
};

// Function AutoSettings.InputMappingManager.SetPlayerInputPresetStatic
struct UInputMappingManager_SetPlayerInputPresetStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputMappingPreset                         Preset;                                                   // (Parm)
	bool                                               bIsCustomized;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.SetPlayerInputPresetByTag
struct UInputMappingManager_SetPlayerInputPresetByTag_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                PresetTag;                                                // (Parm)
};

// Function AutoSettings.InputMappingManager.OnRegisteredPlayerControllerDestroyed
struct UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.InitializePlayerInputOverridesStatic
struct UInputMappingManager_InitializePlayerInputOverridesStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.GetPlayerInputMappingsStatic
struct UInputMappingManager_GetPlayerInputMappingsStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInputMappings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.InputMappingManager.GetPlayerAxisMappingStatic
struct UInputMappingManager_GetPlayerAxisMappingStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MappingGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.InputMappingManager.GetPlayerActionMappingStatic
struct UInputMappingManager_GetPlayerActionMappingStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MappingGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                KeyGroup;                                                 // (Parm)
	bool                                               bUsePlayerKeyGroup;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.InputMappingManager.GetDefaultInputPresets
struct UInputMappingManager_GetDefaultInputPresets_Params
{
	TArray<struct FInputMappingPreset>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.InputMappingManager.Get
struct UInputMappingManager_Get_Params
{
	class UInputMappingManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.AddPlayerAxisOverrideStatic
struct UInputMappingManager_AddPlayerAxisOverrideStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        NewMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                MappingGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyKeyGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.AddPlayerAxisOverride
struct UInputMappingManager_AddPlayerAxisOverride_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        NewMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                MappingGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyKeyGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.AddPlayerActionOverrideStatic
struct UInputMappingManager_AddPlayerActionOverrideStatic_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                MappingGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyKeyGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.InputMappingManager.AddPlayerActionOverride
struct UInputMappingManager_AddPlayerActionOverride_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                MappingGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyKeyGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.KeyLabel.UpdateKeyLabel
struct UKeyLabel_UpdateKeyLabel_Params
{
};

// Function AutoSettings.KeyLabel.OnGlobalKeyIconTagsModified
struct UKeyLabel_OnGlobalKeyIconTagsModified_Params
{
};

// Function AutoSettings.KeyLabel.HasValidKey
struct UKeyLabel_HasValidKey_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.KeyLabel.HasIcon
struct UKeyLabel_HasIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.KeyLabel.GetIconVisibility
struct UKeyLabel_GetIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.KeyLabel.GetIconBrush
struct UKeyLabel_GetIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.KeyLabel.GetIcon
struct UKeyLabel_GetIcon_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.KeyLabel.GetDisplayNameVisibility
struct UKeyLabel_GetDisplayNameVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.KeyLabel.GetDisplayName
struct UKeyLabel_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.SliderSetting.UpdateSliderValue
struct USliderSetting_UpdateSliderValue_Params
{
	float                                              NormalizedValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SliderSetting.SliderValueUpdated
struct USliderSetting_SliderValueUpdated_Params
{
	float                                              NormalizedValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
struct USliderSetting_ShouldSaveCurrentValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.SliderSetting.OnSliderValueUpdated
struct USliderSetting_OnSliderValueUpdated_Params
{
	float                                              NormalizedValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.NativeSliderSetting.SliderValueChanged
struct UNativeSliderSetting_SliderValueChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
struct UNativeSliderSetting_SliderMouseCaptureEnd_Params
{
};

// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
struct UNativeSliderSetting_SliderMouseCaptureBegin_Params
{
};

// Function AutoSettings.RadioButton.UpdateSelected
struct URadioButton_UpdateSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.RadioButton.UpdateLabel
struct URadioButton_UpdateLabel_Params
{
	struct FText                                       InLabel;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AutoSettings.RadioButton.TriggerSelection
struct URadioButton_TriggerSelection_Params
{
};

// Function AutoSettings.RadioButton.SetValue
struct URadioButton_SetValue_Params
{
	class FString                                      InValue;                                                  // (Parm, ZeroConstructor)
};

// Function AutoSettings.RadioButton.SetSelected
struct URadioButton_SetSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.RadioButton.SetLabel
struct URadioButton_SetLabel_Params
{
	struct FText                                       InLabel;                                                  // (Parm)
};

// Function AutoSettings.RadioButton.GetValue
struct URadioButton_GetValue_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.RadioButton.GetSelected
struct URadioButton_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.RadioButton.GetLabel
struct URadioButton_GetLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.RadioSelect.SetOptions
struct URadioSelect_SetOptions_Params
{
	TArray<struct FSettingOption>                      InOptions;                                                // (Parm, ZeroConstructor)
};

// Function AutoSettings.RadioSelect.Select
struct URadioSelect_Select_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function AutoSettings.RadioSelect.GetOptions
struct URadioSelect_GetOptions_Params
{
	TArray<struct FSettingOption>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.RadioSelect.ButtonSelected
struct URadioSelect_ButtonSelected_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
struct URadioSelectSetting_RadioSelectionChanged_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function AutoSettings.SettingOptionFactory.ConstructOptions
struct USettingOptionFactory_ConstructOptions_Params
{
	TArray<struct FSettingOption>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.SettingValueMask.RecombineValues
struct USettingValueMask_RecombineValues_Params
{
	class FString                                      SettingValue;                                             // (Parm, ZeroConstructor)
	class FString                                      ConsoleValue;                                             // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.SettingValueMask.MaskValue
struct USettingValueMask_MaskValue_Params
{
	class FString                                      ConsoleValue;                                             // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.SettingContainerUtils.SaveChildSettings
struct USettingContainerUtils_SaveChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AutoSettings.SettingContainerUtils.GetChildSettings
struct USettingContainerUtils_GetChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAutoSettingWidget*>                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
struct USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
struct USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.SettingContainerUtils.CancelChildSettings
struct USettingContainerUtils_CancelChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AutoSettings.SettingContainerUtils.ApplyChildSettings
struct USettingContainerUtils_ApplyChildSettings_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AutoSettings.SettingsManager.SaveSettingStatic
struct USettingsManager_SaveSettingStatic_Params
{
	struct FAutoSettingData                            SettingData;                                              // (Parm)
};

// Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
struct USettingsManager_RegisterStringCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      DefaultValue;                                             // (Parm, ZeroConstructor)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SettingsManager.RegisterStringCVarSetting
struct USettingsManager_RegisterStringCVarSetting_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      DefaultValue;                                             // (Parm, ZeroConstructor)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
};

// Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
struct USettingsManager_RegisterIntCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SettingsManager.RegisterIntCVarSetting
struct USettingsManager_RegisterIntCVarSetting_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
};

// Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
struct USettingsManager_RegisterFloatCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
struct USettingsManager_RegisterFloatCVarSetting_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
};

// Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
struct USettingsManager_RegisterBoolCVarSettingWithCallback_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ChangedCallback;                                          // (Parm, ZeroConstructor)
	bool                                               CallbackImmediately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
struct USettingsManager_RegisterBoolCVarSetting_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Help;                                                     // (Parm, ZeroConstructor)
};

// Function AutoSettings.SettingsManager.GetValue
struct USettingsManager_GetValue_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferConfigValue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.SettingsManager.GetInitialValue
struct USettingsManager_GetInitialValue_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
struct USettingsManager_AutoDetectSettingsStatic_Params
{
};

// Function AutoSettings.SettingsManager.ApplySettingStatic
struct USettingsManager_ApplySettingStatic_Params
{
	struct FAutoSettingData                            SettingData;                                              // (Parm)
};

// Function AutoSettings.Spinner.SelectValue
struct USpinner_SelectValue_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function AutoSettings.Spinner.SelectIndex
struct USpinner_SelectIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoSettings.Spinner.Previous
struct USpinner_Previous_Params
{
};

// Function AutoSettings.Spinner.Next
struct USpinner_Next_Params
{
};

// Function AutoSettings.Spinner.HasValidPrevious
struct USpinner_HasValidPrevious_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.Spinner.HasValidNext
struct USpinner_HasValidNext_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.Spinner.GetCurrentOption
struct USpinner_GetCurrentOption_Params
{
	struct FSettingOption                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AutoSettings.Spinner.GetCurrentIndex
struct USpinner_GetCurrentIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
struct USpinnerSetting_SpinnerSelectionChanged_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
