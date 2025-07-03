                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OpenCVLensCalibration_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OpenCVLensCalibration.OpenCVLensCalibrator
// size:0x0058 (0x0028 - 0x0080)
class UOpenCVLensCalibrator : public UObject
{
public:
	struct FVector2D                                   MinimumCornerCoordinates;                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   MaximumCornerCoordinates;                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	bool FeedRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget)//offset:0x9A66C0;
	bool FeedImage(const class FString& FilePath)//offset:0x9A6610;
	static class UOpenCVLensCalibrator* CreateCalibrator(int BoardWidth, int BoardHeight, float SquareSize, bool bUseFisheyeModel)//offset:0x9A64C0;
	bool CalculateLensParameters(struct FOpenCVLensDistortionParameters* LensDistortionParameters, float* MarginOfError, struct FOpenCVCameraViewInfo* CameraViewInfo)//offset:0x9A6350;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
