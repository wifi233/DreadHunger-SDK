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

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	Invalid                        = 0,
	Absolute                       = 1,
	Additive                       = 2,
	Relative                       = 3,
	AdditiveFromBase               = 4,
	EMovieSceneBlendType_MAX       = 5
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState                      = 0,
	RestoreState                   = 1,
	ProjectDefault                 = 2,
	EMovieSceneCompletionMode_MAX  = 3
};


// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	Linear                         = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	QuadIn                         = 4,
	QuadOut                        = 5,
	QuadInOut                      = 6,
	CubicIn                        = 7,
	CubicOut                       = 8,
	CubicInOut                     = 9,
	QuartIn                        = 10,
	QuartOut                       = 11,
	QuartInOut                     = 12,
	QuintIn                        = 13,
	QuintOut                       = 14,
	QuintInOut                     = 15,
	ExpoIn                         = 16,
	ExpoOut                        = 17,
	ExpoInOut                      = 18,
	CircIn                         = 19,
	CircOut                        = 20,
	CircInOut                      = 21,
	EMovieSceneBuiltInEasing_MAX   = 22
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2
};


// Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
	None                           = 0,
	Volatile                       = 1,
	BlockingEvaluation             = 2,
	InheritedFlags                 = 3,
	EMovieSceneSequenceFlags_MAX   = 4
};


// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick                           = 0,
	Platform                       = 1,
	Audio                          = 2,
	RelativeTimecode               = 3,
	Timecode                       = 4,
	Custom                         = 5,
	EUpdateClockSource_MAX         = 6
};


// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked                    = 0,
	WithSubFrames                  = 1,
	EMovieSceneEvaluationType_MAX  = 2
};


// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	Stopped                        = 0,
	Playing                        = 1,
	Recording                      = 2,
	Scrubbing                      = 3,
	Jumping                        = 4,
	Stepping                       = 5,
	Paused                         = 6,
	MAX                            = 7
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local                          = 0,
	Root                           = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3
};


// Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
	Frame                          = 0,
	Time                           = 1,
	MarkedFrame                    = 2,
	EMovieScenePositionType_MAX    = 3
};


// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	Play                           = 0,
	Jump                           = 1,
	Scrub                          = 2,
	EUpdatePositionMethod_MAX      = 3
};


// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// size:0x0010 (0x0010 - 0x0020)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMovieSceneSection>           SourceSectionPtr;                                         // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0008
struct FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// size:0x0088 (0x0008 - 0x0090)
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	bool                                               DefaultValue;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<bool>                                       Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// size:0x0098 (0x0008 - 0x00A0)
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFloatValue>               Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FMovieSceneKeyHandleMap                     KeyHandles;                                               // 0x0038(0x0060) (Transient)
	struct FFrameRate                                  TickResolution;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// size:0x0000 (0x0060 - 0x0060)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x001C
