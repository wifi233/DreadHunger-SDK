                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AnimationCore_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationCore.AnimationDataSourceRegistry
// size:0x0050 (0x0028 - 0x0078)
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<struct FName, TWeakObjectPtr<class UObject>>  DataSources;                                              // 0x0028(0x0050) (Transient)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
