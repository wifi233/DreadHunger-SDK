                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MovieScene_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// size:0x0028 (0x0028 - 0x0050)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};


// Class MovieScene.MovieSceneSection
// size:0x0098 (0x0050 - 0x00E8)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0050(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0058(0x0038) (Edit)
	struct FMovieSceneFrameRange                       SectionRange;                                             // 0x0090(0x0010) (Edit)
	struct FFrameNumber                                PreRollFrames;                                            // 0x00A0(0x0004) (Edit)
	struct FFrameNumber                                PostRollFrames;                                           // 0x00A4(0x0004) (Edit)
	int                                                RowIndex;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive;                                                // 0x00B0(0x0001) (Edit)
	unsigned char                                      bIsLocked;                                                // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bIsInfinite;                                              // 0x00C4(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	bool                                               bSupportsInfiniteRange;                                   // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x00C9(0x0002)
	unsigned char                                      UnknownData03[0x1D];                                      // 0x00CB(0x001D) MISSED OFFSET

	void SetRowIndex(int NewRowIndex)//offset:0x228AE10;
	void SetPreRollFrames(int InPreRollFrames)//offset:0x228AD80;
	void SetPostRollFrames(int InPostRollFrames)//offset:0x228ACF0;
	void SetOverlapPriority(int NewPriority)//offset:0x228AAC0;
	void SetIsLocked(bool bInIsLocked)//offset:0x228AA20;
	void SetIsActive(bool bInIsActive)//offset:0x228A980;
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode)//offset:0x228A6C0;
	void SetBlendType(EMovieSceneBlendType InBlendType)//offset:0x228A640;
	bool IsLocked()//offset:0x2289A80;
	bool IsActive()//offset:0x2289A50;
	int GetRowIndex()//offset:0xDA6370;
	int GetPreRollFrames()//offset:0x22899D0;
	int GetPostRollFrames()//offset:0x22899B0;
	int GetOverlapPriority()//offset:0x2289960;
	EMovieSceneCompletionMode GetCompletionMode()//offset:0xF23AE0;
	struct FOptionalMovieSceneBlendType GetBlendType()//offset:0x22895F0;
};


// Class MovieScene.MovieSceneTrack
// size:0x0028 (0x0050 - 0x0078)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0054(0x0001) MISSED OFFSET
	bool                                               bIsEvalDisabled;                                          // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FGuid                                       EvaluationFieldGuid;                                      // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneTrackEvaluationField             EvaluationField;                                          // 0x0068(0x0010)
};


// Class MovieScene.MovieSceneNameableTrack
// size:0x0000 (0x0078 - 0x0078)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:
};


// Class MovieScene.MovieSceneSequence
// size:0x0010 (0x0050 - 0x0060)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*                     CompiledData;                                             // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                    // 0x0058(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bParentContextsAreSignificant;                            // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayableDirectly;                                        // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	EMovieSceneSequenceFlags                           SequenceFlags;                                            // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName)//offset:0x2289510;
	struct FMovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName)//offset:0x2289460;
};


// Class MovieScene.MovieSceneSequencePlayer
// size:0x0658 (0x0028 - 0x0680)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlay;                                                   // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayReverse;                                            // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnStop;                                                   // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPause;                                                  // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFinished;                                               // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback;                                         // 0x0464(0x0001) (Net)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x0470(0x0004) (Net)
	int                                                DurationFrames;                                           // 0x0474(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DurationSubFrames;                                        // 0x0478(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x047C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0480(0x0014) (Net)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x0498(0x00E8) (Transient)
	unsigned char                                      UnknownData04[0x68];                                      // 0x0580(0x0068) MISSED OFFSET
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                             // 0x05E8(0x0010) (Net)
	TScriptInterface<class UMovieScenePlaybackClient>  PlaybackClient;                                           // 0x05F8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UMovieSceneSequenceTickManager*              TickManager;                                              // 0x0608(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x70];                                      // 0x0610(0x0070) MISSED OFFSET

	void StopAtCurrentTime()//offset:0x228AF90;
	void Stop()//offset:0x228AF70;
	void SetTimeRange(float StartTime, float Duration)//offset:0x228AEA0;
	void SetPlayRate(float PlayRate)//offset:0x228AB50;
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)//offset:0x228ABD0;
	void SetFrameRate(const struct FFrameRate& FrameRate)//offset:0x228A8F0;
	void SetFrameRange(int StartFrame, int Duration, float SubFrames)//offset:0x228A7E0;
	void SetDisableCameraCuts(bool bInDisableCameraCuts)//offset:0x228A740;
	void ScrubToSeconds(float TimeInSeconds)//offset:0x228A590;
	bool ScrubToMarkedFrame(const class FString& InLabel)//offset:0x228A480;
	void ScrubToFrame(const struct FFrameTime& NewPosition)//offset:0x228A3D0;
	void Scrub()//offset:0x228A3B0;
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime)//offset:0x228A310;
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)//offset:0x228A230;
	void PlayToSeconds(float TimeInSeconds)//offset:0x228A180;
	bool PlayToMarkedFrame(const class FString& InLabel)//offset:0x228A070;
	void PlayToFrame(const struct FFrameTime& NewPosition)//offset:0x2289FC0;
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)//offset:0x2289EA0;
	void PlayReverse()//offset:0x2289E80;
	void PlayLooping(int NumLoops)//offset:0x2289DF0;
	void Play()//offset:0x2289DD0;
	void Pause()//offset:0x2289DB0;
	void JumpToSeconds(float TimeInSeconds)//offset:0x2289D00;
	bool JumpToMarkedFrame(const class FString& InLabel)//offset:0x2289BF0;
	void JumpToFrame(const struct FFrameTime& NewPosition)//offset:0x2289B40;
	bool IsReversed()//offset:0x2289B10;
	bool IsPlaying()//offset:0x2289AE0;
	bool IsPaused()//offset:0x2289AB0;
	void GoToEndAndStop()//offset:0x2289A30;
	struct FQualifiedFrameTime GetStartTime()//offset:0x22899F0;
	float GetPlayRate()//offset:0x2289980;
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject)//offset:0x2289880;
	struct FFrameRate GetFrameRate()//offset:0x2289860;
	int GetFrameDuration()//offset:0x2289830;
	struct FQualifiedFrameTime GetEndTime()//offset:0x22897E0;
	struct FQualifiedFrameTime GetDuration()//offset:0x22897A0;
	bool GetDisableCameraCuts()//offset:0x2289770;
	struct FQualifiedFrameTime GetCurrentTime()//offset:0x2289730;
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)//offset:0x2289620;
	void ChangePlaybackDirection()//offset:0x2289440;
};


