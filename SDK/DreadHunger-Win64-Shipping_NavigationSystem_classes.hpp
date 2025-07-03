                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_NavigationSystem_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NavigationSystem.NavRelevantComponent
// size:0x0030 (0x00B0 - 0x00E0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot;                                      // 0x00D4(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void SetNavigationRelevancy(bool bRelevant)//offset:0x2FEE430;
};


// Class NavigationSystem.NavModifierComponent
// size:0x0060 (0x00E0 - 0x0140)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UNavArea*                                    AreaClass;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight;                                      // 0x00F4(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x4B];                                      // 0x00F5(0x004B) MISSED OFFSET

	void SetAreaClass(class UNavArea* NewAreaClass)//offset:0x2FEE3A0;
};


// Class NavigationSystem.NavigationData
// size:0x0208 (0x0220 - 0x0428)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x0230(0x0078)
	unsigned char                                      bEnableDrawing;                                           // 0x02A8(0x0001) (Edit, Transient)
	unsigned char                                      bForceRebuildOnLoad;                                      // 0x02A8(0x0001) (Edit, Config)
	unsigned char                                      bAutoDestroyWhenNoNavigation;                             // 0x02A8(0x0001) (Edit, Config)
	unsigned char                                      bCanBeMainNavData;                                        // 0x02A8(0x0001) (Edit, Config)
	unsigned char                                      bCanSpawnOnRebuild;                                       // 0x02A8(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bRebuildAtRuntime;                                        // 0x02A8(0x0001) (Config, Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	ERuntimeGenerationType                             RuntimeGeneration;                                        // 0x02AC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x02B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x108];                                     // 0x02B8(0x0108) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x03C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x58];                                      // 0x03D0(0x0058) MISSED OFFSET
};


// Class NavigationSystem.AbstractNavData
// size:0x0000 (0x0428 - 0x0428)
class AAbstractNavData : public ANavigationData
{
public:
};


// Class NavigationSystem.CrowdManagerBase
// size:0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:
};


// Class NavigationSystem.NavArea
// size:0x0018 (0x0030 - 0x0048)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent1;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent2;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent3;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent4;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent5;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent6;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent7;                                          // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent8;                                          // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent9;                                          // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent10;                                         // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent11;                                         // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent12;                                         // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent13;                                         // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent14;                                         // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent15;                                         // 0x0041(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};


// Class NavigationSystem.NavArea_Default
// size:0x0000 (0x0048 - 0x0048)
class UNavArea_Default : public UNavArea
{
public:
};


// Class NavigationSystem.NavArea_LowHeight
// size:0x0000 (0x0048 - 0x0048)
class UNavArea_LowHeight : public UNavArea
{
public:
};


// Class NavigationSystem.NavArea_Null
// size:0x0000 (0x0048 - 0x0048)
class UNavArea_Null : public UNavArea
{
public:
};


// Class NavigationSystem.NavArea_Obstacle
// size:0x0000 (0x0048 - 0x0048)
class UNavArea_Obstacle : public UNavArea
{
public:
};


// Class NavigationSystem.NavAreaMeta
// size:0x0000 (0x0048 - 0x0048)
class UNavAreaMeta : public UNavArea
{
public:
};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// size:0x0080 (0x0048 - 0x00C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UNavArea*                                    Agent0Area;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent1Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent2Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent3Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent4Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent5Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent6Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent7Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent8Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent9Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent10Area;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent11Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent12Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent13Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent14Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent15Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class NavigationSystem.NavCollision
// size:0x0068 (0x0070 - 0x00D8)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UNavArea*                                    AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry;                                    // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      bCreateOnClient;                                          // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET
};


// Class NavigationSystem.NavigationGraph
// size:0x0000 (0x0428 - 0x0428)
class ANavigationGraph : public ANavigationData
{
public:
};


// Class NavigationSystem.NavigationGraphNode
// size:0x0000 (0x0220 - 0x0220)
class ANavigationGraphNode : public AActor
{
public:
};


// Class NavigationSystem.NavigationGraphNodeComponent
// size:0x0020 (0x0200 - 0x0220)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class NavigationSystem.NavigationInvokerComponent
// size:0x0008 (0x00B0 - 0x00B8)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class NavigationSystem.NavigationPath
// size:0x0060 (0x0028 - 0x0088)
class UNavigationPath : public UObject
{
public:
	struct UEMulticastInlineDelegate                   PathUpdatedNotifier;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	bool IsValid()//offset:0x2FEB450;
	bool IsStringPulled()//offset:0x2FEB420;
	bool IsPartial()//offset:0x2FEB3F0;
	float GetPathLength()//offset:0x2FEACB0;
	float GetPathCost()//offset:0x2FEAA50;
	class FString GetDebugString()//offset:0x2FEA940;
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation)//offset:0x2FEA4E0;
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)//offset:0x2FEA400;
};


