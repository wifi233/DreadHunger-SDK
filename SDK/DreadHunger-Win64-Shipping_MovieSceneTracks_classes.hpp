                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MovieSceneTracks_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// size:0x0000 (0x0040 - 0x0040)
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneTransformOrigin
// size:0x0000 (0x0028 - 0x0028)
class UMovieSceneTransformOrigin : public UInterface
{
public:

	struct FTransform BP_GetTransformOrigin()//offset:0x13CEB30;
};


// Class MovieSceneTracks.MovieScene3DConstraintSection
// size:0x0028 (0x00E8 - 0x0110)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                             // 0x00E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  ConstraintBindingID;                                      // 0x00F8(0x0018) (Edit)

	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)//offset:0x2398120;
	struct FMovieSceneObjectBindingID GetConstraintBindingID()//offset:0x2397FE0;
};


// Class MovieSceneTracks.MovieScene3DAttachSection
// size:0x0020 (0x0110 - 0x0130)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachmentLocationRule;                                   // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachmentRotationRule;                                   // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachmentScaleRule;                                      // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    DetachmentLocationRule;                                   // 0x012B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    DetachmentRotationRule;                                   // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    DetachmentScaleRule;                                      // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// size:0x0010 (0x0078 - 0x0088)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                       // 0x0078(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// size:0x0000 (0x0088 - 0x0088)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:
};


// Class MovieSceneTracks.MovieScene3DPathSection
// size:0x00A8 (0x0110 - 0x01B8)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel                     TimingCurve;                                              // 0x0110(0x00A0)
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                            // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                               // 0x01B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01B2(0x0002) MISSED OFFSET
	unsigned char                                      bFollow;                                                  // 0x01B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReverse;                                                 // 0x01B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceUpright;                                            // 0x01B4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
};


// Class MovieSceneTracks.MovieScene3DPathTrack
// size:0x0008 (0x0088 - 0x0090)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
};


// Class MovieSceneTracks.MovieScenePropertySystem
// size:0x0010 (0x0040 - 0x0050)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	class UMovieScenePropertyInstantiatorSystem*       InstantiatorSystem;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};


// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// size:0x0000 (0x0050 - 0x0050)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
public:
};


// Class MovieSceneTracks.MovieScene3DTransformSection
// size:0x0658 (0x00E8 - 0x0740)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x00F0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Translation[0x3];                                         // 0x00F8(0x00A0)
	struct FMovieSceneFloatChannel                     Rotation[0x3];                                            // 0x02D8(0x00A0)
	struct FMovieSceneFloatChannel                     Scale[0x3];                                               // 0x04B8(0x00A0)
	struct FMovieSceneFloatChannel                     ManualWeight;                                             // 0x0698(0x00A0)
	bool                                               bUseQuaternionInterpolation;                              // 0x0738(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
};


// Class MovieSceneTracks.MovieScenePropertyTrack
// size:0x0030 (0x0078 - 0x00A8)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                          SectionToKey;                                             // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieScenePropertyBinding                  PropertyBinding;                                          // 0x0080(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// size:0x0000 (0x00A8 - 0x00A8)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// size:0x0140 (0x00E8 - 0x0228)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData               ActorReferenceData;                                       // 0x00E8(0x00B0)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x0198(0x0080) (Deprecated)
	TArray<class FString>                              ActorGuidStrings;                                         // 0x0218(0x0010) (ZeroConstructor, Deprecated)
};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneAudioSection
// size:0x0250 (0x00E8 - 0x0338)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x00F0(0x0004) (Edit)
	float                                              StartOffset;                                              // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioVolume;                                              // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     SoundVolume;                                              // 0x0108(0x00A0)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                          // 0x01A8(0x00A0)
	struct FMovieSceneActorReferenceData               AttachActorData;                                          // 0x0248(0x00B0)
	bool                                               bLooping;                                                 // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressSubtitles;                                       // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAttenuation;                                     // 0x02FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x02FB(0x0005) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnQueueSubtitles;                                         // 0x0308(0x0014) (ZeroConstructor, InstancedReference)
	struct UEMulticastInlineDelegate                   OnAudioFinished;                                          // 0x0318(0x0010) (ZeroConstructor, InstancedReference)
	struct UEMulticastInlineDelegate                   OnAudioPlaybackPercent;                                   // 0x0328(0x0010) (ZeroConstructor, InstancedReference)

	void SetStartOffset(const struct FFrameNumber& InStartOffset)//offset:0x2398270;
	void SetSound(class USoundBase* InSound)//offset:0x23981E0;
	struct FFrameNumber GetStartOffset()//offset:0x2398040;
	class USoundBase* GetSound()//offset:0x2398020;
};


// Class MovieSceneTracks.MovieSceneAudioTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AudioSections;                                            // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneBoolTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneByteSection
// size:0x0098 (0x00E8 - 0x0180)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                      ByteCurve;                                                // 0x00E8(0x0098)
};


