                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AIModule_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIModule.AIController
// size:0x0090 (0x0298 - 0x0328)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0298(0x0038) MISSED OFFSET
	unsigned char                                      bStartAILogicOnPossess;                                   // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopAILogicOnUnposses;                                   // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLOSflag;                                                 // 0x02D0(0x0001)
	unsigned char                                      bSkipExtraLOSChecks;                                      // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowStrafe;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWantsPlayerState;                                        // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSetControlRotationFromPawnOrientation;                   // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x02D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x02E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationQueryFilter*                      DefaultNavigationFilterClass;                             // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct UEMulticastInlineDelegate                   ReceiveMoveCompleted;                                     // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)//offset:0x3113FE0;
	void UnclaimTaskResource(class UGameplayTaskResource* ResourceClass)//offset:0x3113D90;
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent)//offset:0x3113880;
	void SetMoveBlockDetection(bool bEnable)//offset:0x31137F0;
	bool RunBehaviorTree(class UBehaviorTree* BTAsset)//offset:0x3113600;
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)//offset:0x13CEB30;
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)//offset:0x31132C0;
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath)//offset:0x3113030;
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath)//offset:0x3112DF0;
	void K2_SetFocus(class AActor* NewFocus)//offset:0x3112C50;
	void K2_SetFocalPoint(const struct FVector& FP)//offset:0x3112BC0;
	void K2_ClearFocus()//offset:0x3112BA0;
	bool HasPartialPath()//offset:0x31129C0;
	class UPathFollowingComponent* GetPathFollowingComponent()//offset:0x1043290;
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus()//offset:0x3112670;
	struct FVector GetImmediateMoveDestination()//offset:0x3112540;
	class AActor* GetFocusActor()//offset:0x3112510;
	struct FVector GetFocalPointOnActor(class AActor* Actor)//offset:0x3112460;
	struct FVector GetFocalPoint()//offset:0x3112420;
	class UAIPerceptionComponent* GetAIPerceptionComponent()//offset:0x3111F80;
	void ClaimTaskResource(class UGameplayTaskResource* ResourceClass)//offset:0x3111C60;
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// size:0x0040 (0x0028 - 0x0068)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult)//offset:0x3113390;
};


// Class AIModule.AIBlueprintHelperLibrary
// size:0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)//offset:0x3113E20;
	static class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class APawn* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner)//offset:0x3113B60;
	static void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)//offset:0x3113AA0;
	static void SimpleMoveToActor(class AController* Controller, class AActor* Goal)//offset:0x31139E0;
	static void SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess)//offset:0x31136A0;
	static void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)//offset:0x3112CE0;
	static bool IsValidAIRotation(const struct FRotator& Rotation)//offset:0x3112B10;
	static bool IsValidAILocation(const struct FVector& Location)//offset:0x3112A80;
	static bool IsValidAIDirection(const struct FVector& DirectionVector)//offset:0x31129F0;
	static int GetNextNavLinkIndex(class AController* Controller)//offset:0x31126A0;
	static TArray<struct FVector> GetCurrentPathPoints(class AController* Controller)//offset:0x3112250;
	static int GetCurrentPathIndex(class AController* Controller)//offset:0x31121C0;
	static class UNavigationPath* GetCurrentPath(class AController* Controller)//offset:0x3112130;
	static class UBlackboardComponent* GetBlackboard(class AActor* Target)//offset:0x31120A0;
	static class AAIController* GetAIController(class AActor* ControlledActor)//offset:0x3111EF0;
	static class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)//offset:0x3111CF0;
};


// Class AIModule.AIDataProvider
// size:0x0000 (0x0028 - 0x0028)
class UAIDataProvider : public UObject
{
public:
};


// Class AIModule.AIDataProvider_QueryParams
// size:0x0018 (0x0028 - 0x0040)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};


// Class AIModule.AIDataProvider_Random
// size:0x0010 (0x0040 - 0x0050)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Min;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger;                                                 // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};


// Class AIModule.AIHotSpotManager
// size:0x0000 (0x0028 - 0x0028)
class UAIHotSpotManager : public UObject
{
public:
};


// Class AIModule.AIPerceptionComponent
// size:0x00E0 (0x00B0 - 0x0190)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x00B0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UAISense*                                    DominantSense;                                            // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00E0(0x0080) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPerceptionUpdated;                                      // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTargetPerceptionUpdated;                                // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTargetPerceptionInfoUpdated;                            // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void SetSenseEnabled(class UAISense* SenseClass, bool bEnable)//offset:0x3113910;
	void RequestStimuliListenerUpdate()//offset:0x31135E0;
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)//offset:0x3113460;
	void GetPerceivedHostileActorsBySense(class UAISense* SenseToUse, TArray<class AActor*>* OutActors)//offset:0x31128D0;
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors)//offset:0x3112820;
	void GetPerceivedActors(class UAISense* SenseToUse, TArray<class AActor*>* OutActors)//offset:0x3112730;
	void GetKnownPerceivedActors(class UAISense* SenseToUse, TArray<class AActor*>* OutActors)//offset:0x3112580;
	void GetCurrentlyPerceivedActors(class UAISense* SenseToUse, TArray<class AActor*>* OutActors)//offset:0x3112330;
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)//offset:0x3111FA0;
	void ForgetAll()//offset:0x3111ED0;
};


