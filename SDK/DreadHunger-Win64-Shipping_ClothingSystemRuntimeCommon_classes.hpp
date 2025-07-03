                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ClothingSystemRuntimeCommon_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// size:0x0000 (0x0028 - 0x0028)
class UClothConfigCommon : public UClothConfigBase
{
public:
};


// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// size:0x0000 (0x0028 - 0x0028)
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:
};


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// size:0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:
};


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// size:0x01A8 (0x0048 - 0x01F0)
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UClothConfigBase*>        ClothConfigs;                                             // 0x0050(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst)
	class UClothConfigBase*                            ClothSharedSimConfig;                                     // 0x00A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClothConfigBase*                            ClothSimConfig;                                           // 0x00A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClothConfigBase*                            ChaosClothSimConfig;                                      // 0x00B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UClothLODDataCommon_Legacy*>          ClothLODData;                                             // 0x00B8(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FClothLODDataCommon>                 LODData;                                                  // 0x00C8(0x0010) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x00D8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x00E8(0x0010) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x00F8(0x0010) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UClothingAssetCustomData*                    CustomData;                                               // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FClothConfig_Legacy                         ClothConfig;                                              // 0x0118(0x00D4) (Deprecated)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
};


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// size:0x0160 (0x0028 - 0x0188)
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                         // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FClothPhysicalMeshData                      ClothPhysicalMeshData;                                    // 0x0030(0x00F8)
	struct FClothCollisionData                         CollisionData;                                            // 0x0128(0x0040)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0168(0x0020) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
