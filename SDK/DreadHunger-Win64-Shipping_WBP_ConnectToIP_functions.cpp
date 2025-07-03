                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_ConnectToIP_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ConnectToIP.WBP_ConnectToIP_C.PopulateNamedServerAddressDropDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ConnectToIP_C::PopulateNamedServerAddressDropDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.PopulateNamedServerAddressDropDown");

	UWBP_ConnectToIP_C_PopulateNamedServerAddressDropDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.IsValidCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_ConnectToIP_C::IsValidCharacter(const class FString& Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.IsValidCharacter");

	UWBP_ConnectToIP_C_IsValidCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.OnConnectButtonClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ConnectToIP_C::OnConnectButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.OnConnectButtonClicked");

	UWBP_ConnectToIP_C_OnConnectButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.ValidateEditableBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEditableText*           EditableText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            MaxCharacters                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEditableText*           NextEditableText               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ConnectToIP_C::ValidateEditableBox(class UEditableText* EditableText, int MaxCharacters, class UEditableText* NextEditableText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.ValidateEditableBox");

	UWBP_ConnectToIP_C_ValidateEditableBox_Params params;
	params.EditableText = EditableText;
	params.MaxCharacters = MaxCharacters;
	params.NextEditableText = NextEditableText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectToIP_C::BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectToIP_C::BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectToIP_C::BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectToIP_C::BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ConnectToIP_C::BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ConnectToIP_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_ButtonSimpleSignature__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__ConnectButton_K2Node_ComponentBoundEvent_6_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ConnectToIP_C::BndEvt__ConnectButton_K2Node_ComponentBoundEvent_6_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__ConnectButton_K2Node_ComponentBoundEvent_6_ButtonSimpleSignature__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__ConnectButton_K2Node_ComponentBoundEvent_6_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BP_ShowConnectToIPAddressWidget
// (Event, Protected, BlueprintEvent)

void UWBP_ConnectToIP_C::BP_ShowConnectToIPAddressWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BP_ShowConnectToIPAddressWidget");

	UWBP_ConnectToIP_C_BP_ShowConnectToIPAddressWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__HideServerAddressCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxWidgetStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bChecked                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConnectToIP_C::BndEvt__HideServerAddressCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxWidgetStateChanged__DelegateSignature(bool bChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__HideServerAddressCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxWidgetStateChanged__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__HideServerAddressCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxWidgetStateChanged__DelegateSignature_Params params;
	params.bChecked = bChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressButton_K2Node_ComponentBoundEvent_8_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ConnectToIP_C::BndEvt__IPAddressButton_K2Node_ComponentBoundEvent_8_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__IPAddressButton_K2Node_ComponentBoundEvent_8_ButtonSimpleSignature__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__IPAddressButton_K2Node_ComponentBoundEvent_8_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_9_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ConnectToIP_C::BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_9_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_9_ButtonSimpleSignature__DelegateSignature");

	UWBP_ConnectToIP_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_9_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ConnectToIP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.Construct");

	UWBP_ConnectToIP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ConnectToIP_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.Destruct");

	UWBP_ConnectToIP_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ConnectToIP.WBP_ConnectToIP_C.ExecuteUbergraph_WBP_ConnectToIP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ConnectToIP_C::ExecuteUbergraph_WBP_ConnectToIP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ConnectToIP.WBP_ConnectToIP_C.ExecuteUbergraph_WBP_ConnectToIP");

	UWBP_ConnectToIP_C_ExecuteUbergraph_WBP_ConnectToIP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
