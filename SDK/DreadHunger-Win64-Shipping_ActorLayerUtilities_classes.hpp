                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ActorLayerUtilities_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorLayerUtilities.LayersBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static void RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)//offset:0xD5C8D0;
	static TArray<class AActor*> GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)//offset:0xD5C7B0;
	static void AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)//offset:0xD5C6E0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
