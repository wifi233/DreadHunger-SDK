                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_IE_WoodAxe_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IE_WoodAxe.IE_WoodAxe_C.GetImpactEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>* ImpactedSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWasScrape                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FImpactEffect           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImpactEffect UIE_WoodAxe_C::GetImpactEffects(TEnumAsByte<EPhysicalSurface>* ImpactedSurface, bool* bWasScrape)
{
	static auto fn = UObject::FindObject<UFunction>("Function IE_WoodAxe.IE_WoodAxe_C.GetImpactEffects");

	UIE_WoodAxe_C_GetImpactEffects_Params params;
	params.ImpactedSurface = ImpactedSurface;
	params.bWasScrape = bWasScrape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
