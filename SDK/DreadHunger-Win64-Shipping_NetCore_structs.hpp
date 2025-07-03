                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetCore.NetAnalyticsDataConfig
// 0x000C
struct FNetAnalyticsDataConfig
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0008(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
