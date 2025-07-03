                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Rigging_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rigging.BP_Rigging_C.GetClimbableMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_Rigging_C::GetClimbableMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rigging.BP_Rigging_C.GetClimbableMesh");

	ABP_Rigging_C_GetClimbableMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Rigging.BP_Rigging_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rigging_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rigging.BP_Rigging_C.UserConstructionScript");

	ABP_Rigging_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rigging.BP_Rigging_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Rigging_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rigging.BP_Rigging_C.ReceiveBeginPlay");

	ABP_Rigging_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rigging.BP_Rigging_C.ExecuteUbergraph_BP_Rigging
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Rigging_C::ExecuteUbergraph_BP_Rigging(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rigging.BP_Rigging_C.ExecuteUbergraph_BP_Rigging");

	ABP_Rigging_C_ExecuteUbergraph_BP_Rigging_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
