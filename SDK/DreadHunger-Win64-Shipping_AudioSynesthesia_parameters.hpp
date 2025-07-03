                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AudioSynesthesia_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
struct UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params
{
	float                                              InSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutConstantQ;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
struct UConstantQNRT_GetChannelConstantQAtTime_Params
{
	float                                              InSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutConstantQ;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
struct ULoudnessNRT_GetNormalizedLoudnessAtTime_Params
{
	float                                              InSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLoudness;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
struct ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params
{
	float                                              InSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLoudness;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
struct ULoudnessNRT_GetLoudnessAtTime_Params
{
	float                                              InSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLoudness;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
struct ULoudnessNRT_GetChannelLoudnessAtTime_Params
{
	float                                              InSeconds;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLoudness;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
struct UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params
{
	float                                              InStartSeconds;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InEndSeconds;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutOnsetTimestamps;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      OutOnsetStrengths;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
struct UOnsetNRT_GetChannelOnsetsBetweenTimes_Params
{
	float                                              InStartSeconds;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InEndSeconds;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutOnsetTimestamps;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      OutOnsetStrengths;                                        // (Parm, OutParm, ZeroConstructor)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
