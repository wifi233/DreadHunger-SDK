                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"
#include "DreadHunger-Win64-Shipping_AudioMixer_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// 0x0068
struct FMotoSynthRuntimeSettings
{
	bool                                               bSynthToneEnabled;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SynthToneVolume;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SynthToneFilterFrequency;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SynthOctaveShift;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGranularEngineEnabled;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              GranularEngineVolume;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GranularEnginePitchScale;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSamplesToCrossfadeBetweenGrains;                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumGrainTableEntriesPerGrain;                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrainTableRandomOffsetForConstantRPMs;                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrainCrossfadeSamplesForConstantRPMs;                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UMotoSynthSource*                            AccelerationSource;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMotoSynthSource*                            DecelerationSource;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStereoWidenerEnabled;                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              StereoDelayMsec;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoFeedback;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoWidenerWetlevel;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoWidenerDryLevel;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoWidenerDelayRatio;                                  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStereoWidenerFilterEnabled;                              // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              StereoWidenerFilterFrequency;                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoWidenerFilterQ;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct MotoSynth.GrainTableEntry
// 0x0008
struct FGrainTableEntry
{
	int                                                SampleIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RPM;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
