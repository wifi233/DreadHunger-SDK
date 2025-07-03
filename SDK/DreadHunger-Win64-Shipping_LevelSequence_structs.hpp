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
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_MovieScene_classes.hpp"
#include "DreadHunger-Win64-Shipping_UMG_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// 0x0002
struct FLevelSequenceCameraSettings
{
	bool                                               bOverrideAspectRatioAxisConstraint;                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{

};

// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// 0x0030
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid                                       SkelTrackGuid;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             PathToAnimSequence;                                       // 0x0010(0x0018) (ZeroConstructor)
	bool                                               bExportTransforms;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExportCurves;                                            // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecordInWorldSpace;                                      // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0
struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                    // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: 
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequenceBindingReference
{
	class FString                                      PackageName;                                              // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	struct FSoftObjectPath                             ExternalObjectPath;                                       // 0x0010(0x0018) (ZeroConstructor)
	class FString                                      ObjectPath;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{

};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{

};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      ComponentName;                                            // 0x0020(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00B8
struct FLevelSequencePlayerSnapshot
{
	class FString                                      MasterName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FQualifiedFrameTime                         MasterTime;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FQualifiedFrameTime                         SourceTime;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class FString                                      CurrentShotName;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FQualifiedFrameTime                         CurrentShotLocalTime;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FQualifiedFrameTime                         CurrentShotSourceTime;                                    // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class FString                                      SourceTimecode;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: 
	struct FLevelSequenceSnapshotSettings              Settings;                                                 // 0x0098(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class ULevelSequence*                              ActiveShot;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMovieSceneSequenceID                       ShotID;                                                   // 0x00B0(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x000C
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FFrameRate                                  FrameRate;                                                // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
