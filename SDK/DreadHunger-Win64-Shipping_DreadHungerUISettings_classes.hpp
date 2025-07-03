                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHungerUISettings_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DreadHungerUISettings.DreadHungerUISettings
// size:0x00A0 (0x0028 - 0x00C8)
class UDreadHungerUISettings : public UObject
{
public:
	TMap<struct FName, struct FLinearColor>            Colors;                                                   // 0x0028(0x0050) (Edit, Config, DisableEditOnInstance)
	TMap<struct FName, struct FName>                   ColorRedirects;                                           // 0x0078(0x0050) (Edit, Config, DisableEditOnInstance)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
