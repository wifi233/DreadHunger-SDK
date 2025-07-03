                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_HeadMountedDisplay_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ExternalTrackingTransform      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition");

	UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params params;
	params.ExternalTrackingTransform = ExternalTrackingTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

static void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(const struct FName& ActionName, const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate");

	UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params params;
	params.ActionName = ActionName;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDisconnectedDelegate         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

static void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(const struct FScriptDelegate& InDisconnectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate");

	UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params params;
	params.InDisconnectedDelegate = InDisconnectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHMDTrackingOrigin> Origin                         (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                InTexture                      (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture* InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               EyeRectMin                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               EyeRectMax                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TextureRectMin                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TextureRectMax                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawEyeFirst                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearBlack                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params params;
	params.EyeRectMin = EyeRectMin;
	params.EyeRectMax = EyeRectMax;
	params.TextureRectMin = TextureRectMin;
	params.TextureRectMax = TextureRectMax;
	params.bDrawEyeFirst = bDrawEyeFirst;
	params.bClearBlack = bClearBlack;
	params.bUseAlpha = bUseAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ESpectatorScreenMode           Mode                           (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Near                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Far                            (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params params;
	params.Near = Near;
	params.Far = Far;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params params;
	params.Yaw = Yaw;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking");

	UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params params;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags");

	UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bUseFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUseFocus != nullptr)
		*bUseFocus = params.bUseFocus;
	if (bHasFocus != nullptr)
		*bHasFocus = params.bHasFocus;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UHeadMountedDisplayFunctionLibrary::GetVersionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString");

	UHeadMountedDisplayFunctionLibrary_GetVersionString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

static struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform");

	UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeftFOV                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFOV                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TopFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BottomFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LeftFOV != nullptr)
		*LeftFOV = params.LeftFOV;
	if (RightFOV != nullptr)
		*RightFOV = params.RightFOV;
	if (TopFOV != nullptr)
		*TopFOV = params.TopFOV;
	if (BottomFOV != nullptr)
		*BottomFOV = params.BottomFOV;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EHMDTrackingOrigin> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static TEnumAsByte<EHMDTrackingOrigin> UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage");

	UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 CameraOrigin                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraOrigin != nullptr)
		*CameraOrigin = params.CameraOrigin;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (HFOV != nullptr)
		*HFOV = params.HFOV;
	if (VFOV != nullptr)
		*VFOV = params.VFOV;
	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity");

	UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DevicePosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FXRMotionControllerData MotionControllerData           (Parm, OutParm)

static void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(class UObject* WorldContext, EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData");

	UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params params;
	params.WorldContext = WorldContext;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MotionControllerData != nullptr)
		*MotionControllerData = params.MotionControllerData;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EHMDWornState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static TEnumAsByte<EHMDWornState> UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FXRHMDData              HMDData                        (Parm, OutParm)

static void UHeadMountedDisplayFunctionLibrary::GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData");

	UHeadMountedDisplayFunctionLibrary_GetHMDData_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HMDData != nullptr)
		*HMDData = params.HMDData;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsTracked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasPositionalTracking         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose");

	UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params params;
	params.WorldContext = WorldContext;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsTracked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasPositionalTracking         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose");

	UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params params;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MotionSource                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan               Time                           (Parm, ZeroConstructor)
// bool                           bTimeWasUsed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bProvidedLinearVelocity        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LinearVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bProvidedAngularVelocity       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AngularVelocityRadPerSec       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(class UObject* WorldContext, int ControllerIndex, const struct FName& MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime");

	UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params params;
	params.WorldContext = WorldContext;
	params.ControllerIndex = ControllerIndex;
	params.MotionSource = MotionSource;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTimeWasUsed != nullptr)
		*bTimeWasUsed = params.bTimeWasUsed;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (Position != nullptr)
		*Position = params.Position;
	if (bProvidedLinearVelocity != nullptr)
		*bProvidedLinearVelocity = params.bProvidedLinearVelocity;
	if (LinearVelocity != nullptr)
		*LinearVelocity = params.LinearVelocity;
	if (bProvidedAngularVelocity != nullptr)
		*bProvidedAngularVelocity = params.bProvidedAngularVelocity;
	if (AngularVelocityRadPerSec != nullptr)
		*AngularVelocityRadPerSec = params.AngularVelocityRadPerSec;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SystemId                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EXRTrackedDeviceType           DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXRDeviceId>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices");

	UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params params;
	params.SystemId = SystemId;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	UHeadMountedDisplayFunctionLibrary_EnableHMD_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
// (Final, Native, Static, Public, BlueprintCallable)

static void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice");

	UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  IPAddress                      (Parm, ZeroConstructor)
// int                            BitRate                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EXRDeviceConnectionResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static TEnumAsByte<EXRDeviceConnectionResult> UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(const class FString& IPAddress, int BitRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice");

	UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params params;
	params.IPAddress = IPAddress;
	params.BitRate = BitRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FXRGestureConfig        GestureConfig                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(const struct FXRGestureConfig& GestureConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures");

	UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params params;
	params.GestureConfig = GestureConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ActionPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(const struct FName& ActionPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate");

	UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params params;
	params.ActionPath = ActionPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ExternalTrackingTransform      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

static void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD");

	UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params params;
	params.ExternalTrackingTransform = ExternalTrackingTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EControllerHand                NewSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMotionControllerComponent::SetTrackingSource(EControllerHand NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	UMotionControllerComponent_SetTrackingSource_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMotionControllerComponent::SetTrackingMotionSource(const struct FName& NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	UMotionControllerComponent_SetTrackingMotionSource_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowControllerModel           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	UMotionControllerComponent_SetShowDeviceModel_Params params;
	params.bShowControllerModel = bShowControllerModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewDisplayModelSource          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMotionControllerComponent::SetDisplayModelSource(const struct FName& NewDisplayModelSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	UMotionControllerComponent_SetDisplayModelSource_Params params;
	params.NewDisplayModelSource = NewDisplayModelSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewDisplayMesh                 (Parm, ZeroConstructor, IsPlainOldData)

void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	UMotionControllerComponent_SetCustomDisplayMesh_Params params;
	params.NewDisplayMesh = NewDisplayMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPlayer                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMotionControllerComponent::SetAssociatedPlayerIndex(int NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	UMotionControllerComponent_SetAssociatedPlayerIndex_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (Event, Protected, BlueprintEvent)

void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	UMotionControllerComponent_OnMotionControllerUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMotionControllerComponent::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	UMotionControllerComponent_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EControllerHand                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EControllerHand UMotionControllerComponent::GetTrackingSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	UMotionControllerComponent_GetTrackingSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValueFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMotionControllerComponent::GetParameterValue(const struct FName& InName, bool* bValueFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	UMotionControllerComponent_GetParameterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            jointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValueFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMotionControllerComponent::GetHandJointPosition(int jointIndex, bool* bValueFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition");

	UMotionControllerComponent_GetHandJointPosition_Params params;
	params.jointIndex = jointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

static void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking");

	UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName");

	UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<struct FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources");

	UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData)

static void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params params;
	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)

static void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

static void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, Native, Static, Public, BlueprintCallable)

static void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SystemName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DeviceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (Parm, OutParm)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking");

	UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params params;
	params.Target = Target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking");

	UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params params;
	params.Target = Target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SystemName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DeviceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (Parm, OutParm)
// class UPrimitiveComponent*     NewComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params params;
	params.Target = Target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;
	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent*     NewComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params params;
	params.Target = Target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)

static void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen");

	UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowLoadingMovie              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowOnSet                     (Parm, ZeroConstructor, IsPlainOldData)

static void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen");

	UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params params;
	params.Texture = Texture;
	params.Scale = Scale;
	params.Offset = Offset;
	params.bShowLoadingMovie = bShowLoadingMovie;
	params.bShowOnSet = bShowOnSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)

static void UXRLoadingScreenFunctionLibrary::HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen");

	UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
// (Final, Native, Static, Public, BlueprintCallable)

static void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes");

	UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Translation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearBeforeAdd                (Parm, ZeroConstructor, IsPlainOldData)

static void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash");

	UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params params;
	params.Texture = Texture;
	params.Translation = Translation;
	params.Rotation = Rotation;
	params.Size = Size;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
