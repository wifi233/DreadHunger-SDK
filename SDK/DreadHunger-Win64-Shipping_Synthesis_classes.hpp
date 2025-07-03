                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Synthesis_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Synthesis.ModularSynthPresetBank
// size:0x0010 (0x0028 - 0x0038)
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>        Presets;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class Synthesis.ModularSynthLibrary
// size:0x0000 (0x0028 - 0x0028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName)//offset:0xD9A2A0;
};


// Class Synthesis.ModularSynthComponent
// size:0x06C0 (0x06C0 - 0x0D80)
class UModularSynthComponent : public USynthComponent
{
public:
	int                                                VoiceCount;                                               // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6BC];                                     // 0x06C4(0x06BC) MISSED OFFSET

	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset)//offset:0xD9C8C0;
	void SetSustainGain(float SustainGain)//offset:0xD9C840;
	void SetStereoDelayWetlevel(float DelayWetlevel)//offset:0xD9C7C0;
	void SetStereoDelayTime(float DelayTimeMsec)//offset:0xD9C740;
	void SetStereoDelayRatio(float DelayRatio)//offset:0xD9C6C0;
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode)//offset:0xD9C640;
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled)//offset:0xD9C5B0;
	void SetStereoDelayFeedback(float DelayFeedback)//offset:0xD9C530;
	void SetSpread(float Spread)//offset:0xD9C4B0;
	void SetReleaseTime(float ReleaseTimeMsec)//offset:0xD9C430;
	void SetPortamento(float Portamento)//offset:0xD9C3B0;
	void SetPitchBend(float PitchBend)//offset:0xD9C330;
	void SetPan(float Pan)//offset:0xD9C2B0;
	void SetOscType(int OscIndex, ESynth1OscType OscType)//offset:0xD9C1E0;
	void SetOscSync(bool bIsSynced)//offset:0xD9C150;
	void SetOscSemitones(int OscIndex, float Semitones)//offset:0xD9C080;
	void SetOscPulsewidth(int OscIndex, float Pulsewidth)//offset:0xD9BFB0;
	void SetOscOctave(int OscIndex, float Octave)//offset:0xD9BEE0;
	void SetOscGainMod(int OscIndex, float OscGainMod)//offset:0xD9BE10;
	void SetOscGain(int OscIndex, float OscGain)//offset:0xD9BD40;
	void SetOscFrequencyMod(int OscIndex, float OscFreqMod)//offset:0xD9BC70;
	void SetOscCents(int OscIndex, float Cents)//offset:0xD9BBA0;
	void SetModEnvSustainGain(float SustainGain)//offset:0xD9BB20;
	void SetModEnvReleaseTime(float Release)//offset:0xD9BAA0;
	void SetModEnvPatch(ESynthModEnvPatch InPatchType)//offset:0xD9BA20;
	void SetModEnvInvert(bool bInvert)//offset:0xD9B990;
	void SetModEnvDepth(float Depth)//offset:0xD9B910;
	void SetModEnvDecayTime(float DecayTimeMsec)//offset:0xD9B890;
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType)//offset:0xD9B810;
	void SetModEnvBiasInvert(bool bInvert)//offset:0xD9B780;
	void SetModEnvAttackTime(float AttackTimeMsec)//offset:0xD9B700;
	void SetLFOType(int LFOIndex, ESynthLFOType LFOType)//offset:0xD9B630;
	void SetLFOPatch(int LFOIndex, ESynthLFOPatchType LFOPatchType)//offset:0xD9B560;
	void SetLFOMode(int LFOIndex, ESynthLFOMode LFOMode)//offset:0xD9B490;
	void SetLFOGainMod(int LFOIndex, float GainMod)//offset:0xD9B3C0;
	void SetLFOGain(int LFOIndex, float Gain)//offset:0xD9B2F0;
	void SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz)//offset:0xD9B220;
	void SetLFOFrequency(int LFOIndex, float FrequencyHz)//offset:0xD9B150;
	void SetGainDb(float GainDb)//offset:0xD9B0D0;
	void SetFilterType(ESynthFilterType FilterType)//offset:0xD9B050;
	void SetFilterQMod(float FilterQ)//offset:0xD9AFD0;
	void SetFilterQ(float FilterQ)//offset:0xD9AF50;
	void SetFilterFrequencyMod(float FilterFrequencyHz)//offset:0xD9AED0;
	void SetFilterFrequency(float FilterFrequencyHz)//offset:0xD9AE50;
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm)//offset:0xD9ADD0;
	void SetEnableUnison(bool EnableUnison)//offset:0xD9AD40;
	void SetEnableRetrigger(bool RetriggerEnabled)//offset:0xD9ACB0;
	void SetEnablePolyphony(bool bEnablePolyphony)//offset:0xD9AC20;
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled)//offset:0xD9AB50;
	void SetEnableLegato(bool LegatoEnabled)//offset:0xD9AAC0;
	void SetDecayTime(float DecayTimeMsec)//offset:0xD9AA40;
	void SetChorusFrequency(float Frequency)//offset:0xD9A9C0;
	void SetChorusFeedback(float Feedback)//offset:0xD9A940;
	void SetChorusEnabled(bool EnableChorus)//offset:0xD9A8B0;
	void SetChorusDepth(float Depth)//offset:0xD9A830;
	void SetAttackTime(float AttackTimeMsec)//offset:0xD9A7B0;
	void NoteOn(float Note, int Velocity, float Duration)//offset:0xD9A690;
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)//offset:0xD9A570;
	struct FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault)//offset:0xD9A420;
};


