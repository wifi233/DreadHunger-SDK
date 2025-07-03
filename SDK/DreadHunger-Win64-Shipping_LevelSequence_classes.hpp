                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_LevelSequence_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LevelSequence.AnimSequenceLevelSequenceLink
// size:0x0028 (0x0028 - 0x0050)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct FGuid                                       SkelTrackGuid;                                            // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             PathToLevelSequence;                                      // 0x0038(0x0018) (ZeroConstructor)
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// size:0x0048 (0x0028 - 0x0070)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};


// Class LevelSequence.LevelSequenceMetaData
// size:0x0000 (0x0028 - 0x0028)
class ULevelSequenceMetaData : public UInterface
{
public:
};


// Class LevelSequence.LevelSequence
// size:0x0168 (0x0060 - 0x01C8)
class ULevelSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	class UMovieScene*                                 MovieScene;                                               // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0070(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x00C0(0x00A0)
	TMap<class FString, struct FLevelSequenceObject>   PossessedObjects;                                         // 0x0160(0x0050) (Deprecated)
	class UObject*                                     DirectorClass;                                            // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x01B8(0x0010) (Edit, ExportObject, ZeroConstructor)

	void RemoveMetaDataByClass(class UObject* InClass)//offset:0x2606180;
	class UObject* FindOrAddMetaDataByClass(class UObject* InClass)//offset:0x2605AB0;
	class UObject* FindMetaDataByClass(class UObject* InClass)//offset:0x2605AB0;
	class UObject* CopyMetaData(class UObject* InMetaData)//offset:0x2605AB0;
};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// size:0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:
};


// Class LevelSequence.LevelSequenceBurnInOptions
// size:0x0028 (0x0028 - 0x0050)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetBurnIn(const struct FSoftClassPath& InBurnInClass)//offset:0x2606550;
};


// Class LevelSequence.LevelSequenceActor
// size:0x0080 (0x0220 - 0x02A0)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0230(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0250(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLevelSequenceCameraSettings                CameraSettings;                                           // 0x0268(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x6];                                       // 0x026A(0x0006) MISSED OFFSET
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bAutoPlay;                                                // 0x0280(0x0001) (Deprecated)
	unsigned char                                      bOverrideInstanceData;                                    // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReplicatePlayback;                                       // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowBurnin;                                              // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0299(0x0007) MISSED OFFSET

	void ShowBurnin()//offset:0x2606770;
	void SetSequence(class ULevelSequence* InSequence)//offset:0x26066E0;
	void SetReplicatePlayback(bool ReplicatePlayback)//offset:0x2606650;
	void SetBindingByTag(const struct FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)//offset:0x2606420;
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)//offset:0x26062C0;
	void ResetBindings()//offset:0x26062A0;
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding)//offset:0x26061F0;
	void RemoveBindingByTag(const struct FName& Tag, class AActor* Actor)//offset:0x26060B0;
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)//offset:0x2605FB0;
	void OnLevelSequenceLoaded__DelegateSignature()//offset:0x13CEB30;
	class ULevelSequence* LoadSequence()//offset:0x2605F40;
	void HideBurnin()//offset:0x2605F20;
	class ULevelSequencePlayer* GetSequencePlayer()//offset:0x2605EB0;
	class ULevelSequence* GetSequence()//offset:0x2605E80;
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(const struct FName& Tag)//offset:0x2605D60;
	struct FMovieSceneObjectBindingID FindNamedBinding(const struct FName& Tag)//offset:0x2605CB0;
	void AddBindingByTag(const struct FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset)//offset:0x26059A0;
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)//offset:0x2605850;
};


// Class LevelSequence.LevelSequenceAnimSequenceLink
// size:0x0010 (0x0028 - 0x0038)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem>  AnimSequenceLinks;                                        // 0x0028(0x0010) (ZeroConstructor)
};


// Class LevelSequence.LevelSequenceBurnIn
// size:0x00C0 (0x0260 - 0x0320)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0260(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void SetSettings(class UObject* InSettings)//offset:0x13CEB30;
	class ULevelSequenceBurnInInitSettings* GetSettingsClass()//offset:0x2605EE0;
};


// Class LevelSequence.LevelSequenceDirector
// size:0x0008 (0x0028 - 0x0030)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void OnCreated()//offset:0x13CEB30;
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// size:0x0000 (0x00A0 - 0x00A0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:
};


// Class LevelSequence.LevelSequencePlayer
// size:0x0118 (0x0680 - 0x0798)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct UEMulticastInlineDelegate                   OnCameraCut;                                              // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x108];                                     // 0x0690(0x0108) MISSED OFFSET

	class UCameraComponent* GetActiveCameraComponent()//offset:0x2605E40;
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)//offset:0x2605B30;
};


// Class LevelSequence.LevelSequenceMediaController
// size:0x0028 (0x0220 - 0x0248)
class ALevelSequenceMediaController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class ALevelSequenceActor*                         Sequence;                                                 // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaComponent*                             MediaComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              ServerStartTimeSeconds;                                   // 0x0238(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x023C(0x000C) MISSED OFFSET

	void SynchronizeToServer(float DesyncThresholdSeconds)//offset:0x2606790;
	void Play()//offset:0x2605F90;
	void OnRep_ServerStartTimeSeconds()//offset:0x2605F70;
	class ALevelSequenceActor* GetSequence()//offset:0x998C90;
	class UMediaComponent* GetMediaComponent()//offset:0x24A70D0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
