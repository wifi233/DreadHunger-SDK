                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_EyeTracker_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
struct UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
struct UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
struct UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
struct UEyeTrackerFunctionLibrary_GetStereoGazeData_Params
{
	struct FEyeTrackerStereoGazeData                   OutGazeData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
struct UEyeTrackerFunctionLibrary_GetGazeData_Params
{
	struct FEyeTrackerGazeData                         OutGazeData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