// Class Synthesis.SourceEffectBitCrusherPreset
// size:0x0088 (0x0068 - 0x00F0)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET
	struct FSourceEffectBitCrusherSettings             Settings;                                                 // 0x00C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings)//offset:0xDA1DA0;
	void SetSampleRateModulator(class USoundModulatorBase* Modulator)//offset:0xDA1D10;
	void SetSampleRate(float SampleRate)//offset:0xDA1C90;
	void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings)//offset:0xDA1AE0;
	void SetBits(float Bits)//offset:0xDA1620;
	void SetBitModulator(class USoundModulatorBase* Modulator)//offset:0xDA1590;
};


// Class Synthesis.SourceEffectChorusPreset
// size:0x0118 (0x0068 - 0x0180)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0068(0x00A0) MISSED OFFSET
	struct FSourceEffectChorusSettings                 Settings;                                                 // 0x0108(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetWetModulator(class USoundModulatorBase* Modulator)//offset:0xDA26E0;
	void SetWet(float WetAmount)//offset:0xDA2660;
	void SetSpreadModulator(class USoundModulatorBase* Modulator)//offset:0xDA25D0;
	void SetSpread(float Spread)//offset:0xDA2550;
	void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings)//offset:0xDA1E50;
	void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings)//offset:0xDA1B90;
	void SetFrequencyModulator(class USoundModulatorBase* Modulator)//offset:0xDA1A50;
	void SetFrequency(float Frequency)//offset:0xDA19D0;
	void SetFeedbackModulator(class USoundModulatorBase* Modulator)//offset:0xDA1940;
	void SetFeedback(float Feedback)//offset:0xDA18C0;
	void SetDryModulator(class USoundModulatorBase* Modulator)//offset:0xDA1830;
	void SetDry(float DryAmount)//offset:0xDA17B0;
	void SetDepthModulator(class USoundModulatorBase* Modulator)//offset:0xDA1720;
	void SetDepth(float Depth)//offset:0xDA16A0;
};


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// size:0x0078 (0x0068 - 0x00E0)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
	struct FSourceEffectDynamicsProcessorSettings      Settings;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)//offset:0xDA1F00;
};


