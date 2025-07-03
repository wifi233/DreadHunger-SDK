                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MagicLeapARPin_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
// (Final, Native, Public, BlueprintCallable)

void UMagicLeapARPinComponent::UnPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin");

	UMagicLeapARPinComponent_UnPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMagicLeapARPinSaveGame* InPinDataClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutPinDataValid                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMagicLeapARPinSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(class UMagicLeapARPinSaveGame* InPinDataClass, bool* OutPinDataValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData");

	UMagicLeapARPinComponent_TryGetPinData_Params params;
	params.InPinDataClass = InPinDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPinDataValid != nullptr)
		*OutPinDataValid = params.OutPinDataValid;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID");

	UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinToID(const struct FGuid& PinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToID");

	UMagicLeapARPinComponent_PinToID_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
// (Final, Native, Public, BlueprintCallable)

void UMagicLeapARPinComponent::PinToBestFit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit");

	UMagicLeapARPinComponent_PinToBestFit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");

	UMagicLeapARPinComponent_PinSceneComponent_Params params;
	params.ComponentToPin = ComponentToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced");

	UMagicLeapARPinComponent_PinRestoredOrSynced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToPin                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");

	UMagicLeapARPinComponent_PinActor_Params params;
	params.ActorToPin = ActorToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bRestoredOrSynced              (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params params;
	params.bRestoredOrSynced = bRestoredOrSynced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bDataRestored                  (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature");

	UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params params;
	params.bDataRestored = bDataRestored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::IsPinned()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned");

	UMagicLeapARPinComponent_IsPinned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMagicLeapARPinState    State                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");

	UMagicLeapARPinComponent_GetPinState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   PinId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");

	UMagicLeapARPinComponent_GetPinnedPinID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMagicLeapARPinSaveGame* PinDataClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMagicLeapARPinSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UMagicLeapARPinSaveGame* PinDataClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");

	UMagicLeapARPinComponent_GetPinData_Params params;
	params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
// (Final, Native, Public, BlueprintCallable)

void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync");

	UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration");

	UMagicLeapARPinComponent_AttemptPinDataRestoration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

static void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate");

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

static void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapARPinQuery    InGlobalFilter                 (ConstParm, Parm, OutParm, ReferenceParm)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter");

	UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params params;
	params.InGlobalFilter = InGlobalFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)

static void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex");

	UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapARPinQuery    Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FGuid>           Pins                           (Parm, OutParm, ZeroConstructor)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins");

	UMagicLeapARPinFunctionLibrary_QueryARPins_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  PinIdString                    (Parm, ZeroConstructor)
// struct FGuid                   ARPinId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId");

	UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params params;
	params.PinIdString = PinIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ARPinId != nullptr)
		*ARPinId = params.ARPinId;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMagicLeapARPinFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid");

	UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapARPinQuery    CurrentGlobalFilter            (Parm, OutParm)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter");

	UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentGlobalFilter != nullptr)
		*CurrentGlobalFilter = params.CurrentGlobalFilter;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex");

	UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SearchPoint                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuid                   PinId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin");

	UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumRequested                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGuid>           Pins                           (Parm, OutParm, ZeroConstructor)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params params;
	params.NumRequested = NumRequested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapARPinState    State                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const struct FMagicLeapARPinState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString");

	UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FMagicLeapARPinState    State                          (Parm, OutParm)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState");

	UMagicLeapARPinFunctionLibrary_GetARPinState_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker");

	UMagicLeapARPinFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker");

	UMagicLeapARPinFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

static void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate");

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

static void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGuid                   ARPinId                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(const struct FGuid& ARPinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString");

	UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params params;
	params.ARPinId = ARPinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState");

	AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           InVisibilityOverride           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride");

	AMagicLeapARPinRenderer_SetVisibilityOverride_Params params;
	params.InVisibilityOverride = InVisibilityOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
