                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GeometryCollectionTracks_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// size:0x0030 (0x00E8 - 0x0118)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams         Params;                                                   // 0x00E8(0x0030) (Edit)
};


// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// size:0x0018 (0x0078 - 0x0090)
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0080(0x0010) (ExportObject, ZeroConstructor)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
