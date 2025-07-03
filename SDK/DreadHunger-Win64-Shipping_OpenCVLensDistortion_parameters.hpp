                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OpenCVLensDistortion_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
struct UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params
{
	struct FOpenCVLensDistortionParameters             A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FOpenCVLensDistortionParameters             B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
struct UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params
{
	struct FOpenCVLensDistortionParameters             A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FOpenCVLensDistortionParameters             B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.DrawDisplacementMapToRenderTarget
struct UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      OutputRenderTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PreComputedUndistortDisplacementMap;                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.CreateUndistortUVDisplacementMap
struct UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Params
{
	struct FOpenCVLensDistortionParameters             LensParameters;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FIntPoint                                   ImageSize;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              CroppingFactor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FOpenCVCameraViewInfo                       CameraViewInfo;                                           // (Parm, OutParm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
