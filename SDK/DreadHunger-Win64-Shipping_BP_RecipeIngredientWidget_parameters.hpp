                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_RecipeIngredientWidget_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.UpdateText
struct UBP_RecipeIngredientWidget_C_UpdateText_Params
{
	int                                                InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.Init
struct UBP_RecipeIngredientWidget_C_Init_Params
{
	EInventoryType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCurrent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchIconSizse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowQuantity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.BP_OnInit
struct UBP_RecipeIngredientWidget_C_BP_OnInit_Params
{
	EInventoryType                                     Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCurrent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchIconSizes;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowQuantity;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.ExecuteUbergraph_BP_RecipeIngredientWidget
struct UBP_RecipeIngredientWidget_C_ExecuteUbergraph_BP_RecipeIngredientWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
