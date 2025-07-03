                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_NamedServerAddress_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NamedServerAddress.NamedServerAddress_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UNamedServerAddress_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NamedServerAddress.NamedServerAddress_C.OnClicked");

	UNamedServerAddress_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NamedServerAddress.NamedServerAddress_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          IPAddress                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Port                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNamedServerAddress_C::Init(class FString* Name, TArray<unsigned char>* IPAddress, int* Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamedServerAddress.NamedServerAddress_C.Init");

	UNamedServerAddress_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (IPAddress != nullptr)
		*IPAddress = params.IPAddress;
	if (Port != nullptr)
		*Port = params.Port;
}


// Function NamedServerAddress.NamedServerAddress_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNamedServerAddress_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamedServerAddress.NamedServerAddress_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature");

	UNamedServerAddress_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NamedServerAddress.NamedServerAddress_C.ExecuteUbergraph_NamedServerAddress
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNamedServerAddress_C::ExecuteUbergraph_NamedServerAddress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NamedServerAddress.NamedServerAddress_C.ExecuteUbergraph_NamedServerAddress");

	UNamedServerAddress_C_ExecuteUbergraph_NamedServerAddress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
