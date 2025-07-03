                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// 0x0010
struct FMagicLeapSharedWorldSharedData
{
	TArray<struct FGuid>                               PinIDs;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{
	TArray<struct FTransform>                          AlignmentTransforms;                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// 0x0010
struct FMagicLeapSharedWorldLocalData
{
	TArray<struct FMagicLeapSharedWorldPinData>        LocalPins;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// 0x0024
struct FMagicLeapSharedWorldPinData
{
	struct FGuid                                       PinId;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMagicLeapARPinState                        PinState;                                                 // 0x0010(0x0014) (BlueprintVisible)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