// Class AIModule.AIPerceptionListenerInterface
// size:0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:
};


// Class AIModule.AIPerceptionStimuliSourceComponent
// size:0x0018 (0x00B0 - 0x00C8)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<class UAISense*>                            RegisterAsSourceForSenses;                                // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	void UnregisterFromSense(class UAISense* SenseClass)//offset:0x3113F50;
	void UnregisterFromPerceptionSystem()//offset:0x3113F30;
	void RegisterWithPerceptionSystem()//offset:0x31135C0;
	void RegisterForSense(class UAISense* SenseClass)//offset:0x3113530;
};


// Class AIModule.AISubsystem
// size:0x0010 (0x0028 - 0x0038)
class UAISubsystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAISystem*                                   AISystem;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class AIModule.AIPerceptionSystem
// size:0x00F8 (0x0038 - 0x0130)
class UAIPerceptionSystem : public UAISubsystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x0088(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x94];                                      // 0x009C(0x0094) MISSED OFFSET

	static void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent)//offset:0x3118820;
	void ReportEvent(class UAISenseEvent* PerceptionEvent)//offset:0x31185B0;
	static bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UAISense* Sense, class AActor* Target)//offset:0x31182C0;
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)//offset:0x31181F0;
	static class UAISense* GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus)//offset:0x31180B0;
};


// Class AIModule.AIResourceInterface
// size:0x0000 (0x0028 - 0x0028)
class UAIResourceInterface : public UInterface
{
public:
};


// Class AIModule.AIResource_Movement
// size:0x0000 (0x0038 - 0x0038)
class UAIResource_Movement : public UGameplayTaskResource
{
public:
};


// Class AIModule.AIResource_Logic
// size:0x0000 (0x0038 - 0x0038)
class UAIResource_Logic : public UGameplayTaskResource
{
public:
};


// Class AIModule.AISense
// size:0x0058 (0x0028 - 0x0080)
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData)
	EAISenseNotifyType                                 NotifyType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification;                                // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources;                           // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};


// Class AIModule.AISense_Blueprint
// size:0x0028 (0x0080 - 0x00A8)
class UAISense_Blueprint : public UAISense
{
public:
	class UUserDefinedStruct*                          ListenerDataType;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0098(0x0010) (ZeroConstructor)

	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)//offset:0x13CEB30;
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)//offset:0x13CEB30;
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)//offset:0x13CEB30;
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)//offset:0x13CEB30;
	void K2_OnNewPawn(class APawn* NewPawn)//offset:0x13CEB30;
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)//offset:0x3118000;
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors)//offset:0x3117F50;
};


// Class AIModule.AISense_Damage
// size:0x0010 (0x0080 - 0x0090)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)//offset:0x31183C0;
};


// Class AIModule.AISense_Hearing
// size:0x0068 (0x0080 - 0x00E8)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0080(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0094(0x0054) MISSED OFFSET

	static void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag)//offset:0x3118640;
};


// Class AIModule.AISense_Prediction
// size:0x0010 (0x0080 - 0x0090)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)

	static void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)//offset:0x31189F0;
	static void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)//offset:0x31188E0;
};


// Class AIModule.AISense_Sight
// size:0x00F0 (0x0080 - 0x0170)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0080(0x00C8) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x014C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxTimeSlicePerTick;                                      // 0x0150(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x0158(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x0160(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x0164(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};


// Class AIModule.AISense_Team
// size:0x0010 (0x0080 - 0x0090)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)
};


// Class AIModule.AISense_Touch
// size:0x0010 (0x0080 - 0x0090)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor)
};


// Class AIModule.AISenseBlueprintListener
// size:0x0000 (0x0108 - 0x0108)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:
};


// Class AIModule.AISenseConfig
// size:0x0020 (0x0028 - 0x0048)
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET
};


// Class AIModule.AISenseConfig_Blueprint
// size:0x0008 (0x0048 - 0x0050)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UAISense_Blueprint*                          Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
};


// Class AIModule.AISenseConfig_Damage
// size:0x0008 (0x0048 - 0x0050)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UAISense_Damage*                             Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
};


// Class AIModule.AISenseConfig_Hearing
// size:0x0018 (0x0048 - 0x0060)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UAISense_Hearing*                            Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing;                                           // 0x0058(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.AISenseConfig_Prediction
// size:0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:
};


// Class AIModule.AISenseConfig_Sight
// size:0x0028 (0x0048 - 0x0070)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UAISense_Sight*                              Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PointOfViewBackwardOffset;                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              NearClippingRadius;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              OmniRadius;                                               // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.AISenseConfig_Team
// size:0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Team : public UAISenseConfig
{
public:
};


// Class AIModule.AISenseConfig_Touch
// size:0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:
};


// Class AIModule.AISenseEvent
// size:0x0000 (0x0028 - 0x0028)
class UAISenseEvent : public UObject
{
public:
};


// Class AIModule.AISenseEvent_Damage
// size:0x0030 (0x0028 - 0x0058)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)
};


// Class AIModule.AISenseEvent_Hearing
// size:0x0030 (0x0028 - 0x0058)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)
};


// Class AIModule.AISightTargetInterface
// size:0x0000 (0x0028 - 0x0028)
class UAISightTargetInterface : public UInterface
{
public:
};


