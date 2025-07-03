                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_Pickup_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.CanBeInteractedWith
struct ABP_Powderkeg_Pickup_C_CanBeInteractedWith_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.GetKeybindInteractText
struct ABP_Powderkeg_Pickup_C_GetKeybindInteractText_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDH_KeybindInteractionMessage               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.Defuse
struct ABP_Powderkeg_Pickup_C_Defuse_Params
{
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.GetInteractTime
struct ABP_Powderkeg_Pickup_C_GetInteractTime_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.OnInteract
struct ABP_Powderkeg_Pickup_C_OnInteract_Params
{
	class AController*                                 InteractInstigator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.SetFuseEffectsActive
struct ABP_Powderkeg_Pickup_C_SetFuseEffectsActive_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.OnRep_bFuseActive
struct ABP_Powderkeg_Pickup_C_OnRep_bFuseActive_Params
{
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.LightFuse
struct ABP_Powderkeg_Pickup_C_LightFuse_Params
{
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature
struct ABP_Powderkeg_Pickup_C_BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature
struct ABP_Powderkeg_Pickup_C_BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveDestroyed
struct ABP_Powderkeg_Pickup_C_ReceiveDestroyed_Params
{
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.BP_OnRep_AttachTarget
struct ABP_Powderkeg_Pickup_C_BP_OnRep_AttachTarget_Params
{
	class AActor*                                      InAttachTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveTick
struct ABP_Powderkeg_Pickup_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ReceiveBeginPlay
struct ABP_Powderkeg_Pickup_C_ReceiveBeginPlay_Params
{
};

// Function BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C.ExecuteUbergraph_BP_Powderkeg_Pickup
struct ABP_Powderkeg_Pickup_C_ExecuteUbergraph_BP_Powderkeg_Pickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
