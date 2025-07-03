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
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FBellHit.FBellHit
// 0x0028
struct FFBellHit
{
	unsigned char                                      FlashCount_2_B24B5DCC483F43688480E085778251C0;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UDamageType*                                 DamageType_5_E3AFBE00452B6A6D6A358D8CA9528DF4;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction_8_DD50151F419247071C01B3A693347341;             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class APawn*                                       DamageInstigator_14_22576C4A499EF4CE94508DA17076CE81;     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