// Class AIModule.AISystem
// size:0x00D8 (0x0058 - 0x0130)
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                // 0x0058(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FSoftClassPath                              HotSpotManagerClassName;                                  // 0x0070(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0094(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x0095(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x0096(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x0097(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0098(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0099(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bForgetStaleActors;                                       // 0x009A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAddBlackboardSelfKey;                                    // 0x009B(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             // 0x009C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x00B8(0x0010) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00D8(0x0058) MISSED OFFSET

	void AILoggingVerbose()//offset:0xF54690;
	void AIIgnorePlayers()//offset:0x25CEB10;
};


// Class AIModule.AITask
// size:0x0008 (0x0068 - 0x0070)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.AITask_LockLogic
// size:0x0000 (0x0070 - 0x0070)
class UAITask_LockLogic : public UAITask
{
public:
};


// Class AIModule.AITask_MoveTo
// size:0x00A0 (0x0070 - 0x0110)
class UAITask_MoveTo : public UAITask
{
public:
	struct UEMulticastInlineDelegate                   OnRequestFailed;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMoveFinished;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIMoveRequest                              MoveRequest;                                              // 0x0090(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation)//offset:0x3117C50;
};


// Class AIModule.AITask_RunEQS
// size:0x0078 (0x0070 - 0x00E8)
class UAITask_RunEQS : public UAITask
{
public:

	static class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate)//offset:0x3118B00;
};


// Class AIModule.BehaviorTree
// size:0x0040 (0x0028 - 0x0068)
class UBehaviorTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UBTCompositeNode*                            RootNode;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};


// Class AIModule.BrainComponent
// size:0x0058 (0x00B0 - 0x0108)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x00C8(0x0040) MISSED OFFSET

	void StopLogic(const class FString& Reason)//offset:0x311D9F0;
	void StartLogic()//offset:0xF4EE00;
	void RestartLogic()//offset:0xF38D40;
	bool IsRunning()//offset:0x311CF50;
	bool IsPaused()//offset:0x311CF20;
};


// Class AIModule.BehaviorTreeComponent
// size:0x0190 (0x0108 - 0x0298)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x0128(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0138(0x0140) MISSED OFFSET
	class UBehaviorTree*                               DefaultBehaviorTreeAsset;                                 // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0280(0x0018) MISSED OFFSET

	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)//offset:0x311D020;
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)//offset:0x311C780;
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)//offset:0x311C3C0;
};


// Class AIModule.BehaviorTreeManager
// size:0x0028 (0x0028 - 0x0050)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor)
};


// Class AIModule.BehaviorTreeTypes
// size:0x0000 (0x0028 - 0x0028)
class UBehaviorTreeTypes : public UObject
{
public:
};


// Class AIModule.BlackboardAssetProvider
// size:0x0000 (0x0028 - 0x0028)
class UBlackboardAssetProvider : public UInterface
{
public:

	class UBlackboardData* GetBlackboardAsset()//offset:0x311C570;
};


// Class AIModule.BlackboardComponent
// size:0x0108 (0x00B0 - 0x01B8)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             DefaultBlackboardAsset;                                   // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x00E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x00F8(0x00C0) MISSED OFFSET

	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)//offset:0x311D900;
	void SetValueAsString(const struct FName& KeyName, const class FString& StringValue)//offset:0x311D7C0;
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)//offset:0x311D6D0;
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)//offset:0x311D600;
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)//offset:0x311D530;
	void SetValueAsInt(const struct FName& KeyName, int IntValue)//offset:0x311D460;
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue)//offset:0x311D380;
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)//offset:0x311D2A0;
	void SetValueAsClass(const struct FName& KeyName, class UObject* ClassValue)//offset:0x311D1D0;
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue)//offset:0x311D0F0;
	bool IsVectorValueSet(const struct FName& KeyName)//offset:0x311CF80;
	struct FVector GetValueAsVector(const struct FName& KeyName)//offset:0x311CE10;
	class FString GetValueAsString(const struct FName& KeyName)//offset:0x311CD30;
	struct FRotator GetValueAsRotator(const struct FName& KeyName)//offset:0x311CC80;
	class UObject* GetValueAsObject(const struct FName& KeyName)//offset:0x311CBE0;
	struct FName GetValueAsName(const struct FName& KeyName)//offset:0x311CB40;
	int GetValueAsInt(const struct FName& KeyName)//offset:0x311CAA0;
	float GetValueAsFloat(const struct FName& KeyName)//offset:0x311CA00;
	unsigned char GetValueAsEnum(const struct FName& KeyName)//offset:0x311C960;
	class UObject* GetValueAsClass(const struct FName& KeyName)//offset:0x311C8C0;
	bool GetValueAsBool(const struct FName& KeyName)//offset:0x311C820;
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)//offset:0x311C690;
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation)//offset:0x311C5A0;
	void ClearValue(const struct FName& KeyName)//offset:0x311C4E0;
};


// Class AIModule.BlackboardData
// size:0x0020 (0x0030 - 0x0050)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys;                                     // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};


// Class AIModule.BlackboardKeyType
// size:0x0008 (0x0028 - 0x0030)
class UBlackboardKeyType : public UObject
{
public:
};


// Class AIModule.BlackboardKeyType_Bool
// size:0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:
};


// Class AIModule.BlackboardKeyType_Class
// size:0x0008 (0x0030 - 0x0038)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UObject*                                     BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.BlackboardKeyType_Enum
// size:0x0020 (0x0030 - 0x0050)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      EnumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid;                                         // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};


