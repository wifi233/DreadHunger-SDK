                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MovieSceneCapture_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// size:0x0030 (0x0028 - 0x0058)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	EMovieSceneCaptureProtocolState                    State;                                                    // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	bool IsCapturing()//offset:0x2618E70;
	EMovieSceneCaptureProtocolState GetState()//offset:0xF23B20;
};


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// size:0x0000 (0x0058 - 0x0058)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
};


// Class MovieSceneCapture.NullAudioCaptureProtocol
// size:0x0000 (0x0058 - 0x0058)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
};


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// size:0x0038 (0x0058 - 0x0090)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	class FString                                      Filename;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET
};


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// size:0x0000 (0x0058 - 0x0058)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
};


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// size:0x0068 (0x0058 - 0x00C0)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	bool                                               bDisableScreenPercentage;                                 // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET
};


// Class MovieSceneCapture.FrameGrabberProtocol
// size:0x0010 (0x0058 - 0x0068)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
};


// Class MovieSceneCapture.ImageSequenceProtocol
// size:0x0070 (0x0068 - 0x00D8)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
};


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// size:0x0008 (0x00D8 - 0x00E0)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int                                                CompressionQuality;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// size:0x0000 (0x00D8 - 0x00D8)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:
};


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// size:0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:
};


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// size:0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:
};


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// size:0x0010 (0x00D8 - 0x00E8)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                               bCompressed;                                              // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00DA(0x000E) MISSED OFFSET
};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:
};


// Class MovieSceneCapture.MovieSceneCapture
// size:0x01F8 (0x0028 - 0x0220)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FSoftClassPath                              ImageCaptureProtocolType;                                 // 0x0038(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftClassPath                              AudioCaptureProtocolType;                                 // 0x0050(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                     // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                     // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0078(0x0070) (Edit, BlueprintVisible, Config)
	bool                                               bUseSeparateProcess;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET
	class FString                                      AdditionalCommandLineArguments;                           // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class FString                                      InheritedCommandLineArguments;                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x110];                                     // 0x0110(0x0110) MISSED OFFSET

	void SetImageCaptureProtocolType(class UMovieSceneCaptureProtocolBase* ProtocolType)//offset:0x2619120;
	void SetAudioCaptureProtocolType(class UMovieSceneCaptureProtocolBase* ProtocolType)//offset:0x2619090;
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol()//offset:0x2618E20;
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol()//offset:0x2618D80;
};


// Class MovieSceneCapture.LevelCapture
// size:0x0020 (0x0220 - 0x0240)
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                        // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0221(0x000B) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x022C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static bool IsCaptureInProgress()//offset:0x2618E40;
	static int GetCaptureFrameNumber()//offset:0x2618DD0;
	static float GetCaptureElapsedTime()//offset:0x2618DA0;
	static class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol()//offset:0x2618A20;
	static class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol()//offset:0x26189F0;
};


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// size:0x0080 (0x0058 - 0x00D8)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                      World;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	void StopCapturingFinalPixels()//offset:0x26192F0;
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)//offset:0x26191B0;
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)//offset:0x2618F10;
	void OnWarmUp()//offset:0x13CEB30;
	void OnTick()//offset:0x13CEB30;
	void OnStartCapture()//offset:0x13CEB30;
	bool OnSetup()//offset:0x2618EE0;
	void OnPreTick()//offset:0x13CEB30;
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)//offset:0x13CEB30;
	void OnPauseCapture()//offset:0x13CEB30;
	void OnFinalize()//offset:0x13CEB30;
	void OnCaptureFrame()//offset:0x13CEB30;
	bool OnCanFinalize()//offset:0x2618EB0;
	void OnBeginFinalize()//offset:0x13CEB30;
	struct FFrameMetrics GetCurrentFrameMetrics()//offset:0x2618E00;
	class FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics)//offset:0x2618A50;
};


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// size:0x0008 (0x00D8 - 0x00E0)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	EDesiredImageFormat                                Format;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableCompression;                                       // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	int                                                CompressionQuality;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)

	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)//offset:0x2619310;
	class FString GenerateFilenameForCurrentFrame()//offset:0x2618D00;
	class FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)//offset:0x2618B40;
};


// Class MovieSceneCapture.VideoCaptureProtocol
// size:0x0018 (0x0068 - 0x0080)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                               bUseCompression;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