// Class Synthesis.EnvelopeFollowerListener
// size:0x0020 (0x00B0 - 0x00D0)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	struct UEMulticastInlineDelegate                   OnEnvelopeFollowerUpdate;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// size:0x0040 (0x0068 - 0x00A8)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectEnvelopeFollowerSettings       Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)//offset:0xDA2770;
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)//offset:0xDA2060;
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)//offset:0xDA1500;
};


// Class Synthesis.SourceEffectEQPreset
// size:0x0048 (0x0068 - 0x00B0)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectEQSettings                     Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectEQSettings& InSettings)//offset:0xDA1FB0;
};


// Class Synthesis.SourceEffectFilterPreset
// size:0x0068 (0x0068 - 0x00D0)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectFilterSettings                 Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectFilterSettings& InSettings)//offset:0xDA2110;
};


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// size:0x0040 (0x0068 - 0x00A8)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectFoldbackDistortionSettings     Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)//offset:0xDA21E0;
};


// Class Synthesis.SourceEffectMidSideSpreaderPreset
// size:0x0038 (0x0068 - 0x00A0)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectMidSideSpreaderSettings        Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)//offset:0xDA2290;
};


// Class Synthesis.SourceEffectPannerPreset
// size:0x0038 (0x0068 - 0x00A0)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectPannerSettings                 Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectPannerSettings& InSettings)//offset:0xDA2340;
};


// Class Synthesis.SourceEffectPhaserPreset
// size:0x0048 (0x0068 - 0x00B0)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectPhaserSettings                 Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings)//offset:0xDA23F0;
};


// Class Synthesis.SourceEffectRingModulationPreset
// size:0x0068 (0x0068 - 0x00D0)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectRingModulationSettings         Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)//offset:0xDA24B0;
};


// Class Synthesis.SourceEffectSimpleDelayPreset
// size:0x0058 (0x0068 - 0x00C0)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	struct FSourceEffectSimpleDelaySettings            Settings;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)//offset:0xDA6C40;
};


// Class Synthesis.SourceEffectStereoDelayPreset
// size:0x0070 (0x0068 - 0x00D8)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0068(0x004C) MISSED OFFSET
	struct FSourceEffectStereoDelaySettings            Settings;                                                 // 0x00B4(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)//offset:0xDA6CF0;
};


// Class Synthesis.SourceEffectWaveShaperPreset
// size:0x0038 (0x0068 - 0x00A0)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectWaveShaperSettings             Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)//offset:0xDA2340;
};


// Class Synthesis.AudioImpulseResponse
// size:0x0030 (0x0028 - 0x0058)
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                      ImpulseResponse;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                NumChannels;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SampleRate;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NormalizationVolumeDb;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTrueStereo;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TArray<float>                                      IRData;                                                   // 0x0048(0x0010) (ZeroConstructor, Deprecated)
};


// Class Synthesis.SubmixEffectConvolutionReverbPreset
// size:0x0088 (0x0068 - 0x00F0)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSubmixEffectConvolutionReverbSettings      Settings;                                                 // 0x0070(0x0028) (Edit, BlueprintVisible)
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHardwareAcceleration;                              // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x56];                                      // 0x009A(0x0056) MISSED OFFSET

	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)//offset:0xDA6DC0;
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)//offset:0xDA6990;
};


// Class Synthesis.SubmixEffectDelayPreset
// size:0x0050 (0x0068 - 0x00B8)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectDelaySettings                  Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)
	struct FSubmixEffectDelaySettings                  DynamicSettings;                                          // 0x00A8(0x000C) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings)//offset:0xDA6E60;
	void SetInterpolationTime(float Time)//offset:0xDA6AB0;
	void SetDelay(float Length)//offset:0xDA6610;
	float GetMaxDelayInMilliseconds()//offset:0xDA6370;
};


