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

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	DoNotOverride                  = 0,
	Manual                         = 1,
	Tracking                       = 2,
	Disable                        = 3,
	MAX                            = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0050
struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking;                                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDrawDebugLookAtTrackingPosition;                         // 0x0000(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LookAtTrackingInterpSpeed;                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: 
	struct FVector                                     RelativeOffset;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowRoll;                                               // 0x004C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0058
struct FCameraFocusSettings
{
	ECameraFocusMethod                                 FocusMethod;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ManualFocusDistance;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                    // 0x0008(0x0038) (Edit, BlueprintVisible)
	unsigned char                                      bDrawDebugFocusPlane;                                     // 0x0040(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FColor                                      DebugFocusPlaneColor;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSmoothFocusChanges;                                      // 0x0048(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FocusSmoothingInterpSpeed;                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusOffset;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0038
struct FCameraTrackingFocusSettings
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: 
	struct FVector                                     RelativeOffset;                                           // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawDebugTrackingFocusPoint;                             // 0x0034(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
struct FNamedLensPreset
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0010(0x0018) (BlueprintVisible)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0018
struct FCameraLensSettings
{
	float                                              MinFocalLength;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFocalLength;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFStop;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFStop;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFocusDistance;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DiaphragmBladeCount;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
struct FNamedFilmbackPreset
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0010(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensorAspectRatio;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
