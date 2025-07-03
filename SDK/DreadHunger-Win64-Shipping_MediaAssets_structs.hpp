                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"
#include "DreadHunger-Win64-Shipping_AudioMixer_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	DepthSensor                    = 1,
	Front                          = 2,
	Rear                           = 3,
	Unknown                        = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	Card                           = 1,
	Software                       = 2,
	Unknown                        = 3,
	Webcam                         = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	Card                           = 1,
	Microphone                     = 2,
	Software                       = 3,
	Unknown                        = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Caption                        = 1,
	Metadata                       = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7
};


// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	Min                            = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};


// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	Surround                       = 2,
	EMediaSoundChannels_MAX        = 3
};


// Enum MediaAssets.MediaTextureOrientation
enum class EMediaTextureOrientation : uint8_t
{
	MTORI_Original                 = 0,
	MTORI_CW90                     = 1,
	MTORI_CW180                    = 2,
	MTORI_CW270                    = 3,
	MTORI_MAX                      = 4
};


// Enum MediaAssets.MediaTextureOutputFormat
enum class EMediaTextureOutputFormat : uint8_t
{
	MTOF_Default                   = 0,
	MTOF_SRGB_LINOUT               = 1,
	MTOF_MAX                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, Transient)
	class FString                                      URL;                                                      // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008
struct FMediaSoundComponentSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
