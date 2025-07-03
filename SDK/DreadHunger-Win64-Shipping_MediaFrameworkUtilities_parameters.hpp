                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MediaFrameworkUtilities_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened
struct UMediaBundle_OnMediaOpenOpened_Params
{
	class FString                                      DeviceUrl;                                                // (Parm, ZeroConstructor)
};

// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed
struct UMediaBundle_OnMediaOpenFailed_Params
{
	class FString                                      DeviceUrl;                                                // (Parm, ZeroConstructor)
};

// Function MediaFrameworkUtilities.MediaBundle.OnMediaClosed
struct UMediaBundle_OnMediaClosed_Params
{
};

// Function MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo
struct UMediaBundle_GetUndistortedCameraViewInfo_Params
{
	struct FOpenCVCameraViewInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaFrameworkUtilities.MediaBundle.GetMediaTexture
struct UMediaBundle_GetMediaTexture_Params
{
	class UMediaTexture*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundle.GetMediaSource
struct UMediaBundle_GetMediaSource_Params
{
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundle.GetMediaPlayer
struct UMediaBundle_GetMediaPlayer_Params
{
	class UMediaPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundle.GetMaterial
struct UMediaBundle_GetMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture
struct UMediaBundle_GetLensDisplacementTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundleActorBase.SetComponent
struct AMediaBundleActorBase_SetComponent_Params
{
	class UPrimitiveComponent*                         InPrimitive;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaSoundComponent*                        InMediaSound;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource
struct AMediaBundleActorBase_RequestOpenMediaSource_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource
struct AMediaBundleActorBase_RequestCloseMediaSource_Params
{
};

// Function MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle
struct AMediaBundleActorBase_GetMediaBundle_Params
{
	class UMediaBundle*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile
struct UMediaProfileBlueprintLibrary_SetMediaProfile_Params
{
	class UMediaProfile*                               MediaProfile;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile
struct UMediaProfileBlueprintLibrary_GetMediaProfile_Params
{
	class UMediaProfile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy
struct UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Params
{
	TArray<class UProxyMediaSource*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy
struct UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Params
{
	TArray<class UProxyMediaOutput*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid
struct UProxyMediaOutput_IsProxyValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid
struct UProxyMediaSource_IsProxyValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
