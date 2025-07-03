                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BPI_BurnTime_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_BurnTime.BPI_BurnTime_C.GetBurnTypes
struct UBPI_BurnTime_C_GetBurnTypes_Params
{
	TArray<EInventoryType>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPI_BurnTime.BPI_BurnTime_C.GetName
struct UBPI_BurnTime_C_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPI_BurnTime.BPI_BurnTime_C.GetBurnTime
struct UBPI_BurnTime_C_GetBurnTime_Params
{
	EInventoryType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BurnTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
