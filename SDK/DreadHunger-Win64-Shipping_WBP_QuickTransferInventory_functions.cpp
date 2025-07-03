                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_QuickTransferInventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuickTransferInventory.WBP_QuickTransferInventory_C.BP_OnSetIcon
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UTexture2D*              IconTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            IconColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_QuickTransferInventory_C::BP_OnSetIcon(class UTexture2D* IconTexture, const struct FLinearColor& IconColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickTransferInventory.WBP_QuickTransferInventory_C.BP_OnSetIcon");

	UWBP_QuickTransferInventory_C_BP_OnSetIcon_Params params;
	params.IconTexture = IconTexture;
	params.IconColor = IconColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickTransferInventory.WBP_QuickTransferInventory_C.ExecuteUbergraph_WBP_QuickTransferInventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickTransferInventory_C::ExecuteUbergraph_WBP_QuickTransferInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickTransferInventory.WBP_QuickTransferInventory_C.ExecuteUbergraph_WBP_QuickTransferInventory");

	UWBP_QuickTransferInventory_C_ExecuteUbergraph_WBP_QuickTransferInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