// Class MovieScene.MovieSceneCustomClockSource
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneCustomClockSource : public UInterface
{
public:

	void OnTick(float DeltaSeconds, float InPlayRate)//offset:0x227FFE0;
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)//offset:0x227FF30;
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)//offset:0x227FE80;
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)//offset:0x227FD80;
};


// Class MovieScene.MovieSceneEntityProvider
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneEntityProvider : public UInterface
{
public:
};


// Class MovieScene.MovieScenePlaybackClient
// size:0x0000 (0x0028 - 0x0028)
class UMovieScenePlaybackClient : public UInterface
{
public:
};


// Class MovieScene.MovieSceneTrackTemplateProducer
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneTrackTemplateProducer : public UInterface
{
public:
};


// Class MovieScene.NodeAndChannelMappings
// size:0x0000 (0x0028 - 0x0028)
class UNodeAndChannelMappings : public UInterface
{
public:
};


// Class MovieScene.MovieSceneNodeGroup
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroup : public UObject
{
public:
};


// Class MovieScene.MovieSceneNodeGroupCollection
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroupCollection : public UObject
{
public:
};


// Class MovieScene.MovieScene
// size:0x00F8 (0x0050 - 0x0148)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0070(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                            // 0x0080(0x0050)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00D0(0x0010) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieSceneFrameRange                       SelectionRange;                                           // 0x00E8(0x0010)
	struct FMovieSceneFrameRange                       PlaybackRange;                                            // 0x00F8(0x0010)
	struct FFrameRate                                  TickResolution;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  DisplayRate;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	EMovieSceneEvaluationType                          EvaluationType;                                           // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	EUpdateClockSource                                 ClockSource;                                              // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FSoftObjectPath                             CustomClockSourcePath;                                    // 0x0120(0x0018) (ZeroConstructor)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                             // 0x0138(0x0010) (ZeroConstructor)
};


// Class MovieScene.MovieSceneBindingOverrides
// size:0x0068 (0x0028 - 0x0090)
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
};


// Class MovieScene.MovieSceneBindingOwnerInterface
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:
};


// Class MovieScene.MovieSceneEntitySystem
// size:0x0018 (0x0028 - 0x0040)
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};


// Class MovieScene.MovieSceneBlenderSystem
// size:0x0020 (0x0040 - 0x0060)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieScene.MovieSceneBoolSection
// size:0x0098 (0x00E8 - 0x0180)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                             // 0x00E8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FMovieSceneBoolChannel                      BoolCurve;                                                // 0x00F0(0x0090)
};


// Class MovieScene.MovieSceneEntityInstantiatorSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieScene.MovieSceneSceneComponentImpersonator
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneSceneComponentImpersonator : public UInterface
{
public:
};


// Class MovieScene.MovieSceneCompiledData
// size:0x03D0 (0x0028 - 0x03F8)
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate               EvaluationTemplate;                                       // 0x0028(0x0160)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x0188(0x0118)
	struct FMovieSceneEntityComponentField             EntityComponentField;                                     // 0x02A0(0x00F0)
	struct FMovieSceneEvaluationField                  TrackTemplateField;                                       // 0x0390(0x0030)
	TArray<struct FFrameTime>                          DeterminismFences;                                        // 0x03C0(0x0010) (ZeroConstructor)
	struct FGuid                                       CompiledSignature;                                        // 0x03D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompilerVersion;                                          // 0x03E0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceCompilerMaskStruct       AccumulatedMask;                                          // 0x03F0(0x0001)
	struct FMovieSceneSequenceCompilerMaskStruct       AllocatedMask;                                            // 0x03F1(0x0001)
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                         // 0x03F2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03F3(0x0005) MISSED OFFSET
};


