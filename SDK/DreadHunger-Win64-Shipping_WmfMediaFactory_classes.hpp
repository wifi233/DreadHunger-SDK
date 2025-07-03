                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WmfMediaFactory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WmfMediaFactory.WmfMediaSettings
// size:0x0008 (0x0028 - 0x0030)
class UWmfMediaSettings : public UObject
{
public:
	bool                                               AllowNonStandardCodecs;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LowLatency;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               NativeAudioOut;                                           // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               HardwareAcceleratedVideoDecoding;                         // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
