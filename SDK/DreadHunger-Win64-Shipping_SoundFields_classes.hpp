                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_SoundFields_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SoundFields.AmbisonicsEncodingSettings
// size:0x0008 (0x0028 - 0x0030)
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{
public:
	int                                                AmbisonicsOrder;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
