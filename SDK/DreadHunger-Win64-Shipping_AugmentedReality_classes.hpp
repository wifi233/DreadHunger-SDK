                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AugmentedReality_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AugmentedReality.ARActor
// size:0x0000 (0x0220 - 0x0220)
class AARActor : public AActor
{
public:

	class UARComponent* AddARComponent(class UARComponent* InComponentClass, const struct FGuid& NATIVEID)//offset:0x1F6EDB0;
};


// Class AugmentedReality.ARBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static void UnpinComponent(class USceneComponent* ComponentToUnpin)//offset:0x1F72010;
	static bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType)//offset:0x1F71F40;
	static void StopARSession()//offset:0x1F71F20;
	static void StartARSession(class UARSessionConfig* SessionConfig)//offset:0x1F71EA0;
	static void SetEnabledXRCamera(bool bOnOff)//offset:0x1F71E20;
	static void SetARWorldScale(float InWorldScale)//offset:0x1F71CD0;
	static void SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)//offset:0x1F71B40;
	static void SetAlignmentTransform(const struct FTransform& InAlignmentTransform)//offset:0x1F71D50;
	static bool SaveARPinToLocalStore(const struct FName& InSaveName, class UARPin* InPin)//offset:0x1F71A70;
	static struct FIntPoint ResizeXRCamera(const struct FIntPoint& InSize)//offset:0x1F719D0;
	static void RemovePin(class UARPin* PinToRemove)//offset:0x1F71950;
	static void RemoveARPinFromLocalStore(const struct FName& InSaveName)//offset:0x1F718B0;
	static void RemoveAllARPinsFromLocalStore()//offset:0x1F71930;
	static class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName)//offset:0x1F71720;
	static bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)//offset:0x1F71650;
	static class UARPin* PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)//offset:0x1F714A0;
	static void PauseARSession()//offset:0x1F71480;
	static TMap<struct FName, class UARPin*> LoadARPinsFromLocalStore()//offset:0x1F713B0;
	static TArray<struct FARTraceResult> LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)//offset:0x1F70FA0;
	static TArray<struct FARTraceResult> LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)//offset:0x1F711D0;
	static bool IsSessionTypeSupported(EARSessionType SessionType)//offset:0x1F70F20;
	static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)//offset:0x1F70E60;
	static bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod)//offset:0x1F70DA0;
	static bool IsARSupported()//offset:0x1F70D70;
	static bool IsARPinLocalStoreSupported()//offset:0x1F70D40;
	static bool IsARPinLocalStoreReady()//offset:0x1F70D10;
	static EARWorldMappingState GetWorldMappingStatus()//offset:0x1F70CE0;
	static EARTrackingQualityReason GetTrackingQualityReason()//offset:0x1F70CB0;
	static EARTrackingQuality GetTrackingQuality()//offset:0x1F70C80;
	static TArray<struct FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType)//offset:0x1F709B0;
	static class UARSessionConfig* GetSessionConfig()//offset:0x1F70980;
	static TArray<struct FVector> GetPointCloud()//offset:0x1F70900;
	static class UARTexture* GetPersonSegmentationImage()//offset:0x1F708D0;
	static class UARTexture* GetPersonSegmentationDepthImage()//offset:0x1F708A0;
	static bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)//offset:0x1F70710;
	static int GetNumberOfTrackedFacesSupported()//offset:0x1F706E0;
	static class UARLightEstimate* GetCurrentLightEstimate()//offset:0x1F70250;
	static bool GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)//offset:0x1F70190;
	static class UARTextureCameraImage* GetCameraImage()//offset:0x1F70160;
	static class UARTextureCameraDepth* GetCameraDepth()//offset:0x1F70130;
	static float GetARWorldScale()//offset:0x1F6FB10;
	static class UARTexture* GetARTexture(EARTextureType TextureType)//offset:0x1F6FA90;
	static struct FARSessionStatus GetARSessionStatus()//offset:0x1F6FA00;
	static TArray<class UARTrackedPose*> GetAllTrackedPoses()//offset:0x1F700B0;
	static TArray<class UARTrackedPoint*> GetAllTrackedPoints()//offset:0x1F70030;
	static TArray<class UARPlaneGeometry*> GetAllTrackedPlanes()//offset:0x1F6FFB0;
	static TArray<class UARTrackedImage*> GetAllTrackedImages()//offset:0x1F6FF30;
	static TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes()//offset:0x1F6FEB0;
	static TArray<struct FARPose2D> GetAllTracked2DPoses()//offset:0x1F6FD70;
	static TArray<class UARPin*> GetAllPins()//offset:0x1F6FCF0;
	static TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(class UARTrackedGeometry* GeometryClass)//offset:0x1F6FC20;
	static TArray<class UARTrackedGeometry*> GetAllGeometries()//offset:0x1F6FBA0;
	static struct FTransform GetAlignmentTransform()//offset:0x1F6FB40;
	static TArray<class UARTrackedPoint*> FindTrackedPointsByName(const class FString& PointName)//offset:0x1F6F920;
	static void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)//offset:0x1F6F780;
	static void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)//offset:0x1F6F5E0;
	static void CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> EndPoints, struct FVector* ClosestIntersection)//offset:0x1F6F480;
	static void CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)//offset:0x1F6F290;
	static bool AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName)//offset:0x1F6F110;
	static class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)//offset:0x1F6EF80;
	static bool AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)//offset:0x1F6EEA0;
};


