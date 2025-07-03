                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MotoSynth_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MotoSynth.SynthComponentMoto.SetSettings
struct USynthComponentMoto_SetSettings_Params
{
	struct FMotoSynthRuntimeSettings                   InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MotoSynth.SynthComponentMoto.SetRPM
struct USynthComponentMoto_SetRPM_Params
{
	float                                              InRPM;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeSec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotoSynth.SynthComponentMoto.IsEnabled
struct USynthComponentMoto_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MotoSynth.SynthComponentMoto.GetRPMRange
struct USynthComponentMoto_GetRPMRange_Params
{
	float                                              OutMinRPM;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutMaxRPM;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
