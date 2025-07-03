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

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	None                           = 0,
	Normals                        = 1,
	Tangents                       = 2,
	WeightedNTBs                   = 3,
	EComputeNTBsOptions_MAX        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0004
struct FElementID
{
	int                                                IDValue;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MeshDescription.PolygonGroupID
// size:0x0000 (0x0004 - 0x0004)
struct FPolygonGroupID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonID
// size:0x0000 (0x0004 - 0x0004)
struct FPolygonID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexID
// size:0x0000 (0x0004 - 0x0004)
struct FVertexID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexInstanceID
// size:0x0000 (0x0004 - 0x0004)
struct FVertexInstanceID : public FElementID
{

};

// ScriptStruct MeshDescription.EdgeID
// size:0x0000 (0x0004 - 0x0004)
struct FEdgeID : public FElementID
{

};

// ScriptStruct MeshDescription.TriangleID
// size:0x0000 (0x0004 - 0x0004)
struct FTriangleID : public FElementID
{

};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
