                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ActorSequence_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorSequence.ActorSequence
// size:0x0028 (0x0060 - 0x0088)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0068(0x0020)
};


// Class ActorSequence.ActorSequenceComponent
// size:0x0028 (0x00B0 - 0x00D8)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x00B0(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UActorSequence*                              Sequence;                                                 // 0x00C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};


// Class ActorSequence.ActorSequencePlayer
// size:0x0000 (0x0680 - 0x0680)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
