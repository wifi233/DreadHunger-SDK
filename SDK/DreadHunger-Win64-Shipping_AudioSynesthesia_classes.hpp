                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AudioSynesthesia_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// size:0x0000 (0x0028 - 0x0028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:
};


// Class AudioSynesthesia.AudioSynesthesiaNRT
// size:0x0000 (0x0078 - 0x0078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:
};


// Class AudioSynesthesia.ConstantQNRTSettings
// size:0x0020 (0x0028 - 0x0048)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              StartingFrequency;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumBands;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NumBandsPerOctave;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnalysisPeriod;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDownmixToMono;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConstantQFFTSizeEnum                              FFTSize;                                                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFFTWindowType                                     WindowType;                                               // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAudioSpectrumType                                 SpectrumType;                                             // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BandWidthStretch;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConstantQNormalizationEnum                        CQTNormalization;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class AudioSynesthesia.ConstantQNRT
// size:0x0008 (0x0078 - 0x0080)
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                       Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)//offset:0xDB9D40;
	void GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)//offset:0xDB9830;
};


// Class AudioSynesthesia.LoudnessNRTSettings
// size:0x0018 (0x0028 - 0x0040)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              AnalysisPeriod;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};


// Class AudioSynesthesia.LoudnessNRT
// size:0x0008 (0x0078 - 0x0080)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                        Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)//offset:0xDBA170;
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)//offset:0xDB9E70;
	void GetLoudnessAtTime(float InSeconds, float* OutLoudness)//offset:0xDB9C60;
	void GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)//offset:0xDB9960;
};


// Class AudioSynesthesia.OnsetNRTSettings
// size:0x0018 (0x0028 - 0x0040)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                               bDownmixToMono;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              GranularityInSeconds;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};


// Class AudioSynesthesia.OnsetNRT
// size:0x0008 (0x0078 - 0x0080)
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                           Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)//offset:0xDB9F90;
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)//offset:0xDB9A80;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
