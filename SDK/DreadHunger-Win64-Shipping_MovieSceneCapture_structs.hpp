                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
};


// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	Idle                           = 0,
	Initialized                    = 1,
	Capturing                      = 2,
	Finalizing                     = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	TArray<class FString>                              Value;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010
struct FFrameMetrics
{
	float                                              TotalElapsedTime;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FrameDelta;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FrameNumber;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDroppedFrames;                                         // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0070
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, Config)
	class AGameModeBase*                               GameModeOverride;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      OutputFormat;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	bool                                               bOverwriteExisting;                                       // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseRelativeFrameNumbers;                                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                HandleFrames;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      MovieExtension;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      ZeroPadFrameNumbers;                                      // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FFrameRate                                  FrameRate;                                                // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bUseCustomFrameRate;                                      // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFrameRate                                  CustomFrameRate;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FCaptureResolution                          Resolution;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, Config)
	bool                                               bEnableTextureStreaming;                                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicEngineScalability;                              // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicMode;                                           // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMovement;                                           // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowTurning;                                            // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowPlayer;                                              // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowHUD;                                                 // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUsePathTracer;                                           // 0x0067(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                PathTracerSamplePerPixel;                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	int                                                ResX;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                ResY;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010
struct FCapturedPixels
{

};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x0050
struct FCapturedPixelsID
{
	TMap<struct FName, struct FName>                   Identifiers;                                              // 0x0000(0x0050) (Edit, BlueprintVisible)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
