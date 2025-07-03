                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ChaosSolverEngine_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// size:0x0008 (0x00B0 - 0x00B8)
class UChaosDebugDrawComponent : public UActorComponent
{
public:
};


// Class ChaosSolverEngine.ChaosEventListenerComponent
// size:0x0008 (0x00B0 - 0x00B8)
class UChaosEventListenerComponent : public UActorComponent
{
public:
};


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// size:0x01B8 (0x00B8 - 0x0270)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00B8(0x0110) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                              // 0x01C8(0x0050)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                  // 0x0218(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
};


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// size:0x0000 (0x0028 - 0x0028)
class UChaosNotifyHandlerInterface : public UInterface
{
public:
};


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)//offset:0x2FF2040;
};


// Class ChaosSolverEngine.ChaosSolver
// size:0x0000 (0x0028 - 0x0028)
class UChaosSolver : public UObject
{
public:
};


// Class ChaosSolverEngine.ChaosSolverActor
// size:0x00F8 (0x0220 - 0x0318)
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration                   Properties;                                               // 0x0220(0x0068) (Edit)
	float                                              TimeStepMultiplier;                                       // 0x0288(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x028C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0290(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x0294(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x0298(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                               // 0x029C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               DoGenerateCollisionData;                                  // 0x029D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x029E(0x0002) MISSED OFFSET
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x02A0(0x0010) (Deprecated)
	bool                                               DoGenerateBreakingData;                                   // 0x02B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x02B4(0x0010) (Deprecated)
	bool                                               DoGenerateTrailingData;                                   // 0x02C4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x02C8(0x0010) (Deprecated)
	float                                              MassScale;                                                // 0x02D8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateContactGraph;                                    // 0x02DC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHasFloor;                                                // 0x02DD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02DE(0x0002) MISSED OFFSET
	float                                              FloorHeight;                                              // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                 // 0x02E4(0x0003) (Edit)
	unsigned char                                      UnknownData04[0x1];                                       // 0x02E7(0x0001) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x02F0(0x0018) MISSED OFFSET
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                         // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	void SetSolverActive(bool bActive)//offset:0x2FF2160;
	void SetAsCurrentWorldSolver()//offset:0x2FF2140;
};


// Class ChaosSolverEngine.ChaosSolverSettings
// size:0x0020 (0x0038 - 0x0058)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                             // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