// Class AugmentedReality.ARTraceResultLibrary
// size:0x0000 (0x0028 - 0x0028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UARTrackedGeometry* GetTrackedGeometry(const struct FARTraceResult& TraceResult)//offset:0x1F70B80;
	static EARLineTraceChannels GetTraceChannel(const struct FARTraceResult& TraceResult)//offset:0x1F70A80;
	static struct FTransform GetLocalTransform(const struct FARTraceResult& TraceResult)//offset:0x1F705C0;
	static struct FTransform GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)//offset:0x1F704A0;
	static struct FTransform GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)//offset:0x1F70380;
	static float GetDistanceFromCamera(const struct FARTraceResult& TraceResult)//offset:0x1F70280;
};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// size:0x0020 (0x0030 - 0x0050)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// size:0x0030 (0x0050 - 0x0080)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject)//offset:0x1F6ED20;
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// size:0x0048 (0x0050 - 0x0098)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)//offset:0x1F6EBF0;
};


// Class AugmentedReality.ARComponent
// size:0x0080 (0x0200 - 0x0280)
class UARComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0200(0x0038) MISSED OFFSET
	bool                                               bUseDefaultReplication;                                   // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UMaterialInterface*                          DefaultMeshMaterial;                                      // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                             // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMRMeshComponent*                            MRMeshComponent;                                          // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UARTrackedGeometry*                          MyTrackedGeometry;                                        // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0260(0x0020) MISSED OFFSET

	void UpdateVisualization()//offset:0x1F79270;
	void SetNativeID(const struct FGuid& NATIVEID)//offset:0x1F78E00;
	void ReceiveRemove()//offset:0x13CEB30;
	void OnRep_Payload()//offset:0x1F781C0;
	class UMRMeshComponent* GetMRMesh()//offset:0x1F77F60;
};


// Class AugmentedReality.ARPlaneComponent
// size:0x0080 (0x0280 - 0x0300)
class UARPlaneComponent : public UARComponent
{
public:
	struct FARPlaneUpdatePayload                       ReplicatedPayload;                                        // 0x0280(0x0080) (BlueprintVisible, BlueprintReadOnly, Net)

	static void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode)//offset:0x1F78FE0;
	static void SetObjectClassificationDebugColors(TMap<EARObjectClassification, struct FLinearColor> InColors)//offset:0x1F78EA0;
	void ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)//offset:0x1F78880;
	void ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)//offset:0x13CEB30;
	static TMap<EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors()//offset:0x1F77F80;
};


// Class AugmentedReality.ARPointComponent
// size:0x0000 (0x0280 - 0x0280)
class UARPointComponent : public UARComponent
{
public:

