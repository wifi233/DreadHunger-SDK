                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AudioMixer_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// size:0x04C0 (0x0200 - 0x06C0)
class USynthComponent : public USceneComponent
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x0208(0x03A0) (Edit, BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x05A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x05B0(0x0050) UNKNOWN PROPERTY: 
	class USoundClass*                                 SoundClass;                                               // 0x0600(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0608(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmixBase*                            SoundSubmix;                                              // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound;                                               // 0x0648(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsPreviewSound;                                          // 0x0648(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnAudioEnvelopeValue;                                     // 0x0658(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0668(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x0688(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0690(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0698(0x0028) MISSED OFFSET

	void Stop()//offset:0x251B520;
	void Start()//offset:0x251B110;
	void SetVolumeMultiplier(float VolumeMultiplier)//offset:0x251B090;
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)//offset:0x251AC40;
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency)//offset:0x251A370;
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled)//offset:0x251A2E0;
	bool IsPlaying()//offset:0x2518FB0;
};


// Class AudioMixer.AudioGenerator
// size:0x0080 (0x0028 - 0x00A8)
class UAudioGenerator : public UObject
{
public:
};


// Class AudioMixer.AudioMixerBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static float TrimAudioCache(float InMegabytesToFree)//offset:0x251BB20;
	static class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)//offset:0x251B6C0;
	static void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)//offset:0x251B600;
	static void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)//offset:0x251B540;
	static void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)//offset:0x251B410;
	static void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)//offset:0x251B350;
	static void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)//offset:0x251B130;
	static void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)//offset:0x251AAB0;
	static void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)//offset:0x251A100;
	static void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)//offset:0x2519E80;
	static void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)//offset:0x2519BC0;
	static void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)//offset:0x2519AC0;
	static void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)//offset:0x25199C0;
	static void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)//offset:0x25198C0;
	static void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)//offset:0x2519800;
	static void PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)//offset:0x2519730;
	static void PrimeSoundCueForPlayback(class USoundCue* SoundCue)//offset:0x25196B0;
	static void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)//offset:0x25195F0;
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int InNumBands, int InAttackTimeMsec, int InReleaseTimeMsec)//offset:0x25193C0;
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int InNumSemitones, EMusicalNoteName InStartingMusicalNote, int InStartingOctave, int InAttackTimeMsec, int InReleaseTimeMsec)//offset:0x25191D0;
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int InNumBands, float InMinimumFrequency, float InMaximumFrequency, int InAttackTimeMsec, int InReleaseTimeMsec)//offset:0x2518FE0;
	static bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus)//offset:0x2518EE0;
	static void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)//offset:0x2518990;
	static int GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)//offset:0x25188C0;
	static void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)//offset:0x2518690;
	static void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)//offset:0x2518030;
	static void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)//offset:0x2517F20;
	static void ClearMasterSubmixEffects(class UObject* WorldContextObject)//offset:0x2517EA0;
	static int AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)//offset:0x2517DA0;
	static void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)//offset:0x2517C90;
	static void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)//offset:0x2517BD0;
};


// Class AudioMixer.QuartzClockHandle
// size:0x0168 (0x0028 - 0x0190)
class UQuartzClockHandle : public UObject
{
public:

	void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary)//offset:0x251BC40;
	void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject)//offset:0x251BBB0;
	void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const struct FScriptDelegate& OnQuantizationEvent)//offset:0x251B9E0;
	void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const struct FScriptDelegate& OnQuantizationEvent)//offset:0x251B8F0;
	void SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float TicksPerSecond)//offset:0x251AED0;
	void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute)//offset:0x251AD10;
	void SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float SecondsPerTick)//offset:0x251A5C0;
	void SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float MillisecondsPerTick)//offset:0x251A400;
	void SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float BeatsPerMinute)//offset:0x2519F40;
	void ResumeClock(class UObject* WorldContextObject)//offset:0x2519DF0;
	void ResetTransport(class UObject* WorldContextObject, const struct FScriptDelegate& InDelegate)//offset:0x2519D00;
	void PauseClock(class UObject* WorldContextObject)//offset:0x2519560;
	float GetTicksPerSecond(class UObject* WorldContextObject)//offset:0x2518E40;
	float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject)//offset:0x2518DA0;
	float GetSecondsPerTick(class UObject* WorldContextObject)//offset:0x2518D00;
	float GetMillisecondsPerTick(class UObject* WorldContextObject)//offset:0x2518820;
	float GetBeatsPerMinute(class UObject* WorldContextObject)//offset:0x25183E0;
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// size:0x00C8 (0x0068 - 0x0130)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0068(0x0078) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x00E0(0x0050) (Edit, BlueprintVisible)

	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)//offset:0x251A780;
	void SetExternalSubmix(class USoundSubmix* Submix)//offset:0x251A250;
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// size:0x0048 (0x0068 - 0x00B0)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)//offset:0xDA1FB0;
};


// Class AudioMixer.SubmixEffectReverbPreset
// size:0x00A8 (0x0068 - 0x0110)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0068(0x0068) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x00D0(0x0040) (Edit, BlueprintVisible)

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)//offset:0x251A9A0;
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings)//offset:0x251A890;
};


// Class AudioMixer.QuartzSubsystem
// size:0x0050 (0x0030 - 0x0080)
class UQuartzSubsystem : public UWorldSubsystem
{
public:

	float GetRoundTripMinLatency(class UObject* WorldContextObject)//offset:0x2518C60;
	float GetRoundTripMaxLatency(class UObject* WorldContextObject)//offset:0x2518BC0;
	float GetRoundTripAverageLatency(class UObject* WorldContextObject)//offset:0x2518B20;
	class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, const struct FName& ClockName)//offset:0x25185C0;
	float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject)//offset:0x2518520;
	float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject)//offset:0x2518520;
	float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject)//offset:0x2518480;
	float GetAudioRenderThreadToGameThreadMinLatency()//offset:0x25183B0;
	float GetAudioRenderThreadToGameThreadMaxLatency()//offset:0x2518380;
	float GetAudioRenderThreadToGameThreadAverageLatency()//offset:0x2518350;
	bool DoesClockExist(class UObject* WorldContextObject, const struct FName& ClockName)//offset:0x2518280;
	class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, const struct FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists)//offset:0x25180F0;
};


// Class AudioMixer.SynthSound
// size:0x0020 (0x03C0 - 0x03E0)
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                             OwningSynthComponent;                                     // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C8(0x0018) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
