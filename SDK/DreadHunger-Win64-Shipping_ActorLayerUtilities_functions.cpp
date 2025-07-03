                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ActorLayerUtilities_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm)

static void ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer");

	ULayersBlueprintLibrary_RemoveActorFromLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorLayer             ActorLayer                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<class AActor*> ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors");

	ULayersBlueprintLibrary_GetActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorLayer = ActorLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm)

static void ULayersBlueprintLibrary::AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer");

	ULayersBlueprintLibrary_AddActorToLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
