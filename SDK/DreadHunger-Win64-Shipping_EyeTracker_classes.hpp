                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_EyeTracker_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EyeTracker.EyeTrackerFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void SetEyeTrackedPlayer(class APlayerController* PlayerController)//offset:0x25CF620;
	static bool IsStereoGazeDataAvailable()//offset:0x25CF5F0;
	static bool IsEyeTrackerConnected()//offset:0x25CF5C0;
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)//offset:0x25CF520;
	static bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData)//offset:0x25CF470;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
