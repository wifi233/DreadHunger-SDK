                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_CrowsNestRigging_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.GetClimbableMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_CrowsNestRigging_C::GetClimbableMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.GetClimbableMesh");

	ABP_CrowsNestRigging_C_GetClimbableMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CrowsNestRigging_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.UserConstructionScript");

	ABP_CrowsNestRigging_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CrowsNestRigging_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.ReceiveBeginPlay");

	ABP_CrowsNestRigging_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.ExecuteUbergraph_BP_CrowsNestRigging
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CrowsNestRigging_C::ExecuteUbergraph_BP_CrowsNestRigging(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrowsNestRigging.BP_CrowsNestRigging_C.ExecuteUbergraph_BP_CrowsNestRigging");

	ABP_CrowsNestRigging_C_ExecuteUbergraph_BP_CrowsNestRigging_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
