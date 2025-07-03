                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_AudioAnalyzer_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioSynesthesia.EConstantQFFTSizeEnum
enum class EConstantQFFTSizeEnum : uint8_t
{
	Min                            = 0,
	XXSmall                        = 1,
	XSmall                         = 2,
	Small                          = 3,
	Medium                         = 4,
	Large                          = 5,
	XLarge                         = 6,
	XXLarge                        = 7,
	Max                            = 8
};


// Enum AudioSynesthesia.EConstantQNormalizationEnum
enum class EConstantQNormalizationEnum : uint8_t
{
	EqualEuclideanNorm             = 0,
	EqualEnergy                    = 1,
	EqualAmplitude                 = 2,
	EConstantQNormalizationEnum_MAX = 3
};


// Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	A                              = 0,
	B                              = 1,
	C                              = 2,
	D                              = 3,
	None                           = 4,
	ELoudnessNRTCurveTypeEnum_MAX  = 5
};



#ifdef _MSC_VER
	#pragma pack(pop)
#endif
