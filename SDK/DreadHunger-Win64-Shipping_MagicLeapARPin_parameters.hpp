                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MagicLeapARPin_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
struct UMagicLeapARPinComponent_UnPin_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
struct UMagicLeapARPinComponent_TryGetPinData_Params
{
	class UMagicLeapARPinSaveGame*                     InPinDataClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutPinDataValid;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMagicLeapARPinSaveGame*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
struct UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
struct UMagicLeapARPinComponent_PinToID_Params
{
	struct FGuid                                       PinId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
struct UMagicLeapARPinComponent_PinToBestFit_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
struct UMagicLeapARPinComponent_PinSceneComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
struct UMagicLeapARPinComponent_PinRestoredOrSynced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
struct UMagicLeapARPinComponent_PinActor_Params
{
	class AActor*                                      ActorToPin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params
{
	bool                                               bRestoredOrSynced;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params
{
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
struct UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params
{
	bool                                               bDataRestored;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
struct UMagicLeapARPinComponent_IsPinned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
struct UMagicLeapARPinComponent_GetPinState_Params
{
	struct FMagicLeapARPinState                        State;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
struct UMagicLeapARPinComponent_GetPinnedPinID_Params
{
	struct FGuid                                       PinId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
struct UMagicLeapARPinComponent_GetPinData_Params
{
	class UMagicLeapARPinSaveGame*                     PinDataClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMagicLeapARPinSaveGame*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
struct UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
struct UMagicLeapARPinComponent_AttemptPinDataRestoration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
struct UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params
{
	struct FMagicLeapARPinQuery                        InGlobalFilter;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
struct UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params
{
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
struct UMagicLeapARPinFunctionLibrary_QueryARPins_Params
{
	struct FMagicLeapARPinQuery                        Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FGuid>                               Pins;                                                     // (Parm, OutParm, ZeroConstructor)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
struct UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params
{
	class FString                                      PinIdString;                                              // (Parm, ZeroConstructor)
	struct FGuid                                       ARPinId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
struct UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
struct UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params
{
	struct FMagicLeapARPinQuery                        CurrentGlobalFilter;                                      // (Parm, OutParm)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
struct UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
struct UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params
{
	struct FVector                                     SearchPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuid                                       PinId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params
{
	int                                                NumRequested;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               Pins;                                                     // (Parm, OutParm, ZeroConstructor)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
struct UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params
{
	struct FMagicLeapARPinState                        State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
struct UMagicLeapARPinFunctionLibrary_GetARPinState_Params
{
	struct FGuid                                       PinId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMagicLeapARPinState                        State;                                                    // (Parm, OutParm)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params
{
	struct FGuid                                       PinId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PinFoundInEnvironment;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params
{
	struct FGuid                                       PinId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PinFoundInEnvironment;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
struct UMagicLeapARPinFunctionLibrary_DestroyTracker_Params
{
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
struct UMagicLeapARPinFunctionLibrary_CreateTracker_Params
{
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
struct UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params
{
	struct FGuid                                       ARPinId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
struct AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
struct AMagicLeapARPinRenderer_SetVisibilityOverride_Params
{
	bool                                               InVisibilityOverride;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
