                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHungerLoadingScreen_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DreadHungerLoadingScreen.DreadHungerLoadingScreen.SetThrobberRenderOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRenderOpacity                (Parm, ZeroConstructor, IsPlainOldData)

void UDreadHungerLoadingScreen::SetThrobberRenderOpacity(float InRenderOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHungerLoadingScreen.DreadHungerLoadingScreen.SetThrobberRenderOpacity");

	UDreadHungerLoadingScreen_SetThrobberRenderOpacity_Params params;
	params.InRenderOpacity = InRenderOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
