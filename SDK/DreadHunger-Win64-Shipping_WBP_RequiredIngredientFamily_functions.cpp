                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_RequiredIngredientFamily_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RequiredIngredientFamily.WBP_RequiredIngredientFamily_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECraftingComponentFamily       Family                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumRequired                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingData*        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RequiredIngredientFamily_C::Init(ECraftingComponentFamily Family, int NumRequired, class UDH_CraftingData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RequiredIngredientFamily.WBP_RequiredIngredientFamily_C.Init");

	UWBP_RequiredIngredientFamily_C_Init_Params params;
	params.Family = Family;
	params.NumRequired = NumRequired;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
