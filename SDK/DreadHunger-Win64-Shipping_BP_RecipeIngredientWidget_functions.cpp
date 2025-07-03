                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_RecipeIngredientWidget_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RecipeIngredientWidget_C::UpdateText(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.UpdateText");

	UBP_RecipeIngredientWidget_C_UpdateText_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeCurrent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchIconSizse                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowQuantity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RecipeIngredientWidget_C::Init(EInventoryType Type, bool bIncludeCurrent, int Quantity, int Current, class UTexture2D* Icon, bool bMatchIconSizse, bool bShowQuantity, const struct FText& Title, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.Init");

	UBP_RecipeIngredientWidget_C_Init_Params params;
	params.Type = Type;
	params.bIncludeCurrent = bIncludeCurrent;
	params.Quantity = Quantity;
	params.Current = Current;
	params.Icon = Icon;
	params.bMatchIconSizse = bMatchIconSizse;
	params.bShowQuantity = bShowQuantity;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.BP_OnInit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// EInventoryType                 Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeCurrent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchIconSizes                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowQuantity                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RecipeIngredientWidget_C::BP_OnInit(EInventoryType Type, bool bIncludeCurrent, int Quantity, int Current, class UTexture2D* Icon, bool bMatchIconSizes, bool bShowQuantity, const struct FText& Title, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.BP_OnInit");

	UBP_RecipeIngredientWidget_C_BP_OnInit_Params params;
	params.Type = Type;
	params.bIncludeCurrent = bIncludeCurrent;
	params.Quantity = Quantity;
	params.Current = Current;
	params.Icon = Icon;
	params.bMatchIconSizes = bMatchIconSizes;
	params.bShowQuantity = bShowQuantity;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.ExecuteUbergraph_BP_RecipeIngredientWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RecipeIngredientWidget_C::ExecuteUbergraph_BP_RecipeIngredientWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C.ExecuteUbergraph_BP_RecipeIngredientWidget");

	UBP_RecipeIngredientWidget_C_ExecuteUbergraph_BP_RecipeIngredientWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
