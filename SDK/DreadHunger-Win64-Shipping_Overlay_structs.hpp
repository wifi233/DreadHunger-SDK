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

// ScriptStruct Overlay.OverlayItem
// 0x0028
struct FOverlayItem
{
	struct FTimespan                                   StartTime;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   EndTime;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Text;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