	void ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)//offset:0x1F789D0;
	void ReceiveUpdate(const struct FARPointUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARPointUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARFaceComponent
// size:0x0060 (0x0280 - 0x02E0)
class UARFaceComponent : public UARComponent
{
public:
	struct FARFaceUpdatePayload                        ReplicatedPayload;                                        // 0x0280(0x0040) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode)//offset:0x1F78CB0;
	void ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)//offset:0x1F78440;
	void ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARFaceUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARImageComponent
// size:0x0060 (0x0280 - 0x02E0)
class UARImageComponent : public UARComponent
{
public:
	struct FARImageUpdatePayload                       ReplicatedPayload;                                        // 0x0280(0x0060) (BlueprintVisible, BlueprintReadOnly, Net)

	static void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode)//offset:0x1F78D90;
	void ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)//offset:0x1F78640;
	void ReceiveUpdate(const struct FARImageUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARImageUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARQRCodeComponent
// size:0x0070 (0x0280 - 0x02F0)
class UARQRCodeComponent : public UARComponent
{
public:
	struct FARQRCodeUpdatePayload                      ReplicatedPayload;                                        // 0x0280(0x0070) (BlueprintVisible, BlueprintReadOnly, Net)

	static void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode)//offset:0x1F790C0;
	void ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)//offset:0x1F78B90;
	void ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARPoseComponent
// size:0x0040 (0x0280 - 0x02C0)
class UARPoseComponent : public UARComponent
{
public:
	struct FARPoseUpdatePayload                        ReplicatedPayload;                                        // 0x0280(0x0040) (BlueprintVisible, BlueprintReadOnly, Net)

	static void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode)//offset:0x1F79050;
	void ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)//offset:0x1F78A80;
	void ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARPoseUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.AREnvironmentProbeComponent
// size:0x0030 (0x0280 - 0x02B0)
class UAREnvironmentProbeComponent : public UARComponent
{
public:
	struct FAREnvironmentProbeUpdatePayload            ReplicatedPayload;                                        // 0x0280(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)

	void ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)//offset:0x1F78360;
	void ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARObjectComponent
// size:0x0030 (0x0280 - 0x02B0)
class UARObjectComponent : public UARComponent
{
public:
	struct FARObjectUpdatePayload                      ReplicatedPayload;                                        // 0x0280(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)

	void ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)//offset:0x1F78360;
	void ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARObjectUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARMeshComponent
// size:0x0060 (0x0280 - 0x02E0)
class UARMeshComponent : public UARComponent
{
public:
	struct FARMeshUpdatePayload                        ReplicatedPayload;                                        // 0x0280(0x0060) (BlueprintVisible, BlueprintReadOnly, Net)

	void ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)//offset:0x1F78770;
	void ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARMeshUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARGeoAnchorComponent
// size:0x0070 (0x0280 - 0x02F0)
class UARGeoAnchorComponent : public UARComponent
{
public:
	struct FARGeoAnchorUpdatePayload                   ReplicatedPayload;                                        // 0x0280(0x0070) (BlueprintVisible, BlueprintReadOnly, Net)

	static void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode)//offset:0x1F78D20;
	void ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)//offset:0x1F78510;
	void ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)//offset:0x13CEB30;
	void ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)//offset:0x13CEB30;
};


// Class AugmentedReality.ARDependencyHandler
// size:0x0000 (0x0028 - 0x0028)
class UARDependencyHandler : public UObject
{
public:

	void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)//offset:0x1F79130;
	void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, EARServicePermissionRequestResult* OutPermissionResult)//offset:0x1F781E0;
	void InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceInstallRequestResult* OutInstallResult)//offset:0x1F78070;
	static class UARDependencyHandler* GetARDependencyHandler()//offset:0x1F77E00;
	void CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceAvailability* OutAvailability)//offset:0x1F77B20;
};


// Class AugmentedReality.ARGeoTrackingSupport
// size:0x0000 (0x0028 - 0x0028)
class UARGeoTrackingSupport : public UObject
{
public:

	static class UARGeoTrackingSupport* GetGeoTrackingSupport()//offset:0x1F77F30;
	EARGeoTrackingStateReason GetGeoTrackingStateReason()//offset:0x1F57FF0;
	EARGeoTrackingState GetGeoTrackingState()//offset:0x1F58020;
	EARGeoTrackingAccuracy GetGeoTrackingAccuracy()//offset:0x1F77F00;
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName)//offset:0x1F77960;
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName)//offset:0x1F777E0;
};


// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// size:0x0050 (0x0050 - 0x00A0)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error)//offset:0x13CEB30;
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)//offset:0x1F77D00;
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject)//offset:0x1F77C70;
};


// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// size:0x0050 (0x0050 - 0x00A0)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailed;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error)//offset:0x13CEB30;
	static class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)//offset:0x1F77E30;
};


// Class AugmentedReality.ARLifeCycleComponent
// size:0x0030 (0x0200 - 0x0230)
class UARLifeCycleComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnARActorToBeDestroyedDelegate;                           // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	void ServerSpawnARActor(class UObject* ComponentClass, const struct FGuid& NATIVEID)//offset:0x1F7BF70;
	void ServerDestroyARActor(class AARActor* Actor)//offset:0x1F7BE60;
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)//offset:0x13CEB30;
	void InstanceARActorSpawnedDelegate__DelegateSignature(class UObject* ComponentClass, const struct FGuid& NATIVEID, class AARActor* SpawnedActor)//offset:0x13CEB30;
};


// Class AugmentedReality.ARLightEstimate
// size:0x0000 (0x0028 - 0x0028)
class UARLightEstimate : public UObject
{
public:
};


// Class AugmentedReality.ARBasicLightEstimate
// size:0x0018 (0x0028 - 0x0040)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientColor;                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)

	float GetAmbientIntensityLumens()//offset:0x1F7B8F0;
	float GetAmbientColorTemperatureKelvin()//offset:0x1F7B8C0;
	struct FLinearColor GetAmbientColor()//offset:0x1F7B880;
};


// Class AugmentedReality.AROriginActor
// size:0x0000 (0x0220 - 0x0220)
class AAROriginActor : public AActor
{
public:
};


// Class AugmentedReality.ARPin
// size:0x00C8 (0x0028 - 0x00F0)
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinnedComponent;                                          // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00A1(0x001F) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnARTrackingStateChanged;                                 // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnARTransformUpdated;                                     // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	EARTrackingState GetTrackingState()//offset:0x1F7BDC0;
	class UARTrackedGeometry* GetTrackedGeometry()//offset:0x1F7BD90;
	class USceneComponent* GetPinnedComponent()//offset:0x1F7BCD0;
	struct FTransform GetLocalToWorldTransform()//offset:0x1F7BC40;
	struct FTransform GetLocalToTrackingTransform()//offset:0x1F7BBE0;
	struct FName GetDebugName()//offset:0x1F7BA40;
	void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)//offset:0x1F7B6F0;
};


