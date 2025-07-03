                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AudioAnalyzer_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioAnalyzer.AudioAnalyzerAsset
// size:0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerAsset : public UObject
{
public:
};


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// size:0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
public:
};


// Class AudioAnalyzer.AudioAnalyzerNRT
// size:0x0050 (0x0028 - 0x0078)
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
public:
	class USoundWave*                                  Sound;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSeconds;                                        // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0034(0x0044) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