// Class NavigationSystem.NavigationPathGenerator
// size:0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:
};


// Class NavigationSystem.NavigationQueryFilter
// size:0x0020 (0x0028 - 0x0048)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};


// Class NavigationSystem.NavigationSystemV1
// size:0x15B8 (0x0028 - 0x15E0)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       DefaultAgentName;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      bAutoCreateNavigationData;                                // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel;                            // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation;                               // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bShouldDiscardSubLevelNavData;                            // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bTickWhilePaused;                                         // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding;                                       // 0x0068(0x0001)
	unsigned char                                      bInitialBuildingLocked;                                   // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData;                  // 0x0069(0x0001) (Edit, Config)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers;          // 0x0069(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ENavDataGatheringModeConfig                        DataGatheringMode;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              DirtyAreaWarningSizeThreshold;                            // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FNavAgentSelector                           SupportedAgentsMask;                                      // 0x0088(0x0004) (Edit, Config)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x0090(0x0010) (ZeroConstructor, Transient)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x00A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnNavDataRegisteredEvent;                                 // 0x00C0(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct UEMulticastInlineDelegate                   OnNavigationGenerationFinishedDelegate;                   // 0x00D0(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xDC];                                      // 0x00E0(0x00DC) MISSED OFFSET
	EFNavigationSystemRunMode                          OperationMode;                                            // 0x01BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x13FF];                                    // 0x01BD(0x13FF) MISSED OFFSET
	float                                              DirtyAreasUpdateFreq;                                     // 0x15BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x15C0(0x0020) MISSED OFFSET

	void UnregisterNavigationInvoker(class AActor* Invoker)//offset:0x2FEC440;
	static void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)//offset:0x2FEC380;
	static void SimpleMoveToActor(class AController* Controller, class AActor* Goal)//offset:0x2FEC2C0;
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)//offset:0x2FEC230;
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode)//offset:0x2FEC1B0;
	void ResetMaxSimultaneousTileGenerationJobsCount()//offset:0x2FEC190;
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)//offset:0x2FEC080;
	static struct FVector ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, const struct FVector& QueryExtent)//offset:0x2FEBE90;
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)//offset:0x2FEBE00;
	static bool NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UNavigationQueryFilter* FilterClass, class AController* Querier)//offset:0x2FEBBD0;
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UNavArea* OldArea, class UNavArea* NewArea)//offset:0x2FEBAC0;
	static bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, const struct FVector& QueryExtent)//offset:0x2FEB8C0;
	static bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEB6A0;
	static bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEB480;
	static bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEB480;
	static bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)//offset:0x2FEB360;
	static bool IsNavigationBeingBuilt(class UObject* WorldContextObject)//offset:0x2FEB2D0;
	static struct FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEB0F0;
	static struct FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEAF10;
	static TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEACE0;
	static TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)//offset:0x2FEAA80;
	static class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject)//offset:0x2FEA9C0;
	static class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass)//offset:0x2FEA770;
	static class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass)//offset:0x2FEA560;
};


// Class NavigationSystem.NavigationSystemModuleConfig
// size:0x0008 (0x0050 - 0x0058)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic;                                          // 0x0050(0x0001) (Edit)
	unsigned char                                      bCreateOnClient;                                          // 0x0050(0x0001) (Edit)
	unsigned char                                      bAutoSpawnMissingNavData;                                 // 0x0050(0x0001) (Edit)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel;                            // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};


// Class NavigationSystem.NavigationTestingActor
// size:0x00F0 (0x0220 - 0x0310)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker;                                  // 0x0240(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0248(0x0030) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x0278(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x0290(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid;                                  // 0x029C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSearchStart;                                             // 0x029C(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	float                                              CostLimitFactor;                                          // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumCostLimit;                                         // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBacktracking;                                            // 0x02A8(0x0001) (Edit)
	unsigned char                                      bUseHierarchicalPathfinding;                              // 0x02A8(0x0001) (Edit)
	unsigned char                                      bGatherDetailedInfo;                                      // 0x02A8(0x0001) (Edit)
	unsigned char                                      bDrawDistanceToWall;                                      // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShowNodePool;                                            // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShowBestPath;                                            // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShowDiffWithPreviousStep;                                // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame;                                   // 0x02A8(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x02AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPathExist;                                               // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathIsPartial;                                           // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathSearchOutOfNodes;                                    // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class ANavigationTestingActor*                     OtherActor;                                               // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavigationQueryFilter*                      FilterClass;                                              // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x30];                                      // 0x02E0(0x0030) MISSED OFFSET
};


