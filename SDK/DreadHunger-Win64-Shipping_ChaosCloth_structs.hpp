                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_ClothingSystemRuntimeCommon_classes.hpp"
#include "DreadHunger-Win64-Shipping_ClothingSystemRuntimeInterface_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ChaosCloth.EChaosClothTetherMode
enum class EChaosClothTetherMode : uint8_t
{
	FastTetherFastLength           = 0,
	AccurateTetherFastLength       = 1,
	AccurateTetherAccurateLength   = 2,
	MaxChaosClothTetherMode        = 3,
	EChaosClothTetherMode_MAX      = 4
};


// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveMultiplier            = 4,
	EChaosWeightMapTarget_MAX      = 5
};



#ifdef _MSC_VER
	#pragma pack(pop)
#endif
