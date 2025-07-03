                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OpenCVLensDistortion_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOpenCVLensDistortionParameters A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FOpenCVLensDistortionParameters B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UOpenCVLensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(const struct FOpenCVLensDistortionParameters& A, const struct FOpenCVLensDistortionParameters& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels");

	UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOpenCVLensDistortionParameters A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FOpenCVLensDistortionParameters B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UOpenCVLensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(const struct FOpenCVLensDistortionParameters& A, const struct FOpenCVLensDistortionParameters& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels");

	UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.DrawDisplacementMapToRenderTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  OutputRenderTarget             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              PreComputedUndistortDisplacementMap (Parm, ZeroConstructor, IsPlainOldData)

static void UOpenCVLensDistortionBlueprintLibrary::DrawDisplacementMapToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.DrawDisplacementMapToRenderTarget");

	UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OutputRenderTarget = OutputRenderTarget;
	params.PreComputedUndistortDisplacementMap = PreComputedUndistortDisplacementMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.CreateUndistortUVDisplacementMap
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FOpenCVLensDistortionParameters LensParameters                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FIntPoint               ImageSize                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          CroppingFactor                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FOpenCVCameraViewInfo   CameraViewInfo                 (Parm, OutParm)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UTexture2D* UOpenCVLensDistortionBlueprintLibrary::CreateUndistortUVDisplacementMap(const struct FOpenCVLensDistortionParameters& LensParameters, const struct FIntPoint& ImageSize, float CroppingFactor, struct FOpenCVCameraViewInfo* CameraViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.CreateUndistortUVDisplacementMap");

	UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Params params;
	params.LensParameters = LensParameters;
	params.ImageSize = ImageSize;
	params.CroppingFactor = CroppingFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraViewInfo != nullptr)
		*CameraViewInfo = params.CameraViewInfo;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
