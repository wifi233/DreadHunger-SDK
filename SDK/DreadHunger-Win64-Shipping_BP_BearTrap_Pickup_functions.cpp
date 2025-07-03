                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BearTrap_Pickup_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_Pickup_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveActorBeginOverlap");

	ABP_BearTrap_Pickup_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BearTrap_Pickup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveBeginPlay");

	ABP_BearTrap_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.BndEvt__PhysicsComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BearTrap_Pickup_C::BndEvt__PhysicsComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.BndEvt__PhysicsComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	ABP_BearTrap_Pickup_C_BndEvt__PhysicsComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_Pickup_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ReceiveAnyDamage");

	ABP_BearTrap_Pickup_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ExecuteUbergraph_BP_BearTrap_Pickup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BearTrap_Pickup_C::ExecuteUbergraph_BP_BearTrap_Pickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BearTrap_Pickup.BP_BearTrap_Pickup_C.ExecuteUbergraph_BP_BearTrap_Pickup");

	ABP_BearTrap_Pickup_C_ExecuteUbergraph_BP_BearTrap_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