// Class AIModule.BlackboardKeyType_Float
// size:0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:
};


// Class AIModule.BlackboardKeyType_Int
// size:0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:
};


// Class AIModule.BlackboardKeyType_Name
// size:0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:
};


// Class AIModule.BlackboardKeyType_NativeEnum
// size:0x0018 (0x0030 - 0x0048)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	class FString                                      EnumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BlackboardKeyType_Object
// size:0x0008 (0x0030 - 0x0038)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UObject*                                     BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.BlackboardKeyType_Rotator
// size:0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:
};


// Class AIModule.BlackboardKeyType_String
// size:0x0010 (0x0030 - 0x0040)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	class FString                                      StringValue;                                              // 0x0030(0x0010) (ZeroConstructor)
};


// Class AIModule.BlackboardKeyType_Vector
// size:0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:
};


// Class AIModule.BTNode
// size:0x0030 (0x0028 - 0x0058)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class FString                                      NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};


// Class AIModule.BTAuxiliaryNode
// size:0x0008 (0x0058 - 0x0060)
class UBTAuxiliaryNode : public UBTNode
{
public:
};


// Class AIModule.BTCompositeNode
// size:0x0038 (0x0058 - 0x0090)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	unsigned char                                      bApplyDecoratorScope;                                     // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};


// Class AIModule.BTComposite_Selector
// size:0x0000 (0x0090 - 0x0090)
class UBTComposite_Selector : public UBTCompositeNode
{
public:
};


// Class AIModule.BTComposite_Sequence
// size:0x0000 (0x0090 - 0x0090)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:
};


// Class AIModule.BTComposite_SimpleParallel
// size:0x0008 (0x0090 - 0x0098)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};


// Class AIModule.BTDecorator
// size:0x0008 (0x0060 - 0x0068)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      bInverseCondition;                                        // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};


// Class AIModule.BTDecorator_BlackboardBase
// size:0x0028 (0x0068 - 0x0090)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0068(0x0028) (Edit)
};


// Class AIModule.BTDecorator_Blackboard
// size:0x0030 (0x0090 - 0x00C0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      StringValue;                                              // 0x0098(0x0010) (Edit, ZeroConstructor)
	class FString                                      CachedDescription;                                        // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
};


// Class AIModule.BTDecorator_BlueprintBase
// size:0x0038 (0x0068 - 0x00A0)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails;                                     // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges;                     // 0x0098(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB;                                           // 0x0098(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveObserverDeactivated(class AActor* OwnerActor)//offset:0x13CEB30;
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveObserverActivated(class AActor* OwnerActor)//offset:0x13CEB30;
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveExecutionStart(class AActor* OwnerActor)//offset:0x13CEB30;
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)//offset:0x13CEB30;
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult)//offset:0x13CEB30;
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	bool PerformConditionCheck(class AActor* OwnerActor)//offset:0x13CEB30;
	bool IsDecoratorObserverActive()//offset:0x311CEF0;
	bool IsDecoratorExecutionActive()//offset:0x311CEC0;
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// size:0x0060 (0x0068 - 0x00C8)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0068(0x0028) (Edit)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0098(0x0020) (Edit)
	class FString                                      CachedDescription;                                        // 0x00B8(0x0010) (ZeroConstructor)
};


// Class AIModule.BTDecorator_CompareBBEntries
// size:0x0058 (0x0068 - 0x00C0)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0098(0x0028) (Edit)
};


// Class AIModule.BTDecorator_ConditionalLoop
// size:0x0000 (0x00C0 - 0x00C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:
};


// Class AIModule.BTDecorator_ConeCheck
// size:0x0088 (0x0068 - 0x00F0)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00C0(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};


// Class AIModule.BTDecorator_Cooldown
// size:0x0008 (0x0068 - 0x0070)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CooldownTime;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};


// Class AIModule.BTDecorator_DoesPathExist
// size:0x0060 (0x0068 - 0x00C8)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0068(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0090(0x0028) (Edit)
	unsigned char                                      bUseSelf;                                                 // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UNavigationQueryFilter*                      FilterClass;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTDecorator_ForceSuccess
// size:0x0000 (0x0068 - 0x0068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:
};


// Class AIModule.BTDecorator_IsAtLocation
// size:0x0048 (0x0090 - 0x00D8)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x0098(0x0038) (Edit)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	unsigned char                                      bUseParametrizedRadius;                                   // 0x00D4(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation;                                 // 0x00D4(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest;                                    // 0x00D4(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// size:0x0008 (0x0090 - 0x0098)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UObject*                                     TestClass;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTDecorator_KeepInCone
// size:0x0060 (0x0068 - 0x00C8)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin;                                         // 0x00C0(0x0001)
	unsigned char                                      bUseSelfAsObserved;                                       // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};


// Class AIModule.BTDecorator_Loop
// size:0x0010 (0x0068 - 0x0078)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};


// Class AIModule.BTDecorator_ReachedMoveGoal
// size:0x0000 (0x0068 - 0x0068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:
};


// Class AIModule.BTDecorator_SetTagCooldown
// size:0x0010 (0x0068 - 0x0078)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};


// Class AIModule.BTDecorator_TagCooldown
// size:0x0010 (0x0068 - 0x0078)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
};