struct FMovieSceneFloatValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneTangentData                      Tangent;                                                  // 0x0004(0x0014) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PaddingByte;                                              // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0014
struct FMovieSceneTangentData
{
	float                                              ArriveTangent;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// size:0x0088 (0x0008 - 0x0090)
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<int>                                        Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// size:0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.TrackInstanceInputComponent
// 0x0010
struct FTrackInstanceInputComponent
{
	class UMovieSceneSection*                          Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OutputIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
// 0x0010
struct FMovieSceneTrackInstanceComponent
{
	class UMovieSceneSection*                          Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneTrackInstance*                    TrackInstanceClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.EasingComponentData
// 0x0008
struct FEasingComponentData
{
	class UMovieSceneSection*                          Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePropertyBinding
// 0x0014
struct FMovieScenePropertyBinding
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyPath;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseClassLookup;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// 0x0010
struct FMovieSceneSectionGroup
{
	TArray<TWeakObjectPtr<class UMovieSceneSection>>   Sections;                                                 // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// 0x0010
struct FMovieSceneObjectBindingIDs
{
	TArray<struct FMovieSceneObjectBindingID>          Ids;                                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
struct FMovieSceneObjectBindingID
{
	int                                                SequenceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EMovieSceneObjectBindingSpace                      Space;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	TArray<class FString>                              Strings;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x00F0
struct FMovieSceneEditorData
{
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                          // 0x0000(0x0050)
	TArray<class FString>                              PinnedNodes;                                              // 0x0050(0x0010) (ZeroConstructor)
	double                                             ViewStart;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             ViewEnd;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             WorkStart;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             WorkEnd;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: 
	struct FFloatRange                                 WorkingRange;                                             // 0x00D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FFloatRange                                 ViewRange;                                                // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x0018
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      Label;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0018
struct FMovieSceneTimecodeSource
{
	struct FTimecode                                   Timecode;                                                 // 0x0000(0x0014) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                DeltaFrame;                                               // 0x0014(0x0004) (Edit, EditConst)
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      BindingName;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID                  ObjectBindingId;                                          // 0x0000(0x0018) (Edit)
	TWeakObjectPtr<class UObject>                      Object;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridesDefault;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0002
struct FOptionalMovieSceneBlendType
{
	EMovieSceneBlendType                               BlendType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// size:0x0090 (0x0008 - 0x0098)
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      DefaultValue;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<unsigned char>                              Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	class UEnum*                                       Enum;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0038(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
// 0x0001
struct FMovieSceneSequenceCompilerMaskStruct
{
	unsigned char                                      bHierarchy;                                               // 0x0000(0x0001)
	unsigned char                                      bEvaluationTemplate;                                      // 0x0000(0x0001)
	unsigned char                                      bEvaluationTemplateField;                                 // 0x0000(0x0001)
	unsigned char                                      bEntityComponentField;                                    // 0x0000(0x0001)
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
// 0x0138
struct FMovieSceneEntitySystemGraph
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
	struct FMovieSceneEntitySystemGraphNodes           Nodes;                                                    // 0x0080(0x0038)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00B8(0x0080) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
// 0x0038
struct FMovieSceneEntitySystemGraphNodes
{

};

// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
// 0x0028
struct FMovieSceneEntitySystemGraphNode
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	class UMovieSceneEntitySystem*                     System;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0088
struct FMovieSceneEvalTemplatePtr
{

};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	TArray<struct FMovieSceneFrameRange>               Ranges;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationMetaData>       MetaData;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0020
struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneOrderedEvaluationKey>     ActiveEntities;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0010
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey                    Key;                                                      // 0x0000(0x000C)
	uint16_t                                           SetupIndex;                                               // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           TearDownIndex;                                            // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x000C
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          // 0x0004(0x0004)
	uint32_t                                           SectionIndex;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0030
struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
// 0x0008
struct FMovieSceneFieldEntry_ChildTemplate
{
	uint16_t                                           ChildIndex;                                               // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	ESectionEvaluationFlags                            Flags;                                                    // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FFrameNumber                                ForcedTime;                                               // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
// 0x000C
struct FMovieSceneFieldEntry_EvaluationTrack
{
	struct FMovieSceneEvaluationFieldTrackPtr          TrackPtr;                                                 // 0x0000(0x0008)
	uint16_t                                           NumChildren;                                              // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x0008
struct FMovieSceneEvaluationGroupLUTIndex
{
	int                                                NumInitPtrs;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumEvalPtrs;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0010
struct FMovieSceneFrameRange
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// size:0x0004 (0x0008 - 0x000C)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier                SegmentID;                                                // 0x0008(0x0004)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0004
struct FMovieSceneSegmentIdentifier
{
	int                                                IdentifierIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEntityComponentField
// 0x00F0
struct FMovieSceneEntityComponentField
{
	struct FMovieSceneEvaluationFieldEntityTree        PersistentEntityTree;                                     // 0x0000(0x0060)
	struct FMovieSceneEvaluationFieldEntityTree        OneShotEntityTree;                                        // 0x0060(0x0060)
	TArray<struct FMovieSceneEvaluationFieldEntity>    Entities;                                                 // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                                           // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                           // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// 0x0010
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
// 0x000C
struct FMovieSceneEvaluationFieldEntityMetaData
{
	struct FFrameNumber                                ForcedTime;                                               // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	ESectionEvaluationFlags                            Flags;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateInSequencePreRoll;                               // 0x0009(0x0001)
	unsigned char                                      bEvaluateInSequencePostRoll;                              // 0x0009(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
// 0x0010
struct FMovieSceneEvaluationFieldEntity
{
	struct FMovieSceneEvaluationFieldEntityKey         Key;                                                      // 0x0000(0x000C)
	int                                                SharedMetaDataIndex;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
// 0x000C
struct FMovieSceneEvaluationFieldEntityKey
{
	TWeakObjectPtr<class UObject>                      EntityOwner;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EntityID;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
// 0x0060
struct FMovieSceneEvaluationFieldEntityTree
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0014
struct FMovieSceneEvaluationOperand
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0010(0x0004)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x0160
struct FMovieSceneEvaluationTemplate
{
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                                   // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	struct FGuid                                       SequenceSignature;                                        // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneEvaluationTemplateSerialNumber   TemplateSerialNumber;                                     // 0x00B0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FMovieSceneTemplateGenerationLedger         TemplateLedger;                                           // 0x00B8(0x00A8)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                          // 0x0008(0x0050)
	TMap<struct FGuid, struct FMovieSceneFrameRange>   SubSectionRanges;                                         // 0x0058(0x0050)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0004
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x0078
struct FMovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           EvaluationPriority;                                       // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	EEvaluationMethod                                  EvaluationMethod;                                         // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	TWeakObjectPtr<class UMovieSceneTrack>             SourceTrack;                                              // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                           // 0x0020(0x0010) (ZeroConstructor)
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                            // 0x0030(0x0038)
	struct FName                                       EvaluationGroup;                                          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateInPreroll;                                       // 0x0070(0x0001)
	unsigned char                                      bEvaluateInPostroll;                                      // 0x0070(0x0001)
	unsigned char                                      bTearDownPriority;                                        // 0x0070(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{

};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x001C
struct FMovieSceneSubSectionData
{
	TWeakObjectPtr<class UMovieSceneSubSection>        Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       ObjectBindingId;                                          // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	ESectionEvaluationFlags                            Flags;                                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x00E8
struct FMovieSceneRootEvaluationTemplateInstance
{
	TWeakObjectPtr<class UMovieSceneSequence>          WeakRootSequence;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMovieSceneCompiledDataManager*              CompiledDataManager;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	class UMovieSceneEntitySystemLinker*               EntitySystemLinker;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0020(0x0070) MISSED OFFSET
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;                                        // 0x0090(0x0050)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// size:0x0020 (0x0008 - 0x0028)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0050
struct FGeneratedMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// size:0x00B8 (0x0008 - 0x00C0)
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
	class UObject*                                     PropertyClass;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	struct FMovieSceneObjectPathChannelKeyValue        DefaultValue;                                             // 0x0030(0x0030)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x0030
struct FMovieSceneObjectPathChannelKeyValue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: 
	class UObject*                                     HardPtr;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0048
struct FMovieScenePossessable
{
	TArray<struct FName>                               Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       Guid;                                                     // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // 0x0020(0x0010) (ZeroConstructor)
	class UObject*                                     PossessedObjectClass;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// size:0x0018 (0x0020 - 0x0038)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0020(0x0018)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0018
struct FMovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      PropertyPath;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0038
struct FMovieSceneEasingSettings
{
	int                                                AutoEaseInDuration;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoEaseOutDuration;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UMovieSceneEasingFunction>  EaseIn;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bManualEaseIn;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ManualEaseInDuration;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UMovieSceneEasingFunction>  EaseOut;                                                  // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bManualEaseOut;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ManualEaseOutDuration;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0024
struct FMovieSceneSectionParameters
{
	struct FFrameNumber                                StartFrameOffset;                                         // 0x0000(0x0004) (Edit, BlueprintVisible)
	bool                                               bCanLoop;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FFrameNumber                                EndFrameOffset;                                           // 0x0008(0x0004) (Edit, BlueprintVisible)
	struct FFrameNumber                                FirstLoopStartFrameOffset;                                // 0x000C(0x0004) (Edit, BlueprintVisible)
	float                                              TimeScale;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HierarchicalBias;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              StartOffset;                                              // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x0020(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0058
struct FMovieSceneSegment
{

};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ForcedTime;                                               // 0x0004(0x0004)
	ESectionEvaluationFlags                            Flags;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x0118
struct FMovieSceneSequenceHierarchy
{
	struct FMovieSceneSequenceHierarchyNode            RootNode;                                                 // 0x0000(0x0018)
	struct FMovieSceneSubSequenceTree                  Tree;                                                     // 0x0018(0x0060)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                             // 0x0078(0x0050)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                // 0x00C8(0x0050)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneSequenceID>               Children;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x00E8
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath                             Sequence;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                  // 0x0018(0x0020)
	struct FFrameRate                                  TickResolution;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                  // 0x0040(0x0004)
	struct FMovieSceneFrameRange                       PlayRange;                                                // 0x0044(0x0010)
	struct FMovieSceneFrameRange                       FullPlayRange;                                            // 0x0054(0x0010)
	struct FMovieSceneFrameRange                       UnwarpedPlayRange;                                        // 0x0064(0x0010)
	struct FMovieSceneFrameRange                       PreRollRange;                                             // 0x0074(0x0010)
	struct FMovieSceneFrameRange                       PostRollRange;                                            // 0x0084(0x0010)
	int16_t                                            HierarchicalBias;                                         // 0x0094(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasHierarchicalEasing;                                   // 0x0096(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0097(0x0001) MISSED OFFSET
	struct FMovieSceneSequenceInstanceDataPtr          InstanceData;                                             // 0x0098(0x0018)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FGuid                                       SubSectionSignature;                                      // 0x00B8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceTransform                OuterToInnerTransform;                                    // 0x00C8(0x0020)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0020
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform                    LinearTransform;                                          // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneNestedSequenceTransform>  NestedTransforms;                                         // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// 0x0014
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform                    LinearTransform;                                          // 0x0000(0x000C)
	struct FMovieSceneTimeWarping                      Warping;                                                  // 0x000C(0x0008)
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
// 0x0008
struct FMovieSceneTimeWarping
{
	struct FFrameNumber                                Start;                                                    // 0x0000(0x0004)
	struct FFrameNumber                                End;                                                      // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
// 0x000C
struct FMovieSceneTimeTransform
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  Offset;                                                   // 0x0004(0x0008)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0018
struct FMovieSceneSequenceInstanceDataPtr
{

};

// ScriptStruct MovieScene.MovieSceneSubSequenceTree
// 0x0060
struct FMovieSceneSubSequenceTree
{

};

// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
// 0x0008
struct FMovieSceneSubSequenceTreeEntry
{

};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0008
struct FMovieSceneSequenceInstanceData
{

};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
// 0x0028
struct FMovieSceneSequencePlaybackParams
{
	struct FFrameTime                                  Frame;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      MarkedFrame;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EMovieScenePositionType                            PositionType;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUpdatePositionMethod                              UpdateMethod;                                             // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0014
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char                                      bAutoPlay;                                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FMovieSceneSequenceLoopCount                LoopCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomStartTime;                                         // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRestoreState;                                            // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableMovementInput;                                    // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableLookAtInput;                                      // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHidePlayer;                                              // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHideHud;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableCameraCuts;                                       // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPauseAtEnd;                                              // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x0004
struct FMovieSceneSequenceLoopCount
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x0010
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime                                  LastKnownPosition;                                        // 0x0000(0x0008)
	TEnumAsByte<EMovieScenePlayerStatus>               LastKnownStatus;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                LastKnownNumLoops;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
// 0x0010
struct FMovieSceneWarpCounter
{
	TArray<uint32_t>                                   WarpCounts;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0090
struct FMovieSceneSpawnable
{
	struct FTransform                                  SpawnTransform;                                           // 0x0000(0x0030) (Edit, IsPlainOldData)
	TArray<struct FName>                               Tags;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bContinuouslyRespawn;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEvaluateTracksWhenNotSpawned;                            // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class FString                                      Name;                                                     // 0x0058(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectTemplate;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ChildPossessables;                                        // 0x0070(0x0010) (ZeroConstructor)
	ESpawnOwnership                                    Ownership;                                                // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FName                                       LevelName;                                                // 0x0084(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// size:0x0000 (0x0020 - 0x0020)
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x0004
struct FMovieSceneTrackDisplayOptions
{
	unsigned char                                      bShowVerticalFrames;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection;                               // 0x0000(0x0001)
	unsigned char                                      bEvalNearestSection;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateInPreroll;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateInPostroll;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateNearestSection;                                  // 0x0000(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
// 0x0010
struct FMovieSceneTrackEvaluationField
{
	TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
// 0x0020
struct FMovieSceneTrackEvaluationFieldEntry
{
	class UMovieSceneSection*                          Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFrameNumberRange                           Range;                                                    // 0x0008(0x0010)
	struct FFrameNumber                                ForcedTime;                                               // 0x0018(0x0004)
	ESectionEvaluationFlags                            Flags;                                                    // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001D(0x0001) MISSED OFFSET
	int16_t                                            LegacySortOrder;                                          // 0x001E(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
// 0x0010
struct FMovieSceneTrackInstanceInput
{
	class UMovieSceneSection*                          Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
// 0x0010
struct FMovieSceneTrackInstanceEntry
{
	class UObject*                                     BoundObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMovieSceneTrackInstance*                    TrackInstance;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
