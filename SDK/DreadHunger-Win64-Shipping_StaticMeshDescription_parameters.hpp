                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StaticMeshDescription_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_SetVertexInstanceUV_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	struct FVector2D                                   UV;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UVIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	int                                                UVIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfExtents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPolygonGroupID                             PolygonGroup;                                             // (Parm)
	struct FPolygonID                                  PolygonID_PlusX;                                          // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_MinusX;                                         // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_PlusY;                                          // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_MinusY;                                         // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_PlusZ;                                          // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_MinusZ;                                         // (Parm, OutParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
