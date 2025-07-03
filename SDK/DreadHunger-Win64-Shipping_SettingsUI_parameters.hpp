                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_SettingsUI_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SettingsUI.SettingsUI_C.OnKeyDown
struct USettingsUI_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SettingsUI.SettingsUI_C.Construct
struct USettingsUI_C_Construct_Params
{
};

// Function SettingsUI.SettingsUI_C.CategoryChanged
struct USettingsUI_C_CategoryChanged_Params
{
	class FString                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SettingsUI.SettingsUI_C.BP_OnShow
struct USettingsUI_C_BP_OnShow_Params
{
};

// Function SettingsUI.SettingsUI_C.BP_OnHide
struct USettingsUI_C_BP_OnHide_Params
{
};

// Function SettingsUI.SettingsUI_C.ExecuteUbergraph_SettingsUI
struct USettingsUI_C_ExecuteUbergraph_SettingsUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
