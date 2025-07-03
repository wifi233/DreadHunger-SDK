                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Landscape_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshActor
// size:0x0008 (0x0220 - 0x0228)
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class Landscape.ControlPointMeshComponent
// size:0x0000 (0x04F0 - 0x04F0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
};


// Class Landscape.LandscapeProxy
// size:0x0378 (0x0220 - 0x0598)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0228(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x0244(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0248(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              ComponentScreenSizeToUseSubSections;                      // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0ScreenSize;                                           // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0DistributionSetting;                                  // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TessellationComponentScreenSize;                          // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTessellationComponentScreenSizeFalloff;                // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              TessellationComponentScreenSizeFalloff;                   // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OccluderGeometryLOD;                                      // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0288(0x0020) MISSED OFFSET
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                               // 0x02B0(0x0010) (Edit, ZeroConstructor)
	bool                                               bMeshHoles;                                               // 0x02C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MeshHolesMaxLod;                                          // 0x02C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x02C2(0x0006) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VirtualTextureNumLods;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VirtualTextureLodBias;                                    // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              NegativeZBoundsExtension;                                 // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x02F0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0300(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData07[0x64];                                      // 0x0320(0x0064) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x0384(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CastShadow;                                               // 0x038C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow;                                       // 0x038C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow;                                        // 0x038C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	unsigned char                                      bCastFarShadow;                                           // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	unsigned char                                      bCastHiddenShadow;                                        // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	unsigned char                                      bCastShadowAsTwoSided;                                    // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	unsigned char                                      bAffectDistanceFieldLighting;                             // 0x039C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLightingChannels                           LightingChannels;                                         // 0x039D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting;               // 0x03A0(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth;                                       // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData14[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	ERendererStencilMask                               CustomDepthStencilWriteMask;                              // 0x03A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LDMaxDrawDistance;                                        // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x03B0(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x03CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x03D8(0x0158) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents;                                   // 0x0530(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision;                 // 0x0530(0x0001) (Edit)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0534(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation;                                       // 0x0540(0x0001) (Edit)
	unsigned char                                      bFillCollisionUnderLandscapeForNavmesh;                   // 0x0540(0x0001) (Edit)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	bool                                               bUseDynamicMaterialInstance;                              // 0x0544(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0545(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x0546(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLayersContent;                                        // 0x0547(0x0001) (ZeroConstructor, IsPlainOldData)
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                        // 0x0548(0x0050) (Transient)

	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)//offset:0x21FCF20;
	void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value)//offset:0x21FCE50;
	void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value)//offset:0x21FCD80;
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies)//offset:0x21FCC60;
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)//offset:0xF39610;
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, const struct FName& EditLayerName)//offset:0x21FC8D0;
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)//offset:0xF29F30;
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)//offset:0x21FC840;
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)//offset:0x21FC7B0;
	void ChangeLODDistanceFactor(float InLODDistanceFactor)//offset:0x21FC720;
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)//offset:0x21FC690;
};


// Class Landscape.Landscape
// size:0x0000 (0x0598 - 0x0598)
class ALandscape : public ALandscapeProxy
{
public:
};


// Class Landscape.LandscapeBlueprintBrushBase
// size:0x0000 (0x0220 - 0x0220)
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	void RequestLandscapeUpdate()//offset:0x806320;
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName)//offset:0x21FB0B0;
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)//offset:0x21FAF30;
	void GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets)//offset:0x13CEB30;
};


// Class Landscape.LandscapeLODStreamingProxy
// size:0x0008 (0x0060 - 0x0068)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{
public:
};


// Class Landscape.LandscapeComponent
// size:0x0220 (0x0450 - 0x0670)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                        // 0x0478(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0488(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                 // 0x0498(0x0010) (ZeroConstructor, Transient)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                  // 0x04A8(0x0010) (ZeroConstructor)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;              // 0x04B8(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    WeightmapScaleBias;                                       // 0x04D0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x04F0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0500(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x051C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0540(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0550(0x0010) (ZeroConstructor)
	class ULandscapeLODStreamingProxy*                 LODStreamingProxy;                                        // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0568(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0578(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0588(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x058C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0590(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0594(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0598(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x05A4(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x05B4(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x05C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x05D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                 // 0x05E0(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x05F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x70];                                      // 0x0600(0x0070) MISSED OFFSET

	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex)//offset:0x21FAE60;
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName)//offset:0x21FAD80;
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer)//offset:0x21FACA0;
};


