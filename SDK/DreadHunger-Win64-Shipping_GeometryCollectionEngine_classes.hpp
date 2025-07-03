                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GeometryCollectionEngine_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionEngine.ChaosDestructionListener
// size:0x0220 (0x0200 - 0x0420)
class UChaosDestructionListener : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0200(0x0014) MISSED OFFSET
	struct FChaosBreakingEventRequestSettings          BreakingEventRequestSettings;                             // 0x0214(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FChaosTrailingEventRequestSettings          TrailingEventRequestSettings;                             // 0x022C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x0244(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData03[0x50];                                      // 0x0298(0x0050) UNKNOWN PROPERTY: 
	struct UEMulticastInlineDelegate                   OnCollisionEvents;                                        // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnBreakingEvents;                                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTrailingEvents;                                         // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x108];                                     // 0x0318(0x0108) MISSED OFFSET

	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, EChaosTrailingSortMethod SortMethod)//offset:0x3018960;
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, EChaosCollisionSortMethod SortMethod)//offset:0x3018860;
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, EChaosBreakingSortMethod SortMethod)//offset:0x3018760;
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)//offset:0x30186C0;
	void SetTrailingEventEnabled(bool bIsEnabled)//offset:0x3018630;
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)//offset:0x3018500;
	void SetCollisionEventEnabled(bool bIsEnabled)//offset:0x3018470;
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)//offset:0x30183D0;
	void SetBreakingEventEnabled(bool bIsEnabled)//offset:0x3018340;
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)//offset:0x30182B0;
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)//offset:0xF39610;
	bool IsEventListening()//offset:0x3017FC0;
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)//offset:0x3017CD0;
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)//offset:0xF39610;
};


// Class GeometryCollectionEngine.GeometryCollectionActor
// size:0x0010 (0x0220 - 0x0230)
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                              // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                     // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)//offset:0x3018130;
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// size:0x0028 (0x0028 - 0x0050)
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                             // 0x0028(0x0010)
	class UGeometryCollection*                         SupportedCollection;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompatibleCollectionState;                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// size:0x0480 (0x0480 - 0x0900)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0488(0x00E0) MISSED OFFSET
	class UGeometryCollection*                         RestCollection;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	TArray<class AFieldSystemActor*>                   InitializationFields;                                     // 0x0570(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear)
	bool                                               Simulating;                                               // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	EObjectStateTypeEnum                               ObjectType;                                               // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableClustering;                                         // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x058A(0x0002) MISSED OFFSET
	int                                                ClusterGroupIndex;                                        // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevel;                                          // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	TArray<float>                                      DamageThreshold;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                    // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	int                                                CollisionGroup;                                           // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionSampleFraction;                                  // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearEtherDrag;                                          // 0x05B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AngularEtherDrag;                                         // 0x05B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x05C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x05CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x05D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                 // 0x05E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGeomComponentCacheParameters               CacheParameters;                                          // 0x05F0(0x0050)
	struct UEMulticastInlineDelegate                   NotifyGeometryCollectionPhysicsStateChange;               // 0x0640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   NotifyGeometryCollectionPhysicsLoadingStateChange;        // 0x0650(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0660(0x0018) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnChaosBreakEvent;                                        // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DesiredCacheTime;                                         // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               CachePlayback;                                            // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnChaosPhysicsCollision;                                  // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bNotifyBreaks;                                            // 0x06A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x06A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableReplication;                                       // 0x06A2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bEnableAbandonAfterLevel;                                 // 0x06A3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                ReplicationAbandonClusterLevel;                           // 0x06A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FGeometryCollectionRepData                  RepData;                                                  // 0x06A8(0x0018) (Net)
	unsigned char                                      UnknownData10[0x218];                                     // 0x06C0(0x0218) MISSED OFFSET
	class UBodySetup*                                  DummyBodySetup;                                           // 0x08D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x20];                                      // 0x08E0(0x0020) MISSED OFFSET

	void SetNotifyBreaks(bool bNewNotifyBreaks)//offset:0x30185A0;
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)//offset:0x13CEB30;
	void OnRep_RepData(const struct FGeometryCollectionRepData& OldData)//offset:0x3018080;
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)//offset:0x13CEB30;
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)//offset:0x13CEB30;
	void NetAbandonCluster(int TransformIndex)//offset:0x3017FF0;
	void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)//offset:0x3017E40;
	void ApplyKinematicField(float Radius, const struct FVector& Position)//offset:0x3017D60;
};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// size:0x00E8 (0x0220 - 0x0308)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage  WarningMessage;                                           // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                        // 0x0228(0x0018) (Edit)
	bool                                               bDebugDrawWholeCollection;                                // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawHierarchy;                                      // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawClustering;                                     // 0x0242(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                             // 0x0243(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyId;                                         // 0x0244(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyCollision;                                  // 0x0245(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollisionAtOrigin;                                       // 0x0246(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyTransform;                                  // 0x0247(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyInertia;                                    // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyVelocity;                                   // 0x0249(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyForce;                                      // 0x024A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyInfos;                                      // 0x024B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTransformIndex;                                      // 0x024C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTransform;                                           // 0x024D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowParent;                                              // 0x024E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLevel;                                               // 0x024F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowConnectivityEdges;                                   // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGeometryIndex;                                       // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGeometryTransform;                                   // 0x0252(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowBoundingBox;                                         // 0x0253(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaces;                                               // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaceIndices;                                         // 0x0255(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaceNormals;                                         // 0x0256(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowSingleFace;                                          // 0x0257(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SingleFaceIndex;                                          // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertices;                                            // 0x025C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertexIndices;                                       // 0x025D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertexNormals;                                       // 0x025E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseActiveVisualization;                                  // 0x025F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointThickness;                                           // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTextShadow;                                              // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              TextScale;                                                // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowScale;                                               // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyIdColor;                                         // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RigidBodyTransformScale;                                  // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyCollisionColor;                                  // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyInertiaColor;                                    // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyVelocityColor;                                   // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyForceColor;                                      // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyInfoColor;                                       // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      TransformIndexColor;                                      // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransformScale;                                           // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LevelColor;                                               // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ParentColor;                                              // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConnectivityEdgeThickness;                                // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      GeometryIndexColor;                                       // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeometryTransformScale;                                   // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BoundingBoxColor;                                         // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceColor;                                                // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceIndexColor;                                           // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceNormalColor;                                          // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SingleFaceColor;                                          // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexIndexColor;                                         // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexNormalColor;                                        // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x02E0(0x0028) MISSED OFFSET
};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// size:0x0018 (0x00B0 - 0x00C8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};


