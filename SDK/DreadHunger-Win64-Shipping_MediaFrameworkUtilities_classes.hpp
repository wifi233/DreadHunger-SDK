                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MediaFrameworkUtilities_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaFrameworkUtilities.MediaBundle
// size:0x00C8 (0x0028 - 0x00F0)
class UMediaBundle : public UObject
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
	bool                                               bLoopMediaSource;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReopenSourceOnError;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOpenCVLensDistortionParameters             LensParameters;                                           // 0x0050(0x0034) (Edit)
	struct FOpenCVCameraViewInfo                       UndistortedCameraViewInfo;                                // 0x0084(0x000C) (Edit, EditConst)
	struct FOpenCVLensDistortionParameters             CurrentLensParameters;                                    // 0x0090(0x0034) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UTextureRenderTarget2D*                      LensDisplacementMap;                                      // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReferenceCount;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x00D4(0x001C) MISSED OFFSET

	void OnMediaOpenOpened(const class FString& DeviceUrl)//offset:0x998EE0;
	void OnMediaOpenFailed(const class FString& DeviceUrl)//offset:0x998DF0;
	void OnMediaClosed()//offset:0x998DD0;
	struct FOpenCVCameraViewInfo GetUndistortedCameraViewInfo()//offset:0x998D40;
	class UMediaTexture* GetMediaTexture()//offset:0x998D20;
	class UMediaSource* GetMediaSource()//offset:0x998D00;
	class UMediaPlayer* GetMediaPlayer()//offset:0x998CB0;
	class UMaterialInterface* GetMaterial()//offset:0x998C70;
	class UTextureRenderTarget2D* GetLensDisplacementTexture()//offset:0x998C50;
};


// Class MediaFrameworkUtilities.MediaBundleActorBase
// size:0x0040 (0x0220 - 0x0260)
class AMediaBundleActorBase : public AActor
{
public:
	class UTextureRenderTarget2D*                      GarbageMatteMask;                                         // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaBundle*                                MediaBundle;                                              // 0x0228(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x0230(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayWhileEditing;                                        // 0x0231(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0232(0x0006) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveCmp;                                             // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMediaSoundComponent*                        MediaSoundCmp;                                            // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrimitiveMaterialIndex;                                   // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0254(0x000C) MISSED OFFSET

	void SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound)//offset:0x999020;
	bool RequestOpenMediaSource()//offset:0x998FF0;
	void RequestCloseMediaSource()//offset:0x998FD0;
	class UMediaBundle* GetMediaBundle()//offset:0x998C90;
};


// Class MediaFrameworkUtilities.MediaBundleTimeSynchronizationSource
// size:0x0030 (0x0030 - 0x0060)
class UMediaBundleTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	class UMediaBundle*                                MediaBundle;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};


// Class MediaFrameworkUtilities.MediaPlayerTimeSynchronizationSource
// size:0x0038 (0x0030 - 0x0068)
class UMediaPlayerTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
};


// Class MediaFrameworkUtilities.MediaProfile
// size:0x0070 (0x0028 - 0x0098)
class UMediaProfile : public UObject
{
public:
	TArray<class UMediaSource*>                        MediaSources;                                             // 0x0028(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor)
	TArray<class UMediaOutput*>                        MediaOutputs;                                             // 0x0038(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor)
	bool                                               bOverrideTimecodeProvider;                                // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UTimecodeProvider*                           TimecodeProvider;                                         // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bOverrideCustomTimeStep;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UEngineCustomTimeStep*                       CustomTimeStep;                                           // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class UTimecodeProvider*                           AppliedTimecodeProvider;                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTimecodeProvider*                           PreviousTimecodeProvider;                                 // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	class UEngineCustomTimeStep*                       AppliedCustomTimeStep;                                    // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEngineCustomTimeStep*                       PreviousCustomTimeStep;                                   // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};


// Class MediaFrameworkUtilities.MediaProfileBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UMediaProfileBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static void SetMediaProfile(class UMediaProfile* MediaProfile)//offset:0x9990F0;
	static class UMediaProfile* GetMediaProfile()//offset:0x998CD0;
	static TArray<class UProxyMediaSource*> GetAllMediaSourceProxy()//offset:0x998BD0;
	static TArray<class UProxyMediaOutput*> GetAllMediaOutputProxy()//offset:0x998B50;
};


// Class MediaFrameworkUtilities.MediaProfileSettings
// size:0x0050 (0x0028 - 0x0078)
class UMediaProfileSettings : public UObject
{
public:
	bool                                               bApplyInCommandlet;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0029(0x0010) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData02[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData03[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: 
};


// Class MediaFrameworkUtilities.MediaProfileEditorSettings
// size:0x0000 (0x0028 - 0x0028)
class UMediaProfileEditorSettings : public UObject
{
public:
};


// Class MediaFrameworkUtilities.ProxyMediaOutput
// size:0x0018 (0x0030 - 0x0048)
class UProxyMediaOutput : public UMediaOutput
{
public:
	class UMediaOutput*                                DynamicProxy;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMediaOutput*                                Proxy;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	bool IsProxyValid()//offset:0x998D70;
};


// Class MediaFrameworkUtilities.ProxyMediaSource
// size:0x0018 (0x0080 - 0x0098)
class UProxyMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                DynamicProxy;                                             // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMediaSource*                                Proxy;                                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	bool IsProxyValid()//offset:0x998DA0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
