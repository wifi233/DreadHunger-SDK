                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_SlotView_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_SlotView.WBP_SlotView_C.GetIconBrush
struct UWBP_SlotView_C_GetIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnInitFillImage
struct UWBP_SlotView_C_BP_OnInitFillImage_Params
{
	class UMaterialInstanceDynamic*                    InFillMID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnInitBorderImage
struct UWBP_SlotView_C_BP_OnInitBorderImage_Params
{
	class UMaterialInstanceDynamic*                    InBorderMID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetSize
struct UWBP_SlotView_C_BP_OnSetSize_Params
{
	float                                              InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIcon
struct UWBP_SlotView_C_BP_OnSetIcon_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnInitDenyMaskImage
struct UWBP_SlotView_C_BP_OnInitDenyMaskImage_Params
{
	class UTexture2D*                                  DenyMaskTexture;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnPlayAddedAnimation
struct UWBP_SlotView_C_BP_OnPlayAddedAnimation_Params
{
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnStartCriticalAnimation
struct UWBP_SlotView_C_BP_OnStartCriticalAnimation_Params
{
	bool                                               bSuperCritical;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnStopCriticalAnimation
struct UWBP_SlotView_C_BP_OnStopCriticalAnimation_Params
{
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnStopSuperCriticalAnimation
struct UWBP_SlotView_C_BP_OnStopSuperCriticalAnimation_Params
{
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnPlayDenyAnimation
struct UWBP_SlotView_C_BP_OnPlayDenyAnimation_Params
{
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIconColor
struct UWBP_SlotView_C_BP_OnSetIconColor_Params
{
	struct FLinearColor                                InIconColor;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.BP_OnSetIconScale
struct UWBP_SlotView_C_BP_OnSetIconScale_Params
{
	struct FVector2D                                   InIconScale;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.PreConstruct
struct UWBP_SlotView_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SlotView.WBP_SlotView_C.ExecuteUbergraph_WBP_SlotView
struct UWBP_SlotView_C_ExecuteUbergraph_WBP_SlotView_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
