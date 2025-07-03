                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ProceduralMeshComponent_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// size:0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)//offset:0x8262B0;
	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)//offset:0x825E40;
	static void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)//offset:0x825B80;
	static void GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)//offset:0x8258C0;
	static void CreateGridMeshWelded(int NumX, int NumY, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing)//offset:0x824EC0;
	static void CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)//offset:0x824D50;
	static void CreateGridMeshSplit(int NumX, int NumY, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing)//offset:0x824AB0;
	static void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)//offset:0x824960;
	static void ConvertQuadToTriangles(TArray<int>* Triangles, int Vert0, int Vert1, int Vert2, int Vert3)//offset:0x8247B0;
	static void CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)//offset:0x8244A0;
};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// size:0x0060 (0x0480 - 0x04E0)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	bool                                               bUseComplexAsSimpleCollision;                             // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x0481(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                         // 0x0490(0x0010) (ZeroConstructor)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                     // 0x04A0(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x04B0(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x04D0(0x0010) (ZeroConstructor, Transient)

	void UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)//offset:0x8267C0;
	void UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)//offset:0x826500;
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)//offset:0x8261E0;
	bool IsMeshSectionVisible(int SectionIndex)//offset:0x826140;
	int GetNumSections()//offset:0x825B50;
	void CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)//offset:0x825450;
	void CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)//offset:0x8250F0;
	void ClearMeshSection(int SectionIndex)//offset:0x824720;
	void ClearCollisionConvexMeshes()//offset:0x824700;
	void ClearAllMeshSections()//offset:0x8246E0;
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)//offset:0x8243B0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