// Class AIModule.BTDecorator_TimeLimit
// size:0x0008 (0x0068 - 0x0070)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};


// Class AIModule.BTFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void StopUsingExternalEvent(class UBTNode* NodeOwner)//offset:0xF7BB40;
	static void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)//offset:0x2EFC8C0;
	static void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)//offset:0x3121EA0;
	static void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value)//offset:0x3121D10;
	static void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)//offset:0x3121BC0;
	static void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)//offset:0x3121A80;
	static void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value)//offset:0x3121940;
	static void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value)//offset:0x3121800;
	static void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)//offset:0x31216B0;
	static void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)//offset:0x3121570;
	static void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)//offset:0x3121430;
	static void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)//offset:0x31212F0;
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner)//offset:0x31211D0;
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner)//offset:0x3121140;
	static struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3121030;
	static class FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120EF0;
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120DE0;
	static class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120CE0;
	static struct FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120BD0;
	static int GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120AD0;
	static float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x31209D0;
	static unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x31208D0;
	static class UObject* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x31207D0;
	static bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x31206D0;
	static class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x31205D0;
	static void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120430;
	static void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)//offset:0x3120430;
};


// Class AIModule.BTService
// size:0x0010 (0x0060 - 0x0070)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart;                                   // 0x0068(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation;                            // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};


// Class AIModule.BTService_BlackboardBase
// size:0x0028 (0x0070 - 0x0098)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)
};


// Class AIModule.BTService_BlueprintBase
// size:0x0028 (0x0070 - 0x0098)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails;                                     // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails;                                        // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveSearchStart(class AActor* OwnerActor)//offset:0x13CEB30;
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveDeactivation(class AActor* OwnerActor)//offset:0x13CEB30;
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveActivation(class AActor* OwnerActor)//offset:0x13CEB30;
	bool IsServiceActive()//offset:0x3121260;
};


// Class AIModule.BTService_DefaultFocus
// size:0x0008 (0x0098 - 0x00A0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};


// Class AIModule.BTService_RunEQS
// size:0x0058 (0x0098 - 0x00F0)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0098(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
};


// Class AIModule.BTTaskNode
// size:0x0018 (0x0058 - 0x0070)
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      bIgnoreRestartSelf;                                       // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};


// Class AIModule.BTTask_BlackboardBase
// size:0x0028 (0x0070 - 0x0098)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)
};


// Class AIModule.BTTask_BlueprintBase
// size:0x0038 (0x0070 - 0x00A8)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FIntervalCountdown                          TickInterval;                                             // 0x0080(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails;                                     // 0x00A0(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)//offset:0x3122080;
	void SetFinishOnMessage(const struct FName& MessageName)//offset:0x3121FF0;
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveExecute(class AActor* OwnerActor)//offset:0x13CEB30;
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)//offset:0x13CEB30;
	void ReceiveAbort(class AActor* OwnerActor)//offset:0x13CEB30;
	bool IsTaskExecuting()//offset:0x31212C0;
	bool IsTaskAborting()//offset:0x3121290;
	void FinishExecute(bool bSuccess)//offset:0x3120540;
	void FinishAbort()//offset:0x3120520;
};


// Class AIModule.BTTask_FinishWithResult
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	TEnumAsByte<EBTNodeResult>                         Result;                                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};


// Class AIModule.BTTask_GameplayTaskBase
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask;                                     // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};


// Class AIModule.BTTask_MakeNoise
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};


// Class AIModule.BTTask_MoveTo
// size:0x0018 (0x0098 - 0x00B0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UNavigationQueryFilter*                      FilterClass;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue;                                  // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowStrafe;                                             // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath;                                        // 0x00AC(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal;                                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation;                                     // 0x00AC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesAgentRadius;                            // 0x00AC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesGoalRadius;                             // 0x00AC(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap;                                           // 0x00AC(0x0001) (Edit, DisableEditOnTemplate, EditConst)
	unsigned char                                      bStopOnOverlapNeedsUpdate;                                // 0x00AD(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
};


// Class AIModule.BTTask_MoveDirectlyToward
// size:0x0008 (0x00B0 - 0x00B8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange;                   // 0x00B0(0x0001)
	unsigned char                                      bProjectVectorGoalToNavigation;                           // 0x00B0(0x0001)
	unsigned char                                      bUpdatedDeprecatedProperties;                             // 0x00B0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};


// Class AIModule.BTTask_PawnActionBase
// size:0x0000 (0x0070 - 0x0070)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:
};


// Class AIModule.BTTask_PlayAnimation
// size:0x0040 (0x0070 - 0x00B0)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping;                                                 // 0x0078(0x0001) (Edit)
	unsigned char                                      bNonBlocking;                                             // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0090(0x0020) MISSED OFFSET
};


// Class AIModule.BTTask_PlaySound
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTTask_PushPawnAction
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class AIModule.BTTask_RotateToFaceBBEntry
// size:0x0008 (0x0098 - 0x00A0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};


// Class AIModule.BTTask_RunBehavior
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTTask_RunBehaviorDynamic
// size:0x0018 (0x0070 - 0x0088)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0070(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTTask_RunEQSQuery
// size:0x00B8 (0x0098 - 0x0150)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x00C8(0x0028) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00F8(0x0048) (Edit)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET
};


