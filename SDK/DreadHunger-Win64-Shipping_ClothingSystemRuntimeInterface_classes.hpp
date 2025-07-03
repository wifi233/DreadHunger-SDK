                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ClothingSystemRuntimeInterface_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// size:0x0000 (0x0028 - 0x0028)
class UClothConfigBase : public UObject
{
public:
};


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// size:0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactory : public UObject
{
public:
};


// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// size:0x0008 (0x0028 - 0x0030)
class UClothingSimulationInteractor : public UObject
{
public:

	void SetAnimDriveSpringStiffness(float InStiffness)//offset:0x25CECF0;
	void PhysicsAssetUpdated()//offset:0x1F582B0;
	float GetSimulationTime()//offset:0x25CECB0;
	int GetNumSubsteps()//offset:0x25CEC80;
	int GetNumKinematicParticles()//offset:0x25CEC50;
	int GetNumIterations()//offset:0x25CEC20;
	int GetNumDynamicParticles()//offset:0x25CEBF0;
	int GetNumCloths()//offset:0x25CEBC0;
	void EnableGravityOverride(const struct FVector& InVector)//offset:0x25CEB30;
	void DisableGravityOverride()//offset:0x25CEB10;
	void ClothConfigUpdated()//offset:0xF54880;
};


// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// size:0x0000 (0x0028 - 0x0028)
class UClothSharedSimConfigBase : public UObject
{
public:
};


// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// size:0x0020 (0x0028 - 0x0048)
class UClothingAssetBase : public UObject
{
public:
	class FString                                      ImportedFilePath;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FGuid                                       AssetGuid;                                                // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// size:0x00B8 (0x0028 - 0x00E0)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector>                             Vertices;                                                 // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0038(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Indices;                                                  // 0x0048(0x0010) (ZeroConstructor)
	TArray<float>                                      InverseMasses;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FClothVertBoneData>                  BoneData;                                                 // 0x0068(0x0010) (ZeroConstructor)
	int                                                NumFixedVerts;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBoneWeights;                                           // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   SelfCollisionIndices;                                     // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
