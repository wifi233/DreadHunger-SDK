                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ActorLayerUtilities_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
struct ULayersBlueprintLibrary_RemoveActorFromLayer_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActorLayer                                 Layer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
struct ULayersBlueprintLibrary_GetActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActorLayer                                 ActorLayer;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
struct ULayersBlueprintLibrary_AddActorToLayer_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActorLayer                                 Layer;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
