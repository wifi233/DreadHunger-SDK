                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_MovieScene_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// 0x0030
struct FMovieSceneGeometryCollectionParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FSoftObjectPath                             GeometryCollectionCache;                                  // 0x0008(0x0018) (Edit, ZeroConstructor)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x0020(0x0004) (Edit)
	struct FFrameNumber                                EndFrameOffset;                                           // 0x0024(0x0004) (Edit)
	float                                              PlayRate;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// size:0x0038 (0x0020 - 0x0058)
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                   // 0x0020(0x0038)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// size:0x0008 (0x0030 - 0x0038)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x0030(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x0034(0x0004)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
