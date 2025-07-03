                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_CinematicCamera_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CinematicCamera.CameraRig_Crane
// size:0x0030 (0x0220 - 0x0250)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x022E(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};


// Class CinematicCamera.CameraRig_Rail
// size:0x0020 (0x0220 - 0x0240)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOrientationToRail;                                   // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	class USplineComponent* GetRailSplineComponent()//offset:0x24A70D0;
};


// Class CinematicCamera.CineCameraActor
// size:0x0060 (0x07A0 - 0x0800)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x07A0(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x07F0(0x0010) MISSED OFFSET

	class UCineCameraComponent* GetCineCameraComponent()//offset:0x24A6D00;
};


// Class CinematicCamera.CineCameraComponent
// size:0x0100 (0x07C0 - 0x08C0)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x07C0(0x000C) (Deprecated)
	struct FCameraFilmbackSettings                     Filmback;                                                 // 0x07CC(0x000C) (Edit, BlueprintVisible)
	struct FCameraLensSettings                         LensSettings;                                             // 0x07D8(0x0018) (Edit, BlueprintVisible)
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x07F0(0x0058) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0850(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0854(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x0860(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x0870(0x0010) (ZeroConstructor, Config)
	class FString                                      DefaultFilmbackPresetName;                                // 0x0880(0x0010) (ZeroConstructor, Config, Deprecated)
	class FString                                      DefaultFilmbackPreset;                                    // 0x0890(0x0010) (ZeroConstructor, Config)
	class FString                                      DefaultLensPresetName;                                    // 0x08A0(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x08B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x08B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET

	void SetLensPresetByName(const class FString& InPresetName)//offset:0x24A7240;
	void SetFilmbackPresetByName(const class FString& InPresetName)//offset:0x24A71A0;
	void SetCurrentFocalLength(float InFocalLength)//offset:0x24A7120;
	float GetVerticalFieldOfView()//offset:0x24A70F0;
	static TArray<struct FNamedLensPreset> GetLensPresetsCopy()//offset:0x24A6FF0;
	class FString GetLensPresetName()//offset:0x24A6F70;
	float GetHorizontalFieldOfView()//offset:0x24A6F40;
	static TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy()//offset:0x24A6E60;
	class FString GetFilmbackPresetName()//offset:0x24A6DE0;
	class FString GetDefaultFilmbackPresetName()//offset:0x24A6D20;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
