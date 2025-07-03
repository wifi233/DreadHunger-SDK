                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_HumanCharacter_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HumanCharacter.BP_HumanCharacter_C.GetLinearColorDelta
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Distance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PrimaryLinearColorDelta        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SecondaryLinearColorData       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HumanCharacter_C::GetLinearColorDelta(float Distance, struct FLinearColor* PrimaryLinearColorDelta, struct FLinearColor* SecondaryLinearColorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.GetLinearColorDelta");

	ABP_HumanCharacter_C_GetLinearColorDelta_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryLinearColorDelta != nullptr)
		*PrimaryLinearColorDelta = params.PrimaryLinearColorDelta;
	if (SecondaryLinearColorData != nullptr)
		*SecondaryLinearColorData = params.SecondaryLinearColorData;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.GetGroundCraftingRecipes
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UDH_CraftingRecipe*> ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

TArray<class UDH_CraftingRecipe*> ABP_HumanCharacter_C::GetGroundCraftingRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.GetGroundCraftingRecipes");

	ABP_HumanCharacter_C_GetGroundCraftingRecipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.IKFootTrace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Out_Hit_Location               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FootTraceOffset                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Out_Hit_Normal                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HumanCharacter_C::IKFootTrace(const struct FName& SocketName, float Distance, struct FVector* Out_Hit_Location, float* FootTraceOffset, struct FVector* Out_Hit_Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.IKFootTrace");

	ABP_HumanCharacter_C_IKFootTrace_Params params;
	params.SocketName = SocketName;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Hit_Location != nullptr)
		*Out_Hit_Location = params.Out_Hit_Location;
	if (FootTraceOffset != nullptr)
		*FootTraceOffset = params.FootTraceOffset;
	if (Out_Hit_Normal != nullptr)
		*Out_Hit_Normal = params.Out_Hit_Normal;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.PrintInventoryDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HumanCharacter_C::PrintInventoryDebug(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.PrintInventoryDebug");

	ABP_HumanCharacter_C_PrintInventoryDebug_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HumanCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.ReceiveBeginPlay");

	ABP_HumanCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HumanCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.ReceiveTick");

	ABP_HumanCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.OnDied
// (Event, Protected, BlueprintEvent)

void ABP_HumanCharacter_C::OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.OnDied");

	ABP_HumanCharacter_C_OnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.FOVChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HumanCharacter_C::FOVChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.FOVChanged");

	ABP_HumanCharacter_C_FOVChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HumanCharacter.BP_HumanCharacter_C.ExecuteUbergraph_BP_HumanCharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HumanCharacter_C::ExecuteUbergraph_BP_HumanCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanCharacter.BP_HumanCharacter_C.ExecuteUbergraph_BP_HumanCharacter");

	ABP_HumanCharacter_C_ExecuteUbergraph_BP_HumanCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
