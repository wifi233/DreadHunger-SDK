                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ApexDestruction_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ApexDestruction.DestructibleActor
// size:0x0018 (0x0220 - 0x0238)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnActorFracture;                                          // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
};


// Class ApexDestruction.DestructibleComponent
// size:0x0110 (0x06B0 - 0x07C0)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	struct FName                                       DebrisCollisionProfile;                                   // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFractureEffectOverride;                                  // 0x06B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B9(0x0007) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x06C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
	bool                                               bEnableHardSleeping;                                      // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x06D8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnComponentFracture;                                      // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xC8];                                      // 0x06F8(0x00C8) MISSED OFFSET

	void SetDestructibleMesh(class UDestructibleMesh* NewMesh)//offset:0x796110;
	class UDestructibleMesh* GetDestructibleMesh()//offset:0x7960E0;
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)//offset:0x795F20;
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)//offset:0x795DA0;
};


// Class ApexDestruction.DestructibleFractureSettings
// size:0x0090 (0x0028 - 0x00B8)
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x002C(0x0024) (Edit, Transient)
	int                                                RandomSeed;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0058(0x0010) (ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0090(0x0028) MISSED OFFSET
};


// Class ApexDestruction.DestructibleMesh
// size:0x00A0 (0x0398 - 0x0438)
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            // 0x0398(0x0088) (Edit)
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0420(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
