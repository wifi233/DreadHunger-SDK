                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHungerLoadingScreen_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DreadHungerLoadingScreen.DreadHungerLoadingScreen
// size:0x0018 (0x0108 - 0x0120)
class UDreadHungerLoadingScreen : public UWidget
{
public:
	float                                              ThrobberRenderOpacity;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x010C(0x0014) MISSED OFFSET

	void SetThrobberRenderOpacity(float InRenderOpacity)//offset:0x315CA40;
};


// Class DreadHungerLoadingScreen.DreadHungerLoadingScreenSettings
// size:0x0110 (0x0028 - 0x0138)
class UDreadHungerLoadingScreenSettings : public UObject
{
public:
	struct FSlateBrush                                 Background;                                               // 0x0028(0x0088) (Edit, Config, DisableEditOnInstance)
	struct FSlateBrush                                 Throbber;                                                 // 0x00B0(0x0088) (Edit, Config, DisableEditOnInstance)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
