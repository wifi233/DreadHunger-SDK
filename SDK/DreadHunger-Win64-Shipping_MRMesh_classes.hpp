                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MRMesh_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MRMesh.MeshReconstructorBase
// size:0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	void StopReconstruction()//offset:0xF54880;
	void StartReconstruction()//offset:0x1F582B0;
	void PauseReconstruction()//offset:0x1F58050;
	bool IsReconstructionStarted()//offset:0x1F58020;
	bool IsReconstructionPaused()//offset:0x1F57FF0;
	void DisconnectMRMesh()//offset:0xF54690;
	void ConnectMRMesh(class UMRMeshComponent* Mesh)//offset:0x1F57D70;
};


// Class MRMesh.MockDataMeshTrackerComponent
// size:0x0070 (0x0200 - 0x0270)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	bool                                               ScanWorld;                                                // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x020A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshTrackerVertexColorMode                        VertexColorMode;                                          // 0x020B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UMRMeshComponent*                            MRMesh;                                                   // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)//offset:0x13CEB30;
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)//offset:0x1F57E90;
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)//offset:0x1F57E00;
};


// Class MRMesh.MRMeshComponent
// size:0x00C0 (0x0450 - 0x0510)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WireframeMaterial;                                        // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateMeshProxySections;                                 // 0x0470(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNavMeshOnMeshUpdate;                               // 0x0471(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverCreateCollisionMesh;                                // 0x0472(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0473(0x0005) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0480(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0490(0x0080) MISSED OFFSET

	void SetWireframeMaterial(class UMaterialInterface* InMaterial)//offset:0x1F58220;
	void SetWireframeColor(const struct FLinearColor& InColor)//offset:0x1F58190;
	void SetUseWireframe(bool bUseWireframe)//offset:0x1F58100;
	void SetEnableMeshOcclusion(bool bEnable)//offset:0x1F58070;
	bool IsConnected()//offset:0x1F57FB0;
	struct FLinearColor GetWireframeColor()//offset:0x1F57F80;
	bool GetUseWireframe()//offset:0x1F57F60;
	bool GetEnableMeshOcclusion()//offset:0x1F57F40;
	void ForceNavMeshUpdate()//offset:0x1F57F20;
	void Clear()//offset:0x1F57D40;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