// Class MovieScene.MovieSceneCompiledDataManager
// size:0x0208 (0x0028 - 0x0230)
class UMovieSceneCompiledDataManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
	TMap<int, struct FMovieSceneSequenceHierarchy>     Hierarchies;                                              // 0x00D8(0x0050)
	TMap<int, struct FMovieSceneEvaluationTemplate>    TrackTemplates;                                           // 0x0128(0x0050)
	TMap<int, struct FMovieSceneEvaluationField>       TrackTemplateFields;                                      // 0x0178(0x0050)
	TMap<int, struct FMovieSceneEntityComponentField>  EntityComponentFields;                                    // 0x01C8(0x0050)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0218(0x0018) MISSED OFFSET
};


// Class MovieScene.MovieSceneFloatDecomposer
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneFloatDecomposer : public UInterface
{
public:
};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// size:0x0010 (0x0028 - 0x0038)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};


// Class MovieScene.MovieSceneEasingExternalCurve
// size:0x0010 (0x0028 - 0x0038)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class MovieScene.MovieSceneEasingFunction
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:

	float OnEvaluate(float Interp)//offset:0x13CEB30;
};


// Class MovieScene.MovieSceneEntitySystemLinker
// size:0x0430 (0x0028 - 0x0458)
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0028(0x0210) MISSED OFFSET
	struct FMovieSceneEntitySystemGraph                SystemGraph;                                              // 0x0238(0x0138)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x0370(0x00E8) MISSED OFFSET
};


// Class MovieScene.MovieSceneEvalTimeSystem
// size:0x0010 (0x0040 - 0x0050)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieScene.MovieSceneFolder
// size:0x0048 (0x0028 - 0x0070)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<class FString>                              ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};


// Class MovieScene.MovieSceneKeyProxy
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneKeyProxy : public UInterface
{
public:
};


// Class MovieScene.MovieSceneMasterInstantiatorSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// size:0x0000 (0x0028 - 0x0028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{
public:
};


// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieScene.MovieSceneSequenceTickManager
// size:0x00A8 (0x0028 - 0x00D0)
class UMovieSceneSequenceTickManager : public UObject
{
public:
	TArray<class AActor*>                              SequenceActors;                                           // 0x0028(0x0010) (ZeroConstructor, Transient)
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET
};


// Class MovieScene.MovieSceneSpawnablesSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieScene.MovieSceneSpawnSection
// size:0x0008 (0x0180 - 0x0188)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
};


// Class MovieScene.MovieSceneSpawnTrack
// size:0x0020 (0x0078 - 0x0098)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)
	struct FGuid                                       ObjectGuid;                                               // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class MovieScene.MovieSceneSubSection
// size:0x0078 (0x00E8 - 0x0160)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x00E8(0x0024) (Edit, BlueprintVisible, Config)
	float                                              StartOffset;                                              // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0120(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class FString                                      TargetSequenceName;                                       // 0x0140(0x0010) (Edit, ZeroConstructor)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0150(0x0010) (Edit)

	void SetSequence(class UMovieSceneSequence* Sequence)//offset:0x228DB80;
	class UMovieSceneSequence* GetSequence()//offset:0x228DB50;
};


// Class MovieScene.MovieSceneSubTrack
// size:0x0010 (0x0078 - 0x0088)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieScene.TestMovieSceneTrack
// size:0x0020 (0x0078 - 0x0098)
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	bool                                               bHighPassFilter;                                          // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0088(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieScene.TestMovieSceneSection
// size:0x0000 (0x00E8 - 0x00E8)
class UTestMovieSceneSection : public UMovieSceneSection
{
public:
};


// Class MovieScene.TestMovieSceneSequence
// size:0x0008 (0x0060 - 0x0068)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class MovieScene.TestMovieSceneSubTrack
// size:0x0010 (0x0088 - 0x0098)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0088(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieScene.TestMovieSceneSubSection
// size:0x0000 (0x0160 - 0x0160)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:
};


// Class MovieScene.MovieSceneTrackInstance
// size:0x0028 (0x0028 - 0x0050)
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                                     AnimatedObject;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMasterTrackInstance;                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneTrackInstanceInput>       Inputs;                                                   // 0x0040(0x0010) (ZeroConstructor)
};


// Class MovieScene.MovieSceneTrackInstanceInstantiator
// size:0x00B0 (0x0040 - 0x00F0)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieScene.MovieSceneTrackInstanceSystem
// size:0x0008 (0x0040 - 0x0048)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*        Instantiator;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
