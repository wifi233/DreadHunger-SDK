                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DreadHungerOnlineUtility.EDH_GetUserInfoResult
enum class EDH_GetUserInfoResult : uint8_t
{
	Success_Instant                = 0,
	Success_Delayed                = 1,
	Failed_NoOnline                = 2,
	EDH_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DreadHungerOnlineUtility.DreadHungerOnlineUtilityIdLink
// 0x0020
struct FDreadHungerOnlineUtilityIdLink
{

};

// ScriptStruct DreadHungerOnlineUtility.DreadHungerOnlineUtilityGetUserInfoJob
// 0x0030
struct FDreadHungerOnlineUtilityGetUserInfoJob
{

};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