// Class Synthesis.SubmixEffectFilterPreset
// size:0x0040 (0x0068 - 0x00A8)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectFilterSettings                 Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)

	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings)//offset:0xDA6F20;
	void SetFilterType(ESubmixFilterType InType)//offset:0xDA6910;
	void SetFilterQMod(float InQ)//offset:0xDA6890;
	void SetFilterQ(float InQ)//offset:0xDA6810;
	void SetFilterCutoffFrequencyMod(float InFrequency)//offset:0xDA6790;
	void SetFilterCutoffFrequency(float InFrequency)//offset:0xDA6710;
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm)//offset:0xDA6690;
};


// Class Synthesis.SubmixEffectFlexiverbPreset
// size:0x0048 (0x0068 - 0x00B0)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectFlexiverbSettings              Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)//offset:0xDA6FD0;
};


// Class Synthesis.SubmixEffectMultibandCompressorPreset
// size:0x0068 (0x0068 - 0x00D0)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSubmixEffectMultibandCompressorSettings    Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible)

	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings)//offset:0xDA7090;
};


// Class Synthesis.SubmixEffectStereoDelayPreset
// size:0x0070 (0x0068 - 0x00D8)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0068(0x004C) MISSED OFFSET
	struct FSubmixEffectStereoDelaySettings            Settings;                                                 // 0x00B4(0x0024) (Edit, BlueprintVisible)

	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings)//offset:0xDA6CF0;
};


// Class Synthesis.SubmixEffectTapDelayPreset
// size:0x0070 (0x0068 - 0x00D8)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	struct FSubmixEffectTapDelaySettings               Settings;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	void SetTap(int TapId, const struct FTapDelayInfo& TapInfo)//offset:0xDA7320;
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)//offset:0xDA7150;
	void SetInterpolationTime(float Time)//offset:0xDA6B30;
	void RemoveTap(int TapId)//offset:0xDA6580;
	void GetTapIds(TArray<int>* TapIds)//offset:0xDA6490;
	void GetTap(int TapId, struct FTapDelayInfo* TapInfo)//offset:0xDA63B0;
	float GetMaxDelayInMilliseconds()//offset:0xDA6390;
	void AddTap(int* TapId)//offset:0xDA62E0;
};


// Class Synthesis.Synth2DSlider
// size:0x0370 (0x0108 - 0x0478)
class USynth2DSlider : public UWidget
{
public:
	float                                              ValueX;                                                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueY;                                                   // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueXDelegate;                                           // 0x0110(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ValueYDelegate;                                           // 0x0120(0x0014) (ZeroConstructor, InstancedReference)
	struct FSynth2DSliderStyle                         WidgetStyle;                                              // 0x0130(0x02B8) (Edit, BlueprintVisible)
	struct FLinearColor                                SliderHandleColor;                                        // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x03F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03FA(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnMouseCaptureBegin;                                      // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMouseCaptureEnd;                                        // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControllerCaptureBegin;                                 // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControllerCaptureEnd;                                   // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnValueChangedX;                                          // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnValueChangedY;                                          // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0468(0x0010) MISSED OFFSET

	void SetValue(const struct FVector2D& InValue)//offset:0xDA7400;
	void SetStepSize(float InValue)//offset:0xDA72A0;
	void SetSliderHandleColor(const struct FLinearColor& InValue)//offset:0xDA7210;
	void SetLocked(bool InValue)//offset:0xDA6BB0;
	void SetIndentHandle(bool InValue)//offset:0xDA6A20;
	struct FVector2D GetValue()//offset:0xDA6540;
};