// Class MovieSceneTracks.MovieSceneByteTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UEnum*                                       Enum;                                                     // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// size:0x0040 (0x00E8 - 0x0128)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                 // 0x00E8(0x0020) (Edit)
	class UCameraAnim*                                 CameraAnim;                                               // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0118(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x011C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0120(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                       // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// size:0x0078 (0x00E8 - 0x0160)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	bool                                               bLockPreviousCamera;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FGuid                                       CameraGuid;                                               // 0x00F4(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  CameraBindingID;                                          // 0x0104(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FTransform                                  InitialCameraCutTransform;                                // 0x0120(0x0030) (IsPlainOldData)
	bool                                               bHasInitialCameraCutTransform;                            // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0151(0x000F) MISSED OFFSET

	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)//offset:0x2398060;
	struct FMovieSceneObjectBindingID GetCameraBindingID()//offset:0x2397FA0;
};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                               bCanBlend;                                                // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// size:0x0068 (0x0050 - 0x00B8)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:
};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// size:0x0040 (0x00E8 - 0x0128)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                // 0x00E8(0x0020) (Edit)
	class UMatineeCameraShake*                         ShakeClass;                                               // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	ECameraShakePlaySpace                              PlaySpace;                                                // 0x0114(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0118(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// size:0x0020 (0x00E8 - 0x0108)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                // 0x00E8(0x0020) (Edit)
};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                      // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// size:0x0088 (0x00E8 - 0x0170)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel  Channel;                                                  // 0x00E8(0x0088)
};


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                      // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// size:0x0028 (0x0160 - 0x0188)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FString                                      ShotDisplayName;                                          // 0x0160(0x0010) (ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0170(0x0028) (Deprecated)

	void SetShotDisplayName(const class FString& InShotDisplayName)//offset:0x239E320;
	class FString GetShotDisplayName()//offset:0x239E180;
};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// size:0x0000 (0x0088 - 0x0088)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneColorSection
// size:0x0280 (0x00E8 - 0x0368)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     RedCurve;                                                 // 0x00E8(0x00A0)
	struct FMovieSceneFloatChannel                     GreenCurve;                                               // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     BlueCurve;                                                // 0x0228(0x00A0)
	struct FMovieSceneFloatChannel                     AlphaCurve;                                               // 0x02C8(0x00A0)
};


// Class MovieSceneTracks.MovieSceneColorTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	bool                                               bIsSlateColor;                                            // 0x00B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// size:0x0180 (0x0040 - 0x01C0)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// size:0x01E0 (0x0040 - 0x0220)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem
// size:0x0180 (0x0040 - 0x01C0)
class UMovieScenePreAnimatedComponentTransformSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// size:0x0000 (0x0050 - 0x0050)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneEnumSection
// size:0x0098 (0x00E8 - 0x0180)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                      EnumCurve;                                                // 0x00E8(0x0098)
};


// Class MovieSceneTracks.MovieSceneEnumTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UEnum*                                       Enum;                                                     // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// size:0x0000 (0x0050 - 0x0050)
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// size:0x0000 (0x00A8 - 0x00A8)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneEventSectionBase
// size:0x0000 (0x00E8 - 0x00E8)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:
};


// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// size:0x0030 (0x00E8 - 0x0118)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneEvent                            Event;                                                    // 0x00F0(0x0028) (Edit)
};


// Class MovieSceneTracks.MovieSceneEventSection
// size:0x0100 (0x00E8 - 0x01E8)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   // 0x00E8(0x0078) (Deprecated)
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0160(0x0088)
};


// Class MovieSceneTracks.MovieSceneEventSystem
// size:0x0050 (0x0040 - 0x0090)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// size:0x0000 (0x0090 - 0x0090)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
public:
};


// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// size:0x0000 (0x0090 - 0x0090)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
public:
};


// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// size:0x0000 (0x0090 - 0x0090)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneEventTrack
// size:0x0020 (0x0078 - 0x0098)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	unsigned char                                      bFireEventsWhenForwards;                                  // 0x0080(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards;                                 // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	EFireEventsAtPosition                              EventPosition;                                            // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0088(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneEventTriggerSection
// size:0x0090 (0x00E8 - 0x0178)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneEventChannel                     EventChannel;                                             // 0x00F0(0x0088)
};


// Class MovieSceneTracks.MovieSceneFadeSection
// size:0x00B8 (0x00E8 - 0x01A0)
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00E8(0x00A0)
	struct FLinearColor                                FadeColor;                                                // 0x0188(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio;                                               // 0x0198(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneFloatTrack
// size:0x0000 (0x00A8 - 0x00A8)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneFadeTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// size:0x0000 (0x0050 - 0x0050)
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneFloatSection
// size:0x00A8 (0x00E8 - 0x0190)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00F0(0x00A0)
};


// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneIntegerSection
// size:0x0090 (0x00E8 - 0x0178)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel                   IntegerCurve;                                             // 0x00E8(0x0090)
};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// size:0x01A8 (0x0040 - 0x01E8)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// size:0x0020 (0x00E8 - 0x0108)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	ELevelVisibility                                   Visibility;                                               // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x00F8(0x0010) (Edit, ZeroConstructor)

	void SetVisibility(ELevelVisibility InVisibility)//offset:0x239E420;
	void SetLevelNames(TArray<struct FName> InLevelNames)//offset:0x239E270;
	ELevelVisibility GetVisibility()//offset:0x239E240;
	TArray<struct FName> GetLevelNames()//offset:0x239E150;
};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// size:0x0168 (0x0040 - 0x01A8)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// size:0x0010 (0x0078 - 0x0088)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// size:0x0010 (0x0078 - 0x0088)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// size:0x0010 (0x0088 - 0x0098)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UMaterialParameterCollection*                MPC;                                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// size:0x0010 (0x0088 - 0x0098)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	int                                                MaterialIndex;                                            // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneObjectPropertySection
// size:0x00C0 (0x00E8 - 0x01A8)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                ObjectChannel;                                            // 0x00E8(0x00C0)
};


// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UObject*                                     PropertyClass;                                            // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class MovieSceneTracks.MovieSceneParameterSection
// size:0x0060 (0x00E8 - 0x0148)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FBoolParameterNameAndCurve>          BoolParameterNamesAndCurves;                              // 0x00E8(0x0010) (ZeroConstructor)
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FVector2DParameterNameAndCurves>     Vector2DParameterNamesAndCurves;                          // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             // 0x0128(0x0010) (ZeroConstructor)
	TArray<struct FTransformParameterNameAndCurves>    TransformParameterNamesAndCurves;                         // 0x0138(0x0010) (ZeroConstructor)

	bool RemoveVectorParameter(const struct FName& InParameterName)//offset:0x23A4380;
	bool RemoveVector2DParameter(const struct FName& InParameterName)//offset:0x23A42E0;
	bool RemoveTransformParameter(const struct FName& InParameterName)//offset:0x23A4240;
	bool RemoveScalarParameter(const struct FName& InParameterName)//offset:0x23A41A0;
	bool RemoveColorParameter(const struct FName& InParameterName)//offset:0x23A4100;
	bool RemoveBoolParameter(const struct FName& InParameterName)//offset:0x23A4060;
	void GetParameterNames()//offset:0x23A3F20;
	void AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)//offset:0x23A3E00;
	void AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)//offset:0x23A3CF0;
	void AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)//offset:0x23A3B90;
	void AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue)//offset:0x23A3A70;
	void AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)//offset:0x23A3950;
	void AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)//offset:0x23A3840;
};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieSceneParticleSection
// size:0x0098 (0x00E8 - 0x0180)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel                  ParticleKeys;                                             // 0x00E8(0x0098)
};


// Class MovieSceneTracks.MovieSceneParticleTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  ParticleSections;                                         // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// size:0x00C0 (0x0060 - 0x0120)
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
public:
};


// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// size:0x00C0 (0x00E8 - 0x01A8)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                MaterialChannel;                                          // 0x00E8(0x00C0)
};


// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	int                                                MaterialIndex;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};


// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// size:0x0250 (0x0040 - 0x0290)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// size:0x0000 (0x0040 - 0x0040)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// size:0x0188 (0x00E8 - 0x0270)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                   // 0x00E8(0x00D8) (Edit, BlueprintVisible)
	class UAnimSequence*                               AnimSequence;                                             // 0x01C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // 0x01C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartOffset;                                              // 0x01D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x01D4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01D8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bReverse;                                                 // 0x01DC(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     StartLocationOffset;                                      // 0x01E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StartRotationOffset;                                      // 0x01F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchWithPrevious;                                       // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	struct FName                                       MatchedBoneName;                                          // 0x0204(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MatchedLocationOffset;                                    // 0x020C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MatchedRotationOffset;                                    // 0x0218(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchTranslation;                                        // 0x0224(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchIncludeZHeight;                                     // 0x0225(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchRotationYaw;                                        // 0x0226(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchRotationPitch;                                      // 0x0227(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchRotationRoll;                                       // 0x0228(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x47];                                      // 0x0229(0x0047) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// size:0x0058 (0x0078 - 0x00D0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0080(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bUseLegacySectionIndexBlend;                              // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                                         // 0x0098(0x0030)
	bool                                               bBlendFirstChildOfRoot;                                   // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneSlomoSection
// size:0x00A0 (0x00E8 - 0x0188)
class UMovieSceneSlomoSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00E8(0x00A0)
};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneStringSection
// size:0x00A0 (0x00E8 - 0x0188)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel                    StringCurve;                                              // 0x00E8(0x00A0)
};


// Class MovieSceneTracks.MovieSceneStringTrack
// size:0x0008 (0x00A8 - 0x00B0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// size:0x0038 (0x0040 - 0x0078)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:
};


// Class MovieSceneTracks.MovieSceneTransformTrack
// size:0x0000 (0x00A8 - 0x00A8)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneVectorSection
// size:0x0288 (0x00E8 - 0x0370)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     Curves[0x4];                                              // 0x00E8(0x00A0)
	int                                                ChannelsUsed;                                             // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneVectorTrack
// size:0x0010 (0x00A8 - 0x00B8)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	int                                                NumChannelsUsed;                                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// size:0x0000 (0x00B0 - 0x00B0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:
};


// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// size:0x0050 (0x0040 - 0x0090)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
};


// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// size:0x0038 (0x0040 - 0x0078)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
