                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MediaFrameworkUtilities_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened
// (Final, Native, Private)
// Parameters:
// class FString                  DeviceUrl                      (Parm, ZeroConstructor)

void UMediaBundle::OnMediaOpenOpened(const class FString& DeviceUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened");

	UMediaBundle_OnMediaOpenOpened_Params params;
	params.DeviceUrl = DeviceUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed
// (Final, Native, Private)
// Parameters:
// class FString                  DeviceUrl                      (Parm, ZeroConstructor)

void UMediaBundle::OnMediaOpenFailed(const class FString& DeviceUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed");

	UMediaBundle_OnMediaOpenFailed_Params params;
	params.DeviceUrl = DeviceUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaClosed
// (Final, Native, Private)

void UMediaBundle::OnMediaClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.OnMediaClosed");

	UMediaBundle_OnMediaClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenCVCameraViewInfo   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOpenCVCameraViewInfo UMediaBundle::GetUndistortedCameraViewInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo");

	UMediaBundle_GetUndistortedCameraViewInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaTexture* UMediaBundle::GetMediaTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.GetMediaTexture");

	UMediaBundle_GetMediaTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaSource* UMediaBundle::GetMediaSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.GetMediaSource");

	UMediaBundle_GetMediaSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaPlayer* UMediaBundle::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.GetMediaPlayer");

	UMediaBundle_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundle.GetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMediaBundle::GetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.GetMaterial");

	UMediaBundle_GetMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UMediaBundle::GetLensDisplacementTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture");

	UMediaBundle_GetLensDisplacementTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundleActorBase.SetComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InPrimitive                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMediaSoundComponent*    InMediaSound                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMediaBundleActorBase::SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundleActorBase.SetComponent");

	AMediaBundleActorBase_SetComponent_Params params;
	params.InPrimitive = InPrimitive;
	params.InMediaSound = InMediaSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMediaBundleActorBase::RequestOpenMediaSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource");

	AMediaBundleActorBase_RequestOpenMediaSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource
// (Final, Native, Public, BlueprintCallable)

void AMediaBundleActorBase::RequestCloseMediaSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource");

	AMediaBundleActorBase_RequestCloseMediaSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaBundle*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaBundle* AMediaBundleActorBase::GetMediaBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle");

	AMediaBundleActorBase_GetMediaBundle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMediaProfile*           MediaProfile                   (Parm, ZeroConstructor, IsPlainOldData)

static void UMediaProfileBlueprintLibrary::SetMediaProfile(class UMediaProfile* MediaProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile");

	UMediaProfileBlueprintLibrary_SetMediaProfile_Params params;
	params.MediaProfile = MediaProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMediaProfile*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UMediaProfile* UMediaProfileBlueprintLibrary::GetMediaProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile");

	UMediaProfileBlueprintLibrary_GetMediaProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UProxyMediaSource*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<class UProxyMediaSource*> UMediaProfileBlueprintLibrary::GetAllMediaSourceProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy");

	UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UProxyMediaOutput*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<class UProxyMediaOutput*> UMediaProfileBlueprintLibrary::GetAllMediaOutputProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy");

	UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProxyMediaOutput::IsProxyValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid");

	UProxyMediaOutput_IsProxyValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProxyMediaSource::IsProxyValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid");

	UProxyMediaSource_IsProxyValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
