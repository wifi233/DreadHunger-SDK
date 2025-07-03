                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AutoSettings_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutoSettings.InputLabel.UpdateLabel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInputLabel::UpdateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputLabel.UpdateLabel");

	UInputLabel_UpdateLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputLabel.MappingsChanged
// (Final, Native, Private)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UInputLabel::MappingsChanged(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputLabel.MappingsChanged");

	UInputLabel_MappingsChanged_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMapping.UpdateMapping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInputMapping::UpdateMapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMapping.UpdateMapping");

	UInputMapping_UpdateMapping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMapping.UpdateLabel
// (Native, Event, Protected, BlueprintEvent)

void UInputMapping::UpdateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMapping.UpdateLabel");

	UInputMapping_UpdateLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMapping.ChordCaptured
// (Final, Native, Private)
// Parameters:
// struct FInputChord             InChord                        (Parm)

void UInputMapping::ChordCaptured(const struct FInputChord& InChord)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMapping.ChordCaptured");

	UInputMapping_ChordCaptured_Params params;
	params.InChord = InChord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMapping.BindChord
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FInputChord             InChord                        (Parm)

void UInputMapping::BindChord(const struct FInputChord& InChord)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMapping.BindChord");

	UInputMapping_BindChord_Params params;
	params.InChord = InChord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.AutoSettingsConfig.GetKeyGroupStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FGameplayTag UAutoSettingsConfig::GetKeyGroupStatic(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingsConfig.GetKeyGroupStatic");

	UAutoSettingsConfig_GetKeyGroupStatic_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingsConfig.GetKeyFriendlyNameStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FText UAutoSettingsConfig::GetKeyFriendlyNameStatic(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingsConfig.GetKeyFriendlyNameStatic");

	UAutoSettingsConfig_GetKeyFriendlyNameStatic_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingsPlayer.SaveInputMappings
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInputMappings    InputMappings                  (Parm)

void UAutoSettingsPlayer::SaveInputMappings(const struct FPlayerInputMappings& InputMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingsPlayer.SaveInputMappings");

	UAutoSettingsPlayer_SaveInputMappings_Params params;
	params.InputMappings = InputMappings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.AutoSettingsPlayer.GetUniquePlayerIdentifier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAutoSettingsPlayer::GetUniquePlayerIdentifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingsPlayer.GetUniquePlayerIdentifier");

	UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingsPlayer.GetInputMappings
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FPlayerInputMappings    InputMappings                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoSettingsPlayer::GetInputMappings(struct FPlayerInputMappings* InputMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingsPlayer.GetInputMappings");

	UAutoSettingsPlayer_GetInputMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputMappings != nullptr)
		*InputMappings = params.InputMappings;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingsPlayer.GetDefaultInputMappingPreset
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FInputMappingPreset     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputMappingPreset UAutoSettingsPlayer::GetDefaultInputMappingPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingsPlayer.GetDefaultInputMappingPreset");

	UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingWidget.UpdateSelection
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)

void UAutoSettingWidget::UpdateSelection(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.UpdateSelection");

	UAutoSettingWidget_UpdateSelection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.AutoSettingWidget.Save
// (Final, Native, Public, BlueprintCallable)

void UAutoSettingWidget::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.Save");

	UAutoSettingWidget_Save_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.AutoSettingWidget.HasUnsavedChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoSettingWidget::HasUnsavedChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.HasUnsavedChange");

	UAutoSettingWidget_HasUnsavedChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingWidget.HasUnappliedChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutoSettingWidget::HasUnappliedChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.HasUnappliedChange");

	UAutoSettingWidget_HasUnappliedChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.AutoSettingWidget.Cancel
// (Final, Native, Public, BlueprintCallable)

void UAutoSettingWidget::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.Cancel");

	UAutoSettingWidget_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.AutoSettingWidget.ApplySettingValue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)
// bool                           bSaveIfPossible                (Parm, ZeroConstructor, IsPlainOldData)

void UAutoSettingWidget::ApplySettingValue(const class FString& Value, bool bSaveIfPossible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.ApplySettingValue");

	UAutoSettingWidget_ApplySettingValue_Params params;
	params.Value = Value;
	params.bSaveIfPossible = bSaveIfPossible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.AutoSettingWidget.Apply
// (Final, Native, Public, BlueprintCallable)

void UAutoSettingWidget::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.Apply");

	UAutoSettingWidget_Apply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.BindCaptureButton.StartCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBindCapturePrompt*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBindCapturePrompt* UBindCaptureButton::StartCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.BindCaptureButton.StartCapture");

	UBindCaptureButton_StartCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.BindCaptureButton.InitializePrompt
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UBindCapturePrompt*      PromptWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBindCaptureButton::InitializePrompt(class UBindCapturePrompt* PromptWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.BindCaptureButton.InitializePrompt");

	UBindCaptureButton_InitializePrompt_Params params;
	params.PromptWidget = PromptWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.BindCaptureButton.ChordCaptured
// (Final, Native, Private)
// Parameters:
// struct FInputChord             Chord                          (Parm)

void UBindCaptureButton::ChordCaptured(const struct FInputChord& Chord)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.BindCaptureButton.ChordCaptured");

	UBindCaptureButton_ChordCaptured_Params params;
	params.Chord = Chord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.BindCapturePrompt.IsKeyAllowed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FKey                    PrimaryKey                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBindCapturePrompt::IsKeyAllowed(const struct FKey& PrimaryKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.BindCapturePrompt.IsKeyAllowed");

	UBindCapturePrompt_IsKeyAllowed_Params params;
	params.PrimaryKey = PrimaryKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.BindCapturePrompt.GetKeyGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UBindCapturePrompt::GetKeyGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.BindCapturePrompt.GetKeyGroup");

	UBindCapturePrompt_GetKeyGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.BindCapturePrompt.Cancel
// (Final, Native, Public, BlueprintCallable)

void UBindCapturePrompt::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.BindCapturePrompt.Cancel");

	UBindCapturePrompt_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ToggleSetting.UpdateToggleState
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UToggleSetting::UpdateToggleState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ToggleSetting.UpdateToggleState");

	UToggleSetting_UpdateToggleState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ToggleSetting.ToggleStateUpdated
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UToggleSetting::ToggleStateUpdated(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ToggleSetting.ToggleStateUpdated");

	UToggleSetting_ToggleStateUpdated_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           IsChecked                      (Parm, ZeroConstructor, IsPlainOldData)

void UCheckBoxSetting::CheckBoxStateChanged(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged");

	UCheckBoxSetting_CheckBoxStateChanged_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SelectSetting.UpdateOptions
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FSettingOption>  InOptions                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USelectSetting::UpdateOptions(TArray<struct FSettingOption> InOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SelectSetting.UpdateOptions");

	USelectSetting_UpdateOptions_Params params;
	params.InOptions = InOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SelectSetting.RefreshOptions
// (Final, Native, Public, BlueprintCallable)

void USelectSetting::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SelectSetting.RefreshOptions");

	USelectSetting_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                  SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UComboBoxSetting::ComboBoxSelectionChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged");

	UComboBoxSetting_ComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ConsoleUtils.SetStringCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Value                          (Parm, ZeroConstructor)

static void UConsoleUtils::SetStringCVar(const struct FName& Name, const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetStringCVar");

	UConsoleUtils_SetStringCVar_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ConsoleUtils.SetIntCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

static void UConsoleUtils::SetIntCVar(const struct FName& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetIntCVar");

	UConsoleUtils_SetIntCVar_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ConsoleUtils.SetFloatCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

static void UConsoleUtils::SetFloatCVar(const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetFloatCVar");

	UConsoleUtils_SetFloatCVar_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ConsoleUtils.SetBoolCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

static void UConsoleUtils::SetBoolCVar(const struct FName& Name, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetBoolCVar");

	UConsoleUtils_SetBoolCVar_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.ConsoleUtils.IsCVarRegistered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UConsoleUtils::IsCVarRegistered(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.IsCVarRegistered");

	UConsoleUtils_IsCVarRegistered_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.ConsoleUtils.GetStringCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UConsoleUtils::GetStringCVar(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetStringCVar");

	UConsoleUtils_GetStringCVar_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.ConsoleUtils.GetIntCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UConsoleUtils::GetIntCVar(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetIntCVar");

	UConsoleUtils_GetIntCVar_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.ConsoleUtils.GetFloatCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UConsoleUtils::GetFloatCVar(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetFloatCVar");

	UConsoleUtils_GetFloatCVar_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.ConsoleUtils.GetBoolCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UConsoleUtils::GetBoolCVar(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetBoolCVar");

	UConsoleUtils_GetBoolCVar_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void UCVarChangeListenerManager::AddStringCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic");

	UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params params;
	params.Name = Name;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void UCVarChangeListenerManager::AddIntCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic");

	UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params params;
	params.Name = Name;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void UCVarChangeListenerManager::AddFloatCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic");

	UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params params;
	params.Name = Name;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void UCVarChangeListenerManager::AddBoolCVarCallbackStatic(const struct FName& Name, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic");

	UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params params;
	params.Name = Name;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.GlobalKeyIconTagManager.SetGlobalKeyIconTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InGlobalIconTags               (Parm)

static void UGlobalKeyIconTagManager::SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.GlobalKeyIconTagManager.SetGlobalKeyIconTags");

	UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params params;
	params.InGlobalIconTags = InGlobalIconTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.GlobalKeyIconTagManager.GetIconForKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    InKey                          (Parm)
// struct FGameplayTagContainer   IconTags                       (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UTexture* UGlobalKeyIconTagManager::GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.GlobalKeyIconTagManager.GetIconForKey");

	UGlobalKeyIconTagManager_GetIconForKey_Params params;
	params.InKey = InKey;
	params.IconTags = IconTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.SetPlayerKeyGroupStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            KeyGroup                       (Parm)

static void UInputMappingManager::SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.SetPlayerKeyGroupStatic");

	UInputMappingManager_SetPlayerKeyGroupStatic_Params params;
	params.Player = Player;
	params.KeyGroup = KeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.SetPlayerInputPresetStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputMappingPreset     Preset                         (Parm)
// bool                           bIsCustomized                  (Parm, ZeroConstructor, IsPlainOldData)

static void UInputMappingManager::SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset, bool bIsCustomized)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.SetPlayerInputPresetStatic");

	UInputMappingManager_SetPlayerInputPresetStatic_Params params;
	params.Player = Player;
	params.Preset = Preset;
	params.bIsCustomized = bIsCustomized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.SetPlayerInputPresetByTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            PresetTag                      (Parm)

static void UInputMappingManager::SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.SetPlayerInputPresetByTag");

	UInputMappingManager_SetPlayerInputPresetByTag_Params params;
	params.Player = Player;
	params.PresetTag = PresetTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.OnRegisteredPlayerControllerDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UInputMappingManager::OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.OnRegisteredPlayerControllerDestroyed");

	UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.InitializePlayerInputOverridesStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UInputMappingManager::InitializePlayerInputOverridesStatic(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.InitializePlayerInputOverridesStatic");

	UInputMappingManager_InitializePlayerInputOverridesStatic_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.GetPlayerInputMappingsStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerInputMappings    ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FPlayerInputMappings UInputMappingManager::GetPlayerInputMappingsStatic(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.GetPlayerInputMappingsStatic");

	UInputMappingManager_GetPlayerInputMappingsStatic_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.GetPlayerAxisMappingStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            MappingGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputAxisKeyMapping    ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMappingStatic(class APlayerController* Player, const struct FName& AxisName, float Scale, int MappingGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.GetPlayerAxisMappingStatic");

	UInputMappingManager_GetPlayerAxisMappingStatic_Params params;
	params.Player = Player;
	params.AxisName = AxisName;
	params.Scale = Scale;
	params.MappingGroup = MappingGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.GetPlayerActionMappingStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MappingGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            KeyGroup                       (Parm)
// bool                           bUsePlayerKeyGroup             (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FInputActionKeyMapping UInputMappingManager::GetPlayerActionMappingStatic(class APlayerController* Player, const struct FName& ActionName, int MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.GetPlayerActionMappingStatic");

	UInputMappingManager_GetPlayerActionMappingStatic_Params params;
	params.Player = Player;
	params.ActionName = ActionName;
	params.MappingGroup = MappingGroup;
	params.KeyGroup = KeyGroup;
	params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.GetDefaultInputPresets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputMappingPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FInputMappingPreset> UInputMappingManager::GetDefaultInputPresets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.GetDefaultInputPresets");

	UInputMappingManager_GetDefaultInputPresets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInputMappingManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UInputMappingManager* UInputMappingManager::Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.Get");

	UInputMappingManager_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.InputMappingManager.AddPlayerAxisOverrideStatic
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputAxisKeyMapping    NewMapping                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            MappingGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnyKeyGroup                   (Parm, ZeroConstructor, IsPlainOldData)

static void UInputMappingManager::AddPlayerAxisOverrideStatic(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.AddPlayerAxisOverrideStatic");

	UInputMappingManager_AddPlayerAxisOverrideStatic_Params params;
	params.Player = Player;
	params.NewMapping = NewMapping;
	params.MappingGroup = MappingGroup;
	params.bAnyKeyGroup = bAnyKeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.AddPlayerAxisOverride
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputAxisKeyMapping    NewMapping                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            MappingGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnyKeyGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void UInputMappingManager::AddPlayerAxisOverride(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.AddPlayerAxisOverride");

	UInputMappingManager_AddPlayerAxisOverride_Params params;
	params.Player = Player;
	params.NewMapping = NewMapping;
	params.MappingGroup = MappingGroup;
	params.bAnyKeyGroup = bAnyKeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.AddPlayerActionOverrideStatic
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  NewMapping                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            MappingGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnyKeyGroup                   (Parm, ZeroConstructor, IsPlainOldData)

static void UInputMappingManager::AddPlayerActionOverrideStatic(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.AddPlayerActionOverrideStatic");

	UInputMappingManager_AddPlayerActionOverrideStatic_Params params;
	params.Player = Player;
	params.NewMapping = NewMapping;
	params.MappingGroup = MappingGroup;
	params.bAnyKeyGroup = bAnyKeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.InputMappingManager.AddPlayerActionOverride
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  NewMapping                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            MappingGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnyKeyGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void UInputMappingManager::AddPlayerActionOverride(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int MappingGroup, bool bAnyKeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.InputMappingManager.AddPlayerActionOverride");

	UInputMappingManager_AddPlayerActionOverride_Params params;
	params.Player = Player;
	params.NewMapping = NewMapping;
	params.MappingGroup = MappingGroup;
	params.bAnyKeyGroup = bAnyKeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.KeyLabel.UpdateKeyLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeyLabel::UpdateKeyLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.UpdateKeyLabel");

	UKeyLabel_UpdateKeyLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.KeyLabel.OnGlobalKeyIconTagsModified
// (Final, Native, Private)

void UKeyLabel::OnGlobalKeyIconTagsModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.OnGlobalKeyIconTagsModified");

	UKeyLabel_OnGlobalKeyIconTagsModified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.KeyLabel.HasValidKey
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyLabel::HasValidKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.HasValidKey");

	UKeyLabel_HasValidKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.KeyLabel.HasIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyLabel::HasIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.HasIcon");

	UKeyLabel_HasIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.KeyLabel.GetIconVisibility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UKeyLabel::GetIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.GetIconVisibility");

	UKeyLabel_GetIconVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.KeyLabel.GetIconBrush
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UKeyLabel::GetIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.GetIconBrush");

	UKeyLabel_GetIconBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.KeyLabel.GetIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UKeyLabel::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.GetIcon");

	UKeyLabel_GetIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.KeyLabel.GetDisplayNameVisibility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UKeyLabel::GetDisplayNameVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.GetDisplayNameVisibility");

	UKeyLabel_GetDisplayNameVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.KeyLabel.GetDisplayName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKeyLabel::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.KeyLabel.GetDisplayName");

	UKeyLabel_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SliderSetting.UpdateSliderValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                          NormalizedValue                (Parm, ZeroConstructor, IsPlainOldData)
// float                          RawValue                       (Parm, ZeroConstructor, IsPlainOldData)

void USliderSetting::UpdateSliderValue(float NormalizedValue, float RawValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.UpdateSliderValue");

	USliderSetting_UpdateSliderValue_Params params;
	params.NormalizedValue = NormalizedValue;
	params.RawValue = RawValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SliderSetting.SliderValueUpdated
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NormalizedValue                (Parm, ZeroConstructor, IsPlainOldData)

void USliderSetting::SliderValueUpdated(float NormalizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.SliderValueUpdated");

	USliderSetting_SliderValueUpdated_Params params;
	params.NormalizedValue = NormalizedValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USliderSetting::ShouldSaveCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.ShouldSaveCurrentValue");

	USliderSetting_ShouldSaveCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SliderSetting.OnSliderValueUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NormalizedValue                (Parm, ZeroConstructor, IsPlainOldData)
// float                          RawValue                       (Parm, ZeroConstructor, IsPlainOldData)

void USliderSetting::OnSliderValueUpdated(float NormalizedValue, float RawValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.OnSliderValueUpdated");

	USliderSetting_OnSliderValueUpdated_Params params;
	params.NormalizedValue = NormalizedValue;
	params.RawValue = RawValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.NativeSliderSetting.SliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UNativeSliderSetting::SliderValueChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.NativeSliderSetting.SliderValueChanged");

	UNativeSliderSetting_SliderValueChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
// (Final, Native, Private)

void UNativeSliderSetting::SliderMouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd");

	UNativeSliderSetting_SliderMouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
// (Final, Native, Private)

void UNativeSliderSetting::SliderMouseCaptureBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin");

	UNativeSliderSetting_SliderMouseCaptureBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.UpdateSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void URadioButton::UpdateSelected(bool InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.UpdateSelected");

	URadioButton_UpdateSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.UpdateLabel
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLabel                        (ConstParm, Parm, OutParm, ReferenceParm)

void URadioButton::UpdateLabel(const struct FText& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.UpdateLabel");

	URadioButton_UpdateLabel_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.TriggerSelection
// (Final, Native, Protected, BlueprintCallable)

void URadioButton::TriggerSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.TriggerSelection");

	URadioButton_TriggerSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InValue                        (Parm, ZeroConstructor)

void URadioButton::SetValue(const class FString& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.SetValue");

	URadioButton_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void URadioButton::SetSelected(bool InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.SetSelected");

	URadioButton_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InLabel                        (Parm)

void URadioButton::SetLabel(const struct FText& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.SetLabel");

	URadioButton_SetLabel_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioButton.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString URadioButton::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.GetValue");

	URadioButton_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.RadioButton.GetSelected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URadioButton::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.GetSelected");

	URadioButton_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.RadioButton.GetLabel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText URadioButton::GetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.GetLabel");

	URadioButton_GetLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.RadioSelect.SetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSettingOption>  InOptions                      (Parm, ZeroConstructor)

void URadioSelect::SetOptions(TArray<struct FSettingOption> InOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.SetOptions");

	URadioSelect_SetOptions_Params params;
	params.InOptions = InOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioSelect.Select
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)

void URadioSelect::Select(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.Select");

	URadioSelect_Select_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioSelect.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSettingOption>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSettingOption> URadioSelect::GetOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.GetOptions");

	URadioSelect_GetOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.RadioSelect.ButtonSelected
// (Final, Native, Private)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)

void URadioSelect::ButtonSelected(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.ButtonSelected");

	URadioSelect_ButtonSelected_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)

void URadioSelectSetting::RadioSelectionChanged(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelectSetting.RadioSelectionChanged");

	URadioSelectSetting_RadioSelectionChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingOptionFactory.ConstructOptions
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSettingOption>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSettingOption> USettingOptionFactory::ConstructOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingOptionFactory.ConstructOptions");

	USettingOptionFactory_ConstructOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingValueMask.RecombineValues
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                  SettingValue                   (Parm, ZeroConstructor)
// class FString                  ConsoleValue                   (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString USettingValueMask::RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingValueMask.RecombineValues");

	USettingValueMask_RecombineValues_Params params;
	params.SettingValue = SettingValue;
	params.ConsoleValue = ConsoleValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingValueMask.MaskValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                  ConsoleValue                   (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString USettingValueMask::MaskValue(const class FString& ConsoleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingValueMask.MaskValue");

	USettingValueMask_MaskValue_Params params;
	params.ConsoleValue = ConsoleValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingContainerUtils.SaveChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void USettingContainerUtils::SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.SaveChildSettings");

	USettingContainerUtils_SaveChildSettings_Params params;
	params.UserWidget = UserWidget;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingContainerUtils.GetChildSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UAutoSettingWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<class UAutoSettingWidget*> USettingContainerUtils::GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.GetChildSettings");

	USettingContainerUtils_GetChildSettings_Params params;
	params.UserWidget = UserWidget;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange");

	USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params params;
	params.UserWidget = UserWidget;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange");

	USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params params;
	params.UserWidget = UserWidget;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingContainerUtils.CancelChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void USettingContainerUtils::CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.CancelChildSettings");

	USettingContainerUtils_CancelChildSettings_Params params;
	params.UserWidget = UserWidget;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingContainerUtils.ApplyChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void USettingContainerUtils::ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.ApplyChildSettings");

	USettingContainerUtils_ApplyChildSettings_Params params;
	params.UserWidget = UserWidget;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.SaveSettingStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAutoSettingData        SettingData                    (Parm)

static void USettingsManager::SaveSettingStatic(const struct FAutoSettingData& SettingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.SaveSettingStatic");

	USettingsManager_SaveSettingStatic_Params params;
	params.SettingData = SettingData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  DefaultValue                   (Parm, ZeroConstructor)
// class FString                  Help                           (Parm, ZeroConstructor)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void USettingsManager::RegisterStringCVarSettingWithCallback(const struct FName& Name, const class FString& DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback");

	USettingsManager_RegisterStringCVarSettingWithCallback_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterStringCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  DefaultValue                   (Parm, ZeroConstructor)
// class FString                  Help                           (Parm, ZeroConstructor)

static void USettingsManager::RegisterStringCVarSetting(const struct FName& Name, const class FString& DefaultValue, const class FString& Help)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterStringCVarSetting");

	USettingsManager_RegisterStringCVarSetting_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Help                           (Parm, ZeroConstructor)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void USettingsManager::RegisterIntCVarSettingWithCallback(const struct FName& Name, int DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback");

	USettingsManager_RegisterIntCVarSettingWithCallback_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterIntCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Help                           (Parm, ZeroConstructor)

static void USettingsManager::RegisterIntCVarSetting(const struct FName& Name, int DefaultValue, const class FString& Help)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterIntCVarSetting");

	USettingsManager_RegisterIntCVarSetting_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Help                           (Parm, ZeroConstructor)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void USettingsManager::RegisterFloatCVarSettingWithCallback(const struct FName& Name, float DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback");

	USettingsManager_RegisterFloatCVarSettingWithCallback_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Help                           (Parm, ZeroConstructor)

static void USettingsManager::RegisterFloatCVarSetting(const struct FName& Name, float DefaultValue, const class FString& Help)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterFloatCVarSetting");

	USettingsManager_RegisterFloatCVarSetting_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Help                           (Parm, ZeroConstructor)
// struct FScriptDelegate         ChangedCallback                (Parm, ZeroConstructor)
// bool                           CallbackImmediately            (Parm, ZeroConstructor, IsPlainOldData)

static void USettingsManager::RegisterBoolCVarSettingWithCallback(const struct FName& Name, bool DefaultValue, const class FString& Help, const struct FScriptDelegate& ChangedCallback, bool CallbackImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback");

	USettingsManager_RegisterBoolCVarSettingWithCallback_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;
	params.ChangedCallback = ChangedCallback;
	params.CallbackImmediately = CallbackImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Help                           (Parm, ZeroConstructor)

static void USettingsManager::RegisterBoolCVarSetting(const struct FName& Name, bool DefaultValue, const class FString& Help)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterBoolCVarSetting");

	USettingsManager_RegisterBoolCVarSetting_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;
	params.Help = Help;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.GetValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreferConfigValue             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString USettingsManager::GetValue(const struct FName& Key, bool bPreferConfigValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.GetValue");

	USettingsManager_GetValue_Params params;
	params.Key = Key;
	params.bPreferConfigValue = bPreferConfigValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingsManager.GetInitialValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString USettingsManager::GetInitialValue(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.GetInitialValue");

	USettingsManager_GetInitialValue_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
// (Final, Native, Static, Public, BlueprintCallable)

static void USettingsManager::AutoDetectSettingsStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.AutoDetectSettingsStatic");

	USettingsManager_AutoDetectSettingsStatic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.SettingsManager.ApplySettingStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAutoSettingData        SettingData                    (Parm)

static void USettingsManager::ApplySettingStatic(const struct FAutoSettingData& SettingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.ApplySettingStatic");

	USettingsManager_ApplySettingStatic_Params params;
	params.SettingData = SettingData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.Spinner.SelectValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)

void USpinner::SelectValue(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.SelectValue");

	USpinner_SelectValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.Spinner.SelectIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void USpinner::SelectIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.SelectIndex");

	USpinner_SelectIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.Spinner.Previous
// (Final, Native, Public, BlueprintCallable)

void USpinner::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.Previous");

	USpinner_Previous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.Spinner.Next
// (Final, Native, Public, BlueprintCallable)

void USpinner::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.Next");

	USpinner_Next_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoSettings.Spinner.HasValidPrevious
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpinner::HasValidPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.HasValidPrevious");

	USpinner_HasValidPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.Spinner.HasValidNext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpinner::HasValidNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.HasValidNext");

	USpinner_HasValidNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.Spinner.GetCurrentOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSettingOption          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSettingOption USpinner::GetCurrentOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.GetCurrentOption");

	USpinner_GetCurrentOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.Spinner.GetCurrentIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USpinner::GetCurrentIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.GetCurrentIndex");

	USpinner_GetCurrentIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)

void USpinnerSetting::SpinnerSelectionChanged(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged");

	USpinnerSetting_SpinnerSelectionChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
