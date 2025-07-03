                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MagicLeapARPin_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapARPin.MagicLeapARPinComponent
// size:0x01B0 (0x0200 - 0x03B0)
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	int                                                UserIndex;                                                // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapAutoPinType                              AutoPinType;                                              // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPinActor;                                          // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x020E(0x0002) MISSED OFFSET
	class UMagicLeapARPinSaveGame*                     PinDataClass;                                             // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0218(0x0050) UNKNOWN PROPERTY: 
	class USphereComponent*                            SearchVolume;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnPersistentEntityPinned;                                 // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPersistentEntityPinLost;                                // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPinDataLoadAttemptCompleted;                            // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGuid                                       PinnedCFUID;                                              // 0x02A0(0x0010) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinnedSceneComponent;                                     // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMagicLeapARPinSaveGame*                     PinData;                                                  // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF0];                                      // 0x02C0(0x00F0) MISSED OFFSET

	void UnPin()//offset:0xCFB930;
	class UMagicLeapARPinSaveGame* TryGetPinData(class UMagicLeapARPinSaveGame* InPinDataClass, bool* OutPinDataValid)//offset:0xCFB710;
	bool PinToRestoredOrSyncedID()//offset:0xCFB3B0;
	bool PinToID(const struct FGuid& PinId)//offset:0xCFB300;
	void PinToBestFit()//offset:0xCFB2E0;
	bool PinSceneComponent(class USceneComponent* ComponentToPin)//offset:0xCFB240;
	bool PinRestoredOrSynced()//offset:0xCFB210;
	bool PinActor(class AActor* ActorToPin)//offset:0xCFB170;
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)//offset:0x13CEB30;
	void PersistentEntityPinLost__DelegateSignature()//offset:0x13CEB30;
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)//offset:0x13CEB30;
	bool IsPinned()//offset:0xCFB020;
	bool GetPinState(struct FMagicLeapARPinState* State)//offset:0xCFAEC0;
	bool GetPinnedPinID(struct FGuid* PinId)//offset:0xCFAF70;
	class UMagicLeapARPinSaveGame* GetPinData(class UMagicLeapARPinSaveGame* PinDataClass)//offset:0xCFAE20;
	void AttemptPinDataRestorationAsync()//offset:0xCFA3E0;
	bool AttemptPinDataRestoration()//offset:0xCFA3B0;
};


// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)//offset:0xCFB890;
	static void UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)//offset:0xCFB7F0;
	static EMagicLeapPassableWorldError SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)//offset:0xCFB5A0;
	static void SetContentBindingSaveGameUserIndex(int UserIndex)//offset:0xCFB520;
	static EMagicLeapPassableWorldError QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)//offset:0xCFB3E0;
	static bool ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId)//offset:0xCFB080;
	static bool IsTrackerValid()//offset:0xCFB050;
	static EMagicLeapPassableWorldError GetNumAvailableARPins(int* Count)//offset:0xCFAD90;
	static EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)//offset:0xCFACB0;
	static int GetContentBindingSaveGameUserIndex()//offset:0xCFAC80;
	static EMagicLeapPassableWorldError GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)//offset:0xCFAB90;
	static EMagicLeapPassableWorldError GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins)//offset:0xCFAAA0;
	static class FString GetARPinStateToString(const struct FMagicLeapARPinState& State)//offset:0xCFA9C0;
	static EMagicLeapPassableWorldError GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)//offset:0xCFA8C0;
	static bool GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)//offset:0xCFA730;
	static bool GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)//offset:0xCFA5A0;
	static EMagicLeapPassableWorldError DestroyTracker()//offset:0xCFA570;
	static EMagicLeapPassableWorldError CreateTracker()//offset:0xCFA540;
	static void BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)//offset:0xCFA4A0;
	static void BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)//offset:0xCFA400;
	static class FString ARPinIdToString(const struct FGuid& ARPinId)//offset:0xCFA2D0;
};


// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// size:0x0018 (0x0220 - 0x0238)
class AMagicLeapARPinInfoActorBase : public AActor
{
public:
	struct FGuid                                       PinId;                                                    // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibilityOverride;                                      // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	void OnUpdateARPinState()//offset:0x13CEB30;
};


// Class MagicLeapARPin.MagicLeapARPinRenderer
// size:0x0068 (0x0220 - 0x0288)
class AMagicLeapARPinRenderer : public AActor
{
public:
	bool                                               bInfoActorsVisibilityOverride;                            // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	TMap<struct FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;                                            // 0x0228(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	class AMagicLeapARPinInfoActorBase*                ClassToSpawn;                                             // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData)

	void SetVisibilityOverride(bool InVisibilityOverride)//offset:0xCFB680;
};


// Class MagicLeapARPin.MagicLeapARPinSettings
// size:0x0018 (0x0028 - 0x0040)
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                              UpdateCheckFrequency;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FMagicLeapARPinState                        OnUpdatedEventTriggerDelta;                               // 0x002C(0x0014) (Edit, Config, GlobalConfig)
};


// Class MagicLeapARPin.MagicLeapARPinSaveGame
// size:0x0088 (0x0028 - 0x00B0)
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                       PinnedID;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentWorldTransform;                                  // 0x0040(0x0030) (Edit, EditConst, IsPlainOldData)
	struct FTransform                                  PinTransform;                                             // 0x0070(0x0030) (Edit, EditConst, IsPlainOldData)
	bool                                               bShouldPinActor;                                          // 0x00A0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};


// Class MagicLeapARPin.MagicLeapARPinContentBindings
// size:0x0050 (0x0028 - 0x0078)
class UMagicLeapARPinContentBindings : public USaveGame
{
public:
	TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings;                                       // 0x0028(0x0050) (Edit, EditConst)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
