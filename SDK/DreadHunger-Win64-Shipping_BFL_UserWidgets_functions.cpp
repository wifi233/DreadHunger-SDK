                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BFL_UserWidgets_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BFL_UserWidgets.BFL_UserWidgets_C.EDHFontSizeToEFontSize
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  EDHFontSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_FontSizes>       EFontSize                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UBFL_UserWidgets_C::EDHFontSizeToEFontSize(unsigned char EDHFontSize, class UObject* __WorldContext, TEnumAsByte<E_FontSizes>* EFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.EDHFontSizeToEFontSize");

	UBFL_UserWidgets_C_EDHFontSizeToEFontSize_Params params;
	params.EDHFontSize = EDHFontSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EFontSize != nullptr)
		*EFontSize = params.EFontSize;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.EFontSizeToEDHFontSize
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_FontSizes>       EFontSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  EDHFontSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UBFL_UserWidgets_C::EFontSizeToEDHFontSize(TEnumAsByte<E_FontSizes> EFontSize, class UObject* __WorldContext, unsigned char* EDHFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.EFontSizeToEDHFontSize");

	UBFL_UserWidgets_C_EFontSizeToEDHFontSize_Params params;
	params.EFontSize = EFontSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EDHFontSize != nullptr)
		*EDHFontSize = params.EDHFontSize;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.CheckVectorParamNameExists
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VectorName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UBFL_UserWidgets_C::CheckVectorParamNameExists(class UMaterialInstanceDynamic* Mid, const struct FName& VectorName, class UObject* __WorldContext, bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.CheckVectorParamNameExists");

	UBFL_UserWidgets_C_CheckVectorParamNameExists_Params params;
	params.Mid = Mid;
	params.VectorName = VectorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.GetAvailableWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     Widgets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// bool                           bCreated                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static class UUserWidget* UBFL_UserWidgets_C::GetAvailableWidget(class UUserWidget* Class, class APlayerController* OwningPlayer, TArray<class UUserWidget*>* Widgets, class UObject* __WorldContext, bool* bCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.GetAvailableWidget");

	UBFL_UserWidgets_C_GetAvailableWidget_Params params;
	params.Class = Class;
	params.OwningPlayer = OwningPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
	if (bCreated != nullptr)
		*bCreated = params.bCreated;

	return params.ReturnValue;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.PlayUISound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

static void UBFL_UserWidgets_C::PlayUISound(class USoundBase* Sound, class UWidget* Widget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.PlayUISound");

	UBFL_UserWidgets_C_PlayUISound_Params params;
	params.Sound = Sound;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.PopMouseAndInput
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetToUnfocus                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

static void UBFL_UserWidgets_C::PopMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToUnfocus, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.PopMouseAndInput");

	UBFL_UserWidgets_C_PopMouseAndInput_Params params;
	params.PlayerController = PlayerController;
	params.WidgetToUnfocus = WidgetToUnfocus;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.PushMouseAndInput
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetToFocus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bGameAndUI                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

static void UBFL_UserWidgets_C::PushMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToFocus, bool bGameAndUI, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.PushMouseAndInput");

	UBFL_UserWidgets_C_PushMouseAndInput_Params params;
	params.PlayerController = PlayerController;
	params.WidgetToFocus = WidgetToFocus;
	params.bGameAndUI = bGameAndUI;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.DoesKeyMatchInputMapping
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UBFL_UserWidgets_C::DoesKeyMatchInputMapping(const struct FName& ActionName, const struct FKey& Key, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.DoesKeyMatchInputMapping");

	UBFL_UserWidgets_C_DoesKeyMatchInputMapping_Params params;
	params.ActionName = ActionName;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BFL_UserWidgets.BFL_UserWidgets_C.DoesKeyEventMatchInputMapping
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKeyEvent               Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UBFL_UserWidgets_C::DoesKeyEventMatchInputMapping(const struct FName& ActionName, const struct FKeyEvent& Key, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_UserWidgets.BFL_UserWidgets_C.DoesKeyEventMatchInputMapping");

	UBFL_UserWidgets_C_DoesKeyEventMatchInputMapping_Params params;
	params.ActionName = ActionName;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
