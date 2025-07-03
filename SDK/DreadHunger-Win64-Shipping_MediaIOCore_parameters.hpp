                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MediaIOCore_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaIOCore.MediaOutput.Validate
struct UMediaOutput_Validate_Params
{
	class FString                                      OutFailureReason;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaOutput.CreateMediaCapture
struct UMediaOutput_CreateMediaCapture_Params
{
	class UMediaCapture*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
struct UMediaCapture_UpdateTextureRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.StopCapture
struct UMediaCapture_StopCapture_Params
{
	bool                                               bAllowPendingFrameToBeProcess;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.SetMediaOutput
struct UMediaCapture_SetMediaOutput_Params
{
	class UMediaOutput*                                InMediaOutput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.GetState
struct UMediaCapture_GetState_Params
{
	EMediaCaptureState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.GetDesiredSize
struct UMediaCapture_GetDesiredSize_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
struct UMediaCapture_GetDesiredPixelFormat_Params
{
	TEnumAsByte<EPixelFormat>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
struct UMediaCapture_CaptureTextureRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMediaCaptureOptions                        CaptureOptions;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
struct UMediaCapture_CaptureActiveSceneViewport_Params
{
	struct FMediaCaptureOptions                        CaptureOptions;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
