                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_HeadMountedDisplay_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)//offset:0x1F94E10;
	static void SetXRTimedInputActionDelegate(const struct FName& ActionName, const struct FScriptDelegate& InDelegate)//offset:0x1F94CF0;
	static void SetXRDisconnectDelegate(const struct FScriptDelegate& InDisconnectedDelegate)//offset:0x1F94C50;
	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale)//offset:0x1F94B90;
	static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin)//offset:0x1F94AA0;
	static void SetSpectatorScreenTexture(class UTexture* InTexture)//offset:0x1F94990;
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)//offset:0x1F94780;
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode)//offset:0x1F94710;
	static void SetClippingPlanes(float Near, float Far)//offset:0x1F94260;
	static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options)//offset:0x1F94110;
	static bool IsSpectatorScreenModeControllable()//offset:0x1F940E0;
	static bool IsInLowPersistenceMode()//offset:0xCC0B20;
	static bool IsHeadMountedDisplayEnabled()//offset:0x1F93D80;
	static bool IsHeadMountedDisplayConnected()//offset:0x1F93D50;
	static bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)//offset:0x1F93CB0;
	static bool HasValidTrackingPosition()//offset:0x1F93C60;
	static int GetXRSystemFlags()//offset:0x1F93C30;
	static float GetWorldToMetersScale(class UObject* WorldContext)//offset:0x1F93BA0;
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus)//offset:0x1F93A40;
	static class FString GetVersionString()//offset:0x1F93B20;
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext)//offset:0x1F93980;
	static void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int Index)//offset:0x1F935A0;
	static TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin()//offset:0x1F93560;
	static float GetScreenPercentage()//offset:0x1F93530;
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)//offset:0x1F932C0;
	static float GetPixelDensity()//offset:0x1F93290;
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)//offset:0x1F930E0;
	static int GetNumOfTrackingSensors()//offset:0x1F930B0;
	static void GetMotionControllerData(class UObject* WorldContext, EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData)//offset:0x1F92F10;
	static TEnumAsByte<EHMDWornState> GetHMDWornState()//offset:0x1F92DC0;
	static struct FName GetHMDDeviceName()//offset:0x1F92D80;
	static void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData)//offset:0x1F92CA0;
	static void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)//offset:0x1F92A70;
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)//offset:0x1F92880;
	static bool GetControllerTransformForTime(class UObject* WorldContext, int ControllerIndex, const struct FName& MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec)//offset:0x1F92500;
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType)//offset:0x1F923B0;
	static void EnableLowPersistenceMode(bool bEnable)//offset:0x1F92090;
	static bool EnableHMD(bool bEnable)//offset:0x1F92000;
	static void DisconnectRemoteXRDevice()//offset:0x1F91FE0;
	static TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(const class FString& IPAddress, int BitRate)//offset:0x1F91C60;
	static bool ConfigureGestures(const struct FXRGestureConfig& GestureConfig)//offset:0x1F91BC0;
	static void ClearXRTimedInputActionDelegate(const struct FName& ActionPath)//offset:0x1F91B40;
	static void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)//offset:0x1F91A50;
};


// Class HeadMountedDisplay.MotionControllerComponent
// size:0x00C0 (0x0450 - 0x0510)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0454(0x0001) (BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	struct FName                                       MotionSource;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableLowLatencyUpdate;                                 // 0x0460(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	ETrackingStatus                                    CurrentTrackingStatus;                                    // 0x0464(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayDeviceModel;                                      // 0x0465(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0466(0x0002) MISSED OFFSET
	struct FName                                       DisplayModelSource;                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 CustomDisplayMesh;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                             // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0488(0x0068) MISSED OFFSET
	class UPrimitiveComponent*                         DisplayComponent;                                         // 0x04F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET

	void SetTrackingSource(EControllerHand NewSource)//offset:0x1F94B10;
	void SetTrackingMotionSource(const struct FName& NewSource)//offset:0x1F94A10;
	void SetShowDeviceModel(bool bShowControllerModel)//offset:0x1F94680;
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource)//offset:0x1F943B0;
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)//offset:0x1F94320;
	void SetAssociatedPlayerIndex(int NewPlayer)//offset:0x1F941D0;
	void OnMotionControllerUpdated()//offset:0x13CEB30;
	bool IsTracked()//offset:0x1F57F40;
	EControllerHand GetTrackingSource()//offset:0x1F93950;
	float GetParameterValue(const struct FName& InName, bool* bValueFound)//offset:0x1F931B0;
	struct FVector GetHandJointPosition(int jointIndex, bool* bValueFound)//offset:0x1F92DF0;
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable)//offset:0x1F94440;
	static bool IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName)//offset:0x1F94010;
	static bool IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand)//offset:0x1F93F40;
	static bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)//offset:0x1F93EB0;
	static bool IsMotionTrackedDeviceCountManagementNecessary()//offset:0x1F93E80;
	static bool IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName)//offset:0x1F93DB0;
	static int GetMotionTrackingEnabledControllerCount()//offset:0x1F93080;
	static int GetMaximumMotionTrackedControllerCount()//offset:0x1F92EE0;
	static struct FName GetActiveTrackingSystemName()//offset:0x1F924C0;
	static TArray<struct FName> EnumerateMotionSources()//offset:0x1F92330;
	static bool EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)//offset:0x1F92260;
	static bool EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand)//offset:0x1F92190;
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)//offset:0x1F92100;
	static void DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)//offset:0x1F91F20;
	static void DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand)//offset:0x1F91E60;
	static void DisableMotionTrackingOfControllersForPlayer(int PlayerIndex)//offset:0x1F91DE0;
	static void DisableMotionTrackingOfAllControllers()//offset:0x1F91DC0;
	static void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)//offset:0x1F91D40;
};


// Class HeadMountedDisplay.VRNotificationsComponent
// size:0x0090 (0x00B0 - 0x0140)
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct UEMulticastInlineDelegate                   HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;    // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDTrackingInitializedDelegate;                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDRecenteredDelegate;                                    // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDLostDelegate;                                          // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDReconnectedDelegate;                                   // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDConnectCanceledDelegate;                               // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDPutOnHeadDelegate;                                     // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   HMDRemovedFromHeadDelegate;                               // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   VRControllerRecenteredDelegate;                           // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)//offset:0x1F91810;
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)//offset:0x1F911A0;
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// size:0x0030 (0x0030 - 0x0060)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct UEMulticastInlineDelegate                   OnModelLoaded;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnLoadFailure;                                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         SpawnedComponent;                                         // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent)//offset:0x1F91570;
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent)//offset:0x1F90F70;
};


// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void ShowLoadingScreen()//offset:0x1F94DF0;
	static void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet)//offset:0x1F944C0;
	static void HideLoadingScreen()//offset:0x1F93C90;
	static void ClearLoadingScreenSplashes()//offset:0x1F91B20;
	static void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)//offset:0x1F91370;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