// Class AIModule.BTTask_SetTagCooldown
// size:0x0010 (0x0070 - 0x0080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0070(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTTask_Wait
// size:0x0008 (0x0070 - 0x0078)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.BTTask_WaitBlackboardTime
// size:0x0028 (0x0078 - 0x00A0)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (Edit)
};


// Class AIModule.CrowdAgentInterface
// size:0x0000 (0x0028 - 0x0028)
class UCrowdAgentInterface : public UInterface
{
public:
};


// Class AIModule.PathFollowingComponent
// size:0x01A0 (0x00B0 - 0x0250)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x150];                                     // 0x0100(0x0150) MISSED OFFSET

	void OnNavDataRegistered(class ANavigationData* NavData)//offset:0x312C620;
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)//offset:0x312C480;
	struct FVector GetPathDestination()//offset:0x312C070;
	TEnumAsByte<EPathFollowingAction> GetPathActionType()//offset:0x312C040;
};


// Class AIModule.CrowdFollowingComponent
// size:0x0048 (0x0250 - 0x0298)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0250(0x0018) MISSED OFFSET
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x0268(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0274(0x0024) MISSED OFFSET

	void SuspendCrowdSteering(bool bSuspend)//offset:0x3125590;
};


// Class AIModule.CrowdManager
// size:0x00C8 (0x0028 - 0x00F0)
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                             MyNavData;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOffsetRadiusMultiplier;                               // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bResolveCollisions;                                       // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x7F];                                      // 0x0071(0x007F) MISSED OFFSET
};


// Class AIModule.DetourCrowdAIController
// size:0x0000 (0x0328 - 0x0328)
class ADetourCrowdAIController : public AAIController
{
public:
};


// Class AIModule.EnvQuery
// size:0x0018 (0x0030 - 0x0048)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0038(0x0010) (ZeroConstructor)
};


// Class AIModule.EnvQueryContext
// size:0x0000 (0x0028 - 0x0028)
class UEnvQueryContext : public UObject
{
public:
};


// Class AIModule.EnvQueryContext_BlueprintBase
// size:0x0008 (0x0028 - 0x0030)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)//offset:0x13CEB30;
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)//offset:0x13CEB30;
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)//offset:0x13CEB30;
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)//offset:0x13CEB30;
};


// Class AIModule.EnvQueryContext_Item
// size:0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:
};


// Class AIModule.EnvQueryContext_Querier
// size:0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:
};


// Class AIModule.EnvQueryDebugHelpers
// size:0x0000 (0x0028 - 0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:
};


// Class AIModule.EnvQueryNode
// size:0x0008 (0x0028 - 0x0030)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};


// Class AIModule.EnvQueryGenerator
// size:0x0020 (0x0030 - 0x0050)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	class FString                                      OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnvQueryItemType*                           ItemType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests;                                           // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// size:0x0080 (0x0050 - 0x00D0)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class AActor*                                      SearchedActorClass;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0090(0x0038) (Edit, DisableEditOnInstance)
	class UEnvQueryContext*                            SearchCenter;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// size:0x0030 (0x0050 - 0x0080)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0050(0x0028) (Edit)
	class UEnvQueryContext*                            Context;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQueryItemType*                           GeneratedItemType;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	class UObject* GetQuerier()//offset:0x3125560;
	void DoItemGeneration(TArray<struct FVector> ContextLocations)//offset:0x13CEB30;
	void AddGeneratedVector(const struct FVector& GeneratedVector)//offset:0x31254D0;
	void AddGeneratedActor(class AActor* GeneratedActor)//offset:0x3125440;
};


// Class AIModule.EnvQueryGenerator_Composite
// size:0x0020 (0x0050 - 0x0070)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAllowDifferentItemTypes;                                 // 0x0060(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHasMatchingItemType;                                     // 0x0060(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UEnvQueryItemType*                           ForcedItemType;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// size:0x0030 (0x0050 - 0x0080)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance)
};


// Class AIModule.EnvQueryGenerator_Cone
// size:0x00F0 (0x0080 - 0x0170)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0080(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x00B8(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00F0(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	class UEnvQueryContext*                            CenterActor;                                              // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation;                                  // 0x0168(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// size:0x0008 (0x0050 - 0x0058)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UEnvQueryContext*                            QueryContext;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.EnvQueryGenerator_Donut
// size:0x0150 (0x0080 - 0x01D0)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0080(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B8(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00F0(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0160(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0180(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	class UEnvQueryContext*                            Center;                                                   // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc;                                               // 0x01C8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
};


// Class AIModule.EnvQueryGenerator_OnCircle
// size:0x0190 (0x0080 - 0x0210)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0080(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B8(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00F0(0x0038) (Edit, DisableEditOnInstance)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0130(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0150(0x0038) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class UEnvQueryContext*                            CircleCenter;                                             // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x01A0(0x0038) (Edit)
	struct FEnvTraceData                               TraceData;                                                // 0x01D8(0x0030) (Edit)
	unsigned char                                      bDefineArc;                                               // 0x0208(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// size:0x0078 (0x0080 - 0x00F8)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0080(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B8(0x0038) (Edit, DisableEditOnInstance)
	class UEnvQueryContext*                            GenerateAround;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.EnvQueryGenerator_PathingGrid
