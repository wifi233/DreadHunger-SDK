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

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	NotConnected                   = 0,
	NotTracking                    = 1,
	Tracking                       = 2,
	EEyeTrackerStatus_MAX          = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040
struct FEyeTrackerStereoGazeData
{
	struct FVector                                     LeftEyeOrigin;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEyeDirection;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyeOrigin;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyeDirection;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixationPoint;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConfidenceValue;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028
struct FEyeTrackerGazeData
{
	struct FVector                                     GazeOrigin;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GazeDirection;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixationPoint;                                            // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConfidenceValue;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
