                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_IE_HandPatCrawl_Human_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IE_HandPatCrawl_Human.IE_HandPatCrawl_Human_C.GetImpactEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  ImpactedSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasScrape                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FImpactEffect           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImpactEffect UIE_HandPatCrawl_Human_C::GetImpactEffects(TEnumAsByte<EPhysicalSurface> ImpactedSurface, bool bWasScrape)
{
	static auto fn = UObject::FindObject<UFunction>("Function IE_HandPatCrawl_Human.IE_HandPatCrawl_Human_C.GetImpactEffects");

	UIE_HandPatCrawl_Human_C_GetImpactEffects_Params params;
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
