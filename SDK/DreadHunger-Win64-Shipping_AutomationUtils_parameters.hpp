                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AutomationUtils_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
struct UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params
{
	class FString                                      ScreenshotName;                                           // (ConstParm, Parm, ZeroConstructor)
	float                                              MaxGlobalError;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxLocalError;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MapNameOverride;                                          // (Parm, ZeroConstructor)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