// Class AugmentedReality.ARSessionConfig
// size:0x00E0 (0x0030 - 0x0110)
class UARSessionConfig : public UDataAsset
{
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollisionForMeshData;                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateNavMeshForMeshData;                              // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMeshDataForOcclusion;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderMeshDataInWireframe;                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackSceneObjects;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePersonSegmentationForOcclusion;                       // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSceneDepthForOcclusion;                               // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutomaticImageScaleEstimation;                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStandardOnboardingUX;                                 // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARWorldAlignment                                  WorldAlignment;                                           // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARSessionType                                     SessionType;                                              // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARPlaneDetectionMode                              PlaneDetectionMode;                                       // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHorizontalPlaneDetection;                                // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVerticalPlaneDetection;                                  // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoFocus;                                         // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARLightEstimationMode                             LightEstimationMode;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFrameSyncMode                                   FrameSyncMode;                                            // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCameraTracking;                                     // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetTrackedObjects;                                     // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	TArray<class UARCandidateImage*>                   CandidateImages;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumSimultaneousImagesTracked;                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              WorldMapData;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FARVideoFormat                              DesiredVideoFormat;                                       // 0x0080(0x000C) (Edit)
	bool                                               bUseOptimalVideoFormat;                                   // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFaceTrackingDirection                           FaceTrackingDirection;                                    // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                       // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	int                                                MaxNumberOfTrackedFaces;                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                       // 0x0098(0x0010) (ZeroConstructor)
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                            // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARSceneReconstruction                             SceneReconstructionMethod;                                // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	class UARPlaneComponent*                           PlaneComponentClass;                                      // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARPointComponent*                           PointComponentClass;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARFaceComponent*                            FaceComponentClass;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARImageComponent*                           ImageComponentClass;                                      // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARQRCodeComponent*                          QRCodeComponentClass;                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARPoseComponent*                            PoseComponentClass;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAREnvironmentProbeComponent*                EnvironmentProbeComponentClass;                           // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARObjectComponent*                          ObjectComponentClass;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARMeshComponent*                            MeshComponentClass;                                       // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UARGeoAnchorComponent*                       GeoAnchorComponentClass;                                  // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMeshMaterial;                                      // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                             // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	bool ShouldResetTrackedObjects()//offset:0x1F7C9D0;
	bool ShouldResetCameraTracking()//offset:0x1F7C9A0;
	bool ShouldRenderCameraOverlay()//offset:0x1F7C970;
	bool ShouldEnableCameraTracking()//offset:0x1F7C940;
	bool ShouldEnableAutoFocus()//offset:0x1F7C910;
	void SetWorldMapData(TArray<unsigned char> WorldMapData)//offset:0x1F7C820;
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)//offset:0x1F7C7A0;
	void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod)//offset:0x1F7C720;
	void SetResetTrackedObjects(bool bNewValue)//offset:0x1F7C690;
	void SetResetCameraTracking(bool bNewValue)//offset:0x1F7C600;
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)//offset:0x1F7C490;
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)//offset:0x1F7C410;
	void SetEnableAutoFocus(bool bNewValue)//offset:0x1F7C2F0;
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)//offset:0x1F7C250;
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)//offset:0x1F7C1A0;
	TArray<unsigned char> GetWorldMapData()//offset:0x1F7BE20;
	EARWorldAlignment GetWorldAlignment()//offset:0x1F7BDF0;
	EARSessionType GetSessionType()//offset:0x1F7BD60;
	EARSceneReconstruction GetSceneReconstructionMethod()//offset:0x1F7BD30;
	EARPlaneDetectionMode GetPlaneDetectionMode()//offset:0x1F7BD00;
	int GetMaxNumSimultaneousImagesTracked()//offset:0x1F7BCA0;
	EARLightEstimationMode GetLightEstimationMode()//offset:0x1F7BBB0;
	EARFrameSyncMode GetFrameSyncMode()//offset:0x1F7BB80;
	EARFaceTrackingUpdate GetFaceTrackingUpdate()//offset:0x1F7BB50;
	EARFaceTrackingDirection GetFaceTrackingDirection()//offset:0x1F7BB20;
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType()//offset:0x1F7BAF0;
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature()//offset:0x1F7BAC0;
	struct FARVideoFormat GetDesiredVideoFormat()//offset:0x1F7BA80;
	TArray<class UARCandidateObject*> GetCandidateObjectList()//offset:0x1F7B9B0;
	TArray<class UARCandidateImage*> GetCandidateImageList()//offset:0x1F7B920;
	void AddCandidateObject(class UARCandidateObject* CandidateObject)//offset:0x1F7B340;
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage)//offset:0x1F7B2B0;
};


// Class AugmentedReality.ARSharedWorldGameMode
// size:0x0068 (0x0308 - 0x0370)
class AARSharedWorldGameMode : public AGameMode
{
public:
	int                                                BufferSizePerChunk;                                       // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x030C(0x0064) MISSED OFFSET

	void SetPreviewImageData(TArray<unsigned char> ImageData)//offset:0x1F7C510;
	void SetARWorldSharingIsReady()//offset:0x1F7C180;
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData)//offset:0x1F7C090;
	class AARSharedWorldGameState* GetARSharedWorldGameState()//offset:0x1F7B850;
};


// Class AugmentedReality.ARSharedWorldGameState
// size:0x0038 (0x0290 - 0x02C8)
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                         // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              ARWorldData;                                              // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PreviewImageBytesTotal;                                   // 0x02B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesTotal;                                        // 0x02B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviewImageBytesDelivered;                               // 0x02B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesDelivered;                                    // 0x02BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	void K2_OnARWorldMapIsReady()//offset:0x13CEB30;
};


// Class AugmentedReality.ARSharedWorldPlayerController
// size:0x0008 (0x0570 - 0x0578)
class AARSharedWorldPlayerController : public APlayerController
{
public:

	void ServerMarkReadyForReceiving()//offset:0x1F7BF20;
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)//offset:0x1F7B5E0;
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)//offset:0x1F7B4D0;
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)//offset:0x1F7B3D0;
};


