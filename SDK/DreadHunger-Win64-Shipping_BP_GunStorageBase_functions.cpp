                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_GunStorageBase_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GunStorageBase.BP_GunStorageBase_C.CanBeInteractedWith
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_InteractPermissions ABP_GunStorageBase_C::CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GunStorageBase.BP_GunStorageBase_C.CanBeInteractedWith");

	ABP_GunStorageBase_C_CanBeInteractedWith_Params params;
	params.InteractInstigator = InteractInstigator;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
