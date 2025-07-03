                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_HumanCharacter_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HumanCharacter.BP_HumanCharacter_C.GetLinearColorDelta
struct ABP_HumanCharacter_C_GetLinearColorDelta_Params
{
	float                                              Distance;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryLinearColorDelta;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryLinearColorData;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.GetGroundCraftingRecipes
struct ABP_HumanCharacter_C_GetGroundCraftingRecipes_Params
{
	TArray<class UDH_CraftingRecipe*>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.IKFootTrace
struct ABP_HumanCharacter_C_IKFootTrace_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Out_Hit_Location;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FootTraceOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Out_Hit_Normal;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.PrintInventoryDebug
struct ABP_HumanCharacter_C_PrintInventoryDebug_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.ReceiveBeginPlay
struct ABP_HumanCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.ReceiveTick
struct ABP_HumanCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.OnDied
struct ABP_HumanCharacter_C_OnDied_Params
{
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.FOVChanged
struct ABP_HumanCharacter_C_FOVChanged_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HumanCharacter.BP_HumanCharacter_C.ExecuteUbergraph_BP_HumanCharacter
struct ABP_HumanCharacter_C_ExecuteUbergraph_BP_HumanCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
