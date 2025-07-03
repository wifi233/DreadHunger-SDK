                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_ConnectToIP_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.PopulateNamedServerAddressDropDown
struct UWBP_ConnectToIP_C_PopulateNamedServerAddressDropDown_Params
{
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.IsValidCharacter
struct UWBP_ConnectToIP_C_IsValidCharacter_Params
{
	class FString                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.OnConnectButtonClicked
struct UWBP_ConnectToIP_C_OnConnectButtonClicked_Params
{
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.ValidateEditableBox
struct UWBP_ConnectToIP_C_ValidateEditableBox_Params
{
	class UEditableText*                               EditableText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxCharacters;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEditableText*                               NextEditableText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_ButtonSimpleSignature__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_ButtonSimpleSignature__DelegateSignature_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__ConnectButton_K2Node_ComponentBoundEvent_6_ButtonSimpleSignature__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__ConnectButton_K2Node_ComponentBoundEvent_6_ButtonSimpleSignature__DelegateSignature_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BP_ShowConnectToIPAddressWidget
struct UWBP_ConnectToIP_C_BP_ShowConnectToIPAddressWidget_Params
{
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__HideServerAddressCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxWidgetStateChanged__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__HideServerAddressCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxWidgetStateChanged__DelegateSignature_Params
{
	bool                                               bChecked;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressButton_K2Node_ComponentBoundEvent_8_ButtonSimpleSignature__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__IPAddressButton_K2Node_ComponentBoundEvent_8_ButtonSimpleSignature__DelegateSignature_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_9_ButtonSimpleSignature__DelegateSignature
struct UWBP_ConnectToIP_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_9_ButtonSimpleSignature__DelegateSignature_Params
{
	class UDH_ButtonWidget*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.Construct
struct UWBP_ConnectToIP_C_Construct_Params
{
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.Destruct
struct UWBP_ConnectToIP_C_Destruct_Params
{
};

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.ExecuteUbergraph_WBP_ConnectToIP
struct UWBP_ConnectToIP_C_ExecuteUbergraph_WBP_ConnectToIP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
