                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop                     = 0,
	StartAtEnd                     = 1,
	ETaskResourceOverlapPolicy_MAX = 2
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	EGameplayTaskState_MAX         = 5
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	EGameplayTaskRunResult_MAX     = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{

};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
