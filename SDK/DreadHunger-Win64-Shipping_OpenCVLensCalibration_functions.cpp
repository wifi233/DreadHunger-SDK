                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OpenCVLensCalibration_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  TextureRenderTarget            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenCVLensCalibrator::FeedRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedRenderTarget");

	UOpenCVLensCalibrator_FeedRenderTarget_Params params;
	params.TextureRenderTarget = TextureRenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenCVLensCalibrator::FeedImage(const class FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedImage");

	UOpenCVLensCalibrator_FeedImage_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenCVLensCalibration.OpenCVLensCalibrator.CreateCalibrator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            BoardWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            BoardHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          SquareSize                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFisheyeModel               (Parm, ZeroConstructor, IsPlainOldData)
// class UOpenCVLensCalibrator*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UOpenCVLensCalibrator* UOpenCVLensCalibrator::CreateCalibrator(int BoardWidth, int BoardHeight, float SquareSize, bool bUseFisheyeModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensCalibration.OpenCVLensCalibrator.CreateCalibrator");

	UOpenCVLensCalibrator_CreateCalibrator_Params params;
	params.BoardWidth = BoardWidth;
	params.BoardHeight = BoardHeight;
	params.SquareSize = SquareSize;
	params.bUseFisheyeModel = bUseFisheyeModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenCVLensCalibration.OpenCVLensCalibrator.CalculateLensParameters
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FOpenCVLensDistortionParameters LensDistortionParameters       (Parm, OutParm)
// float                          MarginOfError                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FOpenCVCameraViewInfo   CameraViewInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenCVLensCalibrator::CalculateLensParameters(struct FOpenCVLensDistortionParameters* LensDistortionParameters, float* MarginOfError, struct FOpenCVCameraViewInfo* CameraViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensCalibration.OpenCVLensCalibrator.CalculateLensParameters");

	UOpenCVLensCalibrator_CalculateLensParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LensDistortionParameters != nullptr)
		*LensDistortionParameters = params.LensDistortionParameters;
	if (MarginOfError != nullptr)
		*MarginOfError = params.MarginOfError;
	if (CameraViewInfo != nullptr)
		*CameraViewInfo = params.CameraViewInfo;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
