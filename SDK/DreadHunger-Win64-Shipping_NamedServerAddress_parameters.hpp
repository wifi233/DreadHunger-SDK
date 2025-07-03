                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_NamedServerAddress_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NamedServerAddress.NamedServerAddress_C.OnClicked
struct UNamedServerAddress_C_OnClicked_Params
{
};

// Function NamedServerAddress.NamedServerAddress_C.Init
struct UNamedServerAddress_C_Init_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              IPAddress;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Port;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function NamedServerAddress.NamedServerAddress_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature
struct UNamedServerAddress_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NamedServerAddress.NamedServerAddress_C.ExecuteUbergraph_NamedServerAddress
struct UNamedServerAddress_C_ExecuteUbergraph_NamedServerAddress_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