// Class Landscape.LandscapeGizmoActor
// size:0x0000 (0x0220 - 0x0220)
class ALandscapeGizmoActor : public AActor
{
public:
};


// Class Landscape.LandscapeGizmoActiveActor
// size:0x0050 (0x0220 - 0x0270)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
};


// Class Landscape.LandscapeGizmoRenderComponent
// size:0x0000 (0x0450 - 0x0450)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:
};


// Class Landscape.LandscapeGrassType
// size:0x0038 (0x0028 - 0x0060)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bEnableDensityScaling;                                    // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// size:0x00E0 (0x0450 - 0x0530)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0450(0x0010) (ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x046C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0478(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0488(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0498(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x04B4(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x04E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x04F0(0x0040) MISSED OFFSET

	class ULandscapeComponent* GetRenderComponent()//offset:0x21FAF00;
};


// Class Landscape.LandscapeInfo
// size:0x01E8 (0x0028 - 0x0210)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x006C(0x00A4) MISSED OFFSET
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                  // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0120(0x00F0) MISSED OFFSET
};


// Class Landscape.LandscapeInfoMap
// size:0x0058 (0x0028 - 0x0080)
class ULandscapeInfoMap : public UObject
{
public:
};


// Class Landscape.LandscapeLayerInfoObject
// size:0x0028 (0x0028 - 0x0050)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};


// Class Landscape.LandscapeMaterialInstanceConstant
// size:0x0018 (0x0368 - 0x0380)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                                     // 0x0368(0x0010) (ZeroConstructor)
	unsigned char                                      bIsLayerThumbnail;                                        // 0x0378(0x0001)
	unsigned char                                      bDisableTessellation;                                     // 0x0378(0x0001)
	unsigned char                                      bMobile;                                                  // 0x0378(0x0001)
	unsigned char                                      bEditorToolUsage;                                         // 0x0378(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
};


// Class Landscape.LandscapeMeshCollisionComponent
// size:0x0020 (0x0530 - 0x0550)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                 // 0x0530(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0540(0x0010) MISSED OFFSET
};


// Class Landscape.LandscapeMeshProxyActor
// size:0x0008 (0x0220 - 0x0228)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class Landscape.LandscapeMeshProxyComponent
// size:0x0020 (0x04F0 - 0x0510)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x04F8(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0508(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
};


// Class Landscape.LandscapeSettings
// size:0x0008 (0x0038 - 0x0040)
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};


// Class Landscape.LandscapeSplinesComponent
// size:0x0030 (0x0450 - 0x0480)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0450(0x0010) (ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0460(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0470(0x0010) (ExportObject, ZeroConstructor)

	TArray<class USplineMeshComponent*> GetSplineMeshComponents()//offset:0x21FEB00;
};


// Class Landscape.LandscapeSplineControlPoint
// size:0x0080 (0x0028 - 0x00A8)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LayerWidthRatio;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideFalloffFactor;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideFalloffFactor;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideLayerFalloffFactor;                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideLayerFalloffFactor;                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class Landscape.LandscapeSplineSegment
// size:0x0088 (0x0028 - 0x00B0)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)
};


// Class Landscape.LandscapeStreamingProxy
// size:0x0020 (0x0598 - 0x05B8)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0598(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
};


// Class Landscape.LandscapeSubsystem
// size:0x0018 (0x0030 - 0x0048)
class ULandscapeSubsystem : public UWorldSubsystem
{
public:
};


// Class Landscape.LandscapeWeightmapUsage
// size:0x0030 (0x0028 - 0x0058)
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LayerGuid;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// size:0x0010 (0x0040 - 0x0050)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// size:0x0020 (0x0040 - 0x0060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// size:0x0018 (0x0040 - 0x0058)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// size:0x0020 (0x0040 - 0x0060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// size:0x0048 (0x0040 - 0x0088)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0054(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed;                                              // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// size:0x0050 (0x0040 - 0x0090)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FExpressionInput                            Layer;                                                    // 0x0054(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// size:0x0010 (0x0040 - 0x0050)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>              Inputs;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)
};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// size:0x0010 (0x0040 - 0x0050)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
