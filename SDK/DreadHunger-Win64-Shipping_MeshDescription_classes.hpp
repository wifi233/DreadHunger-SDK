                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MeshDescription_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MeshDescription.MeshDescription
// size:0x0000 (0x0028 - 0x0028)
class UMeshDescription : public UObject
{
public:
};


// Class MeshDescription.MeshDescriptionBase
// size:0x0368 (0x0028 - 0x0390)
class UMeshDescriptionBase : public UObject
{
public:

	void SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position)//offset:0x259B9C0;
	void SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID)//offset:0x259B8A0;
	void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)//offset:0x259B7D0;
	void ReversePolygonFacing(const struct FPolygonID& PolygonID)//offset:0x259B750;
	void ReserveNewVertices(int NumberOfNewVertices)//offset:0x259B6C0;
	void ReserveNewVertexInstances(int NumberOfNewVertexInstances)//offset:0x259B480;
	void ReserveNewTriangles(int NumberOfNewTriangles)//offset:0x259B630;
	void ReserveNewPolygons(int NumberOfNewPolygons)//offset:0x259B5A0;
	void ReserveNewPolygonGroups(int NumberOfNewPolygonGroups)//offset:0x259B510;
	void ReserveNewEdges(int NumberOfNewEdges)//offset:0x259B480;
	bool IsVertexValid(const struct FVertexID& VertexID)//offset:0x259B3F0;
	bool IsVertexOrphaned(const struct FVertexID& VertexID)//offset:0x259B360;
	bool IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID)//offset:0x259B2D0;
	bool IsTriangleValid(const struct FTriangleID& TriangleID)//offset:0x259B240;
	bool IsTrianglePartOfNgon(const struct FTriangleID& TriangleID)//offset:0x259B1B0;
	bool IsPolygonValid(const struct FPolygonID& PolygonID)//offset:0x259B120;
	bool IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID)//offset:0x259B090;
	bool IsEmpty()//offset:0x259B060;
	bool IsEdgeValid(const struct FEdgeID& EdgeID)//offset:0x259AFD0;
	bool IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID)//offset:0x259AEF0;
	bool IsEdgeInternal(const struct FEdgeID& EdgeID)//offset:0x259AE60;
	void GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)//offset:0x259AD70;
	struct FVector GetVertexPosition(const struct FVertexID& VertexID)//offset:0x259ACD0;
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)//offset:0x259ABF0;
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)//offset:0x259AB50;
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1)//offset:0x259AA70;
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID)//offset:0x259A990;
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)//offset:0x259A8B0;
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)//offset:0x259A7C0;
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)//offset:0x259A6D0;
	void GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)//offset:0x259A5E0;
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)//offset:0x259A4F0;
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs)//offset:0x259A400;
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)//offset:0x259A310;
	void GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs)//offset:0x259A220;
	void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)//offset:0x259A130;
	struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int Index)//offset:0x259A050;
	struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& TriangleID)//offset:0x2599FB0;
	struct FPolygonID GetTrianglePolygon(const struct FTriangleID& TriangleID)//offset:0x2599F10;
	void GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs)//offset:0x2599E20;
	void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs)//offset:0x2599D30;
	void GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs)//offset:0x2599C40;
	void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)//offset:0x2599B50;
	void GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs)//offset:0x2599A60;
	struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& PolygonID)//offset:0x25999C0;
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)//offset:0x25998D0;
	void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)//offset:0x25997E0;
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs)//offset:0x25996F0;
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs)//offset:0x2599600;
	int GetNumVertexVertexInstances(const struct FVertexID& VertexID)//offset:0x2599570;
	int GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID)//offset:0x25994E0;
	int GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID)//offset:0x2599450;
	int GetNumVertexConnectedTriangles(const struct FVertexID& VertexID)//offset:0x25993C0;
	int GetNumVertexConnectedPolygons(const struct FVertexID& VertexID)//offset:0x2599330;
	int GetNumVertexConnectedEdges(const struct FVertexID& VertexID)//offset:0x25992A0;
	int GetNumPolygonVertices(const struct FPolygonID& PolygonID)//offset:0x2599210;
	int GetNumPolygonTriangles(const struct FPolygonID& PolygonID)//offset:0x2599180;
	int GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID)//offset:0x25990F0;
	int GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID)//offset:0x2599060;
	int GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID)//offset:0x2598FD0;
	int GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID)//offset:0x2598F40;
	void GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs)//offset:0x2598E50;
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int VertexNumber)//offset:0x2598D70;
	void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)//offset:0x2598C80;
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)//offset:0x2598B90;
	void Empty()//offset:0x2598B70;
	void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)//offset:0x2598A80;
	void DeleteVertex(const struct FVertexID& VertexID)//offset:0x2598A00;
	void DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)//offset:0x2598840;
	void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)//offset:0x25987C0;
	void DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)//offset:0x2598600;
	void DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices)//offset:0x2598510;
	void CreateVertexWithID(const struct FVertexID& VertexID)//offset:0x2598490;
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)//offset:0x25983C0;
	struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& VertexID)//offset:0x2598320;
	struct FVertexID CreateVertex()//offset:0x25982E0;
	void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)//offset:0x2598130;
	struct FTriangleID CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)//offset:0x2597FC0;
	void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)//offset:0x2597E10;
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)//offset:0x2597D90;
	struct FPolygonGroupID CreatePolygonGroup()//offset:0x2597D50;
	struct FPolygonID CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)//offset:0x2597BE0;
	void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)//offset:0x2597AC0;
	struct FEdgeID CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)//offset:0x25979E0;
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID)//offset:0x2597960;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