// Class NavigationSystem.NavLinkComponent
// size:0x0020 (0x0450 - 0x0470)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0450(0x0008) MISSED OFFSET
	TArray<struct FNavigationLink>                     Links;                                                    // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
};


// Class NavigationSystem.NavLinkCustomComponent
// size:0x00B0 (0x00E0 - 0x0190)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UNavArea*                                    EnabledAreaClass;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    DisabledAreaClass;                                        // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0100(0x0004) (Edit)
	struct FVector                                     LinkRelativeStart;                                        // 0x0104(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x0110(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled;                                             // 0x0120(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled;                                       // 0x0120(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled;                                      // 0x0120(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle;                                       // 0x0120(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x0124(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x0130(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UNavArea*                                    ObstacleAreaClass;                                        // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3F];                                      // 0x0151(0x003F) MISSED OFFSET
};


// Class NavigationSystem.NavLinkCustomInterface
// size:0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:
};


// Class NavigationSystem.NavLinkHostInterface
// size:0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:
};


// Class NavigationSystem.NavLinkRenderingComponent
// size:0x0000 (0x0450 - 0x0450)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
};


// Class NavigationSystem.NavLinkTrivial
// size:0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:
};


// Class NavigationSystem.NavMeshBoundsVolume
// size:0x0008 (0x0258 - 0x0260)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0258(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
};


// Class NavigationSystem.NavMeshRenderingComponent
// size:0x0010 (0x0450 - 0x0460)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
};


// Class NavigationSystem.NavModifierVolume
// size:0x0018 (0x0258 - 0x0270)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class UNavArea*                                    AreaClass;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                   // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET

	void SetAreaClass(class UNavArea* NewAreaClass)//offset:0x2FEE310;
};


// Class NavigationSystem.NavNodeInterface
// size:0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:
};


// Class NavigationSystem.NavSystemConfigOverride
// size:0x0010 (0x0220 - 0x0230)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENavSystemOverridePolicy                           OverridePolicy;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoadOnClient;                                            // 0x0229(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x022A(0x0006) MISSED OFFSET
};


// Class NavigationSystem.NavTestRenderingComponent
// size:0x0000 (0x0450 - 0x0450)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:
};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// size:0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:
};


// Class NavigationSystem.RecastNavMesh
// size:0x00B0 (0x0428 - 0x04D8)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges;                                       // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawPolyEdges;                                           // 0x0428(0x0001) (Edit, Config)
	unsigned char                                      bDrawFilledPolys;                                         // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawNavMeshEdges;                                        // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawTileBounds;                                          // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawPathCollidingGeometry;                               // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawTileLabels;                                          // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawPolygonLabels;                                       // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawDefaultPolygonCost;                                  // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawLabelsOnPathNodes;                                   // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawNavLinks;                                            // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawFailedNavLinks;                                      // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawClusters;                                            // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawOctree;                                              // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawOctreeDetails;                                       // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawMarkedForbiddenPolys;                                // 0x0429(0x0001) (Edit)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt;                           // 0x042A(0x0001) (Config)
	unsigned char                                      UnknownData00[0x1];                                       // 0x042B(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFixedTilePoolSize;                                       // 0x0430(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x043C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x0440(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0444(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0448(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x044C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x0450(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0454(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x0458(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x045C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0460(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0464(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x0468(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x046C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x0470(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0474(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0480(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x0484(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x048C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x048D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x048E(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0490(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0494(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost;                               // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bPerformVoxelFiltering;                                   // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bMarkLowHeightAreas;                                      // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bUseExtraTopCellWhenMarkingAreas;                         // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanSequences;                                  // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanFromTileCache;                              // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bDoFullyAsyncNavDataGathering;                            // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bUseBetterOffsetsFromCorners;                             // 0x0498(0x0001) (Config)
	unsigned char                                      bStoreEmptyTileLayers;                                    // 0x0499(0x0001) (Config)
	unsigned char                                      bUseVirtualFilters;                                       // 0x0499(0x0001) (Config)
	unsigned char                                      bAllowNavLinkAsPathEnd;                                   // 0x0499(0x0001) (Config)
	unsigned char                                      bUseVoxelCache;                                           // 0x0499(0x0001) (Config)
	unsigned char                                      UnknownData03[0x2];                                       // 0x049A(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x049C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x04A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x04A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x04A8(0x0030) MISSED OFFSET

	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UNavArea* OldArea, class UNavArea* NewArea, bool ReplaceLinks)//offset:0x2FEE170;
};


// Class NavigationSystem.RecastNavMeshDataChunk
// size:0x0010 (0x0030 - 0x0040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