// Class Synthesis.GranularSynth
// size:0x03C0 (0x06C0 - 0x0A80)
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                                  GranulatedSoundWave;                                      // 0x06C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x06C8(0x03B8) MISSED OFFSET

	void SetSustainGain(float SustainGain)//offset:0xDAB8F0;
	void SetSoundWave(class USoundWave* InSoundWave)//offset:0xDAB7D0;
	void SetScrubMode(bool bScrubMode)//offset:0xDAB630;
	void SetReleaseTimeMsec(float ReleaseTimeMsec)//offset:0xDAB5B0;
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType)//offset:0xDAAF00;
	void SetPlaybackSpeed(float InPlayheadRate)//offset:0xDAAE80;
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)//offset:0xDAABF0;
	void SetGrainsPerSecond(float InGrainsPerSecond)//offset:0xDAACB0;
	void SetGrainProbability(float InGrainProbability)//offset:0xDAAB70;
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)//offset:0xDAAAB0;
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange)//offset:0xDAA9F0;
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType)//offset:0xDAA970;
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)//offset:0xDAA8B0;
	void SetDecayTime(float DecayTimeMsec)//offset:0xDA9F60;
	void SetAttackTime(float AttackTimeMsec)//offset:0xDA9F60;
	void NoteOn(float Note, int Velocity, float Duration)//offset:0xDA9780;
	void NoteOff(float Note, bool bKill)//offset:0xDA9620;
	bool IsLoaded()//offset:0xDA95C0;
	float GetSampleDuration()//offset:0xDA9560;
	float GetCurrentPlayheadTime()//offset:0xDA8FE0;
};


// Class Synthesis.MonoWaveTableSynthPreset
// size:0x0148 (0x0028 - 0x0170)
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                      PresetName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bLockKeyframesToGridBool;                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                LockKeyframesToGrid;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WaveTableResolution;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FRuntimeFloatCurve>                  WaveTable;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bNormalizeWaveTables;                                     // 0x0058(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x117];                                     // 0x0059(0x0117) MISSED OFFSET
};


// Class Synthesis.SynthComponentMonoWaveTable
// size:0x0740 (0x06C0 - 0x0E00)
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	struct UEMulticastInlineDelegate                   OnTableAltered;                                           // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnNumTablesChanged;                                       // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                            // 0x06E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x718];                                     // 0x06E8(0x0718) MISSED OFFSET

	void SetWaveTablePosition(float InPosition)//offset:0xDABA80;
	void SetSustainPedalState(bool InSustainPedalState)//offset:0xDAB970;
	void SetPosLfoType(ESynthLFOType InLfoType)//offset:0xDAB110;
	void SetPosLfoFrequency(float InLfoFrequency)//offset:0xDAB090;
	void SetPosLfoDepth(float InLfoDepth)//offset:0xDAB010;
	void SetPositionEnvelopeSustainGain(float InSustainGain)//offset:0xDAB530;
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec)//offset:0xDAB4B0;
	void SetPositionEnvelopeInvert(bool bInInvert)//offset:0xDAB420;
	void SetPositionEnvelopeDepth(float InDepth)//offset:0xDAB3A0;
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec)//offset:0xDAB320;
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert)//offset:0xDAB290;
	void SetPositionEnvelopeBiasDepth(float InDepth)//offset:0xDAB210;
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec)//offset:0xDAB190;
	void SetLowPassFilterResonance(float InNewQ)//offset:0xDAAD30;
	void SetFrequencyWithMidiNote(float InMidiNote)//offset:0xDAA830;
	void SetFrequencyPitchBend(float FrequencyOffsetCents)//offset:0xDAA7B0;
	void SetFrequency(float FrequencyHz)//offset:0xDAA6B0;
	void SetFilterEnvelopeSustainGain(float InSustainGain)//offset:0xDAA5B0;
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec)//offset:0xDAA530;
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec)//offset:0xDAA630;
	void SetFilterEnvelopeInvert(bool bInInvert)//offset:0xDAA4A0;
	void SetFilterEnvelopeDepth(float InDepth)//offset:0xDAA420;
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert)//offset:0xDAA390;
	void SetFilterEnvelopeBiasDepth(float InDepth)//offset:0xDAA310;
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec)//offset:0xDAA290;
	bool SetCurveValue(int TableIndex, int KeyframeIndex, float NewValue)//offset:0xDAA180;
	bool SetCurveTangent(int TableIndex, float InNewTangent)//offset:0xDAA0B0;
	bool SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int TableIndex)//offset:0xDA9FE0;
	void SetAmpEnvelopeSustainGain(float InSustainGain)//offset:0xDA9EE0;
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec)//offset:0xDA9E60;
	void SetAmpEnvelopeInvert(bool bInInvert)//offset:0xDA9DD0;
	void SetAmpEnvelopeDepth(float InDepth)//offset:0xDA9D50;
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec)//offset:0xDA9CD0;
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert)//offset:0xDA9C40;
	void SetAmpEnvelopeBiasDepth(float InDepth)//offset:0xDA9BC0;
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec)//offset:0xDA9B40;
	void RefreshWaveTable(int Index)//offset:0xDA9990;
	void RefreshAllWaveTables()//offset:0xDA9970;
	void NoteOn(float InMidiNote, float InVelocity)//offset:0xDA98A0;
	void NoteOff(float InMidiNote)//offset:0xDA9700;
	int GetNumTableEntries()//offset:0xDA9530;
	int GetMaxTableIndex()//offset:0xDA94F0;
	TArray<float> GetKeyFrameValuesForTable(float TableIndex)//offset:0xDA90B0;
	float GetCurveTangent(int TableIndex)//offset:0xDA9010;
};


