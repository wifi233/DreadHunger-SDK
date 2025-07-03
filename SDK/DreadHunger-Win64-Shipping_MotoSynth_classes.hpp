                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MotoSynth_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MotoSynth.MotoSynthPreset
// size:0x0068 (0x0028 - 0x0090)
class UMotoSynthPreset : public UObject
{
public:
	struct FMotoSynthRuntimeSettings                   Settings;                                                 // 0x0028(0x0068) (Edit, BlueprintVisible)
};


// Class MotoSynth.MotoSynthSource
// size:0x00D0 (0x0028 - 0x00F8)
class UMotoSynthSource : public UObject
{
public:
	bool                                               bConvertTo8Bit;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DownSampleFactor;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          RPMCurve;                                                 // 0x0030(0x0088) (Edit, BlueprintVisible)
	TArray<float>                                      SourceData;                                               // 0x00B8(0x0010) (ZeroConstructor, Deprecated)
	TArray<int16_t>                                    SourceDataPCM;                                            // 0x00C8(0x0010) (ZeroConstructor)
	int                                                SourceSampleRate;                                         // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FGrainTableEntry>                    GrainTable;                                               // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
};


// Class MotoSynth.SynthComponentMoto
// size:0x00C0 (0x06C0 - 0x0780)
class USynthComponentMoto : public USynthComponent
{
public:
	class UMotoSynthPreset*                            MotoSynthPreset;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RPM;                                                      // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x06CC(0x00B4) MISSED OFFSET

	void SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)//offset:0xCF1CC0;
	void SetRPM(float InRPM, float InTimeSec)//offset:0xCF1BF0;
	bool IsEnabled()//offset:0xCF1BC0;
	void GetRPMRange(float* OutMinRPM, float* OutMaxRPM)//offset:0xCF1AE0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
