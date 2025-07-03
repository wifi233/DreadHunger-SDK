                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Foliage_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Foliage.FoliageInstancedStaticMeshComponent
// size:0x0030 (0x0680 - 0x06B0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	struct UEMulticastInlineDelegate                   OnInstanceTakePointDamage;                                // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInstanceTakeRadialDamage;                               // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGuid                                       GenerationGuid;                                           // 0x06A0(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class Foliage.FoliageStatistics
// size:0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static int FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)//offset:0x21C2ED0;
	static int FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box)//offset:0x21C2D90;
};


// Class Foliage.FoliageType
// size:0x0380 (0x0028 - 0x03A8)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleInstanceModeOverrideRadius;                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              SingleInstanceModeRadius;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFoliageScaling                                    Scaling;                                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0068(0x000C) (Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert;                                    // 0x00A0(0x0001) (Deprecated)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToNormal;                                            // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw;                                                // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumLayerWeight;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExclusionLandscapeLayers;                                 // 0x00E8(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumExclusionLayerWeight;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LandscapeLayer;                                           // 0x00FC(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld;                                       // 0x0104(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x0108(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x0114(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0130(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableStaticLighting;                                    // 0x0148(0x0001) (Deprecated)
	unsigned char                                      CastShadow;                                               // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting;                           // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting;                             // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow;                                       // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow;                                        // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided;                                    // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals;                                          // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes;                                     // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELightmapType                                      LightmapType;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	unsigned char                                      bUseAsOccluder;                                           // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0158(0x0158) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x02B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0x2];                                       // 0x02B2(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth;                                       // 0x02B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData14[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	ERendererStencilMask                               CustomDepthStencilWriteMask;                              // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x02E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x02EA(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x0300(0x0088) (Edit)
	int                                                ChangeCount;                                              // 0x0388(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      ReapplyDensity;                                           // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRadius;                                            // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal;                                     // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw;                                         // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling;                                           // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX;                                            // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY;                                            // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ;                                            // 0x038C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle;                                  // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope;                                       // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight;                                            // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers;                                   // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset;                                           // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld;                                // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask;                                   // 0x038D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling;                                    // 0x038D(0x0001) (Edit)
	unsigned char                                      bEnableDiscardOnLoad;                                     // 0x038E(0x0001) (Edit)
	unsigned char                                      UnknownData17[0x1];                                       // 0x038F(0x0001) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VirtualTextureCullMips;                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x03A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
};


// Class Foliage.FoliageType_Actor
// size:0x0010 (0x03A8 - 0x03B8)
class UFoliageType_Actor : public UFoliageType
{
public:
	class AActor*                                      ActorClass;                                               // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAttachToBaseComponent;                             // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
};


// Class Foliage.FoliageType_InstancedStaticMesh
// size:0x0020 (0x03A8 - 0x03C8)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x03B0(0x0010) (Edit, ZeroConstructor)
	class UFoliageInstancedStaticMeshComponent*        ComponentClass;                                           // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Foliage.InstancedFoliageActor
// size:0x0050 (0x0220 - 0x0270)
class AInstancedFoliageActor : public AActor
{
public:
};


// Class Foliage.InteractiveFoliageActor
// size:0x0060 (0x0230 - 0x0290)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0238(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x0244(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0250(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x025C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET

	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)//offset:0x21C2B60;
};


// Class Foliage.InteractiveFoliageComponent
// size:0x0000 (0x04F0 - 0x04F0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
};


// Class Foliage.ProceduralFoliageBlockingVolume
// size:0x0008 (0x0258 - 0x0260)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class Foliage.ProceduralFoliageComponent
// size:0x0028 (0x00B0 - 0x00D8)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x00C8(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class Foliage.ProceduralFoliageSpawner
// size:0x0040 (0x0028 - 0x0068)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	void Simulate(int NumSteps)//offset:0x21C3030;
};


// Class Foliage.ProceduralFoliageTile
// size:0x0130 (0x0028 - 0x0158)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET
};


// Class Foliage.ProceduralFoliageVolume
// size:0x0008 (0x0258 - 0x0260)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
