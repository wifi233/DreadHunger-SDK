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
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MagicLeapARPin.EMagicLeapARPinType
enum class EMagicLeapARPinType : uint8_t
{
	SingleUserSingleSession        = 0,
	SingleUserMultiSession         = 1,
	MultiUserMultiSession          = 2,
	EMagicLeapARPinType_MAX        = 3
};


// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
	OnlyOnDataRestoration          = 0,
	Always                         = 1,
	Never                          = 2,
	EMagicLeapAutoPinType_MAX      = 3
};


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
	None                           = 0,
	LowMapQuality                  = 1,
	UnableToLocalize               = 2,
	Unavailable                    = 3,
	PrivilegeDenied                = 4,
	InvalidParam                   = 5,
	UnspecifiedFailure             = 6,
	PrivilegeRequestPending        = 7,
	StartupPending                 = 8,
	SharedWorldNotEnabled          = 9,
	NotImplemented                 = 10,
	PinNotFound                    = 11,
	EMagicLeapPassableWorldError_MAX = 12
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// 0x0014
struct FMagicLeapARPinState
{
	float                                              Confidence;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ValidRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationError;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TranslationError;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMagicLeapARPinType                                PinType;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
// 0x0068
struct FMagicLeapARPinQuery
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: 
	int                                                MaxResults;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPoint;                                              // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSorted;                                                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
// 0x0050
struct FMagicLeapARPinObjectIdList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: 
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
