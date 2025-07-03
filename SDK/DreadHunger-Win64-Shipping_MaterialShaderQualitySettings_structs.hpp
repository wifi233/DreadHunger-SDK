                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_2x2                        = 2,
	PCF_3x3                        = 3,
	EMobileShadowQuality_MAX       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0009
struct FMaterialQualityOverrides
{
	bool                                               bDiscardQualityDuringCook;                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableOverride;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisableLMDirectionality;                            // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceLQReflections;                                      // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisablePreintegratedGF;                             // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableMaterialNormalCalculation;                        // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileShadowQuality                               MobileShadowQuality;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
