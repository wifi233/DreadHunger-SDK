                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AudioMixer_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void USynthComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	USynthComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)

void USynthComponent::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	USynthComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	USynthComponent_SetVolumeMultiplier_Params params;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmixBase*        Submix                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          SendLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	USynthComponent_SetSubmixSend_Params params;
	params.Submix = Submix;
	params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLowPassFilterFrequency       (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetLowPassFilterFrequency");

	USynthComponent_SetLowPassFilterFrequency_Params params;
	params.InLowPassFilterFrequency = InLowPassFilterFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InLowPassFilterEnabled         (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetLowPassFilterEnabled");

	USynthComponent_SetLowPassFilterEnabled_Params params;
	params.InLowPassFilterEnabled = InLowPassFilterEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USynthComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	USynthComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMegabytesToFree              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache");

	UAudioMixerBlueprintLibrary_TrimAudioCache_Params params;
	params.InMegabytesToFree = InMegabytesToFree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EAudioRecordingExportType      ExportType                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// class FString                  Path                           (Parm, ZeroConstructor)
// class USoundSubmix*            SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              ExistingSoundWaveToOverwrite   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");

	UAudioMixerBlueprintLibrary_StopRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExportType = ExportType;
	params.Name = Name;
	params.Path = Path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus");

	UAudioMixerBlueprintLibrary_StopAudioBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToStopAnalyzing          (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");

	UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectedDuration               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");

	UAudioMixerBlueprintLibrary_StartRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus");

	UAudioMixerBlueprintLibrary_StartAudioBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)
// EFFTSize                       FFTSize                        (Parm, ZeroConstructor, IsPlainOldData)
// EFFTPeakInterpolationMethod    InterpolationMethod            (Parm, ZeroConstructor, IsPlainOldData)
// EFFTWindowType                 WindowType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          HopSize                        (Parm, ZeroConstructor, IsPlainOldData)
// EAudioSpectrumType             SpectrumType                   (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");

	UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToAnalyze = SubmixToAnalyze;
	params.FFTSize = FFTSize;
	params.InterpolationMethod = InterpolationMethod;
	params.WindowType = WindowType;
	params.HopSize = HopSize;
	params.SpectrumType = SpectrumType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain        (Parm, ZeroConstructor)
// float                          FadeTimeSec                    (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride");

	UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPresetChain = SubmixEffectPresetChain;
	params.FadeTimeSec = FadeTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBypassed                      (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");

	UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");

	UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            InSoundSubmix                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix");

	UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSoundSubmix = InSoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex");

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset");

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");

	UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");

	UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnLoadCompletion               (ConstParm, Parm, ZeroConstructor)

static void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback");

	UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params params;
	params.SoundWave = SoundWave;
	params.OnLoadCompletion = OnLoadCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(class USoundCue* SoundCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback");

	UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params params;
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");

	UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EAudioSpectrumBandPresetType   InBandPresetType               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InNumBands                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackTimeMsec               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InReleaseTimeMsec              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int InNumBands, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings");

	UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params params;
	params.InBandPresetType = InBandPresetType;
	params.InNumBands = InNumBands;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            InNumSemitones                 (Parm, ZeroConstructor, IsPlainOldData)
// EMusicalNoteName               InStartingMusicalNote          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InStartingOctave               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackTimeMsec               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InReleaseTimeMsec              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int InNumSemitones, EMusicalNoteName InStartingMusicalNote, int InStartingOctave, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings");

	UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params params;
	params.InNumSemitones = InNumSemitones;
	params.InStartingMusicalNote = InStartingMusicalNote;
	params.InStartingOctave = InStartingOctave;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            InNumBands                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMinimumFrequency             (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaximumFrequency             (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackTimeMsec               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InReleaseTimeMsec              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int InNumBands, float InMinimumFrequency, float InMaximumFrequency, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings");

	UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params params;
	params.InNumBands = InNumBands;
	params.InMinimumFrequency = InMinimumFrequency;
	params.InMaximumFrequency = InMaximumFrequency;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UAudioMixerBlueprintLibrary::IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive");

	UAudioMixerBlueprintLibrary_IsAudioBusActive_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Phases                         (Parm, OutParm, ZeroConstructor)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");

	UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Phases != nullptr)
		*Phases = params.Phases;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");

	UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Magnitudes                     (Parm, OutParm, ZeroConstructor)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");

	UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magnitudes != nullptr)
		*Magnitudes = params.Magnitudes;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects");

	UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTimeSec                    (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride");

	UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.FadeTimeSec = FadeTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");

	UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UAudioMixerBlueprintLibrary::AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect");

	UAudioMixerBlueprintLibrary_AddSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSourceEffectChainEntry Entry                          (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");

	UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

static void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");

	UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EQuartzCommandQuantization     InQuantizationBoundary         (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision");

	UQuartzClockHandle_UnsubscribeFromTimeDivision_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions");

	UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EQuartzCommandQuantization     InQuantizationBoundary         (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnQuantizationEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const struct FScriptDelegate& OnQuantizationEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent");

	UQuartzClockHandle_SubscribeToQuantizationEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;
	params.OnQuantizationEvent = OnQuantizationEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnQuantizationEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const struct FScriptDelegate& OnQuantizationEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents");

	UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OnQuantizationEvent = OnQuantizationEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          TicksPerSecond                 (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float TicksPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetTicksPerSecond");

	UQuartzClockHandle_SetTicksPerSecond_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.TicksPerSecond = TicksPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ThirtySecondsNotesPerMinute    (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute");

	UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          SecondsPerTick                 (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float SecondsPerTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetSecondsPerTick");

	UQuartzClockHandle_SetSecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.SecondsPerTick = SecondsPerTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          MillisecondsPerTick            (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float MillisecondsPerTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick");

	UQuartzClockHandle_SetMillisecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.MillisecondsPerTick = MillisecondsPerTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          BeatsPerMinute                 (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float BeatsPerMinute)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute");

	UQuartzClockHandle_SetBeatsPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.BeatsPerMinute = BeatsPerMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.ResumeClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::ResumeClock(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResumeClock");

	UQuartzClockHandle_ResumeClock_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.ResetTransport
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuartzClockHandle::ResetTransport(class UObject* WorldContextObject, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResetTransport");

	UQuartzClockHandle_ResetTransport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.PauseClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::PauseClock(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.PauseClock");

	UQuartzClockHandle_PauseClock_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetTicksPerSecond(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetTicksPerSecond");

	UQuartzClockHandle_GetTicksPerSecond_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute");

	UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetSecondsPerTick(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetSecondsPerTick");

	UQuartzClockHandle_GetSecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetMillisecondsPerTick(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick");

	UQuartzClockHandle_GetMillisecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetBeatsPerMinute(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute");

	UQuartzClockHandle_GetBeatsPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	USubmixEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (Parm, ZeroConstructor, IsPlainOldData)

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix");

	USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params params;
	params.Submix = Submix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	USubmixEffectSubmixEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DryLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	USubmixEffectReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetRoundTripMinLatency(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency");

	UQuartzSubsystem_GetRoundTripMinLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetRoundTripMaxLatency(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency");

	UQuartzSubsystem_GetRoundTripMaxLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetRoundTripAverageLatency(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency");

	UQuartzSubsystem_GetRoundTripAverageLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetHandleForClock");

	UQuartzSubsystem_GetHandleForClock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency");

	UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency");

	UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency");

	UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency");

	UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency");

	UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency");

	UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.DoesClockExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuartzSubsystem::DoesClockExist(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.DoesClockExist");

	UQuartzSubsystem_DoesClockExist_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.CreateNewClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzClockSettings    InSettings                     (Parm)
// bool                           bOverrideSettingsIfClockExists (Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(class UObject* WorldContextObject, const struct FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.CreateNewClock");

	UQuartzSubsystem_CreateNewClock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;
	params.InSettings = InSettings;
	params.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
