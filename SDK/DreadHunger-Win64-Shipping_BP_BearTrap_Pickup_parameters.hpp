                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BearTrap_Pickup_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveActorBeginOverlap
struct ABP_BearTrap_Pickup_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveBeginPlay
struct ABP_BearTrap_Pickup_C_ReceiveBeginPlay_Params
{
};

// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.BndEvt__PhysicsComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
struct ABP_BearTrap_Pickup_C_BndEvt__PhysicsComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveAnyDamage
struct ABP_BearTrap_Pickup_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ExecuteUbergraph_BP_BearTrap_Pickup
struct ABP_BearTrap_Pickup_C_ExecuteUbergraph_BP_BearTrap_Pickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
