                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AutomationUtils_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ScreenshotName                 (ConstParm, Parm, ZeroConstructor)
// float                          MaxGlobalError                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxLocalError                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MapNameOverride                (Parm, ZeroConstructor)

static void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot");

	UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params params;
	params.ScreenshotName = ScreenshotName;
	params.MaxGlobalError = MaxGlobalError;
	params.MaxLocalError = MaxLocalError;
	params.MapNameOverride = MapNameOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
