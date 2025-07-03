                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OpenCVLensDistortion_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UOpenCVLensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static bool NotEqual_CompareLensDistortionModels(const struct FOpenCVLensDistortionParameters& A, const struct FOpenCVLensDistortionParameters& B)//offset:0x9AA7E0;
	static bool EqualEqual_CompareLensDistortionModels(const struct FOpenCVLensDistortionParameters& A, const struct FOpenCVLensDistortionParameters& B)//offset:0x9AA6B0;
	static void DrawDisplacementMapToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap)//offset:0x9AA5B0;
	static class UTexture2D* CreateUndistortUVDisplacementMap(const struct FOpenCVLensDistortionParameters& LensParameters, const struct FIntPoint& ImageSize, float CroppingFactor, struct FOpenCVCameraViewInfo* CameraViewInfo)//offset:0x9AA400;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