// size:0x0078 (0x00F8 - 0x0170)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00F8(0x0038) (Edit, DisableEditOnInstance)
	class UNavigationQueryFilter*                      NavigationFilter;                                         // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0138(0x0038) (Edit, DisableEditOnInstance)
};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// size:0x0050 (0x0028 - 0x0078)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
	class UEnvQueryItemType*                           ItemType;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnQueryFinishedEvent;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void SetNamedParam(const struct FName& ParamName, float Value)//offset:0x3129170;
	TArray<struct FVector> GetResultsAsLocations()//offset:0x3128F60;
	TArray<class AActor*> GetResultsAsActors()//offset:0x3128EE0;
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations)//offset:0x3128E20;
	bool GetQueryResultsAsActors(TArray<class AActor*>* ResultActors)//offset:0x3128D60;
	float GetItemScore(int ItemIndex)//offset:0x3128CC0;
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)//offset:0x13CEB30;
};


// Class AIModule.EnvQueryItemType
// size:0x0008 (0x0028 - 0x0030)
class UEnvQueryItemType : public UObject
{
public:
};


// Class AIModule.EnvQueryItemType_VectorBase
// size:0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:
};


// Class AIModule.EnvQueryItemType_ActorBase
// size:0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:
};


// Class AIModule.EnvQueryItemType_Actor
// size:0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:
};


// Class AIModule.EnvQueryItemType_Direction
// size:0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:
};


// Class AIModule.EnvQueryItemType_Point
// size:0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:
};


// Class AIModule.EnvQueryManager
// size:0x0108 (0x0038 - 0x0140)
class UEnvQueryManager : public UAISubsystem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x00B8(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00D8(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x0138(0x0008) (ZeroConstructor, Config, IsPlainOldData)

	static class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UEnvQueryInstanceBlueprintWrapper* WrapperClass)//offset:0x3128FE0;
};


// Class AIModule.EnvQueryOption
// size:0x0018 (0x0028 - 0x0040)
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0030(0x0010) (ZeroConstructor)
};


// Class AIModule.EnvQueryTest
// size:0x01C8 (0x0030 - 0x01F8)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class FString                                      TestComment;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x0050(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0088(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x00C0(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00F8(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00FB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEQSNormalizationType                              NormalizationType;                                        // 0x00FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x0100(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x0138(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x0170(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x01A8(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x01E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01E1(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues;                                       // 0x01F0(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
};


// Class AIModule.EnvQueryTest_Distance
// size:0x0010 (0x01F8 - 0x0208)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class UEnvQueryContext*                            DistanceTo;                                               // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.EnvQueryTest_Dot
// size:0x0048 (0x01F8 - 0x0240)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01F8(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x0218(0x0020) (Edit, DisableEditOnInstance)
	EEnvTestDot                                        TestMode;                                                 // 0x0238(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x0239(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
};


// Class AIModule.EnvQueryTest_GameplayTags
// size:0x0070 (0x01F8 - 0x0268)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x01F8(0x0048) (Edit)
	bool                                               bUpdatedToUseQuery;                                       // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0241(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0248(0x0020)
};


// Class AIModule.EnvQueryTest_Overlap
// size:0x0020 (0x01F8 - 0x0218)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                              // 0x01F8(0x0020) (Edit, DisableEditOnInstance)
};


// Class AIModule.EnvQueryTest_Pathfinding
// size:0x0088 (0x01F8 - 0x0280)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class UEnvQueryContext*                            Context;                                                  // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x0208(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x0240(0x0038) (Edit, DisableEditOnInstance)
	class UNavigationQueryFilter*                      FilterClass;                                              // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.EnvQueryTest_PathfindingBatch
// size:0x0038 (0x0280 - 0x02B8)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0280(0x0038) (Edit, DisableEditOnInstance)
};


// Class AIModule.EnvQueryTest_Project
// size:0x0030 (0x01F8 - 0x0228)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x01F8(0x0030) (Edit, DisableEditOnInstance)
};


// Class AIModule.EnvQueryTest_Random
// size:0x0000 (0x01F8 - 0x01F8)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:
};


// Class AIModule.EnvQueryTest_Trace
// size:0x00E0 (0x01F8 - 0x02D8)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01F8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x0228(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0260(0x0038) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0298(0x0038) (Edit, DisableEditOnInstance)
	class UEnvQueryContext*                            Context;                                                  // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class AIModule.EnvQueryTest_Volume
// size:0x0018 (0x01F8 - 0x0210)
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	class UEnvQueryContext*                            VolumeContext;                                            // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AVolume*                                     VolumeClass;                                              // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoComplexVolumeTest;                                     // 0x0208(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
};


// Class AIModule.EnvQueryTypes
// size:0x0000 (0x0028 - 0x0028)
class UEnvQueryTypes : public UObject
{
public:
};


// Class AIModule.EQSQueryResultSourceInterface
// size:0x0000 (0x0028 - 0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:
};


// Class AIModule.EQSRenderingComponent
// size:0x0040 (0x0450 - 0x0490)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
};


