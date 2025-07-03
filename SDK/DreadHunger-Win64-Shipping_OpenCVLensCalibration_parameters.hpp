                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OpenCVLensCalibration_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedRenderTarget
struct UOpenCVLensCalibrator_FeedRenderTarget_Params
{
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedImage
struct UOpenCVLensCalibrator_FeedImage_Params
{
	class FString                                      FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenCVLensCalibration.OpenCVLensCalibrator.CreateCalibrator
struct UOpenCVLensCalibrator_CreateCalibrator_Params
{
	int                                                BoardWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoardHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SquareSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFisheyeModel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOpenCVLensCalibrator*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenCVLensCalibration.OpenCVLensCalibrator.CalculateLensParameters
struct UOpenCVLensCalibrator_CalculateLensParameters_Params
{
	struct FOpenCVLensDistortionParameters             LensDistortionParameters;                                 // (Parm, OutParm)
	float                                              MarginOfError;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FOpenCVCameraViewInfo                       CameraViewInfo;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