// Class AugmentedReality.ARSkyLight
// size:0x0010 (0x0230 - 0x0240)
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)//offset:0x1F7C380;
};


// Class AugmentedReality.ARTexture
// size:0x0020 (0x00D8 - 0x00F8)
class UARTexture : public UTexture
{
public:
	EARTextureType                                     TextureType;                                              // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class AugmentedReality.ARTextureCameraImage
// size:0x0000 (0x00F8 - 0x00F8)
class UARTextureCameraImage : public UARTexture
{
public:
};


// Class AugmentedReality.ARTextureCameraDepth
// size:0x0008 (0x00F8 - 0x0100)
class UARTextureCameraDepth : public UARTexture
{
public:
	EARDepthQuality                                    DepthQuality;                                             // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EARDepthAccuracy                                   DepthAccuracy;                                            // 0x00F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTemporallySmoothed;                                    // 0x00FA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00FB(0x0005) MISSED OFFSET
};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// size:0x0020 (0x0130 - 0x0150)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	EARTextureType                                     TextureType;                                              // 0x0130(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0134(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class AugmentedReality.ARTraceResultDummy
// size:0x0000 (0x0028 - 0x0028)
class UARTraceResultDummy : public UObject
{
public:
};


// Class AugmentedReality.ARTrackedGeometry
// size:0x00D8 (0x0028 - 0x0100)
class UARTrackedGeometry : public UObject
{
public:
	struct FGuid                                       UniqueId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
	class UMRMeshComponent*                            UnderlyingMesh;                                           // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EARObjectClassification                            ObjectClassification;                                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x00B9(0x0017) MISSED OFFSET
	int                                                LastUpdateFrameNumber;                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FName                                       DebugName;                                                // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET

	bool IsTracked()//offset:0x1F81300;
	class UMRMeshComponent* GetUnderlyingMesh()//offset:0x1F81210;
	EARTrackingState GetTrackingState()//offset:0x1F7BDC0;
	EARObjectClassification GetObjectClassification()//offset:0x1F80F90;
	class FString GetName()//offset:0x1F80F50;
	struct FTransform GetLocalToWorldTransform()//offset:0x1F80ED0;
	struct FTransform GetLocalToTrackingTransform()//offset:0x1F7BBE0;
	float GetLastUpdateTimestamp()//offset:0x1F80DE0;
	int GetLastUpdateFrameNumber()//offset:0x1F80DB0;
	struct FName GetDebugName()//offset:0x1F80C10;
};


// Class AugmentedReality.ARPlaneGeometry
// size:0x0030 (0x0100 - 0x0130)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FVector                                     Extent;                                                   // 0x0108(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FVector>                             BoundaryPolygon;                                          // 0x0118(0x0010) (ZeroConstructor)
	class UARPlaneGeometry*                            SubsumedBy;                                               // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)

	class UARPlaneGeometry* GetSubsumedBy()//offset:0x1F811C0;
	EARPlaneOrientation GetOrientation()//offset:0x1F81160;
	struct FVector GetExtent()//offset:0x1F80D20;
	struct FVector GetCenter()//offset:0x1F80BE0;
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace()//offset:0x1F80AA0;
};


// Class AugmentedReality.ARTrackedPoint
// size:0x0000 (0x0100 - 0x0100)
class UARTrackedPoint : public UARTrackedGeometry
{
public:
};


// Class AugmentedReality.ARTrackedImage
// size:0x0010 (0x0100 - 0x0110)
class UARTrackedImage : public UARTrackedGeometry
{
public:
	struct FVector2D                                   EstimatedSize;                                            // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	struct FVector2D GetEstimateSize()//offset:0x1F80CA0;
	class UARCandidateImage* GetDetectedImage()//offset:0x1F80C50;
};


// Class AugmentedReality.ARTrackedQRCode
// size:0x0010 (0x0110 - 0x0120)
class UARTrackedQRCode : public UARTrackedImage
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	int                                                VERSION;                                                  // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};


