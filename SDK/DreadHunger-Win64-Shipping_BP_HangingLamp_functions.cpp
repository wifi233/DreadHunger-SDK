                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_HangingLamp_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HangingLamp.BP_HangingLamp_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HangingLamp_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HangingLamp.BP_HangingLamp_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_HangingLamp_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HangingLamp.BP_HangingLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HangingLamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HangingLamp.BP_HangingLamp_C.ReceiveBeginPlay");

	ABP_HangingLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HangingLamp.BP_HangingLamp_C.ExecuteUbergraph_BP_HangingLamp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HangingLamp_C::ExecuteUbergraph_BP_HangingLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HangingLamp.BP_HangingLamp_C.ExecuteUbergraph_BP_HangingLamp");

	ABP_HangingLamp_C_ExecuteUbergraph_BP_HangingLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
