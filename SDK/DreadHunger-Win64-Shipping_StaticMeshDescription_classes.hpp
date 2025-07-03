                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StaticMeshDescription_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StaticMeshDescription.StaticMeshDescription
// size:0x0000 (0x0390 - 0x0390)
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	void SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex)//offset:0x25A3DC0;
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const struct FName& SlotName)//offset:0x25A3CE0;
	struct FVector2D GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int UVIndex)//offset:0x25A3C00;
	void CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)//offset:0x25A38C0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
