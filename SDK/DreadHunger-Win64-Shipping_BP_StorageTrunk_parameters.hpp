                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_StorageTrunk_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetLinearColorDelta
struct ABP_StorageTrunk_C_GetLinearColorDelta_Params
{
	float                                              Distance;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryLinearColorDelta;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryLinearColorData;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetColorMaskComponents
struct ABP_StorageTrunk_C_GetColorMaskComponents_Params
{
	TArray<class UDH_ColorMaskComponent*>              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetColorMaskComponent
struct ABP_StorageTrunk_C_GetColorMaskComponent_Params
{
	class UActorComponent*                             TargetActorComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractFailedMessage
struct ABP_StorageTrunk_C_GetInteractFailedMessage_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetFriendlyName
struct ABP_StorageTrunk_C_GetFriendlyName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetKeybindInteractText
struct ABP_StorageTrunk_C_GetKeybindInteractText_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDH_KeybindInteractionMessage               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.CanBeInteractedWithThroughWalls
struct ABP_StorageTrunk_C_CanBeInteractedWithThroughWalls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.OnInteract
struct ABP_StorageTrunk_C_OnInteract_Params
{
	class AController*                                 InteractInstigator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.UsePreciseInteractions
struct ABP_StorageTrunk_C_UsePreciseInteractions_Params
{
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractPriority
struct ABP_StorageTrunk_C_GetInteractPriority_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.GetInteractTime
struct ABP_StorageTrunk_C_GetInteractTime_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.CanBeInteractedWith
struct ABP_StorageTrunk_C_CanBeInteractedWith_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.OnSearched
struct ABP_StorageTrunk_C_OnSearched_Params
{
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.UserConstructionScript
struct ABP_StorageTrunk_C_UserConstructionScript_Params
{
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.OnStorageClosed
struct ABP_StorageTrunk_C_OnStorageClosed_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.OnStorageOpened
struct ABP_StorageTrunk_C_OnStorageOpened_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.ReceiveBeginPlay
struct ABP_StorageTrunk_C_ReceiveBeginPlay_Params
{
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature
struct ABP_StorageTrunk_C_BndEvt__SearchComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StorageTrunk.BP_StorageTrunk_C.ExecuteUbergraph_BP_StorageTrunk
struct ABP_StorageTrunk_C_ExecuteUbergraph_BP_StorageTrunk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
