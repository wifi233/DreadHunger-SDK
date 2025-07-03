                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_CinematicCamera_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
struct ACameraRig_Rail_GetRailSplineComponent_Params
{
	class USplineComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
struct ACineCameraActor_GetCineCameraComponent_Params
{
	class UCineCameraComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
struct UCineCameraComponent_SetLensPresetByName_Params
{
	class FString                                      InPresetName;                                             // (Parm, ZeroConstructor)
};

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
struct UCineCameraComponent_SetFilmbackPresetByName_Params
{
	class FString                                      InPresetName;                                             // (Parm, ZeroConstructor)
};

// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
struct UCineCameraComponent_SetCurrentFocalLength_Params
{
	float                                              InFocalLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
struct UCineCameraComponent_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
struct UCineCameraComponent_GetLensPresetsCopy_Params
{
	TArray<struct FNamedLensPreset>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
struct UCineCameraComponent_GetLensPresetName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
struct UCineCameraComponent_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
struct UCineCameraComponent_GetFilmbackPresetsCopy_Params
{
	TArray<struct FNamedFilmbackPreset>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
struct UCineCameraComponent_GetFilmbackPresetName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
struct UCineCameraComponent_GetDefaultFilmbackPresetName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
