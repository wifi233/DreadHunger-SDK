                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Antidote_Inventory_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Antidote_Inventory.BP_Antidote_Inventory_C.CanBeAppliedTo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADH_Inventory**          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventorySlotContents* TargetSlot                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Antidote_Inventory_C::CanBeAppliedTo(class ADH_Inventory** Target, struct FInventorySlotContents* TargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Antidote_Inventory.BP_Antidote_Inventory_C.CanBeAppliedTo");

	ABP_Antidote_Inventory_C_CanBeAppliedTo_Params params;
	params.Target = Target;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
