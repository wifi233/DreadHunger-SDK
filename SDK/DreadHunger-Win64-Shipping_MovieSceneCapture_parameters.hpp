                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MovieSceneCapture_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneCaptureProtocolBase_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneCaptureProtocolBase_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct UMovieSceneCapture_SetImageCaptureProtocolType_Params
{
	class UMovieSceneCaptureProtocolBase*              ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct UMovieSceneCapture_SetAudioCaptureProtocolType_Params
{
	class UMovieSceneCaptureProtocolBase*              ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct UMovieSceneCapture_GetImageCaptureProtocol_Params
{
	class UMovieSceneCaptureProtocolBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct UMovieSceneCapture_GetAudioCaptureProtocol_Params
{
	class UMovieSceneCaptureProtocolBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
struct UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params
{
	class UMovieSceneImageCaptureProtocolBase*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params
{
	class UMovieSceneAudioCaptureProtocolBase*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
{
	struct FCapturedPixelsID                           StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct UUserDefinedCaptureProtocol_ResolveBuffer_Params
{
	class UTexture*                                    Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCapturedPixelsID                           BufferID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
struct UUserDefinedCaptureProtocol_OnWarmUp_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
struct UUserDefinedCaptureProtocol_OnTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
struct UUserDefinedCaptureProtocol_OnStartCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct UUserDefinedCaptureProtocol_OnSetup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
struct UUserDefinedCaptureProtocol_OnPreTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
struct UUserDefinedCaptureProtocol_OnPixelsReceived_Params
{
	struct FCapturedPixels                             Pixels;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCapturedPixelsID                           ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameMetrics                               FrameMetrics;                                             // (Parm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
struct UUserDefinedCaptureProtocol_OnPauseCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
struct UUserDefinedCaptureProtocol_OnFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
struct UUserDefinedCaptureProtocol_OnCaptureFrame_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct UUserDefinedCaptureProtocol_OnCanFinalize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
struct UUserDefinedCaptureProtocol_OnBeginFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
{
	struct FFrameMetrics                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct UUserDefinedCaptureProtocol_GenerateFilename_Params
{
	struct FFrameMetrics                               InFrameMetrics;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params
{
	struct FCapturedPixels                             PixelData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCapturedPixelsID                           StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameMetrics                               FrameMetrics;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCopyImageData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
{
	class UTexture*                                    Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCapturedPixelsID                           StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