// Class AugmentedReality.ARFaceGeometry
// size:0x00F0 (0x0100 - 0x01F0)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0100(0x0004) MISSED OFFSET
	bool                                               bIsTracked;                                               // 0x0104(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                              // 0x0108(0x0050)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0158(0x0038) MISSED OFFSET
	struct FTransform                                  LeftEyeTransform;                                         // 0x0190(0x0030) (IsPlainOldData)
	struct FTransform                                  RightEyeTransform;                                        // 0x01C0(0x0030) (IsPlainOldData)

	struct FTransform GetWorldSpaceEyeTransform(EAREye Eye)//offset:0x1F81240;
	struct FTransform GetLocalSpaceEyeTransform(EAREye Eye)//offset:0x1F80E30;
	float GetBlendShapeValue(EARFaceBlendShape BlendShape)//offset:0x1F808C0;
	TMap<EARFaceBlendShape, float> GetBlendShapes()//offset:0x1F80950;
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// size:0x0010 (0x0100 - 0x0110)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)

	struct FVector GetExtent()//offset:0x1F80CE0;
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture()//offset:0x1F80C70;
};


// Class AugmentedReality.ARTrackedObject
// size:0x0000 (0x0100 - 0x0100)
class UARTrackedObject : public UARTrackedGeometry
{
public:

	class UARCandidateObject* GetDetectedObject()//offset:0x1F80C50;
};


// Class AugmentedReality.ARTrackedPose
// size:0x0050 (0x0100 - 0x0150)
class UARTrackedPose : public UARTrackedGeometry
{
public:

	struct FARPose3D GetTrackedPoseData()//offset:0x1F811E0;
};


// Class AugmentedReality.ARMeshGeometry
// size:0x0000 (0x0100 - 0x0100)
class UARMeshGeometry : public UARTrackedGeometry
{
public:

	bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)//offset:0x1F80FB0;
};


// Class AugmentedReality.ARGeoAnchor
// size:0x0010 (0x0100 - 0x0110)
class UARGeoAnchor : public UARTrackedGeometry
{
public:

	float GetLongitude()//offset:0x1F80F30;
	float GetLatitude()//offset:0x1F80E10;
	EARAltitudeSource GetAltitudeSource()//offset:0x1F808A0;
	float GetAltitudeMeters()//offset:0x1F80880;
};


// Class AugmentedReality.ARTrackableNotifyComponent
// size:0x0150 (0x00B0 - 0x0200)
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	struct UEMulticastInlineDelegate                   OnAddTrackedGeometry;                                     // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedGeometry;                                  // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedGeometry;                                  // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddTrackedPlane;                                        // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedPlane;                                     // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedPlane;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddTrackedPoint;                                        // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedPoint;                                     // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedPoint;                                     // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddTrackedImage;                                        // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedImage;                                     // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedImage;                                     // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddTrackedFace;                                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedFace;                                      // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedFace;                                      // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddTrackedEnvProbe;                                     // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedEnvProbe;                                  // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedEnvProbe;                                  // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddTrackedObject;                                       // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUpdateTrackedObject;                                    // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRemoveTrackedObject;                                    // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
};


// Class AugmentedReality.ARTypesDummyClass
// size:0x0000 (0x0028 - 0x0028)
class UARTypesDummyClass : public UObject
{
public:
};


// Class AugmentedReality.ARCandidateImage
// size:0x0028 (0x0030 - 0x0058)
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendlyName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EARCandidateImageOrientation                       Orientation;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	float GetPhysicalWidth()//offset:0x1F811A0;
	float GetPhysicalHeight()//offset:0x1F81180;
	EARCandidateImageOrientation GetOrientation()//offset:0xF23B20;
	class FString GetFriendlyName()//offset:0x1F80D50;
	class UTexture2D* GetCandidateTexture()//offset:0x1F80BC0;
};


// Class AugmentedReality.ARCandidateObject
// size:0x0040 (0x0030 - 0x0070)
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      FriendlyName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x0050(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	void SetFriendlyName(const class FString& NewName)//offset:0x1F81480;
	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject)//offset:0x1F813D0;
	void SetBoundingBox(const struct FBox& InBoundingBox)//offset:0x1F81330;
	class FString GetFriendlyName()//offset:0x1F80D80;
	TArray<unsigned char> GetCandidateObjectData()//offset:0x1F80B90;
	struct FBox GetBoundingBox()//offset:0x1F80B60;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
