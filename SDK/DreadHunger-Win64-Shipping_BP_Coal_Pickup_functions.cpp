                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Coal_Pickup_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Coal_Pickup.BP_Coal_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Coal_Pickup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Coal_Pickup.BP_Coal_Pickup_C.ReceiveBeginPlay");

	ABP_Coal_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Coal_Pickup.BP_Coal_Pickup_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Coal_Pickup_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Coal_Pickup.BP_Coal_Pickup_C.ReceiveDestroyed");

	ABP_Coal_Pickup_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Coal_Pickup.BP_Coal_Pickup_C.ExecuteUbergraph_BP_Coal_Pickup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Coal_Pickup_C::ExecuteUbergraph_BP_Coal_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Coal_Pickup.BP_Coal_Pickup_C.ExecuteUbergraph_BP_Coal_Pickup");

	ABP_Coal_Pickup_C_ExecuteUbergraph_BP_Coal_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