// Class GeometryCollectionEngine.GeometryCollection
// size:0x00B8 (0x0028 - 0x00E0)
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FGeometryCollectionSource>           GeometrySource;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinClusterLevelSetResolution;                             // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevelSetResolution;                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionObjectReductionPercentage;                       // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMassAsDensity;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumMassClamp;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionParticlesFraction;                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCollisionParticles;                                // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
	bool                                               EnableRemovePiecesOnFracture;                             // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       PersistentGuid;                                           // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateGuid;                                                // 0x00B8(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialIndex;                                // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET
};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// size:0x00A0 (0x0220 - 0x02C0)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                      // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   RayMarchMaterial;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceTolerance;                                         // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Isovalue;                                                 // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderVolumeBoundingBox;                                  // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x86];                                      // 0x023A(0x0086) MISSED OFFSET
};


// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// size:0x0088 (0x00B0 - 0x0138)
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulating;                                              // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectStateTypeEnum                               ObjectType;                                               // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	float                                              Density;                                                  // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMass;                                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              ImplicitShapeParticlesPerUnitArea;                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ImplicitShapeMinNumParticles;                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ImplicitShapeMaxNumParticles;                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLevelSetResolution;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CollisionGroup;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x010C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnChaosPhysicsCollision;                                  // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)//offset:0x13CEB30;
};


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// size:0x0088 (0x00B0 - 0x0138)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               Simulating;                                               // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectStateTypeEnum                               ObjectType;                                               // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              Mass;                                                     // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreshold;                                          // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnChaosPhysicsCollision;                                  // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                      // 0x0120(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)//offset:0x13CEB30;
	void ForceRecreatePhysicsState()//offset:0x3017FA0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
