                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_DreadGameInstance_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DreadGameInstance.BP_DreadGameInstance_C.MusicVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DreadGameInstance_C::MusicVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadGameInstance.BP_DreadGameInstance_C.MusicVolumeChanged");

	UBP_DreadGameInstance_C_MusicVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadGameInstance.BP_DreadGameInstance_C.SFXVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DreadGameInstance_C::SFXVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadGameInstance.BP_DreadGameInstance_C.SFXVolumeChanged");

	UBP_DreadGameInstance_C_SFXVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadGameInstance.BP_DreadGameInstance_C.GamepadIconsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_DreadGameInstance_C::GamepadIconsChanged(const class FString& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadGameInstance.BP_DreadGameInstance_C.GamepadIconsChanged");

	UBP_DreadGameInstance_C_GamepadIconsChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadGameInstance.BP_DreadGameInstance_C.MasterVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DreadGameInstance_C::MasterVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadGameInstance.BP_DreadGameInstance_C.MasterVolumeChanged");

	UBP_DreadGameInstance_C_MasterVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadGameInstance.BP_DreadGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_DreadGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadGameInstance.BP_DreadGameInstance_C.ReceiveInit");

	UBP_DreadGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadGameInstance.BP_DreadGameInstance_C.ExecuteUbergraph_BP_DreadGameInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DreadGameInstance_C::ExecuteUbergraph_BP_DreadGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadGameInstance.BP_DreadGameInstance_C.ExecuteUbergraph_BP_DreadGameInstance");

	UBP_DreadGameInstance_C_ExecuteUbergraph_BP_DreadGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
