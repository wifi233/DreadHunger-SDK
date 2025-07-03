                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Campfire_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Campfire.BP_Campfire_C.GetBurnTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EInventoryType>         ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<EInventoryType> ABP_Campfire_C::GetBurnTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire.BP_Campfire_C.GetBurnTypes");

	ABP_Campfire_C_GetBurnTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Campfire.BP_Campfire_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Campfire_C::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire.BP_Campfire_C.GetName");

	ABP_Campfire_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Campfire.BP_Campfire_C.GetBurnTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BurnTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Campfire_C::GetBurnTime(EInventoryType Type, float* BurnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire.BP_Campfire_C.GetBurnTime");

	ABP_Campfire_C_GetBurnTime_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BurnTime != nullptr)
		*BurnTime = params.BurnTime;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
