                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Warship_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Warship.BP_Warship_C.GetPressureGauge
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ABP_Warship_C::GetPressureGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.GetPressureGauge");

	ABP_Warship_C_GetPressureGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Warship.BP_Warship_C.SpawnBrigCells
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> Brig_Scene_Components          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Warship_C::SpawnBrigCells(TArray<class USceneComponent*>* Brig_Scene_Components)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.SpawnBrigCells");

	ABP_Warship_C_SpawnBrigCells_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brig_Scene_Components != nullptr)
		*Brig_Scene_Components = params.Brig_Scene_Components;
}


// Function BP_Warship.BP_Warship_C.BP_GetSkipperLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Warship_C::BP_GetSkipperLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.BP_GetSkipperLocation");

	ABP_Warship_C_BP_GetSkipperLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Warship.BP_Warship_C.CacheLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Warship_C::CacheLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.CacheLights");

	ABP_Warship_C_CacheLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship.BP_Warship_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warship_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.ReceiveTick");

	ABP_Warship_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship.BP_Warship_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Warship_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.ReceiveBeginPlay");

	ABP_Warship_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship.BP_Warship_C.ExecuteUbergraph_BP_Warship
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warship_C::ExecuteUbergraph_BP_Warship(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship.BP_Warship_C.ExecuteUbergraph_BP_Warship");

	ABP_Warship_C_ExecuteUbergraph_BP_Warship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