// Class Synthesis.SynthComponentToneGenerator
// size:0x0020 (0x06C0 - 0x06E0)
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                              Frequency;                                                // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x06C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x06C8(0x0018) MISSED OFFSET

	void SetVolume(float InVolume)//offset:0xDABA00;
	void SetFrequency(float InFrequency)//offset:0xDAA730;
};


// Class Synthesis.SynthSamplePlayer
// size:0x0130 (0x06C0 - 0x07F0)
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                                  SoundWave;                                                // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnSampleLoaded;                                           // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSamplePlaybackProgress;                                 // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x108];                                     // 0x06E8(0x0108) MISSED OFFSET

	void SetSoundWave(class USoundWave* InSoundWave)//offset:0xDAB860;
	void SetScrubTimeWidth(float InScrubTimeWidthSec)//offset:0xDAB750;
	void SetScrubMode(bool bScrubMode)//offset:0xDAB6C0;
	void SetPitch(float InPitch, float TimeSec)//offset:0xDAADB0;
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap)//offset:0xDA9A20;
	bool IsLoaded()//offset:0xDA95F0;
	float GetSampleDuration()//offset:0xDA9590;
	float GetCurrentPlaybackProgressTime()//offset:0xDA8FB0;
	float GetCurrentPlaybackProgressPercent()//offset:0xDA8F80;
};


// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)//offset:0xDA9340;
	static float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)//offset:0xDA9190;
};


// Class Synthesis.SynthKnob
// size:0x02F8 (0x0108 - 0x0400)
class USynthKnob : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MouseSpeed;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MouseFineTuneSpeed;                                       // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowTooltipInfo;                                          // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FText                                       ParameterName;                                            // 0x0120(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ParameterUnits;                                           // 0x0138(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0150(0x0014) (ZeroConstructor, InstancedReference)
	struct FSynthKnobStyle                             WidgetStyle;                                              // 0x0160(0x0238) (Edit, BlueprintVisible)
	bool                                               Locked;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnMouseCaptureBegin;                                      // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMouseCaptureEnd;                                        // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControllerCaptureBegin;                                 // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControllerCaptureEnd;                                   // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnValueChanged;                                           // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	void SetValue(float InValue)//offset:0xDAC3A0;
	void SetStepSize(float InValue)//offset:0xDAC320;
	void SetLocked(bool InValue)//offset:0xDAC290;
	float GetValue()//offset:0xDAC260;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
