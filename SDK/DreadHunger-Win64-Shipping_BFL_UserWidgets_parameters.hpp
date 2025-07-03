                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BFL_UserWidgets_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BFL_UserWidgets.BFL_UserWidgets_C.EDHFontSizeToEFontSize
struct UBFL_UserWidgets_C_EDHFontSizeToEFontSize_Params
{
	unsigned char                                      EDHFontSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_FontSizes>                           EFontSize;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.EFontSizeToEDHFontSize
struct UBFL_UserWidgets_C_EFontSizeToEDHFontSize_Params
{
	TEnumAsByte<E_FontSizes>                           EFontSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EDHFontSize;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.CheckVectorParamNameExists
struct UBFL_UserWidgets_C_CheckVectorParamNameExists_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VectorName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.GetAvailableWidget
struct UBFL_UserWidgets_C_GetAvailableWidget_Params
{
	class UUserWidget*                                 Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUserWidget*>                         Widgets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
	bool                                               bCreated;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.PlayUISound
struct UBFL_UserWidgets_C_PlayUISound_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.PopMouseAndInput
struct UBFL_UserWidgets_C_PopMouseAndInput_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetToUnfocus;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.PushMouseAndInput
struct UBFL_UserWidgets_C_PushMouseAndInput_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetToFocus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameAndUI;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.DoesKeyMatchInputMapping
struct UBFL_UserWidgets_C_DoesKeyMatchInputMapping_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BFL_UserWidgets.BFL_UserWidgets_C.DoesKeyEventMatchInputMapping
struct UBFL_UserWidgets_C_DoesKeyEventMatchInputMapping_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKeyEvent                                   Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
