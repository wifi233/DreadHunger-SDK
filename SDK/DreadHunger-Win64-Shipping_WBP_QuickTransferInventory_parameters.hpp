                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_QuickTransferInventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_QuickTransferInventory.WBP_QuickTransferInventory_C.BP_OnSetIcon
struct UWBP_QuickTransferInventory_C_BP_OnSetIcon_Params
{
	class UTexture2D*                                  IconTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_QuickTransferInventory.WBP_QuickTransferInventory_C.ExecuteUbergraph_WBP_QuickTransferInventory
struct UWBP_QuickTransferInventory_C_ExecuteUbergraph_WBP_QuickTransferInventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
