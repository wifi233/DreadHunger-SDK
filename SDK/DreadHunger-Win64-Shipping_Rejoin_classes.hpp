                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Rejoin_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Rejoin.RejoinCheck
// size:0x0150 (0x0028 - 0x0178)
class URejoinCheck : public UObject
{
public:
	ERejoinStatus                                      LastKnownStatus;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRejoinAfterCheck;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttemptingRejoin;                                        // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14D];                                     // 0x002B(0x014D) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
