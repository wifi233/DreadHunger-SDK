                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_EditableMesh_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EditableMesh.EditableMeshAdapter
// size:0x0000 (0x0028 - 0x0028)
class UEditableMeshAdapter : public UObject
{
public:
};


// Class EditableMesh.EditableGeometryCollectionAdapter
// size:0x00B0 (0x0028 - 0x00D8)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{
public:
	class UGeometryCollection*                         GeometryCollection;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGeometryCollection*                         OriginalGeometryCollection;                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                GeometryCollectionLODIndex;                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x003C(0x009C) MISSED OFFSET
};


// Class EditableMesh.EditableMesh
// size:0x06E0 (0x0028 - 0x0708)
class UEditableMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0028(0x0390) MISSED OFFSET
	TArray<class UEditableMeshAdapter*>                Adapters;                                                 // 0x03B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	int                                                TextureCoordinateCount;                                   // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x148];                                     // 0x03D4(0x0148) MISSED OFFSET
	int                                                PendingCompactCounter;                                    // 0x051C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubdivisionCount;                                         // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1E4];                                     // 0x0524(0x01E4) MISSED OFFSET

	void WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID)//offset:0x807CF0;
	void TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)//offset:0x807BC0;
	void TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)//offset:0x807A90;
	void TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)//offset:0x807970;
	void TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)//offset:0x807810;
	void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange)//offset:0x807740;
	void SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)//offset:0x807600;
	void SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)//offset:0x807430;
	void SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs)//offset:0x8072D0;
	void SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)//offset:0x8071B0;
	void SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices)//offset:0x8070E0;
	void SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances)//offset:0x807010;
	void SetTextureCoordinateCount(int NumTexCoords)//offset:0x806F80;
	void SetSubdivisionCount(int NewSubdivisionCount)//offset:0x806EF0;
	void SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons)//offset:0x806D70;
	void SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge)//offset:0x806C70;
	void SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)//offset:0x806B50;
	void SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)//offset:0x806A30;
	void SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges)//offset:0x806960;
	void SetAllowUndo(bool bInAllowUndo)//offset:0x8068D0;
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)//offset:0x806840;
	void SetAllowCompact(bool bInAllowCompact)//offset:0x8067B0;
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons)//offset:0x8066B0;
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)//offset:0x806560;
	void SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons)//offset:0x806440;
	class UEditableMesh* RevertInstance()//offset:0x806410;
	void Revert()//offset:0x806320;
	void RebuildRenderMesh()//offset:0x8063F0;
	void QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)//offset:0x806340;
	void PropagateInstanceChanges()//offset:0x806320;
	void MoveVertices(TArray<struct FVertexToMove> VerticesToMove)//offset:0x806270;
	static struct FVertexID MakeVertexID(int VertexIndex)//offset:0x8061F0;
	static struct FPolygonID MakePolygonID(int PolygonIndex)//offset:0x8061F0;
	static struct FPolygonGroupID MakePolygonGroupID(int PolygonGroupIndex)//offset:0x8061F0;
	static struct FEdgeID MakeEdgeID(int EdgeIndex)//offset:0x8061F0;
	bool IsValidVertex(const struct FVertexID& VertexID)//offset:0x806160;
	bool IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)//offset:0x8060D0;
	bool IsValidPolygon(const struct FPolygonID& PolygonID)//offset:0x806040;
	bool IsValidEdge(const struct FEdgeID& EdgeID)//offset:0x805FB0;
	bool IsUndoAllowed()//offset:0x805F90;
	bool IsSpatialDatabaseAllowed()//offset:0x805F70;
	bool IsPreviewingSubdivisions()//offset:0x805F40;
	bool IsOrphanedVertex(const struct FVertexID& VertexID)//offset:0x805EB0;
	bool IsCompactAllowed()//offset:0x805E90;
	bool IsCommittedAsInstance()//offset:0x805E60;
	bool IsCommitted()//offset:0x805E30;
	bool IsBeingModified()//offset:0x805E00;
	static struct FVertexID InvalidVertexID()//offset:0x805DE0;
	static struct FPolygonID InvalidPolygonID()//offset:0x805DC0;
	static struct FPolygonGroupID InvalidPolygonGroupID()//offset:0x805DA0;
	static struct FEdgeID InvalidEdgeID()//offset:0x805D80;
	void InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)//offset:0x805B40;
	void InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)//offset:0x8059E0;
	void InitializeAdapters()//offset:0x8059C0;
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)//offset:0x805890;
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)//offset:0x8057F0;
	int GetVertexInstanceCount()//offset:0x8057C0;
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)//offset:0x8056D0;
	int GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)//offset:0x805640;
	struct FPolygonID GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber)//offset:0x805560;
	int GetVertexCount()//offset:0x805530;
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)//offset:0x805440;
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)//offset:0x805350;
	int GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)//offset:0x8052C0;
	struct FEdgeID GetVertexConnectedEdge(const struct FVertexID& VertexID, int ConnectedEdgeNumber)//offset:0x8051E0;
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)//offset:0x8050F0;
	int GetTextureCoordinateCount()//offset:0x8050C0;
	struct FSubdivisionLimitData GetSubdivisionLimitData()//offset:0x805080;
	int GetSubdivisionCount()//offset:0x805050;
	int GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)//offset:0x804FC0;
	struct FTriangleID GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int PolygonTriangleNumber)//offset:0x804EE0;
	void GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)//offset:0x804DF0;
	void GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)//offset:0x804D00;
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int PolygonVertexNumber)//offset:0x804C20;
	int GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)//offset:0x8049C0;
	struct FVertexID GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int PolygonVertexNumber)//offset:0x804B40;
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)//offset:0x804A50;
	int GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)//offset:0x8049C0;
	struct FEdgeID GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)//offset:0x804890;
	struct FPolygonID GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int PolygonNumber)//offset:0x8047B0;
	int GetPolygonGroupCount()//offset:0x804780;
	int GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)//offset:0x8046F0;
	int GetPolygonCount()//offset:0x8046C0;
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)//offset:0x8045D0;
	struct FPolygonGroupID GetGroupForPolygon(const struct FPolygonID& PolygonID)//offset:0x804530;
	struct FPolygonGroupID GetFirstValidPolygonGroup()//offset:0x8044F0;
	void GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)//offset:0x8043C0;
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int EdgeVertexNumber)//offset:0x8042E0;
	struct FEdgeID GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)//offset:0x804200;
	void GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)//offset:0x804110;
	int GetEdgeCount()//offset:0x8040E0;
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)//offset:0x803FF0;
	int GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)//offset:0x803F60;
	struct FPolygonID GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int ConnectedPolygonNumber)//offset:0x803E80;
	void GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs)//offset:0x803DD0;
	void FlipPolygons(TArray<struct FPolygonID> PolygonIDs)//offset:0x803D20;
	int FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)//offset:0x803C40;
	int FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)//offset:0x803B20;
	void FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)//offset:0x803900;
	void ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)//offset:0x803740;
	void ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)//offset:0x803590;
	void ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)//offset:0x803430;
	void EndModification(bool bFromUndo)//offset:0x8033A0;
	void DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)//offset:0x8032A0;
	void DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)//offset:0x8030D0;
	void DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)//offset:0x802ED0;
	void DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs)//offset:0x802E20;
	void DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete)//offset:0x802D70;
	void DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)//offset:0x802C70;
	void DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)//offset:0x802AA0;
	void CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)//offset:0x802960;
	void CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)//offset:0x802820;
	void CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)//offset:0x802650;
	void CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)//offset:0x802510;
	void CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)//offset:0x802420;
	void CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)//offset:0x802330;
	void CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)//offset:0x8021F0;
	void ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)//offset:0x8020D0;
	struct FPlane ComputePolygonPlane(const struct FPolygonID& PolygonID)//offset:0x802030;
	struct FVector ComputePolygonNormal(const struct FPolygonID& PolygonID)//offset:0x801F90;
	struct FVector ComputePolygonCenter(const struct FPolygonID& PolygonID)//offset:0x801EF0;
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere()//offset:0x801EA0;
	struct FBox ComputeBoundingBox()//offset:0x801E50;
	class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)//offset:0x801DB0;
	void Commit()//offset:0x801D90;
	void ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons)//offset:0x801C80;
	void BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)//offset:0x801A90;
	void AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)//offset:0x801990;
	bool AnyChangesToUndo()//offset:0x801960;
};


// Class EditableMesh.EditableMeshFactory
// size:0x0000 (0x0028 - 0x0028)
class UEditableMeshFactory : public UObject
{
public:

	static class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int LODIndex)//offset:0x80B2C0;
};


// Class EditableMesh.EditableStaticMeshAdapter
// size:0x00B8 (0x0028 - 0x00E0)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 OriginalStaticMesh;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticMeshLODIndex;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x003C(0x00A4) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
