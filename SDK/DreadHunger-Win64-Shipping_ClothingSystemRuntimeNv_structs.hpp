                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

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

// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethodNv_MAX      = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// 0x0010
struct FClothConstraintSetupNv
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CompressionLimit;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
