                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode           = 0,
	DropFrameTimecode              = 1,
	Seconds                        = 2,
	Frames                         = 3,
	MAX_Count                      = 4,
	EFrameNumberDisplayFormats_MAX = 5
};


// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected                      = 0,
	Unresponsive                   = 1,
	Disconnected                   = 2,
	ETimedDataInputState_MAX       = 3
};


// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None                           = 0,
	Timecode                       = 1,
	PlatformTime                   = 2,
	ETimedDataInputEvaluationType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TimeManagement.TimedDataInputEvaluationData
// 0x0008
struct FTimedDataInputEvaluationData
{
	float                                              DistanceToNewestSampleSeconds;                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToOldestSampleSeconds;                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeManagement.TimedDataChannelSampleTime
// 0x0018
struct FTimedDataChannelSampleTime
{

};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
