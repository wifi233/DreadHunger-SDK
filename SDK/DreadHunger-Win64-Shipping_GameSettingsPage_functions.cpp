                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GameSettingsPage_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameSettingsPage.GameSettingsPage_C.PopulateNamedServers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameSettingsPage_C::PopulateNamedServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSettingsPage.GameSettingsPage_C.PopulateNamedServers");

	UGameSettingsPage_C_PopulateNamedServers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSettingsPage.GameSettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameSettingsPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSettingsPage.GameSettingsPage_C.Construct");

	UGameSettingsPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSettingsPage.GameSettingsPage_C.UpdateBloodColor
// (BlueprintCallable, BlueprintEvent)

void UGameSettingsPage_C::UpdateBloodColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSettingsPage.GameSettingsPage_C.UpdateBloodColor");

	UGameSettingsPage_C_UpdateBloodColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSettingsPage.GameSettingsPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameSettingsPage_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSettingsPage.GameSettingsPage_C.Destruct");

	UGameSettingsPage_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSettingsPage.GameSettingsPage_C.ExecuteUbergraph_GameSettingsPage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameSettingsPage_C::ExecuteUbergraph_GameSettingsPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSettingsPage.GameSettingsPage_C.ExecuteUbergraph_GameSettingsPage");

	UGameSettingsPage_C_ExecuteUbergraph_GameSettingsPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
