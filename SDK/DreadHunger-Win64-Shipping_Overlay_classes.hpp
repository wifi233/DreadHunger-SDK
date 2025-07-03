                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Overlay_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Overlay.Overlays
// size:0x0000 (0x0028 - 0x0028)
class UOverlays : public UObject
{
public:
};


// Class Overlay.BasicOverlays
// size:0x0010 (0x0028 - 0x0038)
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
};


// Class Overlay.LocalizedOverlays
// size:0x0058 (0x0028 - 0x0080)
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class FString, class UBasicOverlays*>         LocaleToOverlaysMap;                                      // 0x0030(0x0050) (Edit)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
