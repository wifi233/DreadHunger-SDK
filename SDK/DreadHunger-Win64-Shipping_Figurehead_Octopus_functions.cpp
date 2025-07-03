                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Figurehead_Octopus_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Figurehead_Octopus.Figurehead_Octopus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFigurehead_Octopus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Figurehead_Octopus.Figurehead_Octopus_C.ReceiveBeginPlay");

	AFigurehead_Octopus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Figurehead_Octopus.Figurehead_Octopus_C.ExecuteUbergraph_Figurehead_Octopus
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFigurehead_Octopus_C::ExecuteUbergraph_Figurehead_Octopus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Figurehead_Octopus.Figurehead_Octopus_C.ExecuteUbergraph_Figurehead_Octopus");

	AFigurehead_Octopus_C_ExecuteUbergraph_Figurehead_Octopus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
