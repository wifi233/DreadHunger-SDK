                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Totem_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Totem.BP_Totem_C.OnCrafted
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADH_PlayerState*         CraftingPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Totem_C::OnCrafted(class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Totem.BP_Totem_C.OnCrafted");

	ABP_Totem_C_OnCrafted_Params params;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Totem.BP_Totem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Totem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Totem.BP_Totem_C.ReceiveBeginPlay");

	ABP_Totem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Totem.BP_Totem_C.SpawnedFragments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADH_DestructibleActor*   Destructible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Totem_C::SpawnedFragments(class ADH_DestructibleActor* Destructible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Totem.BP_Totem_C.SpawnedFragments");

	ABP_Totem_C_SpawnedFragments_Params params;
	params.Destructible = Destructible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Totem.BP_Totem_C.ExecuteUbergraph_BP_Totem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Totem_C::ExecuteUbergraph_BP_Totem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Totem.BP_Totem_C.ExecuteUbergraph_BP_Totem");

	ABP_Totem_C_ExecuteUbergraph_BP_Totem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
