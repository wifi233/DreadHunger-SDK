                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_DeveloperSettings_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit            = 0,
	Chaos_DelaunayTriangulation    = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None                     = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX                      = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// 0x0070
struct FChaosPhysicsCollisionInfo
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedImpulse;                                       // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherVelocity;                                            // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherAngularVelocity;                                     // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OtherMass;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// 0x0030
struct FChaosBreakEvent
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// 0x0058
struct FChaosHandlerSet
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: 
};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// 0x0040
struct FBreakEventCallbackWrapper
{

};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// 0x0003
struct FChaosDebugSubstepControl
{
	bool                                               bPause;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSubstep;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStep;                                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
