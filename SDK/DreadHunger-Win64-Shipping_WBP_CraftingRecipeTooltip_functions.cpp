                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_CraftingRecipeTooltip_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.BP_Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CraftingRecipeTooltip_C::BP_Init(class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.BP_Init");

	UWBP_CraftingRecipeTooltip_C_BP_Init_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.InitRequirementList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EInventoryType, int>      RequiredIngredients            (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<ECraftingComponentFamily, int> RequiredFamilies               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CraftingRecipeTooltip_C::InitRequirementList(TMap<EInventoryType, int> RequiredIngredients, TMap<ECraftingComponentFamily, int> RequiredFamilies)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.InitRequirementList");

	UWBP_CraftingRecipeTooltip_C_InitRequirementList_Params params;
	params.RequiredIngredients = RequiredIngredients;
	params.RequiredFamilies = RequiredFamilies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CraftingRecipeTooltip_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.PreConstruct");

	UWBP_CraftingRecipeTooltip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.BP_OnInit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_CraftingRecipe*      InCraftingRecipe               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CraftingRecipeTooltip_C::BP_OnInit(class UDH_CraftingRecipe* InCraftingRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.BP_OnInit");

	UWBP_CraftingRecipeTooltip_C_BP_OnInit_Params params;
	params.InCraftingRecipe = InCraftingRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.ExecuteUbergraph_WBP_CraftingRecipeTooltip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CraftingRecipeTooltip_C::ExecuteUbergraph_WBP_CraftingRecipeTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C.ExecuteUbergraph_WBP_CraftingRecipeTooltip");

	UWBP_CraftingRecipeTooltip_C_ExecuteUbergraph_WBP_CraftingRecipeTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
