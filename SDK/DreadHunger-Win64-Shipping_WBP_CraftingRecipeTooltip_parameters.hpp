                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_CraftingRecipeTooltip_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.BP_Init
struct UWBP_CraftingRecipeTooltip_C_BP_Init_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.InitRequirementList
struct UWBP_CraftingRecipeTooltip_C_InitRequirementList_Params
{
	TMap<EInventoryType, int>                          RequiredIngredients;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<ECraftingComponentFamily, int>                RequiredFamilies;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.PreConstruct
struct UWBP_CraftingRecipeTooltip_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.BP_OnInit
struct UWBP_CraftingRecipeTooltip_C_BP_OnInit_Params
{
	class UDH_CraftingRecipe*                          InCraftingRecipe;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.ExecuteUbergraph_WBP_CraftingRecipeTooltip
struct UWBP_CraftingRecipeTooltip_C_ExecuteUbergraph_WBP_CraftingRecipeTooltip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
