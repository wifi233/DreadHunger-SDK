                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_GunStorageBase_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GunStorageBase.BP_GunStorageBase_C.CanBeInteractedWith
struct ABP_GunStorageBase_C_CanBeInteractedWith_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
