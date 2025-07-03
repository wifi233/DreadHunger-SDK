                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AddNamedServerAddress_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AddNamedServerAddress.AddNamedServerAddress_C.IsValidCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAddNamedServerAddress_C::IsValidCharacter(const class FString& Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.IsValidCharacter");

	UAddNamedServerAddress_C_IsValidCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.ValidateEditableText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEditableText*           EditableText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            MaxCharacters                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEditableText*           NextEditableBox                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAddNamedServerAddress_C::ValidateEditableText(class UEditableText* EditableText, int MaxCharacters, class UEditableText* NextEditableBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.ValidateEditableText");

	UAddNamedServerAddress_C_ValidateEditableText_Params params;
	params.EditableText = EditableText;
	params.MaxCharacters = MaxCharacters;
	params.NextEditableBox = NextEditableBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.OnClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAddNamedServerAddress_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.OnClicked");

	UAddNamedServerAddress_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAddNamedServerAddress_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature");

	UAddNamedServerAddress_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAddNamedServerAddress_C::BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	UAddNamedServerAddress_C_BndEvt__IPAddressAEditableBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAddNamedServerAddress_C::BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	UAddNamedServerAddress_C_BndEvt__IPAddressBEditableBox_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAddNamedServerAddress_C::BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");

	UAddNamedServerAddress_C_BndEvt__IPAddressCEditableBox_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAddNamedServerAddress_C::BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature");

	UAddNamedServerAddress_C_BndEvt__IPAddressDEditableBox_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAddNamedServerAddress_C::BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature");

	UAddNamedServerAddress_C_BndEvt__IPAddressPortEditableBox_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AddNamedServerAddress.AddNamedServerAddress_C.ExecuteUbergraph_AddNamedServerAddress
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAddNamedServerAddress_C::ExecuteUbergraph_AddNamedServerAddress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AddNamedServerAddress.AddNamedServerAddress_C.ExecuteUbergraph_AddNamedServerAddress");

	UAddNamedServerAddress_C_ExecuteUbergraph_AddNamedServerAddress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
