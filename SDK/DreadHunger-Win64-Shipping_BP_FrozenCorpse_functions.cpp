                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_FrozenCorpse_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FrozenCorpse.BP_FrozenCorpse_C.OnSearched
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrozenCorpse_C::OnSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenCorpse.BP_FrozenCorpse_C.OnSearched");

	ABP_FrozenCorpse_C_OnSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenCorpse.BP_FrozenCorpse_C.UpdateCorpseMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrozenCorpse_C::UpdateCorpseMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenCorpse.BP_FrozenCorpse_C.UpdateCorpseMaterial");

	ABP_FrozenCorpse_C_UpdateCorpseMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenCorpse.BP_FrozenCorpse_C.OnRep_CorpseHarvested
// (BlueprintCallable, BlueprintEvent)

void ABP_FrozenCorpse_C::OnRep_CorpseHarvested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenCorpse.BP_FrozenCorpse_C.OnRep_CorpseHarvested");

	ABP_FrozenCorpse_C_OnRep_CorpseHarvested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenCorpse.BP_FrozenCorpse_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrozenCorpse_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenCorpse.BP_FrozenCorpse_C.ReceiveTick");

	ABP_FrozenCorpse_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenCorpse.BP_FrozenCorpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrozenCorpse_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenCorpse.BP_FrozenCorpse_C.ReceiveBeginPlay");

	ABP_FrozenCorpse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrozenCorpse.BP_FrozenCorpse_C.ExecuteUbergraph_BP_FrozenCorpse
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrozenCorpse_C::ExecuteUbergraph_BP_FrozenCorpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenCorpse.BP_FrozenCorpse_C.ExecuteUbergraph_BP_FrozenCorpse");

	ABP_FrozenCorpse_C_ExecuteUbergraph_BP_FrozenCorpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
