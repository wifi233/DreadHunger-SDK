                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_GunLocker_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GunLocker.BP_GunLocker_C.OnStorageClosed
struct ABP_GunLocker_C_OnStorageClosed_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GunLocker.BP_GunLocker_C.ReceiveBeginPlay
struct ABP_GunLocker_C_ReceiveBeginPlay_Params
{
};

// Function BP_GunLocker.BP_GunLocker_C.OnStorageOpened
struct ABP_GunLocker_C_OnStorageOpened_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GunLocker.BP_GunLocker_C.ExecuteUbergraph_BP_GunLocker
struct ABP_GunLocker_C_ExecuteUbergraph_BP_GunLocker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