// Class AIModule.EQSTestingPawn
// size:0x0090 (0x04C0 - 0x0550)
class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x04C8(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x04D8(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x04F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels;                                              // 0x04F4(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems;                                         // 0x04F4(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove;                            // 0x04F4(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame;                                   // 0x04F4(0x0001) (Edit)
	unsigned char                                      bTickDuringGame;                                          // 0x04F4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x04F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProperties;                                       // 0x0500(0x0030) (Edit)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0530(0x0020) MISSED OFFSET
};


// Class AIModule.GenericTeamAgentInterface
// size:0x0000 (0x0028 - 0x0028)
class UGenericTeamAgentInterface : public UInterface
{
public:
};


// Class AIModule.GridPathAIController
// size:0x0000 (0x0328 - 0x0328)
class AGridPathAIController : public AAIController
{
public:
};


// Class AIModule.GridPathFollowingComponent
// size:0x0030 (0x0250 - 0x0280)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                        GridManager;                                              // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0258(0x0028) MISSED OFFSET
};


// Class AIModule.NavFilter_AIControllerDefault
// size:0x0000 (0x0048 - 0x0048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:
};


// Class AIModule.NavLinkProxy
// size:0x0050 (0x0220 - 0x0270)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	TArray<struct FNavigationLink>                     PointLinks;                                               // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FNavigationSegmentLink>              SegmentLinks;                                             // 0x0240(0x0010) (ZeroConstructor)
	class UNavLinkCustomComponent*                     SmartLinkComp;                                            // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bSmartLinkIsRelevant;                                     // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSmartLinkReached;                                       // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void SetSmartLinkEnabled(bool bEnabled)//offset:0x312CAC0;
	void ResumePathFollowing(class AActor* Agent)//offset:0x312C7B0;
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)//offset:0x13CEB30;
	bool IsSmartLinkEnabled()//offset:0x312C100;
	bool HasMovingAgents()//offset:0x312C0D0;
};


// Class AIModule.NavLocalGridManager
// size:0x0030 (0x0028 - 0x0058)
class UNavLocalGridManager : public UObject
{
public:

	static bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)//offset:0x312C840;
	static void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids)//offset:0x312C6B0;
	static bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)//offset:0x312BE10;
	static int AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids)//offset:0x312BB60;
	static int AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids)//offset:0x312B9A0;
	static int AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids)//offset:0x312B780;
	static int AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids)//offset:0x312B540;
};


// Class AIModule.PathFollowingManager
// size:0x0000 (0x0028 - 0x0028)
class UPathFollowingManager : public UObject
{
public:
};


// Class AIModule.PawnAction
// size:0x0070 (0x0028 - 0x0098)
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnAction*                                 ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance;                               // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance;                          // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement;                                     // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0081(0x0017) MISSED OFFSET

	TEnumAsByte<EAIRequestPriority> GetActionPriority()//offset:0x312C020;
	void Finish(TEnumAsByte<EPawnActionResult> WithResult)//offset:0x312BFA0;
	static class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UPawnAction* ActionClass)//offset:0x312BD40;
};


// Class AIModule.PawnAction_BlueprintBase
// size:0x0000 (0x0098 - 0x0098)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds)//offset:0x13CEB30;
	void ActionStart(class APawn* ControlledPawn)//offset:0x13CEB30;
	void ActionResume(class APawn* ControlledPawn)//offset:0x13CEB30;
	void ActionPause(class APawn* ControlledPawn)//offset:0x13CEB30;
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult)//offset:0x13CEB30;
};


// Class AIModule.PawnAction_Move
// size:0x0050 (0x0098 - 0x00E8)
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNavigationQueryFilter*                      FilterClass;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe;                                             // 0x00B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap;                                         // 0x00B8(0x0001)
	unsigned char                                      bUsePathfinding;                                          // 0x00B8(0x0001)
	unsigned char                                      bAllowPartialPath;                                        // 0x00B8(0x0001)
	unsigned char                                      bProjectGoalToNavigation;                                 // 0x00B8(0x0001)
	unsigned char                                      bUpdatePathToGoal;                                        // 0x00B8(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange;                            // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00B9(0x002F) MISSED OFFSET
};


// Class AIModule.PawnAction_Repeat
// size:0x0020 (0x0098 - 0x00B8)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00A9(0x000F) MISSED OFFSET
};


// Class AIModule.PawnAction_Sequence
// size:0x0028 (0x0098 - 0x00C0)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x0098(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};


// Class AIModule.PawnAction_Wait
// size:0x0010 (0x0098 - 0x00A8)
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x009C(0x000C) MISSED OFFSET
};


// Class AIModule.PawnActionsComponent
// size:0x0038 (0x00B0 - 0x00E8)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x00C8(0x0010) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator)//offset:0x312C370;
	static bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority)//offset:0x312C270;
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort)//offset:0x312C1D0;
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort)//offset:0x312C130;
};


// Class AIModule.PawnSensingComponent
// size:0x0048 (0x00B0 - 0x00F8)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates;                                    // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers;                                        // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns;                                                // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises;                                              // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSeePawn;                                                // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHearNoise;                                              // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)

	void SetSensingUpdatesEnabled(bool bEnabled)//offset:0x312CA30;
	void SetSensingInterval(float NewSensingInterval)//offset:0x312C9A0;
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle)//offset:0x312C910;
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn)//offset:0x13CEB30;
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)//offset:0x13CEB30;
	float GetPeripheralVisionCosine()//offset:0x312C0B0;
	float GetPeripheralVisionAngle()//offset:0x2398040;
};


// Class AIModule.VisualLoggerExtension
// size:0x0000 (0x0028 - 0x0028)
class UVisualLoggerExtension : public UObject
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
