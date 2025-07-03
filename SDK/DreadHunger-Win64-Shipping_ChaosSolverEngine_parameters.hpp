                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ChaosSolverEngine_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
struct UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
{
	struct FChaosPhysicsCollisionInfo                  PhysicsCollision;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
struct AChaosSolverActor_SetSolverActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
struct AChaosSolverActor_SetAsCurrentWorldSolver_Params
{
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
