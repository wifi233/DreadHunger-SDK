                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_SkyLight_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SkyLight.BP_SkyLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkyLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyLight.BP_SkyLight_C.ReceiveBeginPlay");

	ABP_SkyLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyLight.BP_SkyLight_C.ExecuteUbergraph_BP_SkyLight
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkyLight_C::ExecuteUbergraph_BP_SkyLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyLight.BP_SkyLight_C.ExecuteUbergraph_BP_SkyLight");

	ABP_SkyLight_C_ExecuteUbergraph_BP_SkyLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
