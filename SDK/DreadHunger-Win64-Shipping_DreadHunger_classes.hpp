#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHunger_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DreadHunger.DH_ActiveDebugControls
// size:0x0000 (0x0260 - 0x0260)
class UDH_ActiveDebugControls : public UUserWidget
{
public:

	class FString SetTOD(float Hour)//offset:0xF13E40;
};


// Class DreadHunger.DH_ActorRandomizationVolume
// size:0x0050 (0x0258 - 0x02A8)
class ADH_ActorRandomizationVolume : public AVolume
{
public:
	TMap<struct FName, struct FActorRandomizationGroup> ActorGroups;                                              // 0x0258(0x0050) (Edit, DisableEditOnTemplate)
};


// Class DreadHunger.DH_AIController
// size:0x00A8 (0x0328 - 0x03D0)
class ADH_AIController : public AAIController
{
public:
	TMap<class AActor*, float>                         ThreatTable;                                              // 0x0328(0x0050)
	class ADH_Character*                               TargetCharacter;                                          // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_Character*                               ControlledCharacter;                                      // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTargetRate;                                         // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageAggroRange;                                      // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoTargetUpdateTime;                                       // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UNavigationQueryFilter*                      ChaseFilter;                                              // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomizeTreatTableTime;                                  // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterStuckTime;                                       // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewTargetSearchRange;                                     // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMustHaveTarget;                                          // 0x03AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChaseTargetCharacter;                                    // 0x03AD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReactToDamage;                                           // 0x03AE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x03AF(0x0021) MISSED OFFSET

	void TargetCharacterDied(class ADH_Character* Target)//offset:0xF13F40;
	void OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)//offset:0xF13A40;
	void OnCinematicModeChanged(bool bCinematicMode)//offset:0xF133D0;
	void ControlledCharacterDied(class ADH_Character* DeadCharacter)//offset:0xF13050;
	void AddTargetToThreatTable(class AActor* NewTarget, float ExtraThreat)//offset:0xF12F60;
};


// Class DreadHunger.DH_AIControllerHuman
// size:0x0000 (0x03D0 - 0x03D0)
class ADH_AIControllerHuman : public ADH_AIController
{
public:
};


// Class DreadHunger.DH_AIControllerWildlife
// size:0x0030 (0x03D0 - 0x0400)
class ADH_AIControllerWildlife : public ADH_AIController
{
public:
	bool                                               bAutoEnableSight;                                         // 0x03D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              LeashRange;                                               // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomRoamRange;                                          // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SleepRange;                                               // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNavigationQueryFilter*                      RoamingFilter;                                            // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_AnimalCharacter*                         ControlledAnimal;                                         // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	void SensedActor(class AActor* Actor, const struct FAIStimulus& Stimulus)//offset:0xF13CB0;
};


// Class DreadHunger.DH_AIControllerMonster
// size:0x0000 (0x0400 - 0x0400)
class ADH_AIControllerMonster : public ADH_AIControllerWildlife
{
public:
};


// Class DreadHunger.DH_AIControllerPredator
// size:0x0000 (0x0400 - 0x0400)
class ADH_AIControllerPredator : public ADH_AIControllerWildlife
{
public:
};


// Class DreadHunger.DH_AIControllerPrey
// size:0x0010 (0x0400 - 0x0410)
class ADH_AIControllerPrey : public ADH_AIControllerWildlife
{
public:
	class UEnvQuery*                                   RunAwayQueryTemplate;                                     // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_AIControllerWendigo
// size:0x00A8 (0x03D0 - 0x0478)
class ADH_AIControllerWendigo : public ADH_AIControllerHuman
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class UEnvQuery*                                   RunAwayQueryTemplate;                                     // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNavigationQueryFilter*                      RoamingFilter;                                            // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_ThrallTotem*                             TotemClass;                                               // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_TotemSpell*                              WendigoWalk;                                              // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_SpellManager*                            SpellManagerClass;                                        // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_WendigoCharacter*                        ControlledWendigo;                                        // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
	class ADH_SpellManager*                            SpellManager;                                             // 0x0418(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0420(0x0058) MISSED OFFSET
};


// Class DreadHunger.DH_AIPathSpline
// size:0x0090 (0x0220 - 0x02B0)
class ADH_AIPathSpline : public AActor
{
public:
	class ADH_Character*                               PathingAIClass;                                           // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPathOnSpawn;                                             // 0x0229(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldRun;                                               // 0x022A(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bInvincibleWhilePathing;                                  // 0x022B(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bProximityTriggered;                                      // 0x022C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              ProximityRadius;                                          // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0234(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0240(0x0030) (Edit, DisableEditOnTemplate, IsPlainOldData)
	class UBillboardComponent*                         Sprite;                                                   // 0x0270(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnPathingFinished;                                        // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0290(0x0018) MISSED OFFSET
	class ADH_AIController*                            PathingAI;                                                // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	void SpawnAI()//offset:0xF13F20;
	void OnStartedPathing()//offset:0x13CEB30;
	void OnPointReached(int PointIndex)//offset:0x13CEB30;
	void OnPathingCharacterDied(class ADH_Character* DeadCharacter)//offset:0xF13650;
	void OnPathingCharacterDestroyed(class AActor* DestroyedActor)//offset:0xF135C0;
	void OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)//offset:0xF134F0;
	void OnAISpawned(class ADH_Character* SpawnedAI)//offset:0x13CEB30;
	void MoveToPoint(int TargetPathIndex)//offset:0xF13340;
	void MoveToNextPoint()//offset:0xF13320;
	float GetProximityRadius(int InPathIndex)//offset:0xF13110;
	void BeginPathing()//offset:0xF13030;
};


// Class DreadHunger.DH_AIPointOfInterest
// size:0x0010 (0x0220 - 0x0230)
class ADH_AIPointOfInterest : public AActor
{
public:
	EAIPointOfInterest                                 Type;                                                     // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_AISpawnManager
// size:0x00E0 (0x0220 - 0x0300)
class ADH_AISpawnManager : public AActor
{
public:
	class UBillboardComponent*                         Sprite;                                                   // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAISpawnMethod                                     SpawnMethod;                                              // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class ADH_Character*                               SpawnClass;                                               // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaxConcurrentAI;                                          // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	TArray<int>                                        MaxConcurrentAIByDaysLeft;                                // 0x0250(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	int                                                MaxTotalAISpawns;                                         // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ActivationRange;                                          // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LeashRange;                                               // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              RandomRoamRange;                                          // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0270(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData04[0x50];                                      // 0x0270(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData05[0x28];                                      // 0x02D8(0x0028) MISSED OFFSET

	void RemoveSpawnedCharacter(class ADH_Character* CharacterToRemove)//offset:0xF13C20;
	void QuerySpawnLocation()//offset:0xF13C00;
	void OnSpellExpired(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF138A0;
	void OnSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF13700;
	void OnDaysUntilBlizzardChanged(class ADH_GameState* InGameState)//offset:0xF13460;
};


// Class DreadHunger.DH_AITarget
// size:0x0000 (0x0028 - 0x0028)
class UDH_AITarget : public UInterface
{
public:

	bool IsAITargetable()//offset:0xF13250;
	float GetThreatOverride(float CurrentThreat)//offset:0xF131B0;
	float GetInitialThreat()//offset:0xF130E0;
};


// Class DreadHunger.DH_AIAttack
// size:0x0040 (0x0028 - 0x0068)
class UDH_AIAttack : public UObject
{
public:
	class UDamageType*                                 DamageType;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationRange;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationDelay;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlocksMovement;                                          // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                AllowedMovementModes;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Impulse;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttackImpulseDirection                            ImpulseDirection;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Animation;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttackAnimationSlot                               AnimationSlot;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_AIAttack_Melee
// size:0x0000 (0x0068 - 0x0068)
class UDH_AIAttack_Melee : public UDH_AIAttack
{
public:
};


// Class DreadHunger.DH_AIAttack_AOE
// size:0x0020 (0x0068 - 0x0088)
class UDH_AIAttack_AOE : public UDH_AIAttack
{
public:
	float                                              InnerRadius;                                              // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThroughBlockScale;                                  // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadiusThroughBlockScale;                             // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CollisionProfile;                                         // 0x007C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_AIAttack_Projectile
// size:0x0008 (0x0068 - 0x0070)
class UDH_AIAttack_Projectile : public UDH_AIAttack
{
public:
	class ADH_Projectile*                              Projectile;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_AmbientSound
// size:0x0008 (0x0228 - 0x0230)
class ADH_AmbientSound : public AAmbientSound
{
public:
	class UCurveFloat*                                 TODVolumeCurve;                                           // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_Character
// size:0x04A0 (0x04C0 - 0x0960)
class ADH_Character : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04C0(0x0018) MISSED OFFSET
	class ADH_Character*                               DefaultCharacter;                                         // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ImpactEffect*                            FootstepEffects;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ImpactEffect*                            LandingEffects;                                           // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ArmBoneNames;                                             // 0x04F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LegBoneNames;                                             // 0x0508(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               FootBoneNames;                                            // 0x0518(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       SnareSocket;                                              // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UDamageType*, class USoundBase*>        PainSounds;                                               // 0x0530(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class USoundBase*                                  DeathSound;                                               // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HallucinationDissipateSound;                              // 0x0588(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathUnpossessDelay;                                      // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPhysicalHitReactionBlendWeight;                        // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 CarcassStaticMesh;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCorpseReceivesDecals;                                    // 0x05A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        CarcassMesh;                                              // 0x05A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x05B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnDiedDelegate;                                           // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EPlayerMatchStatType                               DeathStat;                                                // 0x05C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	float                                              DeathTime;                                                // 0x05CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastReceivedDamageTime;                                   // 0x05D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallingDamageThreshold;                                   // 0x05D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<class UDH_DamageType*, float>                 DamageResistances;                                        // 0x05D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UAIPerceptionStimuliSourceComponent*         PerceptionStimuli;                                        // 0x0628(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EInventoryTransactionRules                         DeathInventoryTransactionRules;                           // 0x0630(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0631(0x0003) MISSED OFFSET
	float                                              DeathInventorySpawnPct;                                   // 0x0634(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0638(0x0008) MISSED OFFSET
	class ADH_ClimbableActor*                          CurrentClimbingActor;                                     // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UDH_ImpactEffect*                            ObliterationEffect;                                       // 0x0648(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDismemberment;                                      // 0x0650(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0651(0x0003) MISSED OFFSET
	int                                                MaxAllowedWounds;                                         // 0x0654(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ADH_BodyPartPickup*>                  BodyParts;                                                // 0x0658(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FVector>                 BodyPartBonePositions;                                    // 0x0668(0x0050)
	struct UEMulticastInlineDelegate                   OnReservedHealthChangedDelegate;                          // 0x06B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMaximumHealthChangedDelegate;                           // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDeathStateChanged;                                      // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              AttackCooldown;                                           // 0x06E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	float                                              IdleSpeed;                                                // 0x06F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x06F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_Character*                               TargetCharacter;                                          // 0x06F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0700(0x0004) MISSED OFFSET
	struct FHitResult                                  LastLanding;                                              // 0x0704(0x008C) (Net, IsPlainOldData)
	class AController*                                 LastDamageInstigator;                                     // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastDamageCauser;                                         // 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSnareFlash                                 Snare;                                                    // 0x07A0(0x0010) (Net)
	struct FDamageInstance                             LastDamageReceived;                                       // 0x07B0(0x0030) (Net)
	float                                              MaximumHealth;                                            // 0x07E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MeshMIDs;                                                 // 0x07E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x10];                                      // 0x07F8(0x0010) MISSED OFFSET
	class UDH_InventoryManager*                        InventoryComponent;                                       // 0x0808(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       CorpseCraftingComponent;                                  // 0x0810(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	ECharacterDeathState                               DeathState;                                               // 0x0818(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x27];                                      // 0x0819(0x0027) MISSED OFFSET
	class ADH_ClimbableActor*                          LastClimbingActor;                                        // 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_BuoyancyComponent*                       CorpseBuoyancy;                                           // 0x0848(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0xF9];                                      // 0x0850(0x00F9) MISSED OFFSET
	ECharacterHealthState                              CurrentHealthState;                                       // 0x0949(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x094A(0x0002) MISSED OFFSET
	float                                              CurrentHealth;                                            // 0x094C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentReservedHealth;                                    // 0x0950(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0954(0x0001) MISSED OFFSET
	struct FGenericTeamId                              TeamID;                                                   // 0x0955(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData14[0xA];                                       // 0x0956(0x000A) MISSED OFFSET

	void TransferInventory_Simulated(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot, int Quantity, bool bAutoFindTargetSlot, bool bQuickLoot)//offset:0xF1BF70;
	void TransferInventory(class UDH_InventoryManager* SourceManager, int SourceSlot, class UDH_InventoryManager* TargetManager, int TargetSlot, int Quantity, bool bAutoFindTargetSlot, bool bQuickLoot)//offset:0xF1BD60;
	void SetShouldRun(bool bNewShouldRun)//offset:0xF1BC00;
	void SetGenericTeamId(const struct FGenericTeamId& NewTeamID)//offset:0xF1BB60;
	void OnRep_TargetCharacter()//offset:0xF1B580;
	void OnRep_Snare()//offset:0xF1B540;
	void OnRep_LastLanding()//offset:0xF1B500;
	void OnRep_LastDamageReceived(const struct FDamageInstance& PreviousDamageInstance)//offset:0xF1B440;
	void OnRep_DeathState()//offset:0xF1B420;
	void OnRep_CurrentReservedHealth()//offset:0xF1B400;
	void OnRep_CurrentHealth()//offset:0xF1B3E0;
	void OnRep_CurrentClimbingActor()//offset:0xF1B3C0;
	void OnInventoryEmptied()//offset:0xF1B2D0;
	void OnHarvestedCorpse()//offset:0xF1B2B0;
	void OnEnsnared(class ADH_BearTrapPickup* InSnare)//offset:0x13CEB30;
	void OnDied()//offset:0x13CEB30;
	void OnCinematicModeChanged(bool bCinematicMode)//offset:0xF1B0C0;
	void ModifyHealth(float Delta)//offset:0xF1AD50;
	bool IsSwimming()//offset:0xF1AD20;
	bool IsEnsnared()//offset:0xF1ACF0;
	bool IsClimbing()//offset:0xF1ACC0;
	bool IsAlive()//offset:0xF1AC90;
	void InventoryTransferSucceeded(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot)//offset:0xF1AB40;
	void InventoryTransferFailed(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot)//offset:0xF1A9F0;
	void InventoryQuickTransferSucceeded(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot)//offset:0xF1A8A0;
	void HallucinationExpired()//offset:0xF1A880;
	float GetSnareDurationModifier()//offset:0xF1A840;
	float GetMaximumHealth()//offset:0xF1A820;
	class UDH_InventoryManager* GetInventoryComponent()//offset:0xF1A800;
	class UDH_InventoryManager* GetInventory()//offset:0xF1A800;
	struct FGenericTeamId GetGenericTeamId()//offset:0xF1A7C0;
	ECharacterDeathState GetDeathState()//offset:0xF1A7A0;
	float GetCurrentReservedHealth()//offset:0xF1A780;
	ECharacterHealthState GetCurrentHealthState()//offset:0xF1A760;
	float GetCurrentHealth()//offset:0xF1A740;
	class UDH_CraftingComponent* GetCorpseCraftingComponent()//offset:0xF1A720;
	class UDH_CharacterAnimInstance* GetCharacterAnimInst()//offset:0xF1A6F0;
	TArray<struct FName> GetBodyPartBoneList()//offset:0xF1A670;
	TEnumAsByte<ETeamAttitude> GetAttitudeTowards(class AActor* Other)//offset:0xF1A5D0;
	void Ensnare(class ADH_BearTrapPickup* InSnare, float InSnareDuration)//offset:0xF1A450;
	void DropInventory_Simulated(int InventoryIndex, bool bThrown, EInventoryDropMethod DropMethod, const struct FVector& OffsetVariation, const struct FRotator& RotationVariation, int DropCount)//offset:0xF1A250;
	void Died(class AController* Killer, class UDamageType* KillingDamageType, float OverkillDamage)//offset:0xF1A140;
	bool CanBeEnsnared()//offset:0xF1A110;
	bool Attack(class AActor* Target, int InAttackIndex)//offset:0xF1A040;
	void AdjustDamage(float* Damage, const struct FDamageEvent& DamageEvent, class AController* DamageInstigator)//offset:0xF19EF0;
	void AddDeathInventory(class ADH_Inventory* Type, int Amount)//offset:0xF19CF0;
};


// Class DreadHunger.DH_AnimalCharacter
// size:0x0150 (0x0960 - 0x0AB0)
class ADH_AnimalCharacter : public ADH_Character
{
public:
	class UAudioComponent*                             AmbientAudioComponent;                                    // 0x0960(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  NewTargetSound;                                           // 0x0968(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LostTargetSound;                                          // 0x0970(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HowlSound;                                                // 0x0978(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDHFloatInterval                            HowlRange;                                                // 0x0980(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                HowlMinGroupSize;                                         // 0x0988(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HowlMinGroupRadius;                                       // 0x098C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDHFloatInterval                            HowlCooldown;                                             // 0x0990(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bAllowAttackDamageScaling;                                // 0x0998(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	TArray<struct FAIAttack>                           AttackTypes;                                              // 0x09A0(0x0010) (Edit, ZeroConstructor)
	float                                              StuckSpeed;                                               // 0x09B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StuckTime;                                                // 0x09B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallForHelpRange;                                         // 0x09B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallForHelpTotalTime;                                     // 0x09BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallForHelpDelayTime;                                     // 0x09C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallForHelpMontage;                                       // 0x09C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CallForHelpSound;                                         // 0x09D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_PlayerState*                             Summoner;                                                 // 0x09D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCallingForHelp;                                          // 0x09E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x50];                                      // 0x09E1(0x0050) UNKNOWN PROPERTY: 
	class UAudioComponent*                             HowlAudioComponent;                                       // 0x0A38(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttackFlash                                AttackFlash;                                              // 0x0A40(0x0008) (Net)
	unsigned char                                      UnknownData04[0x60];                                      // 0x0A48(0x0060) MISSED OFFSET
	float                                              AttackSpeedModifier;                                      // 0x0AA8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttackWhileSwimming;                                  // 0x0AAC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET

	void PlayCallForHelp()//offset:0xF13BE0;
	void OnSpellExpired(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF13970;
	void OnSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF137D0;
	void OnRep_AttackFlash()//offset:0xF136E0;
	bool IsAttackingTeammate(class ADH_PlayerState* OtherPlayer)//offset:0xF13280;
	class UPrimitiveComponent* GetPackIceCollider()//offset:0x13CEB30;
};


// Class DreadHunger.DH_Inventory
// size:0x06F0 (0x0220 - 0x0910)
class ADH_Inventory : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	bool                                               bReplicateStateToNonOwningClients;                        // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlyReplicateNonOwningStateOnce;                         // 0x0229(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x022A(0x0006) MISSED OFFSET
	struct FText                                       FriendlyName;                                             // 0x0230(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0248(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       TutorialConcept;                                          // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_HumanCharacter*                          HumanOwner;                                               // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          HumanInstigator;                                          // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             PlayerInstigator;                                         // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        InventoryManager;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingRecipe*                          CraftingRecipe;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EInventoryType                                     InventoryType;                                            // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachToOwner;                                           // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrallItem;                                              // 0x0292(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScoreOnDestroyed;                                        // 0x0293(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_InventoryView*                           ViewClass;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_InventoryPickup*                         PickupClass;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnInventoryModified;                                      // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bCanBeAimed;                                              // 0x02C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowHoldToAim;                                          // 0x02C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReloadWhenAimed;                                         // 0x02C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventCraftWhileAimed;                                  // 0x02C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimEntryTime;                                             // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimExitTime;                                              // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FViewAlignedInventoryEventEffects           AimEntryEffects;                                          // 0x02D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FViewAlignedInventoryEventEffects           AimExitEffects;                                           // 0x02F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FTransform                                  AimingLeftArmTransform;                                   // 0x0320(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  AimingRightArmTransform;                                  // 0x0350(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EInventoryAimingStyle                              AimingStyle;                                              // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           AimedAnimation;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AimedAnimation_FP;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimingFOVZoom;                                            // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimingFOVInterpSpeed;                                     // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowCrosshair;                                           // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              CrosshairAimingScale;                                     // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          AimingPostProcessMaterial;                                // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeReloaded;                                           // 0x03B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReloadAfterUse;                                          // 0x03B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanAimWhileReloading;                                    // 0x03B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x03B3(0x0001) MISSED OFFSET
	float                                              ReloadTime;                                               // 0x03B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FViewAlignedInventoryEventEffects           ReloadEffects;                                            // 0x03B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FTransform                                  ReloadingLeftArmTransform;                                // 0x03E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  ReloadingRightArmTransform;                               // 0x0410(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bScaleReloadAnimToReloadRate;                             // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasDurability;                                           // 0x0441(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyOnZeroDurability;                                 // 0x0442(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDurabilityWhenFull;                                  // 0x0443(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysDamageWhenDropped;                                 // 0x0444(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamageWhenUsed;                                          // 0x0445(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	float                                              DefaultDurability;                                        // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DurabilityUses;                                           // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0450(0x0004) MISSED OFFSET
	bool                                               bCanBeUsed;                                               // 0x0454(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseOnRelease;                                            // 0x0455(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanAimWhileUsing;                                        // 0x0456(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPoisonItem;                                              // 0x0457(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpgradeItem;                                             // 0x0458(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTaintedByDefault;                                        // 0x0459(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x045A(0x0006) MISSED OFFSET
	struct FTransform                                  UsingLeftArmTransform;                                    // 0x0460(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  UsingRightArmTransform;                                   // 0x0490(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bScaleUseAnimToCooldownRate;                              // 0x04C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class USoundBase*                                  AppliedSound;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ApplyTexture;                                             // 0x04D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ApplyTint;                                                // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FViewAlignedInventoryEventEffects>   UseEffects;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  UseFailedSound;                                           // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DefaultUsesRemaining;                                     // 0x0500(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnUsesRemainingChangedDelegate;                           // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bFillToMax;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	int                                                MaxUses;                                                  // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseCooldown;                                              // 0x0520(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0xC];                                       // 0x0524(0x000C) MISSED OFFSET
	bool                                               bEquipped;                                                // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeHeld;                                               // 0x0531(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EInventoryDominantHand                             HeldHand;                                                 // 0x0532(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x5];                                       // 0x0533(0x0005) MISSED OFFSET
	class UAnimSequenceBase*                           HeldAnimation;                                            // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           HeldAnimation_FP;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EInventoryDominantHand, struct FTransform>    ViewAttachmentTransforms;                                 // 0x0548(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0598(0x0008) MISSED OFFSET
	struct FTransform                                  LeftArmTransform;                                         // 0x05A0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  RightArmTransform;                                        // 0x05D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              EquipTime;                                                // 0x0600(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	struct FViewAlignedInventoryEventEffects           EquipEffects;                                             // 0x0608(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bPlayEquipEffectsEmptyHanded;                             // 0x0630(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	TMap<EInventoryDominantHand, struct FViewAlignedInventoryEventEffects> PickupEffects;                                            // 0x0638(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class USoundBase*                                  PickedUpSound;                                            // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeDropped;                                            // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bObliterateWithCarrier;                                   // 0x0691(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x6];                                       // 0x0692(0x0006) MISSED OFFSET
	TMap<EInventoryDominantHand, struct FViewAlignedInventoryEventEffects> DropEffects;                                              // 0x0698(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FViewAlignedInventoryEventEffects           OldDropEffects;                                           // 0x06E8(0x0028)
	struct FTransform                                  DroppingLeftArmTransform;                                 // 0x0710(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  DroppingRightArmTransform;                                // 0x0740(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bCanBeThrown;                                             // 0x0770(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              ThrowCost;                                                // 0x0774(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowDelay;                                               // 0x0778(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	struct FViewAlignedInventoryEventEffects           ThrowEffects;                                             // 0x0780(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData21[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET
	struct FTransform                                  ThrowingLeftArmTransform;                                 // 0x07B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  ThrowingRightArmTransform;                                // 0x07E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bRequiresInventorySlot;                                   // 0x0810(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeTransferred;                                        // 0x0811(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOversize;                                                // 0x0812(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x0813(0x0001) MISSED OFFSET
	int                                                MaxStackCount;                                            // 0x0814(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EInventoryType>                             StackableTypes;                                           // 0x0818(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FOwnerMovementRestrictions                  MovementRestrictions;                                     // 0x0828(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData23[0x6];                                       // 0x082A(0x0006) MISSED OFFSET
	class USoundBase*                                  UI_DragSound;                                             // 0x0830(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UI_DropSound;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FootstepAddSound;                                         // 0x0840(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_ImpactEffect*                            RemovedEffect;                                            // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ImpactEffect*                            AddedEffect;                                              // 0x0850(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnInventorySlotIndexChangedDelegate;                      // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              Damage;                                                   // 0x0868(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpgradeBonusDamage;                                       // 0x086C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InventorySlotIndex;                                       // 0x0870(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x34];                                      // 0x0874(0x0034) MISSED OFFSET
	bool                                               bDisableAutoEquip;                                        // 0x08A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAiming;                                                // 0x08A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAimed;                                                 // 0x08AA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x08AB(0x0001) MISSED OFFSET
	float                                              FuelValue;                                                // 0x08AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      NumberOfItems;                                            // 0x08B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x08B1(0x0003) MISSED OFFSET
	int                                                ReservedItems;                                            // 0x08B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x10];                                      // 0x08B8(0x0010) MISSED OFFSET
	struct FInventoryItemState                         ReplicatedTopItemState;                                   // 0x08C8(0x0038) (Net)
	unsigned char                                      UnknownData28[0x10];                                      // 0x0900(0x0010) MISSED OFFSET

	bool UseStateBlocksInteracts(unsigned char State)//offset:0xF465C0;
	bool Use(const struct FTransform& UseTransform, unsigned char UseState)//offset:0xF463F0;
	void Upgrade(int Count)//offset:0xF46360;
	bool StateConsumesUse(unsigned char State)//offset:0xF46290;
	void SetUsesRemaining(float NewUsesRemaining)//offset:0xF46210;
	void SetPublicFlags(EInventoryStateFlags FlagsToSet, bool bSet)//offset:0xF46140;
	void SetDurability(float NewDurability)//offset:0xF460B0;
	void OnWantsToAimChanged(bool bNewWantsToAim)//offset:0x13CEB30;
	void OnUseFailed(unsigned char UseState)//offset:0x13CEB30;
	void OnUsed(const struct FTransform& UseTransform, unsigned char UseState)//offset:0x13CEB30;
	void OnTopStateChanged()//offset:0xF45DD0;
	void OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)//offset:0xF45D00;
	void OnRep_TopItemState()//offset:0xF45CE0;
	void OnRep_NumberOfItems()//offset:0xF45CA0;
	void OnRep_InventorySlotIndex()//offset:0xF45C60;
	void OnRep_InventoryManager()//offset:0xF45C40;
	void OnReloaded()//offset:0x13CEB30;
	void OnPutDown()//offset:0x13CEB30;
	void OnEquipped()//offset:0x13CEB30;
	void OnAppliedTo(class ADH_Inventory* Target, int NumApplied, class ADH_PlayerState* ApplyingPlayer)//offset:0xF45970;
	void OnAimed(bool bNewIsAiming)//offset:0x13CEB30;
	void ModifyDurability(float Delta)//offset:0xF45800;
	void LoadFromPickup(class ADH_InventoryPickup* FromPickup)//offset:0xF45770;
	void LoadFromInventory(class ADH_Inventory* FromInventory)//offset:0xF456E0;
	bool IsReloading()//offset:0xF456B0;
	bool IsPoisoned()//offset:0xF45680;
	void IncreaseItemStack(TArray<struct FInventoryItemState> ItemStatesToAdd, bool bFlushNetDormancy)//offset:0xF45450;
	bool HasAnyPublicFlags(EInventoryStateFlags TestFlags)//offset:0xF453C0;
	void GetUseTransform(struct FTransform* UseTransform)//offset:0xF452C0;
	unsigned char GetUseState(TEnumAsByte<EInputEvent> InputEvent)//offset:0xF45230;
	unsigned char GetUsesRemaining()//offset:0xF453A0;
	float GetUseCooldown(unsigned char UseState)//offset:0xF45180;
	struct FInventoryItemState GetReplicatedTopItemState()//offset:0xF45130;
	int GetInventorySlotIndex()//offset:0xF45020;
	float GetFuelValue()//offset:0xF44D90;
	float GetDurability()//offset:0xF44B70;
	TArray<struct FInventoryItemState> GetCurrentStackStates()//offset:0xF44AF0;
	int GetCurrentStackCount(bool bDecrementReservedItems)//offset:0xF44A50;
	float GetCrosshairScale()//offset:0xF449F0;
	float GetCooldownPct()//offset:0xF449C0;
	TArray<int> GetAllItemStateUIDs()//offset:0xF44940;
	float GetAimPct()//offset:0xF44910;
	void DecreaseItemStack(int ToRemove, bool bFlushNetDormancy, bool bScoreItemConsumption)//offset:0xF44710;
	void ClearAllPublicFlags()//offset:0xF446D0;
	bool CanUse(unsigned char UseState)//offset:0xF44640;
	bool CanReload()//offset:0xF44610;
	bool CanExitAim()//offset:0xF445E0;
	bool CanBeAppliedTo(class ADH_Inventory* Target, const struct FInventorySlotContents& TargetSlot)//offset:0xF44380;
	bool CanAim()//offset:0xF44350;
	void AutoReload()//offset:0xF44330;
};


// Class DreadHunger.DH_Inventory_Consumable
// size:0x0020 (0x0910 - 0x0930)
class ADH_Inventory_Consumable : public ADH_Inventory
{
public:

	void GetConsumableStatValues(class ADH_PlayerState* ConsumingPlayer, struct FConsumableItemStatValues* StatValues)//offset:0xF49140;
};


// Class DreadHunger.DH_AnimalMeatInventory
// size:0x0000 (0x0930 - 0x0930)
class ADH_AnimalMeatInventory : public ADH_Inventory_Consumable
{
public:
};


// Class DreadHunger.DH_AnimNotify_Footstep
// size:0x0020 (0x0038 - 0x0058)
class UDH_AnimNotify_Footstep : public UAnimNotify
{
public:
	struct FName                                       FootBone;                                                 // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideImpactEffect;                                    // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UDH_ImpactEffect*                            FootstepImpactOverride;                                   // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PreviewSound;                                             // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_AnimNotify_MaterialParameter
// size:0x0030 (0x0030 - 0x0060)
class UDH_AnimNotify_MaterialParameter : public UAnimNotifyState
{
public:
	TArray<int>                                        MaterialIndices;                                          // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       ParamName;                                                // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartValue;                                               // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndValue;                                                 // 0x004C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};


// Class DreadHunger.DH_AnimNotify_PlayingCardHeldState
// size:0x0008 (0x0038 - 0x0040)
class UDH_AnimNotify_PlayingCardHeldState : public UAnimNotify
{
public:
	EPlayingCardNotifyType                             NotifyType;                                               // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_AnimNotify_SetViewMeshVisibility
// size:0x0008 (0x0038 - 0x0040)
class UDH_AnimNotify_SetViewMeshVisibility : public UAnimNotify
{
public:
	bool                                               bShowView;                                                // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_AnimNotify_Voice
// size:0x0010 (0x0038 - 0x0048)
class UDH_AnimNotify_Voice : public UAnimNotify
{
public:
	class USoundBase*                                  Voice;                                                    // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerVoiceType                                   PreviewVoiceType;                                         // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_DoorActor
// size:0x0190 (0x0220 - 0x03B0)
class ADH_DoorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_DoorLockComponent*                       LockComponent;                                            // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      LockColorMaskComponent;                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDoorOpenStyle                                     InterpolationType;                                        // 0x024C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleDoor;                                              // 0x024D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceable;                                               // 0x024E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x024F(0x0001) MISSED OFFSET
	class UStaticMesh*                                 SecondDoorStaticMesh;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	struct FTransform                                  SecondDoorRelativeTransform;                              // 0x0260(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bSwingBothWays;                                           // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              SwingAngle;                                               // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideDistance;                                            // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class USoundBase*                                  StartOpeningSound;                                        // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StartClosingSound;                                        // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ClosedSound;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FailedOpenSound;                                          // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ForceOpenSound;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UArrowComponent*                             OpenDirection;                                            // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SecondDoorMesh;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnOpenStateChanged;                                       // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EDoorOpenState                                     State;                                                    // 0x02F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FDamageInstance                             LastDamageReceived;                                       // 0x02F8(0x0030) (Net)
	unsigned char                                      UnknownData06[0x88];                                      // 0x0328(0x0088) MISSED OFFSET

	void SetOpen(bool bNewIsOpen, class AActor* OpenInstigator, bool bForced)//offset:0xF2ACC0;
	void OnRep_State()//offset:0xF2AC10;
	void OnRep_LastDamageReceived()//offset:0xF2ABF0;
	bool IsLocked()//offset:0xF2A440;
};


// Class DreadHunger.DH_ArmoryDoor
// size:0x0030 (0x03B0 - 0x03E0)
class ADH_ArmoryDoor : public ADH_DoorActor
{
public:
	class UStaticMeshComponent*                        WheelComponent;                                           // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HingeComponent;                                           // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C0(0x0020) MISSED OFFSET
};


// Class DreadHunger.DH_DoorLockComponent
// size:0x0020 (0x04F0 - 0x0510)
class UDH_DoorLockComponent : public UStaticMeshComponent
{
public:
	class USoundBase*                                  LockedSound;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UnlockedSound;                                            // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BrokenSound;                                              // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnlockOnInteract;                                        // 0x0508(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBreakable;                                               // 0x0509(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x050A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBroken;                                                  // 0x050B(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x050C(0x0004) MISSED OFFSET

	void SetIsLocked(bool bNewLocked)//offset:0xF2F600;
	void OnRep_Locked()//offset:0xF2F310;
	void OnRep_Broken()//offset:0xF2F2F0;
	bool IsLocked()//offset:0xF2E930;
};


// Class DreadHunger.DH_ArmoryLockComponent
// size:0x0030 (0x0510 - 0x0540)
class UDH_ArmoryLockComponent : public UDH_DoorLockComponent
{
public:
	class UDH_ArmoryLockWheel*                         LockWheelClass;                                           // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WheelCount;                                               // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class UDH_ArmoryLockWheel>>  Wheels;                                                   // 0x0520(0x0010) (ExportObject, Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0530(0x0010) MISSED OFFSET

	void OnWheelPositionChanged()//offset:0x806320;
	void OnRep_Wheels()//offset:0xF1B5E0;
};


// Class DreadHunger.DH_ArmoryLockWheel
// size:0x0030 (0x04F0 - 0x0520)
class UDH_ArmoryLockWheel : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	class USoundBase*                                  SpinStopSound;                                            // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SpinStartSound;                                           // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	unsigned char                                      TargetPosition;                                           // 0x0510(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0511(0x000F) MISSED OFFSET

	void OnRep_TargetPosition()//offset:0xF1B5A0;
};


// Class DreadHunger.DH_AssetManager
// size:0x0000 (0x0458 - 0x0458)
class UDH_AssetManager : public UAssetManager
{
public:
};


// Class DreadHunger.DH_AudioInputDevicesOptionFactory
// size:0x0000 (0x0028 - 0x0028)
class UDH_AudioInputDevicesOptionFactory : public USettingOptionFactory
{
public:
};


// Class DreadHunger.DH_AudioOutputDevicesOptionFactory
// size:0x0000 (0x0028 - 0x0028)
class UDH_AudioOutputDevicesOptionFactory : public USettingOptionFactory
{
public:
};


// Class DreadHunger.DH_AudioSpline
// size:0x0058 (0x0220 - 0x0278)
class ADH_AudioSpline : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioComponent2D;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioComponent3D;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sound2D;                                                  // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound3D;                                                  // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnShip;                                                // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class APawn*                                       LocalPlayerPawn;                                          // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromPlayer;                                       // 0x0268(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestLocation;                                          // 0x026C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_AudioVolume
// size:0x0000 (0x02C8 - 0x02C8)
class ADH_AudioVolume : public AAudioVolume
{
public:
};


// Class DreadHunger.DH_AvatarMeshComponent
// size:0x0000 (0x0EF0 - 0x0EF0)
class UDH_AvatarMeshComponent : public USkeletalMeshComponent
{
public:
};


// Class DreadHunger.DH_AvatarSceneCaptureComponent
// size:0x0000 (0x08B0 - 0x08B0)
class UDH_AvatarSceneCaptureComponent : public USceneCaptureComponent2D
{
public:
};


// Class DreadHunger.DH_BearTrapAnimInstance
// size:0x0010 (0x02C0 - 0x02D0)
class UDH_BearTrapAnimInstance : public UAnimInstance
{
public:
	class UAnimSequenceBase*                           CloseAnimation;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	void SetTrapOpen(bool bNewIsOpen, bool bPlayCloseAnimation)//offset:0xF1BC90;
};


// Class DreadHunger.DH_Weapon
// size:0x0010 (0x0910 - 0x0920)
class ADH_Weapon : public ADH_Inventory
{
public:
	class UDamageType*                                 DamageType;                                               // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0918(0x0008) MISSED OFFSET

	class UDamageType* GetDamageType(unsigned char UseState)//offset:0xF83230;
	float GetDamage(unsigned char UseState)//offset:0xF83180;
};


// Class DreadHunger.DH_BearTrapInventory
// size:0x0010 (0x0920 - 0x0930)
class ADH_BearTrapInventory : public ADH_Weapon
{
public:
	class USoundBase*                                  TrapArmedSound;                                           // 0x0920(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0928(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_InventoryPickup
// size:0x0170 (0x0220 - 0x0390)
class ADH_InventoryPickup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET
	class UMeshComponent*                              Mesh;                                                     // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ADH_Inventory*                               InventoryClass;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseViewMaterialWhenDropped;                              // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyInWater;                                          // 0x0251(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickWhileStationary;                                     // 0x0252(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverlapWhileStationary;                                  // 0x0253(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickupOnInteract;                                        // 0x0254(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideViewWhenThrown;                                      // 0x0255(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamaging;                                                // 0x0256(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0257(0x0001) MISSED OFFSET
	class UDamageType*                                 DamageType;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRampStart;                                          // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageMultiplier;                                      // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientTranslationInterpSpeed;                             // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientRotationInterpSpeed;                                // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientVelocityInterpSpeed;                                // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UDH_ProjectileMovementComponent*             PhysicsComponent;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FInventoryItemState                         InventorySaveState;                                       // 0x0280(0x0038) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UDH_CraftingComponent*                       CraftingComponent;                                        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ThrowVelocityMultiplier;                                  // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrowInstigatorVelocityMultiplier;                        // 0x02C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ThrownSpinRotation;                                       // 0x02D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrownCollisionProfile;                                   // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DroppedRelativeRotation;                                  // 0x02E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPickupThrowState                                  ThrowState;                                               // 0x02F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPickedUp;                                               // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      AttachTarget;                                             // 0x0308(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0310(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData05[0x24];                                      // 0x0360(0x0024) MISSED OFFSET
	float                                              MaximumHealth;                                            // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	bool WasThrown()//offset:0xF4A200;
	void SetDurability(float NewDurability)//offset:0xF49EC0;
	class ADH_Inventory* Pickup(class AController* InteractInstigator, int SlotIndex)//offset:0xF49C60;
	void OnRep_ThrowState()//offset:0xF49B70;
	void OnRep_AttachTarget()//offset:0xF499E0;
	void OnPickupThrownInWater()//offset:0x13CEB30;
	void OnPickupMovementStopped(const struct FHitResult& Hit)//offset:0xF49900;
	void OnGrabbed(class ADH_HumanCharacter* GrabbingPawn, bool bEmptyHandedGrab)//offset:0xF497A0;
	void Launch(bool bThrown)//offset:0xF49710;
	float GetMaximumHealth()//offset:0xF49260;
	class APawn* GetLastCarrierControlledPawn()//offset:0xF49230;
	float GetDurability()//offset:0x789FB0;
	void BP_OnRep_AttachTarget(class AActor* InAttachTarget)//offset:0x13CEB30;
};


// Class DreadHunger.DH_BearTrapPickup
// size:0x0010 (0x0390 - 0x03A0)
class ADH_BearTrapPickup : public ADH_InventoryPickup
{
public:
	class USkeletalMeshComponent*                      VisualMesh;                                               // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EBearTrapState                                     TrapState;                                                // 0x0398(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	void OnRep_TrapState()//offset:0xF1B5C0;
};


// Class DreadHunger.DH_InventoryView
// size:0x00C0 (0x0220 - 0x02E0)
class ADH_InventoryView : public AActor
{
public:
	class ADH_HumanCharacter*                          HumanOwner;                                               // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               InventoryClass;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasUniqueRelativeTransformWhenUsed;                      // 0x0230(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideWhenThrown;                                          // 0x0231(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0232(0x000E) MISSED OFFSET
	struct FTransform                                  AttachRelativeTransform_Used;                             // 0x0240(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UsedEffectSocketName;                                     // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0278(0x0068) MISSED OFFSET

	struct FInventoryEventEffectInstance PlayUsedEffects(unsigned char State)//offset:0xF4F680;
	struct FInventoryEventEffectInstance PlayReloadEffects()//offset:0xF4F630;
	struct FInventoryEventEffectInstance PlayPickupEffects(class ADH_HumanCharacter* HumanPawn, EInventoryDominantHand Hand, EInventoryEffectFilter Filter)//offset:0xF4F4D0;
	void PlayHitEffects(unsigned char AttackState, const struct FHitResult& InHit)//offset:0xF4F390;
	struct FInventoryEventEffectInstance PlayEquipEffects(unsigned char State, EInventoryEffectFilter Filter)//offset:0xF4F280;
	struct FInventoryEventEffectInstance PlayDroppedEffects(bool bWasThrown, EInventoryDominantHand DropHand, class ADH_HumanCharacter* HumanPawn)//offset:0xF4F120;
	struct FInventoryEventEffectInstance PlayAimEffects(bool bIsAiming)//offset:0xF4F060;
	class UMeshComponent* GetMesh()//offset:0xF4ECB0;
	void GetInventoryState(struct FInventoryItemState* State)//offset:0xF4EBF0;
};


// Class DreadHunger.DH_InventoryView_Skeletal
// size:0x0040 (0x02E0 - 0x0320)
class ADH_InventoryView_Skeletal : public ADH_InventoryView
{
public:
	class UAnimSequenceBase*                           Anim_Used;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_Reload;                                              // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_Equip;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_Pickup;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_Drop;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_Throw;                                               // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_AimEntry;                                            // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Anim_AimExit;                                             // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_BearTrapView
// size:0x0010 (0x0320 - 0x0330)
class ADH_BearTrapView : public ADH_InventoryView_Skeletal
{
public:

	void BP_OnArmed()//offset:0x13CEB30;
};


// Class DreadHunger.DH_BlackOutWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_BlackOutWidget : public UUserWidget
{
public:
};


// Class DreadHunger.DH_Weapon_Melee
// size:0x0060 (0x0920 - 0x0980)
class ADH_Weapon_Melee : public ADH_Weapon
{
public:
	float                                              TraceHeight;                                              // 0x0920(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceWidth;                                               // 0x0924(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDepth;                                               // 0x0928(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x092C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMustBeAimedToSwing;                                      // 0x092D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAimingAbortsSwing;                                       // 0x092E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x092F(0x0001) MISSED OFFSET
	float                                              DamageFalloffPerHit;                                      // 0x0930(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ActorsHitThisSwing;                                       // 0x0938(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              ActorsDamagedThisSwing;                                   // 0x0948(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              CharactersDamagedThisSwing;                               // 0x0958(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0968(0x0018) MISSED OFFSET

	void OnTraceStart(unsigned char State)//offset:0x13CEB30;
	void OnMeleeWeaponHit(const struct FHitResult& Hit, unsigned char AttackState)//offset:0xF83740;
	bool IsHoldToAttack(unsigned char AttackState)//offset:0xF83690;
	bool HasMeleeTrace(unsigned char UseState)//offset:0xF834F0;
	float GetTraceStartTime(unsigned char UseState)//offset:0xF83440;
	void GetOverrideTraceHits(unsigned char UseState, TArray<struct FHitResult>* OverrideHits)//offset:0xF83330;
	void ApplyMeleeDamage(TArray<struct FHitResult> Hits, unsigned char AttackState)//offset:0xF83090;
};


// Class DreadHunger.DH_BodyPart
// size:0x0000 (0x0980 - 0x0980)
class ADH_BodyPart : public ADH_Weapon_Melee
{
public:
};


// Class DreadHunger.DH_BodyPartPickup
// size:0x0140 (0x0390 - 0x04D0)
class ADH_BodyPartPickup : public ADH_InventoryPickup
{
public:
	class USceneComponent*                             PivotComponent;                                           // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               SourceMesh;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParentBone;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ExcludedChildBones;                                       // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCosmetic;                                                // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCapEnds;                                                 // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      MinimumWeight;                                            // 0x03C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03C3(0x0005) MISSED OFFSET
	class UProceduralMeshComponent*                    BodyPartMesh;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StumpMesh;                                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 CapMesh;                                                  // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CapAttachSocket;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FTransform                                  CapRelativeTransform;                                     // 0x03F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  RemovalSound;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    StumpBloodParticle;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FCachedProcMeshGeometry                     GeometryCache;                                            // 0x0430(0x0020)
	struct FVector                                     SpawnVelocity;                                            // 0x0450(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x64];                                      // 0x045C(0x0064) MISSED OFFSET
	class ADH_Character*                               CharacterOwner;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	void OnRep_SpawnVelocity()//offset:0xF1B560;
};


// Class DreadHunger.DH_BodyPartView
// size:0x0030 (0x02E0 - 0x0310)
class ADH_BodyPartView : public ADH_InventoryView
{
public:
	class UStaticMeshComponent*                        StumpMesh;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BloodParticle;                                            // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ImpactEffect*                            BloodDripImpact;                                          // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_BodyPartPickup*                          PickupClass;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	void OnBloodImpact(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)//offset:0xF1ADE0;
};


// Class DreadHunger.DH_BoneDagger
// size:0x0030 (0x0980 - 0x09B0)
class ADH_BoneDagger : public ADH_Weapon_Melee
{
public:
	class UAnimSequenceBase*                           HeldAnimation_Targeting;                                  // 0x0980(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           HeldAnimation_Targeting_FP;                               // 0x0988(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 SelfDamageType;                                           // 0x0990(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0998(0x0008) MISSED OFFSET
	class AActor*                                      PendingTarget;                                            // 0x09A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x09A8(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_InventoryView_Static
// size:0x0000 (0x02E0 - 0x02E0)
class ADH_InventoryView_Static : public ADH_InventoryView
{
public:
};


// Class DreadHunger.DH_BoneDagger_View
// size:0x0000 (0x02E0 - 0x02E0)
class ADH_BoneDagger_View : public ADH_InventoryView_Static
{
public:
};


// Class DreadHunger.DH_PlayerStart
// size:0x0018 (0x0250 - 0x0268)
class ADH_PlayerStart : public APlayerStart
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EDHPlayerstartLocation                             StartLocation;                                            // 0x0258(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class APawn*                                       AttachedPawn;                                             // 0x0260(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	void OnRep_AttachedPawn()//offset:0xF6AAA0;
};


// Class DreadHunger.DH_BrigCell
// size:0x00A8 (0x0268 - 0x0310)
class ADH_BrigCell : public ADH_PlayerStart
{
public:
	struct UEMulticastInlineDelegate                   OnPrisonerFreed;                                          // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPrisonerAdded;                                          // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FText                                       FreedPrisonerMessage;                                     // 0x0288(0x0028) (Edit, DisableEditOnInstance)
	class USoundBase*                                  FreedPrisonerSound;                                       // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FreedPrisonerImage;                                       // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET
	struct FTransform                                  DoorTransform;                                            // 0x02C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class ADH_PlayerState*                             Prisoner;                                                 // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ADH_BrigDoor*                                BrigDoorClass;                                            // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_BrigDoor*                                BrigDoor;                                                 // 0x0300(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	void SetCellNumber(int InCellNumber)//offset:0xF1BAD0;
	void OnRep_Prisoner()//offset:0xF1B520;
	void OnPrisonerRemoved(class AActor* DestroyedActor)//offset:0xF1B2F0;
	void OnPrisonerDied(class ADH_PrisonerPawn* DeadPrisoner)//offset:0xF1B2F0;
	bool FreePrisoner(class ADH_PlayerState* FreeingPlayer)//offset:0xF1A530;
	bool AddPrisoner(class ADH_PlayerState* NewPrisoner)//offset:0xF19E50;
};


// Class DreadHunger.DH_BrigDoor
// size:0x0020 (0x03B0 - 0x03D0)
class ADH_BrigDoor : public ADH_DoorActor
{
public:
	class UDH_InventoryManager*                        InventoryComponent;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                CellNumber;                                               // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x03BC(0x0014) MISSED OFFSET

	void OnUnlockCraftStarted(class UDH_CraftingProject* Project)//offset:0xF1B7C0;
	void OnUnlockCraftComplete(class UDH_CraftingProject* Project, TArray<class AActor*> Results)//offset:0xF1B690;
	void OnRep_CellNumber()//offset:0xF1B3A0;
};


// Class DreadHunger.DH_BufferTransferComponent
// size:0x0040 (0x00B0 - 0x00F0)
class UDH_BufferTransferComponent : public UActorComponent
{
public:

	void SendBufferToClient(int BufferSize)//offset:0xF1BA40;
	void SendBufferChunkToClient(TArray<unsigned char> BufferChunk)//offset:0xF1B9A0;
	void RequestNextBufferChunk(int ReceivedBufferSize)//offset:0xF1B8E0;
};


// Class DreadHunger.DH_BuoyancyComponent
// size:0x0048 (0x00B0 - 0x00F8)
class UDH_BuoyancyComponent : public UActorComponent
{
public:
	bool                                               bDebug;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheapBuoyancy;                                           // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              BuoyancyStrength;                                         // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InWaterLinearDamping;                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InWaterAngularDamping;                                    // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             BuoyancyTestPoints;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      BuoyancyStrengths;                                        // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
};


// Class DreadHunger.DH_HeatSource
// size:0x0010 (0x0220 - 0x0230)
class ADH_HeatSource : public AActor
{
public:
	class UDH_HeatSourceComponent*                     HeatComponent;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_Campfire
// size:0x0058 (0x0230 - 0x0288)
class ADH_Campfire : public ADH_HeatSource
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        FirelightComponent;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       CraftingComponent;                                        // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       UnlitCraftingComponent;                                   // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnFireExpired;                                            // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFireRelit;                                              // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void ReLitFire(class UDH_CraftingProject* FuelProject)//offset:0xF1B850;
	void OnFireLit(class UActorComponent* Component, bool bReset)//offset:0xF1B1E0;
	void OnFireDied(class UActorComponent* Component)//offset:0xF1B150;
	void AddFuel(class UDH_CraftingProject* FuelProject)//offset:0xF19DC0;
};


// Class DreadHunger.DH_CannibalCharacter
// size:0x0070 (0x0AB0 - 0x0B20)
class ADH_CannibalCharacter : public ADH_AnimalCharacter
{
public:
	TArray<struct FMaterialSectionVisibilityMap>       RandomAppearances;                                        // 0x0AB0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FRandomMaterialsList>             RandomMaterials;                                          // 0x0AC0(0x0050) (Edit, DisableEditOnInstance)
	bool                                               bActive;                                                  // 0x0B10(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0B11(0x000F) MISSED OFFSET

	void OnSetActive(bool bNewActive)//offset:0x13CEB30;
	void OnRep_Active()//offset:0xF1B380;
};


// Class DreadHunger.DH_CensorshipComponent
// size:0x0000 (0x0200 - 0x0200)
class UDH_CensorshipComponent : public USceneComponent
{
public:

	void OnStreamerModeChanged(bool bStreamerMode)//offset:0xF1B600;
};


// Class DreadHunger.DH_ChapterBoundsVolume
// size:0x0000 (0x0258 - 0x0258)
class ADH_ChapterBoundsVolume : public AVolume
{
public:
};


// Class DreadHunger.DH_CharacterAnimInstance
// size:0x00F0 (0x02C0 - 0x03B0)
class UDH_CharacterAnimInstance : public UAnimInstance
{
public:
	class UAnimSequenceBase*                           BecomeEnsnaredAnimation;                                  // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           EnsnaredAnimation;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           JumpLaunchAnimation;                                      // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           JumpLandAnimation;                                        // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LegIKAlpha;                                               // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             FootPlacementPositions;                                   // 0x02E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FCharacterIKData>                    LimbIK;                                                   // 0x02F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<EClimbableActorType, struct FClimbingAnimations> ClimbingAnimations;                                       // 0x0308(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UBlendSpaceBase*                             CurrentClimbingBlendSpace;                                // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWalking;                                                 // 0x0360(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSwimming;                                                // 0x0361(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClimbing;                                                // 0x0362(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0363(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnsnared;                                                // 0x0364(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              WalkDirection;                                            // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedAlpha;                                           // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbSpeedAlpha;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimSpeedAlpha;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpperBodyMontageAlpha;                                    // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadMontageAlpha;                                         // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSlopeConform;                                       // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              SlopeConformInterpSpeed;                                  // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SlopeRotationOffset;                                      // 0x0388(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlopeConformAlpha;                                        // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	void GetLimbIK(const struct FName& BoneName, struct FCharacterIKData* OutIK)//offset:0xF1F560;
};


// Class DreadHunger.DH_CharacterMovementComponent
// size:0x0040 (0x0B00 - 0x0B40)
class UDH_CharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              ClimbingSpeed;                                            // 0x0B00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class ADH_Character*                               DHCharacterOwner;                                         // 0x0B08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0B10(0x001C) MISSED OFFSET
	float                                              TargetAutoTreadDepth;                                     // 0x0B2C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoTreadDepthSpeed;                                      // 0x0B30(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanMoveUnderWater;                                       // 0x0B34(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoStepUpOutOfWater;                                    // 0x0B35(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysAutoStepOutOfWater;                                // 0x0B36(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0B37(0x0001) MISSED OFFSET
	float                                              MaxSwimDepth;                                             // 0x0B38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_CheatManager
// size:0x0010 (0x0078 - 0x0088)
class UDH_CheatManager : public UCheatManager
{
public:

	void UseCheatDetection(bool bYes)//offset:0xF1FA70;
	void UnlockArmory()//offset:0x806320;
	void TakeDamage(float Damage, float Delay)//offset:0xF20510;
	void StopUpdateLobbyFilterRules()//offset:0x806320;
	void StartUpdateLobbyFilterRules()//offset:0x806320;
	void Spectate()//offset:0xF204F0;
	void SpawnCannibalsOnMe()//offset:0x806320;
	void SimulateLostServerConnection()//offset:0x806320;
	void SimulateDifferentServerVersion()//offset:0x806320;
	void ShowPreGameInstructions()//offset:0xF204D0;
	void ShowConnectToIP()//offset:0x806320;
	void ShipEscaped()//offset:0xF204B0;
	void SetWarmth(float NewWarmth)//offset:0xF20430;
	void SetTutorialChapter(ETutorialChapters Chapter)//offset:0xF203B0;
	void SetTOD(float Hour)//offset:0xF20210;
	void SetStorageLimit(int NewLimit)//offset:0xF1F000;
	void SetSpellCharge(float NewSpellCharge)//offset:0xF20190;
	void SetShipHealth(float InHealthPct)//offset:0xF20110;
	void SetSanity(float NewSanity)//offset:0xF20090;
	void SetNumberOfThralls(int Amount)//offset:0xF20000;
	void SetMaxPlayers(int NewMaxPlayers)//offset:0xF1FF70;
	void SetIsThrall(bool bThrall)//offset:0xF1FEE0;
	void SetIsSpiritWalking(bool bNewIsSpiritWalking, float Duration)//offset:0xCC1A20;
	void SetIsCannibal(float InCannibalLevel)//offset:0xF1FE60;
	void SetHunger(float NewHunger)//offset:0xF1FD50;
	void SetBlizzardIntensity(float NewBlizzardIntensity)//offset:0xF1FBB0;
	void SetAllowAllCosmetics(bool bAllowAllCosmetics)//offset:0xF1FA70;
	void SetAllowAchievements(bool AllowAchievements)//offset:0xF1FB20;
	void Scumbag(bool bYes)//offset:0xF1FA70;
	void ResetSpellCooldowns()//offset:0xF1FB00;
	void ResetCosmeticUnlocks()//offset:0x806320;
	void ResetAchivements()//offset:0x806320;
	void RemoveShipCosmetic(const class FString& InItemCode)//offset:0xF1F1B0;
	void RemoveCosmetic(const class FString& InItemCode)//offset:0xF1F1B0;
	void RandomizeThralls()//offset:0x806320;
	void LoadReplay(const class FString& Filename)//offset:0xF1F1B0;
	void IgnoreAnyExplorersAliveCheck(bool bIgnore)//offset:0xF1FA70;
	void HasEntitlement(const class FString& InId, const class FString& InType)//offset:0xF1F970;
	void GiveRandomQuest()//offset:0x806320;
	void GiveQuest(const struct FName& QuestName)//offset:0xF1F8E0;
	class UObject* GiveInventory(const class FString& InventoryName, int Amount)//offset:0xF1F7B0;
	void GiveBackpack()//offset:0xF1F790;
	void GetIPCountry()//offset:0x806320;
	void ForceThrall()//offset:0xF1F340;
	void ForceSurvivor()//offset:0xF1F320;
	void ExportTitleData(const class FString& Filename)//offset:0xF1F1B0;
	void ExportMatchStats()//offset:0x806320;
	void EquipShipCosmetic(const class FString& InItemCode)//offset:0xF1F1B0;
	void EquipCosmetic(const class FString& InItemCode)//offset:0xF1F1B0;
	void EndMatch(bool bExplorersWin)//offset:0xF1F290;
	void DumpEntitlementStates()//offset:0x806320;
	void DownloadReplay(const class FString& MatchUUID)//offset:0xF1F1B0;
	void DisplayMatchEndMessage()//offset:0xF1F270;
	void Crash()//offset:0xF1F250;
	void ConvertReplay(const class FString& Filename)//offset:0xF1F1B0;
	void CompleteCurrentChapter()//offset:0x806320;
	void CheckWarshipCosmeticOwnership()//offset:0x806320;
	void CheckAvatarCosmeticOwnership()//offset:0x806320;
	void BearFight()//offset:0x806320;
	void AllowLobbyStart()//offset:0xF1F190;
	void AIIgnoreMe(bool bShouldIgnore)//offset:0xF1ED20;
	void AdvanceDate()//offset:0xF1F170;
	void AddSteamWebAPICheckAppOwnershipRequest(const class FString& SteamId, int AppId)//offset:0xF1F090;
	void AddSteamWebAPICheckAppDetailsRequest(int AppId)//offset:0xF1F000;
	void AddFuel(int Amount, const class FString& InventoryName)//offset:0xF1EE40;
};


// Class DreadHunger.DH_ClimbableActor
// size:0x0080 (0x0220 - 0x02A0)
class ADH_ClimbableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                MaxClimbers;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class ADH_Inventory*                               RequiredInventory;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            ClimbingPath;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bGeneratePathMesh;                                        // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UStaticMesh*                                 PathStaticMesh;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PathMeshSegmentLength;                                    // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       PathMeshAxis;                                             // 0x0264(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	class USoundBase*                                  BeginClimbSound;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  EndClimbSound;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClimbableActorType                                ClimbingType;                                             // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	TArray<class ADH_Character*>                       CurrentClimbers;                                          // 0x0280(0x0010) (Net, ZeroConstructor)
	TArray<class USplineMeshComponent*>                SplineMeshSegments;                                       // 0x0290(0x0010) (ExportObject, ZeroConstructor)

	class UMeshComponent* GetClimbableMesh()//offset:0x13CEB30;
	void AddClimber(class ADH_Character* NewClimber)//offset:0xF1EDB0;
};


// Class DreadHunger.DH_ColorMaskComponent
// size:0x0060 (0x00B0 - 0x0110)
class UDH_ColorMaskComponent : public UActorComponent
{
public:

	void SetTask(bool bInTask)//offset:0xF20320;
	void SetTarget(bool bInTarget)//offset:0xF20290;
	void SetInteract(bool bInInteract)//offset:0xF1FDD0;
	void SetFriendly(bool bInFriendly)//offset:0xF1FCC0;
	void SetEnemy(bool bInEnemy)//offset:0xF1FC30;
	void AddPrimitiveComponent(class UPrimitiveComponent* PrimitiveComponent)//offset:0xF1EF70;
};


// Class DreadHunger.DH_ColorMaskInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_ColorMaskInterface : public UInterface
{
public:

	void GetLinearColorDelta(float Distance, struct FLinearColor* PrimaryLinearColorDelta, struct FLinearColor* SecondaryLinearColorData)//offset:0xF1F660;
	TArray<class UDH_ColorMaskComponent*> GetColorMaskComponents()//offset:0xF1F4E0;
	class UDH_ColorMaskComponent* GetColorMaskComponent(class UActorComponent* TargetActorComponent)//offset:0xF1F440;
};


// Class DreadHunger.DH_TitleData
// size:0x0000 (0x0028 - 0x0028)
class UDH_TitleData : public UObject
{
public:
};


// Class DreadHunger.DH_ConductorTitleData
// size:0x0018 (0x0028 - 0x0040)
class UDH_ConductorTitleData : public UDH_TitleData
{
public:
};


// Class DreadHunger.DH_GameModeBase
// size:0x0078 (0x0308 - 0x0380)
class ADH_GameModeBase : public AGameMode
{
public:
};


// Class DreadHunger.DH_GameMode
// size:0x0170 (0x0380 - 0x04F0)
class ADH_GameMode : public ADH_GameModeBase
{
public:
	float                                              ShipEscapeTime;                                           // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipSinkTime;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplorersKilledTime;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DaysBeforeBlizzard;                                       // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PregameInstructionsTime;                                  // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class USoundBase*                                  GameStartedSound;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShipEscapingSound;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShipSankSound;                                            // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_RoleDealer*                              RoleDealer;                                               // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_RoleDealer*                              RoleDealerClass;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       LobbyPawnClass;                                           // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       PrisonerPawnClass;                                        // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnTime;                                              // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UDH_DropTable*                               RespawnDropTable;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_Inventory*                               ThrallStartingItem;                                       // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_GameState*                               DHGameState;                                              // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x03F0(0x0014) MISSED OFFSET
	bool                                               bShowPregameInstructions;                                 // 0x0404(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	float                                              StartWithoutAllPlayersTime;                               // 0x0408(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class UDH_ScoreboardDataAsset*                     ScoreboardDataAsset;                                      // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x38];                                      // 0x0418(0x0038) MISSED OFFSET
	TArray<class UDH_PlayerRoleData*>                  RemainingPFHRoles;                                        // 0x0450(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x68];                                      // 0x0460(0x0068) MISSED OFFSET
	TArray<class ADH_CannibalCharacter*>               ActiveCannibals;                                          // 0x04C8(0x0010) (ZeroConstructor)
	TArray<class ADH_CannibalCharacter*>               InactiveCannibals;                                        // 0x04D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	void ShipHasArrived()//offset:0xF2F690;
	void SendThrallMessage(const struct FText& Message, class ADH_PlayerController* Sender)//offset:0xF2F4E0;
	void RemoveCoalPickup(class ADH_InventoryPickup* CoalToRemove)//offset:0xF2F450;
	void OnPokerRoundEnded(class ADH_RoleDealer* InRoleDealer)//offset:0xF2F260;
	void GiveNextCodeToPlayer(class ADH_PlayerState* PlayerState)//offset:0xF2E8A0;
	bool ExportMatchStats(bool bMatchGivesExperience)//offset:0xF2E800;
	void AddCoalPickup(class ADH_InventoryPickup* CoalToAdd)//offset:0xF2E570;
};


// Class DreadHunger.DH_CoopGameMode
// size:0x0030 (0x04F0 - 0x0520)
class ADH_CoopGameMode : public ADH_GameMode
{
public:
	class ADH_WendigoCharacter*                        WendigoPawnClass;                                         // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   WendigoSpawnQueryTemplate;                                // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   WendigoFallbackSpawnQueryTemplate;                        // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_WendigoCharacter*                        Wendigo;                                                  // 0x0508(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0510(0x0010) MISSED OFFSET
};


// Class DreadHunger.DH_CosmeticBundle
// size:0x0098 (0x0030 - 0x00C8)
class UDH_CosmeticBundle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FText                                       FriendlyName;                                             // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FDH_Entitlement>                     Entitlements;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EPlayerTeamRole, int>                         PrestigeRequirements;                                     // 0x0060(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UDH_CosmeticItemBase*>                Cosmetics;                                                // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bReleased;                                                // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_CosmeticItemBase
// size:0x00D8 (0x0030 - 0x0108)
class UDH_CosmeticItemBase : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FText                                       FriendlyName;                                             // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FString                                      OnlineCode;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	EDH_EntitlementsShopType                           ShopType;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UObject*                                     Icon;                                                     // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDH_Entitlement>                     Entitlements;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              EntitledPlayerIDs;                                        // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EPlayerTeamRole, int>                         PrestigeRequirements;                                     // 0x0090(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<ESpecialEventType>                          SpecialEvents;                                            // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bReleased;                                                // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class USoundBase*                                  EquipSound;                                               // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  RemoveSound;                                              // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static class UDH_CosmeticItemBase* Get(const class FString& ItemCode, class UObject* Context)//offset:0xF1F360;
};


// Class DreadHunger.DH_CosmeticPreviewAvatar
// size:0x0230 (0x0220 - 0x0450)
class ADH_CosmeticPreviewAvatar : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	TMap<struct FName, struct FPreviewAvatarCameraPerspective> CameraPerspectives;                                       // 0x0230(0x0050) (Edit)
	TMap<struct FName, struct FRotator>                CameraResetRotations;                                     // 0x0280(0x0050) (Edit)
	int                                                RenderTargetWidth;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RenderTargetHeight;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DragEndTimer;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ForcedCameraPerspective;                                  // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class USceneComponent*                             SceneRoot;                                                // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              AvatarMesh;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTextureRenderTarget2D*                      AvatarRT;                                                 // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CaptureTransformRoot;                                     // 0x0300(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_AvatarSceneCaptureComponent*             AvatarSceneCapture;                                       // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  AvatarDirectionalLight;                                   // 0x0310(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  AvatarFillLight;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0320(0x0058) MISSED OFFSET
	TArray<class UDH_CosmeticItemBase*>                HoveredItemStack;                                         // 0x0378(0x0010) (ZeroConstructor, Transient)
	class UDH_CosmeticItemBase*                        DraggedItem;                                              // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPreviewCosmeticItems                       PreviewCosmeticItems;                                     // 0x0390(0x0050) (Transient)
	unsigned char                                      UnknownData03[0x60];                                      // 0x03E0(0x0060) MISSED OFFSET
	float                                              MaxZoomFOV;                                               // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0444(0x000C) MISSED OFFSET

	void RemoveItem(class UDH_CosmeticItemBase* RemovedItem, unsigned char AppearanceIndex)//offset:0xF24680;
	void OnDragEndTimerExpired()//offset:0xF244F0;
	void OnCosmeticItemWidgetMouseLeave(class UDH_CosmeticItemBase* InItem)//offset:0xF241C0;
	void OnCosmeticItemWidgetMouseEnter(class UDH_CosmeticItemBase* InItem)//offset:0xF24130;
	void OnCosmeticItemDraggedWidgetEnd(class UDH_CosmeticItemBase* InItem)//offset:0xF240A0;
	void OnCosmeticItemDraggedWidgetBegin(class UDH_CosmeticItemBase* InItem)//offset:0xF24010;
	class UMeshComponent* GetAvatarMesh()//offset:0xF23B00;
	void EquipItem(class UDH_CosmeticItemBase* SelectedItem, unsigned char AppearanceIndex)//offset:0xF23A10;
};


// Class DreadHunger.DH_CosmeticsListDataAsset
// size:0x0048 (0x0030 - 0x0078)
class UDH_CosmeticsListDataAsset : public UPrimaryDataAsset
{
public:
	struct FCosmeticsItemsList                         PlayerCosmetics;                                          // 0x0030(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCosmeticsItemsList                         ShipCosmetics;                                            // 0x0050(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class ADH_DetachedCosmetic*                        DetachedCosmeticClass;                                    // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_CosmeticsPreviewMesh
// size:0x0020 (0x0220 - 0x0240)
class ADH_CosmeticsPreviewMesh : public AActor
{
public:
	class UDH_PlayerRoleData*                          PreviewRole;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UDH_CosmeticItemBase*>                PreviewCosmetics;                                         // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_CraftableInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_CraftableInterface : public UInterface
{
public:

	void OnCrafted(class ADH_PlayerState* CraftingPlayer)//offset:0xF24250;
};


// Class DreadHunger.DH_CraftingComponent
// size:0x01D0 (0x00B0 - 0x0280)
class UDH_CraftingComponent : public UActorComponent
{
public:
	bool                                               bShowRecipesInUI;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeIngredients;                                      // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAbortProjectsOnDeactivate;                               // 0x00B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOwnerTransformForCraftingResult;                      // 0x00B3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAcceptTransactingInventoryIngredients;                   // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanConsumeIngredientsFromOwnersInventory;                // 0x00B5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerRolePerk                                    CraftingSpeedPerk;                                        // 0x00B6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x00B7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundCraftRadius;                                        // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowGroundCraftingRequirements;                          // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                MaxConcurrentProjects;                                    // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxConcurrentProjectsOfSameType;                          // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCraftingRecord>                     CraftingLimits;                                           // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance)
	ECraftingMethod                                    CraftingMethod;                                           // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TMap<EInventoryType, int>                          ContributedComponents;                                    // 0x00E0(0x0050) (BlueprintVisible, BlueprintReadOnly)
	struct UEMulticastInlineDelegate                   OnStartedCrafting;                                        // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCompletedCrafting;                                      // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFinishedCrafting;                                       // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAbortedCrafting;                                        // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCurrentProjectsChangedDelegate;                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCraftingProgressTypeChangedDelegate;                    // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnReachedCraftingLimit;                                   // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCraftableRecipesChangedDelegate;                        // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UDH_CraftingRecipe*>                  CraftableRecipes;                                         // 0x01B0(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance)
	ECraftingProgressMethod                            CraftingProgressType;                                     // 0x01C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	TArray<struct FCraftingRecord>                     CraftedRecipes;                                           // 0x01C8(0x0010) (Net, ZeroConstructor)
	class UDH_InventoryManager*                        OwnerInventory;                                           // 0x01D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADH_HumanCharacter*                          PlayerOwner;                                              // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_DropTable*                               HarvestDropTable;                                         // 0x01E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x01F0(0x0058) MISSED OFFSET
	TArray<class UDH_CraftingProject*>                 CurrentProjects;                                          // 0x0248(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0258(0x0010) MISSED OFFSET
	TArray<class AActor*>                              GroundIngredients;                                        // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	class UDH_CraftingProject* StartNewProject(class UDH_CraftingRecipe* Recipe, TArray<class AActor*> GroundIngredientsToUse, class ADH_PlayerState* CraftingPlayer)//offset:0xF24750;
	void OnRep_CurrentProjects()//offset:0xF24640;
	void OnRep_CraftedRecipes()//offset:0xF24620;
	void OnRep_CraftableRecipes()//offset:0xF24600;
	void OnOwnerDestroyed(class AActor* DestroyedActor)//offset:0xF24530;
	void OnMatchEnded()//offset:0xF24510;
	void OnCraftingInventoryRemoved()//offset:0xF244D0;
	void OnCraftingInventoryClosed(class UDH_InventoryManager* OtherInventory)//offset:0xF24440;
	void OnCraftingInventoryAdded(class ADH_Inventory* AddedType, int AddedAmount)//offset:0xF24370;
	void OnCraftingIngredientDestroyed(class AActor* DestroyedActor)//offset:0xF242E0;
	int GetQuantityOfGroundIngredients(EInventoryType Type, class ADH_PlayerState* CraftingPlayer)//offset:0xF23F40;
	EInventoryType GetCraftingType(class AActor* InActor)//offset:0xF23EA0;
	class UDH_CraftingProject* GetCraftingProjectByRecipe(class UDH_CraftingRecipe* Recipe)//offset:0xF23E00;
	class UDH_CraftingProject* GetCraftingProjectByIndex(int Index)//offset:0xF23D60;
	ECraftingProgressMethod GetCraftingProgressType()//offset:0xF23D40;
	int GetCraftingLimit(class UDH_CraftingRecipe* Recipe)//offset:0xF23CA0;
	int GetCraftCount(class UDH_CraftingRecipe* Recipe)//offset:0xF23B40;
	TArray<class UDH_CraftingRecipe*> GetCraftableRecipes()//offset:0xF23BE0;
	void EmptyCraftableRecipes()//offset:0xF239F0;
	class UDH_CraftingProject* Craft(class UDH_CraftingRecipe* Recipe, class ADH_PlayerState* CraftingPlayer)//offset:0xF23920;
	void CompleteProject(class UDH_CraftingProject* CompletedProject)//offset:0xF23890;
	void CompleteAllProjects()//offset:0xF23870;
	bool CanCraft(class UDH_CraftingRecipe* Recipe, class ADH_PlayerState* CraftingPlayer)//offset:0xF237A0;
	void AbortProject(class UDH_CraftingProject* AbortedProject)//offset:0xF23710;
	void AbortAllProjects(class ADH_PlayerState* OnlyInstigatedBy)//offset:0xF23680;
};


// Class DreadHunger.DH_CraftingData
// size:0x00A0 (0x0030 - 0x00D0)
class UDH_CraftingData : public UDataAsset
{
public:
	TMap<EInventoryType, struct FCraftingIngredientData> Ingredients;                                              // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<ECraftingComponentFamily, struct FCraftingIngredientFamilyData> IngredientFamilies;                                       // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};


// Class DreadHunger.DH_CraftingProject
// size:0x0060 (0x0028 - 0x0088)
class UDH_CraftingProject : public UObject
{
public:
	class UDH_CraftingRecipe*                          Recipe;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              UtilizedGroundIngredients;                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class ADH_PlayerState*                             CraftingPlayer;                                           // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bAborted;                                                 // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET
	class UDH_CraftingComponent*                       OwningComponent;                                          // 0x0060(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	void OnRep_Recipe()//offset:0xF24660;
	void OnRep_Completed()//offset:0xF245E0;
	void OnRep_Aborted()//offset:0xF245C0;
	bool GetCompleted()//offset:0xF23B20;
	bool GetAborted()//offset:0xF23AE0;
};


// Class DreadHunger.DH_CraftingRecipe
// size:0x01D0 (0x0030 - 0x0200)
class UDH_CraftingRecipe : public UDataAsset
{
public:
	bool                                               bCreateQuestNote;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrallsOnly;                                             // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	TArray<class AActor*>                              DisallowedPlacementSurfaces;                              // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	ECraftingSpawnPosition                             SpawnPosition;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              CraftingTime;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerMatchStatType                               CraftingStat;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                MaxCraftCount;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Yield;                                                    // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPoisonResult;                                            // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCleanPoison;                                             // 0x005D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPoisonedIngredients;                                // 0x005E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	TArray<EInventoryType>                             ConsumedIngredientTypes;                                  // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	ECraftingIngredientRules                           IngredientRules;                                          // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EInventoryCraftingRecipient                        RecipientInventory;                                       // 0x0071(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	class USoundBase*                                  StartedCraftingSound;                                     // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FinishedCraftingSound;                                    // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LocalStartedCraftingSound;                                // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAudioFaderCurve                                   FadeCurve;                                                // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	class USoundBase*                                  LocalFinishedCraftingSound;                               // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CraftingSoundParams;                                      // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             StartedCraftingParticle;                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FinishedCraftingParticle;                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IngredientConsumedParticle;                               // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  ParticleRelativeTransform;                                // 0x00D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EffectAttachSocket;                                       // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviewBlueprintOnlyVisibleToOwner;                       // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UMaterialInterface*                          PreviewMaterial;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidHeightScale;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0128(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Title;                                                    // 0x0140(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<EInventoryType, int>                          RequiredIngredients;                                      // 0x0158(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<ECraftingComponentFamily, int>                RequiredIngredientFamilies;                               // 0x01A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class AActor*                                      CraftingResult;                                           // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_CraftingStation
// size:0x0030 (0x0220 - 0x0250)
class ADH_CraftingStation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        IngredientInventory;                                      // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       CraftingComponent;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_CrewActivity
// size:0x0020 (0x0030 - 0x0050)
class UDH_CrewActivity : public UDataAsset
{
public:
	class UAnimSequenceBase*                           Animation;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Chance;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FActivityProp>                       Props;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_CrewActivityComponent
// size:0x0020 (0x0470 - 0x0490)
class UDH_CrewActivityComponent : public UBillboardComponent
{
public:
	TArray<class UDH_CrewActivity*>                    Activities;                                               // 0x0470(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0480(0x0010) MISSED OFFSET
};


// Class DreadHunger.DH_CrewController
// size:0x00D0 (0x0298 - 0x0368)
class ADH_CrewController : public AController
{
public:
	float                                              ActivityIntervalMin;                                      // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivityIntervalMax;                                      // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_CrewActivity*>                    AllowedActivities;                                        // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDH_CrewDialogueSet*                         FriendlyFireDialogue;                                     // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_HumanCharacter*                          ControlledCrew;                                           // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x02C0(0x00A8) MISSED OFFSET

	void StopActivity()//offset:0xF2AE60;
	void OnPawnStareTargetChanged(class ADH_HumanCharacter* StareTarget)//offset:0xF2AA00;
	void OnPawnHitObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)//offset:0xF2A860;
	void OnPawnDamaged(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)//offset:0xF2A6B0;
	void OnCinematicModeChanged(bool bCinematicMode)//offset:0xF2A620;
};


// Class DreadHunger.DH_CrewDialogueSet
// size:0x0050 (0x0030 - 0x0080)
class UDH_CrewDialogueSet : public UDataAsset
{
public:
	TMap<EPlayerTeamRole, struct FCrewDialogueList>    Dialogue;                                                 // 0x0030(0x0050) (Edit, DisableEditOnInstance)
};


// Class DreadHunger.DH_CrewInviteBoard
// size:0x0010 (0x0220 - 0x0230)
class ADH_CrewInviteBoard : public AActor
{
public:
};


// Class DreadHunger.DH_CrewPathSpline
// size:0x00A0 (0x0550 - 0x05F0)
class UDH_CrewPathSpline : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0550(0x0048) MISSED OFFSET
	TMap<struct FName, struct FAdjacentPath>           AdjacentPaths;                                            // 0x0598(0x0050) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05E8(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_CrewPathSplineActor
// size:0x0010 (0x0220 - 0x0230)
class ADH_CrewPathSplineActor : public AActor
{
public:
	class UBillboardComponent*                         Sprite;                                                   // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CrewPathSpline*                          Path;                                                     // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_CrewSpawnPoint
// size:0x0000 (0x0248 - 0x0248)
class ADH_CrewSpawnPoint : public ANavigationObjectBase
{
public:
};


// Class DreadHunger.DH_CriticalsInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_CriticalsInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_CustomGameSettings
// size:0x0050 (0x0030 - 0x0080)
class UDH_CustomGameSettings : public UDataAsset
{
public:
	TMap<ECustomGameSetting, struct FCustomGameSetting> CustomGameSettings;                                       // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UDH_CustomGameSettings* Get(class UObject* Context)//offset:0xF2A170;
};


// Class DreadHunger.DH_CustomizationStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_CustomizationStatics : public UObject
{
public:
};


// Class DreadHunger.DH_DamageType
// size:0x0048 (0x0040 - 0x0088)
class UDH_DamageType : public UDamageType
{
public:
	bool                                               bExplosive;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCausesDismemberment;                                     // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCausesHitReactionAnimation;                              // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCausesPainEffects;                                       // 0x0043(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCausesWoundEffects;                                      // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNonLethal;                                               // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              ThrallDamageScale;                                        // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipDamageScale;                                          // 0x004C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FriendlyName;                                             // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       DeathDescription;                                         // 0x0068(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UDH_ImpactEffect*                            ImpactEffect;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static class UDamageType* Suicide(class UObject* Context)//offset:0xF2AE80;
	static class UDamageType* Starvation(class UObject* Context)//offset:0xF2ADD0;
	static class UDamageType* Poison(class UObject* Context)//offset:0xF2AC30;
	static class UDamageType* Nitro(class UObject* Context)//offset:0xF2A470;
	static class UDamageType* Falling(class UObject* Context)//offset:0xF2A0E0;
	static class UDamageType* Drowning(class UObject* Context)//offset:0xF2A050;
	static class UDamageType* Cold(class UObject* Context)//offset:0xF29FC0;
};


// Class DreadHunger.DH_DebugControls
// size:0x0050 (0x0260 - 0x02B0)
class UDH_DebugControls : public UUserWidget
{
public:

	void OnCheatManagerChanged(class ADH_PlayerController* PlayerController)//offset:0xF2A590;
};


// Class DreadHunger.DH_LoginStep
// size:0x0040 (0x0028 - 0x0068)
class UDH_LoginStep : public UObject
{
public:

	void UpdateRetryTime()//offset:0xF54B60;
	void Run()//offset:0xF54880;
	void RetryStep()//offset:0xF54860;
	void OnTimeout()//offset:0xF54690;
};


// Class DreadHunger.DH_LoginStepPlatformLogin
// size:0x0008 (0x0068 - 0x0070)
class UDH_LoginStepPlatformLogin : public UDH_LoginStep
{
public:
};


// Class DreadHunger.DH_DebugLoginStepPlatformLogin
// size:0x0000 (0x0070 - 0x0070)
class UDH_DebugLoginStepPlatformLogin : public UDH_LoginStepPlatformLogin
{
public:
};


// Class DreadHunger.DH_DefaultLanguageFilterStateDataAsset
// size:0x0010 (0x0030 - 0x0040)
class UDH_DefaultLanguageFilterStateDataAsset : public UDataAsset
{
public:
	TArray<struct FDH_DefaultLanguageFilterState>      FilterStates;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_DefaultRegionsDataAsset
// size:0x0010 (0x0030 - 0x0040)
class UDH_DefaultRegionsDataAsset : public UDataAsset
{
public:
	TArray<struct FDH_DefaultRegion>                   Regions;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_Defines
// size:0x0000 (0x0028 - 0x0028)
class UDH_Defines : public UBlueprintFunctionLibrary
{
public:

	static class FString GetVersion()//offset:0xF2A380;
	static class FString GetEnvironment()//offset:0xF2A2C0;
	static class FString GetChangelist()//offset:0xF2A200;
};


// Class DreadHunger.DH_DestructibleActor
// size:0x00F0 (0x0220 - 0x0310)
class ADH_DestructibleActor : public AActor
{
public:
	bool                                               bCompletelyDestroy;                                       // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShipObstruction;                                       // 0x0221(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0222(0x0006) MISSED OFFSET
	class UStaticMesh*                                 DestroyedMesh;                                            // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ObstructionIcon;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerMatchStatType                               DamageStat;                                               // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerMatchStatType                               DestructionStat;                                          // 0x0239(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x023A(0x0002) MISSED OFFSET
	float                                              MaximumHealth;                                            // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHealth;                                            // 0x0240(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<class UDamageType*>                         DamageSources;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              FragmentLifespan;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class USoundBase*                                  DestructionSound;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestructionParticle;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDestructibleFragment>               Fragments;                                                // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnSpawnedFragments;                                       // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDamageType*                                 DamageTypeExtraFragments;                                 // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class ADH_PlayerState>              LastPlayerToDamageMe;                                     // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DestroyedState;                                           // 0x02A8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x02A9(0x0017) MISSED OFFSET
	TArray<class AActor*>                              DormantFragments;                                         // 0x02C0(0x0010) (Net, ZeroConstructor)
	struct FDamageInstance                             LastDamageReceived;                                       // 0x02D0(0x0030) (Net)
	TArray<class ADH_InventoryPickup*>                 BasedPickups;                                             // 0x0300(0x0010) (ZeroConstructor)

	void OnRep_LastDamageReceived(const struct FDamageInstance& PreviousDamageInstance)//offset:0xF2AB30;
	void OnRep_IsDestroyed()//offset:0xF2AB10;
	void OnRep_DormantFragments()//offset:0xF2AAD0;
	void OnBasedPickupDestroyed(class AActor* Act)//offset:0xF2A500;
	void BreakApart(bool bSpawnBonusFragments)//offset:0xF29F30;
};


// Class DreadHunger.DH_DestructibleFragment
// size:0x0018 (0x0220 - 0x0238)
class ADH_DestructibleFragment : public AActor
{
public:
	class UDH_BuoyancyComponent*                       BuoyancyComponent;                                        // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ADH_DestructibleFragment*                    DefaultFragment;                                          // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_DestructionStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_DestructionStatics : public UObject
{
public:
};


// Class DreadHunger.DH_DetachedCosmetic
// size:0x0000 (0x0220 - 0x0220)
class ADH_DetachedCosmetic : public AActor
{
public:
};


// Class DreadHunger.DH_DigSite
// size:0x00C0 (0x0220 - 0x02E0)
class ADH_DigSite : public AActor
{
public:
	float                                              MaxDiggingHealth;                                         // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDiggingHealth;                                     // 0x0224(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FTransform                                  BuriedActorSpawnTransform;                                // 0x0230(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  BuriedActorRaisedTransform;                               // 0x0260(0x0030) (Edit, IsPlainOldData)
	class AActor*                                      BuriedActorClass;                                         // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BuriedActor;                                              // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDugUp;                                                   // 0x02A0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	TArray<class UDamageType*>                         DiggingDamageTypes;                                       // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  DugUpSound;                                               // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DiggingSound;                                             // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class ADH_PlayerState>              LastDiggingPlayerState;                                   // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

	void OnRep_DugUp()//offset:0xF2AAF0;
	void OnRep_CurrentDiggingHealth()//offset:0xF2AAB0;
	void OnRep_BuriedActor()//offset:0xF2AA90;
};


// Class DreadHunger.DH_DoppelgangerAnimInstance
// size:0x0010 (0x02C0 - 0x02D0)
class UDH_DoppelgangerAnimInstance : public UAnimInstance
{
public:
	class USkeletalMeshComponent*                      MasterMesh;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DoppelgangerAlpha;                                        // 0x02C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_DownloadReplayRequestHandler
// size:0x0000 (0x0028 - 0x0028)
class UDH_DownloadReplayRequestHandler : public UObject
{
public:
};


// Class DreadHunger.DH_DraggedInventoryInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_DraggedInventoryInterface : public UInterface
{
public:

	void ShowDropResultNotification(class UObject* InDropResultIcon, const struct FLinearColor& Tint)//offset:0xF2F6B0;
};


// Class DreadHunger.DH_DropTable
// size:0x0020 (0x0030 - 0x0050)
class UDH_DropTable : public UDataAsset
{
public:
	bool                                               bIgnoreWorldSettingRestrictions;                          // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                MaxInventoryToSpawn;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanSpawnTrinket;                                         // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWildlifeTable;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FDH_InventoryList>                   Table;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_DropZoneInventoryDropper
// size:0x0018 (0x0028 - 0x0040)
class UDH_DropZoneInventoryDropper : public UObject
{
public:
};


// Class DreadHunger.DH_EntitlementItemInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_EntitlementItemInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_EnvironmentalSettings
// size:0x00B0 (0x0030 - 0x00E0)
class UDH_EnvironmentalSettings : public UDataAsset
{
public:
	class UParticleSystem*                             WeatherParticleSystem;                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnowflakeCount_Gentle;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnowflakeCount_Blizzard;                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SnowVelocity_Gentle;                                      // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SnowVelocity_Blizzard;                                    // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SnowLocationOffset_Blizzard;                              // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FogDensity;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FogDensity_Whiteout;                                      // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           DirectionalLightColor;                                    // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DirectionalLightIntensity;                                // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           DirectionalLightColor_Bloodmoon;                          // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DirectionalLightIntensity_Bloodmoon;                      // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           SkyLightColor_Bloodmoon;                                  // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SkyLightIntensity_Bloodmoon;                              // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                LightDirection;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LightDirection_Bloodmoon;                                 // 0x00B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           SkyLightColor;                                            // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SkyLightIntensity;                                        // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           IndirectLightingColor;                                    // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 IndirectLightingIntensity;                                // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_ErrorStore
// size:0x0050 (0x0028 - 0x0078)
class UDH_ErrorStore : public UObject
{
public:

	void OnClearVivoxError(const struct FDH_VivoxError& InError)//offset:0xF2F070;
	void OnClearOnlineError(const struct FDH_OnlineError& InError)//offset:0xF2EFC0;
	void OnClearAllErrors()//offset:0xF2EFA0;
	void OnAddVivoxError_Internal(const struct FDH_VivoxError& InError)//offset:0xF2EE40;
	void OnAddVivoxError(const struct FDH_VivoxError& InError)//offset:0xF2ED70;
	void OnAddOnlineError_Internal(const struct FDH_OnlineError& InError)//offset:0xF2EC60;
	void OnAddOnlineError(const struct FDH_OnlineError& InError)//offset:0xF2EBB0;
	void LogVivoxErrors(TArray<struct FDH_VivoxError> Codes)//offset:0xF2EAD0;
	void LogOnlineErrors(TArray<struct FDH_OnlineError> Codes)//offset:0xF2EA00;
};


// Class DreadHunger.DH_EscapeHandler
// size:0x0010 (0x0028 - 0x0038)
class UDH_EscapeHandler : public UObject
{
public:
	TArray<struct FDH_HandlerGroup>                    HandlerGroups;                                            // 0x0028(0x0010) (ZeroConstructor, Transient)
};


// Class DreadHunger.DH_EscapeHandlerInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_EscapeHandlerInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_ExplosionActor
// size:0x0090 (0x0220 - 0x02B0)
class ADH_ExplosionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	float                                              Damage;                                                   // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamageOnSpawn;                                           // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	class UDamageType*                                 DamageType;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CollisionProfile;                                         // 0x0244(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadiusThroughBlockScale;                             // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThroughBlockScale;                                  // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionParticle;                                        // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMatineeCameraShake*                         ExplosionCameraShake;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HumansObliterated;                                        // 0x0270(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0274(0x003C) MISSED OFFSET

	void DealDamage(float Amount, class AActor* SourceActor, const struct FVector& OriginOffset)//offset:0xF2E6D0;
};


// Class DreadHunger.DH_FirstTimeHintWidget
// size:0x0078 (0x0260 - 0x02D8)
class UDH_FirstTimeHintWidget : public UUserWidget
{
public:
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) MISSED OFFSET
	struct FName                                       KeybindActionName;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayDelay;                                             // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	TMap<struct FName, bool>                           KeybindHoldMap;                                           // 0x0288(0x0050) (Edit, DisableEditOnInstance)

	void OnWidgetAnimationHandlerBeginShow(class UDH_WidgetAnimationHandler* InAnimationHandler)//offset:0xF2F3C0;
	void OnMappingsChangedEvent(class APlayerController* PlayerController)//offset:0xF2F1D0;
	void OnHumanCharacterPlayerStateSet(class ADH_HumanCharacter* HumanCharacter)//offset:0xF2F140;
	void BP_SetInteractionMessage(const struct FDH_KeybindInteractionMessage& InteractionMessage)//offset:0x13CEB30;
	class UDH_WidgetAnimationHandler* BP_CreateAnimationHandler()//offset:0x13CEB30;
};


// Class DreadHunger.DH_FluidSurfaceComponent
// size:0x0080 (0x04F0 - 0x0570)
class UDH_FluidSurfaceComponent : public UStaticMeshComponent
{
public:
	int                                                MaxDisturbancesPerFrame;                                  // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxDisturbanceDrawDistance;                               // 0x04F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxDisturbanceQueueSize;                                  // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SurfaceResolution;                                        // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RippleMaterial;                                           // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HeightfieldMaterial;                                      // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HeightfieldNormalMaterial;                                // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      FluidHeight0;                                             // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      FluidHeight1;                                             // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      FluidHeight2;                                             // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      FluidHeightNormalRT;                                      // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FluidSimMID;                                              // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FluidNormalMID;                                           // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RippleMID;                                                // 0x0548(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0550(0x0020) MISSED OFFSET

	void CreateDisturbance(const struct FFluidDisturbance& Disturbance)//offset:0xF2E620;
};


// Class DreadHunger.DH_GameInstance
// size:0x0408 (0x01A8 - 0x05B0)
class UDH_GameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x01A8(0x0140) MISSED OFFSET
	class UMaterialParameterCollection*                WeatherParameters;                                        // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialParameterCollection*                TODParameters;                                            // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialParameterCollection*                CharacterMaterialParameters;                              // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimelineUpdateInterval;                                   // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TMap<class FString, struct FLinearColor>           BloodColors;                                              // 0x0308(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UDH_InventoryListDataAsset*                  InventoryList;                                            // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_CosmeticsListDataAsset*                  CosmeticsList;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<ESpecialEventType, struct FSpecialEvent>      SpecialEvents;                                            // 0x0368(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UDH_PlayerRoleData*>                  PlayerRoleList;                                           // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDH_PlayerRanks*                             PlayerRankList;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_MapData*>                         MissionList;                                              // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDH_TutorialChapterList*                     TutorialChapterList;                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CustomGameSettings*                      CustomGameSettingsList;                                   // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_CraftingData*                            CraftingData;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_RolePerkLevelCurve*                      ExperienceToRankCurve;                                    // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ScoreboardDataAsset*                     ScoreboardData;                                           // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 FallingDamageType;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 DrowningDamageType;                                       // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 SuicideDamageType;                                        // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 ColdDamageType;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 StarvationDamageType;                                     // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 PoisonDamageType;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 NitroDamageType;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_TotemSpell*>                      ThrallSpells;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_PlayerTalisman*>                  Talismans;                                                // 0x0450(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0460(0x0068) MISSED OFFSET
	class UDH_PlayerSession*                           PlayerSession;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDH_HintsSaveGame*                           HintsSaveGameInstance;                                    // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_PlayerCareerSaveGame*                    PlayerCareerSaveGameInstance;                             // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_PlayerCareerCloudSaveData*               PlayerCareerCloudSaveDataInstance;                        // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_VoipSettingsSaveGame*                    VoipSettingsSaveGameInstance;                             // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_OnlineSettingsSaveGame*                  OnlineSettingsSaveGameInstance;                           // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_HintsJsonSaveData*                       HintsJsonSaveDataInstance;                                // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_PlayerSettingsJsonSaveData*              PlayerSettingsJsonSaveDataInstance;                       // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_VoipSettingsJsonSaveData*                VoipSettingsJsonSaveDataInstance;                         // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_OnlineSettingsJsonSaveData*              OnlineSettingsJsonSaveDataInstance;                       // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_MessageBus*                              MessageBus;                                               // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_OnlineVoice*                             OnlineVoice;                                              // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_WidgetsToInstanceStore*                  WidgetsToInstanceStore;                                   // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_ErrorStore*                              ErrorStore;                                               // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_Online*                                  Online;                                                   // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_LoginHandler*                            LoginHandler;                                             // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_MatchReplay*                             CurrentReplayInstance;                                    // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             EndOfMatchMusicComponent;                                 // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0558(0x0058) MISSED OFFSET

	void OnSetCurrentReplay(class UDH_MatchReplay* InReplay)//offset:0xF2F330;
	static bool IsLowGore(class UObject* WorldContextObject)//offset:0xF2E970;
	void ConvertSaveGameDataToJsonSaveData()//offset:0xF2E600;
};


// Class DreadHunger.DH_GameplayMessageWidget
// size:0x0008 (0x0260 - 0x0268)
class UDH_GameplayMessageWidget : public UUserWidget
{
public:
	float                                              VisibleTime;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET

	void Init(const struct FText& Messsage, class UTexture2D* Image, const struct FText& Title)//offset:0x13CEB30;
};


// Class DreadHunger.DH_GameplayStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_GameplayStatics : public UObject
{
public:

	static void WorldPosToRefPose(class USkeletalMeshComponent* Mesh, const struct FVector& WorldPos, const struct FName& HitBone, struct FVector* RefPose)//offset:0xF35070;
	static void UpdateComponentOverlaps(class USceneComponent* Comp)//offset:0xF34FF0;
	static void SetViewportClientDrawBlackOutScreen(class UObject* Context, bool bDrawBlackOutScreen)//offset:0xF34F30;
	static void SetMeshToAvatar(class USkeletalMeshComponent* Mesh, class UDH_PlayerRoleData* Avatar, TArray<class UDH_CosmeticItemBase*> Cosmetics, bool bReinitPose)//offset:0xF34D90;
	static class UAudioComponent* PlayVoice(class USoundBase* Sound, class AActor* Instigator, const struct FVector& Location, class USceneComponent* AttachComp, const struct FName& AttachBone, TEnumAsByte<EAttachLocation> AttachRules, class USoundBase* LocalSound, bool bCheckParentInstigator)//offset:0xF34B30;
	static void PlayUISound(class UObject* Context, class USoundBase* Sound)//offset:0xF34A70;
	static class UAudioComponent* PlaySoundViewAligned(class USoundBase* Sound, class AActor* Instigator, const struct FVector& Location, class USceneComponent* AttachComp, const struct FName& AttachBone, TEnumAsByte<EAttachLocation> AttachRules, class USoundBase* LocalSound, bool bCheckParentInstigator)//offset:0xF34810;
	static class UAudioComponent* PlaySound3D(class USoundBase* SoundToPlay, class AActor* Instigator, const struct FVector& Location, class USceneComponent* AttachComp, const struct FName& AttachBone, TEnumAsByte<EAttachLocation> AttachRules)//offset:0xF34640;
	static struct FLinearColor ModifyBrightness(const struct FLinearColor& InColor, float InScale)//offset:0xF34550;
	static bool LobbyHasRequiredPlayerCount(class UObject* Context)//offset:0xF344C0;
	static bool IsWorldTearingDown(class UObject* Context)//offset:0xF34430;
	static bool IsVivoxLoggedIn(class UObject* Context)//offset:0xF34280;
	static bool IsTutorialMap(class UObject* Context)//offset:0xF343A0;
	static bool IsTitleMap(class UObject* Context)//offset:0xF34310;
	static bool IsTestMap(class UObject* Context)//offset:0xF34280;
	static bool IsSpecialEventActive(ESpecialEventType Event, class UObject* Context)//offset:0xF341B0;
	static bool IsOnlineVoiceLoggedIn(class UObject* Context)//offset:0xF34120;
	static bool IsMissionSelected(class UObject* Context)//offset:0xF34090;
	static bool IsLocalPlayerThrall(class UObject* Context)//offset:0xF34000;
	static bool IsLobbyOrTitleMap(class UObject* Context)//offset:0xF33F70;
	static bool IsLobbyMap(class UObject* Context)//offset:0xF33EE0;
	static bool IsLobbyLanguageDisabled(const struct FText& InCode, class UDH_LanguageCodeDataAsset* LanguageCodeDataAsset)//offset:0xF33DB0;
	static bool IsLive(const class FString& EnvironmentStr)//offset:0xF33D10;
	static bool IsInteractTarget(class AActor* TargetActor)//offset:0xF33C80;
	static bool IsInsideShip(class APawn* TestPawn)//offset:0xF33BF0;
	static bool IsCraftingAllowed(class UObject* Context, class UDH_CraftingRecipe* Recipe)//offset:0xF33B20;
	static bool IsConsolePlatform()//offset:0xF33AF0;
	static bool IsAxisKeyDown(class APlayerController* PlayerController, const struct FName& AxisName)//offset:0xF33A10;
	static bool IsActionKeyDown(class APlayerController* PlayerController, const struct FName& ActionName)//offset:0xF33930;
	static bool HasOpenLobbySlot(class UObject* Context)//offset:0xF338A0;
	static float GetWaterDepthAtLocation(class UObject* Context, const struct FHitResult& Hit)//offset:0xF33760;
	static class ADH_Warship* GetWarship(class UObject* Context)//offset:0xF336D0;
	static float GetTimeOfDay(class UObject* Context)//offset:0xF33640;
	static float GetSyncedServerTime(class UObject* Context)//offset:0xF335B0;
	static struct FDateTime GetStartDate(class UObject* Context)//offset:0xF33520;
	static float GetSeaLevel(class UObject* Context)//offset:0xF33490;
	static struct FTransform GetRefPoseTransform(const struct FName& BoneName, class USkeletalMeshComponent* InMesh)//offset:0xF33390;
	static struct FTransform GetPreskinnedRefposeTransform(const struct FName& BoneName, class USkeletalMeshComponent* InMesh)//offset:0xF33290;
	static class UDH_PlayerRoleData* GetPlayerDefaultAvatar(class UObject* Context, TArray<class UDH_PlayerCosmeticItem*>* EquippedCosmetics)//offset:0xF331A0;
	static float GetParticipantPositionalAudioEnergy(class APlayerState* PlayerState)//offset:0xF33110;
	static class ADH_PhysicsVolume* GetOceanVolume(class UObject* Context)//offset:0xF33080;
	static bool GetObstructionRemainingStatus(class UObject* Context)//offset:0xF32FF0;
	static class UDH_MapData* GetMissionData(const class FString& MissionCode, class UObject* Context)//offset:0xF32F10;
	static struct FVector GetLocalViewPosition(class AActor* Context)//offset:0xF32E70;
	static class APawn* GetLocalPawn(class UObject* Context)//offset:0xF32DE0;
	static class ADH_HumanCharacter* GetLocalHuman(class UObject* Context)//offset:0xF32D50;
	static class ADH_PlayerState* GetLocalDHPlayerState(class UObject* Context)//offset:0xF32CC0;
	static class ADH_PlayerController* GetLocalDHPlayerController(class UObject* Context)//offset:0xF32C30;
	static void GetLobbyPlayerCounts(class UObject* Context, int* Current, int* Desired)//offset:0xF32B10;
	static class FString GetLobbyDestinationMission(class UObject* Context)//offset:0xF32A40;
	static float GetLastServerReceivePacketTime(class UObject* Context)//offset:0xF329B0;
	static struct FName GetKeyName(const struct FKey& Key)//offset:0xF328E0;
	static float GetGlobalTemperature(class UObject* Context, ETemperatureScale Scale)//offset:0xF32810;
	static float GetGameCompletionPct(class UObject* Context)//offset:0xF32780;
	static float GetDistFromIcebergSq(class AActor* TestActor)//offset:0xF326F0;
	static class ADH_WorldSettings* GetDHWorldSettings(class UObject* Context)//offset:0xF32660;
	static class ADH_PlayerState* GetDHPlayerStateFromUniqueNetId(const struct FUniqueNetIdRepl& InPlayerId, class UObject* Context)//offset:0xF32520;
	static class ADH_PlayerState* GetDHPlayerState(class UObject* Context, int PlayerIndex)//offset:0xF32450;
	static class ADH_PlayerController* GetDHPlayerController(class UObject* Context, int PlayerIndex)//offset:0xF32380;
	static class ADH_HumanCharacter* GetDHPlayerCharacter(class UObject* Context, int PlayerIndex)//offset:0xF322B0;
	static class ADH_LobbyGameState* GetDHLobbyGameState(class UObject* Context)//offset:0xF32220;
	static class ADH_LobbyGameMode* GetDHLobbyGameMode(class UObject* Context)//offset:0xF32190;
	static class ADH_HUD* GetDHHUD(class APawn* Context)//offset:0xF32100;
	static class ADH_GameStateBase* GetDHGameStateBase(class UObject* Context)//offset:0xF32070;
	static class ADH_GameState* GetDHGameState(class UObject* Context)//offset:0xF31FE0;
	static class ADH_GameModeBase* GetDHGameModeBase(class UObject* Context)//offset:0xF31F50;
	static class ADH_GameMode* GetDHGameMode(class UObject* Context)//offset:0xF31EC0;
	static class UDH_CraftingData* GetCraftingData(class UObject* Context)//offset:0xF31E30;
	static bool GetCollectionVectorParameterDefaultValue(class UMaterialParameterCollection* MPC, const struct FName& Name, struct FLinearColor* DefaultValue)//offset:0xF31D10;
	static class UObject* GetClassDefaultObject(class UObject* InClass)//offset:0xF31C80;
	static struct FName GetBoneClosestToHit(class USkeletalMeshComponent* Mesh, const struct FVector& HitLocation, bool bOnlyVisibleBones)//offset:0xF31B60;
	static float GetBlizzardIntensity(class UObject* Context)//offset:0xF31AD0;
	static TArray<unsigned char> GetArmoryCombination(class AActor* Context)//offset:0xF31A00;
	static float GetActorPctDistanceFromMapEnd(class AActor* Actor)//offset:0xF31970;
	static struct FRotator FindSlopeRotation(const struct FVector& FloorNormal, const struct FRotator& CurrentRotation)//offset:0xF31870;
	static struct FDHCompleteVersion ConstructCompleteVersion()//offset:0xF31750;
	static class FString CompleteVersionToString(const struct FDHCompleteVersion& CompleteVersion)//offset:0xF31640;
	static void ClearMPCOverrides(class UObject* Context, class UMaterialParameterCollection* MPC, TArray<struct FName> Params)//offset:0xF314E0;
	static bool CanReceiveOnlineInvites(class UObject* Context)//offset:0xF31450;
	static void BroadcastGameplayMessage(class UObject* Context, const struct FText& Message, class USoundBase* Sound, class UTexture2D* Icon)//offset:0xF312B0;
	static void AttachToFloor(class AActor* TargetActor)//offset:0xF31230;
	static bool AreVersionsCompatible(const struct FDHCompleteVersion& A, const struct FDHCompleteVersion& B, int ComponentsToTest)//offset:0xF31080;
	static bool AreAnyThrallsBrigged(class UObject* Context)//offset:0xF30FF0;
	static bool AllowDropTableSpawns(class UObject* Context)//offset:0xF30F60;
};


// Class DreadHunger.DH_GameSession
// size:0x0000 (0x0238 - 0x0238)
class ADH_GameSession : public AGameSession
{
public:
};


// Class DreadHunger.DH_GameStateBase
// size:0x0140 (0x0290 - 0x03D0)
class ADH_GameStateBase : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	TArray<class ADH_DestructibleActor*>               ShipObstructions;                                         // 0x02A0(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	class ADH_Warship*                                 Warship;                                                  // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ADH_WarshipEscapeVolume*                     EscapeVolume;                                             // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              GameTimePerHour;                                          // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class USoundBase*                                  NewDaySound;                                              // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseTemperature;                                          // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WhiteoutTemperatureModifier;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TemperatureScale;                                         // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BlizzardTemperatureModifier;                              // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WindVector;                                               // 0x02E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlizzardIntensity;                                        // 0x02F4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              BlizzardRampUpTime;                                       // 0x02F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class UDH_EnvironmentalSettings*                   DefaultEnvironmentSettings;                               // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_EnvironmentalSettings*                   EnvironmentSettings;                                      // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0310(0x0018) MISSED OFFSET
	class UAudioComponent*                             WeatherAudioComponent;                                    // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WeatherParticleComponent;                                 // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSpellInstance>                      ActiveSpells;                                             // 0x0338(0x0010) (Net, ZeroConstructor)
	float                                              CurrentTimeOfDay;                                         // 0x0348(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FDateTime                                   CurrentDate;                                              // 0x0350(0x0008) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x68];                                      // 0x0358(0x0068) MISSED OFFSET
	TArray<struct FDH_EntitlementState>                EntitlementStates;                                        // 0x03C0(0x0010) (ZeroConstructor)

	void SetWindVector(const struct FVector& InWindVector)//offset:0xF3A1D0;
	void SetTimeOfDay(float InHour, bool bImmediateUpdate)//offset:0xF3A060;
	void SetHushOnPlayers(bool bPlayersHushed)//offset:0xF39FD0;
	void SetBlizzardIntensity(float InBlizzardIntensity)//offset:0xF39D70;
	void OnSpellExpired(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF39C10;
	void OnSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF39B40;
	void OnRep_Warship()//offset:0xF39B00;
	void OnRep_ShipObstructions()//offset:0xF39AC0;
	void OnRep_ActiveSpells(TArray<struct FSpellInstance> PreviouslyActiveSpells)//offset:0xF39910;
	float GetTimeOfDay()//offset:0xF39480;
	int GetNumActiveSpellsOfType(class UDH_TotemSpell* Type)//offset:0xF390D0;
	float GetGlobalTemperature()//offset:0xF39000;
	struct FDateTime GetDate()//offset:0xF38F90;
	float GetBlizzardIntensity()//offset:0xF38ED0;
};


// Class DreadHunger.DH_GameState
// size:0x01D8 (0x03D0 - 0x05A8)
class ADH_GameState : public ADH_GameStateBase
{
public:
	bool                                               bShipHasArrived;                                          // 0x03D0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerArrayChangedDelegate;                             // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarshipChangedDelegate;                                 // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnServerVersionChangedDelegate;                           // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerVersionMismatchesChangedDelegate;                 // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0418(0x0005) MISSED OFFSET
	bool                                               bHasCustomLobbySettings;                                  // 0x041D(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x041E(0x0002) MISSED OFFSET
	TArray<class FString>                              ExpectedPlayerIDs;                                        // 0x0420(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0430(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData04[0x4];                                       // 0x0480(0x0004) MISSED OFFSET
	struct FDH_DaysUntilBlizzard                       DaysUntilBlizzard;                                        // 0x0484(0x0008) (Net)
	unsigned char                                      UnknownData05[0x2C];                                      // 0x048C(0x002C) MISSED OFFSET
	class UDH_ScoreboardMockGame*                      MockGameClass;                                            // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x58];                                      // 0x04C0(0x0058) MISSED OFFSET
	float                                              MatchStartTime;                                           // 0x0518(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	EPlayerTeam                                        WinningTeam;                                              // 0x051C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xB];                                       // 0x051D(0x000B) MISSED OFFSET
	TArray<class ADH_ThrallTotem*>                     AllTotems;                                                // 0x0528(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TotemDrainCount;                                          // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FDHCompleteVersion                          ServerVersion;                                            // 0x0540(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	TArray<struct FDHPlayerVersionMismatch>            PlayerVersionMismatches;                                  // 0x0570(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	TArray<class ADH_QuestState*>                      QuestStates;                                              // 0x0588(0x0010) (ZeroConstructor)
	class FString                                      GameUniqueId;                                             // 0x0598(0x0010) (Net, ZeroConstructor)

	void OnTotemDrainTargetsChanged(int Delta)//offset:0xF39CE0;
	void OnRep_WinningTeam()//offset:0xF39B20;
	void OnRep_TotemDrainCount()//offset:0xF39AE0;
	void OnRep_ServerVersion()//offset:0xF39AA0;
	void OnRep_PlayerVersionMismatches()//offset:0xF39A80;
	void OnRep_GameUniqueID()//offset:0xF39A60;
	void OnRep_ExpectedPlayerIDs()//offset:0xF39A20;
	void OnRep_DaysUntilBlizzard()//offset:0xF39A00;
	void OnRep_AllTotems()//offset:0xF399C0;
	void GiveQuest(class ADH_PlayerState* PlayerState)//offset:0xF39610;
	EPlayerTeam GetWinningTeam()//offset:0xF39500;
	int GetTotemDrainCount()//offset:0xF394E0;
	int GetTotalTotemCount()//offset:0xF394B0;
	struct FDHCompleteVersion GetServerVersion()//offset:0xF39420;
	TArray<struct FDHPlayerVersionMismatch> GetPlayerVersionMismatches()//offset:0xF39170;
	TArray<class ADH_ThrallTotem*> GetAllTotems()//offset:0xF38E10;
};


// Class DreadHunger.DH_GameVictoryScene
// size:0x0020 (0x0220 - 0x0240)
class ADH_GameVictoryScene : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              AvatarMeshes;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                AvatarCount;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_GameViewportClient
// size:0x0020 (0x0360 - 0x0380)
class UDH_GameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	class UDH_EscapeHandler*                           EscapeHandler;                                            // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_UIVisibilityTagHandler*                  UIVisibilityTagHandler;                                   // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)

	void SetUIOnlyMode(bool bNewUIOnlyMode)//offset:0xF3A140;
	static struct FKey GetRelevantActionMappingKey(const struct FName& Name, class UObject* WorldContextObject, bool bUsePlayerKeyGroup)//offset:0xF39290;
	static EDHInputType GetInputType(class UObject* WorldContextObject)//offset:0xF39040;
};


// Class DreadHunger.DH_GiveInventoryDebugControl
// size:0x0000 (0x0260 - 0x0260)
class UDH_GiveInventoryDebugControl : public UUserWidget
{
public:

	class FString GiveInventory(class ADH_Inventory* InventoryClass)//offset:0xF39530;
};


// Class DreadHunger.DH_GoreStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_GoreStatics : public UObject
{
public:

	static void SeverLimb(class ADH_Character* Character, const struct FName& BoneToSever, const struct FVector& Impulse)//offset:0xF3A260;
};


// Class DreadHunger.DH_Grimoire
// size:0x0030 (0x0220 - 0x0250)
class ADH_Grimoire : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BookMesh;                                                 // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 GrimoireWidgetClass;                                      // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_GroundCraftingBlueprint
// size:0x0038 (0x0220 - 0x0258)
class ADH_GroundCraftingBlueprint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       CraftingComponent;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingRecipe*                          AssociatedRecipe;                                         // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

	void OnRep_AssociatedRecipe()//offset:0xF399E0;
	void OnProjectComplete(class UDH_CraftingProject* Project)//offset:0xF39880;
	void Init(class UDH_CraftingRecipe* Recipe)//offset:0xF396D0;
};


// Class DreadHunger.DH_GroundCraftingProjectComponent
// size:0x0080 (0x00B0 - 0x0130)
class UDH_GroundCraftingProjectComponent : public UActorComponent
{
public:
	float                                              CraftingPlacementRange;                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class USoundBase*                                  PlacedSuccessSound;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PlacedFailSound;                                          // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DemolishSound;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPotentialCraftingProject                   CraftingPreview;                                          // 0x00D0(0x0060) (BlueprintVisible, BlueprintReadOnly)

	void SpawnCraftingProject(const struct FPotentialCraftingProject& CraftingProject)//offset:0xF3A370;
	void SetCraftingPreviewRecipe(class UDH_CraftingRecipe* NewRecipe)//offset:0xF39EC0;
	void SetCraftingPreview(class UDH_CraftingRecipe* NewRecipe, bool bClearPreview)//offset:0xF39DF0;
	struct FPotentialCraftingProject GetCraftingPreview()//offset:0xF38F10;
	static class UDH_GroundCraftingProjectComponent* Get(class AActor* Owner)//offset:0xF38D80;
	void DestroyActiveCraftingProject_Simulated()//offset:0xF38D60;
	void DestroyActiveCraftingProject()//offset:0xF38D40;
};


// Class DreadHunger.DH_HeatSourceComponent
// size:0x00B0 (0x0200 - 0x02B0)
class UDH_HeatSourceComponent : public USceneComponent
{
public:
	class UParticleSystemComponent*                    HeatParticleComponent;                                    // 0x0200(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  HeatSound;                                                // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HeatSoundComponent;                                       // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaximumHeatOutput;                                        // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisualizeHeatRadius;                                     // 0x021C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EnclosedSpaceHeatScale;                                   // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	class USoundBase*                                  FuelAddedSound;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RestartTime;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class USoundBase*                                  BeginWarmupSound;                                         // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeginWarmupSoundOffSet;                                   // 0x0248(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class USoundBase*                                  ShutoffSound;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitalFuelPct;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RemainingFuelTime;                                        // 0x0264(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxFuelTime;                                              // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelBurnSpeedModifier;                                    // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByBlizzard;                                      // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              BlizzardFuelBurnSpeedModifier;                            // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlizzardUnlightableThreshold;                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FuelAddedCount;                                           // 0x027C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x17];                                      // 0x027D(0x0017) MISSED OFFSET
	float                                              BurnSpeed;                                                // 0x0294(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0298(0x0018) MISSED OFFSET

	void SetFuelPct(float NewFuelPct)//offset:0xF39F50;
	void OnRep_FuelAddedCount()//offset:0xF39A40;
	void OnFuelContributionExpired(class ADH_PlayerState* ExpiredContributor)//offset:0xF397F0;
	void InitFrom(class UDH_HeatSourceComponent* Other)//offset:0xF39760;
	bool HasFuel()//offset:0xF396A0;
	float GetFuelPct()//offset:0xF38FD0;
	float AddFuel(class AActor* Fuel, class ADH_PlayerState* FuelContributor, bool bConsumeNonFuelItems, bool bConsumeFuel, int StackLimit, bool bScoreConsumption)//offset:0xF38B60;
};


// Class DreadHunger.DH_JsonSaveObject
// size:0x0000 (0x0028 - 0x0028)
class UDH_JsonSaveObject : public UObject
{
public:
};


// Class DreadHunger.DH_HintsJsonSaveData
// size:0x0008 (0x0028 - 0x0030)
class UDH_HintsJsonSaveData : public UDH_JsonSaveObject
{
public:
	bool                                               bCraftingMenuUsed;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpellMenuOpened;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpellMenuUsed;                                           // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJournalOpened;                                           // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static bool WasSpellMenuUsed(class UObject* Context)//offset:0xF3F960;
	static bool WasSpellMenuOpened(class UObject* Context)//offset:0xF3F840;
	static bool WasJournalOpened(class UObject* Context)//offset:0xF3F720;
	static bool WasCraftingMenuUsed(class UObject* Context)//offset:0xF3F600;
	static class UDH_HintsJsonSaveData* GetInstance(class UObject* Context)//offset:0xF3DF20;
};


// Class DreadHunger.DH_HintsSaveGame
// size:0x0008 (0x0028 - 0x0030)
class UDH_HintsSaveGame : public USaveGame
{
public:
	bool                                               bCraftingMenuUsed;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpellMenuOpened;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpellMenuUsed;                                           // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJournalOpened;                                           // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static bool WasSpellMenuUsed(class UObject* Context)//offset:0xF3F9F0;
	static bool WasSpellMenuOpened(class UObject* Context)//offset:0xF3F8D0;
	static bool WasJournalOpened(class UObject* Context)//offset:0xF3F7B0;
	static bool WasCraftingMenuUsed(class UObject* Context)//offset:0xF3F690;
};


// Class DreadHunger.DH_HitMarkersWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_HitMarkersWidget : public UUserWidget
{
public:

	static void Log(const class FString& Message)//offset:0xF3E580;
};


// Class DreadHunger.DH_HUD
// size:0x00E8 (0x0310 - 0x03F8)
class ADH_HUD : public AHUD
{
public:
	class UMaterialInterface*                          BloodSpatterBrush;                                        // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBloodFlipbookTexture>               BloodSpatterTextures;                                     // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              BloodSpatterFadeTime;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BloodSpatterLifespan;                                     // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 HUDWidgetClass;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_GameplayMessageWidget*                   GameplayMessageWidgetClass;                               // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EPlayerTeam, class UUserWidget*>              VictoryWidgetClass;                                       // 0x0340(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UUserWidget*                                 XPProgressClass;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 HUDWidget;                                                // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnHUDWidgetChanged;                                       // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	class UUserWidget*                                 MatchEndWidget;                                           // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 XPProgressWidget;                                         // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	class ADH_PlayerController*                        DHPlayerOwner;                                            // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	void OnXPProgressUpdated(const struct FDH_XPProgressData& InData)//offset:0xF3F080;
	void OnGameVictoryWidgetHidden()//offset:0xF3E8D0;
	bool GetGameMessageVisibility()//offset:0xF3DD90;
	void CreateMatchEndMessage(EPlayerTeam WinningTeam, bool bWinner)//offset:0xF3D9B0;
};


// Class DreadHunger.DH_HullBreach
// size:0x0050 (0x0250 - 0x02A0)
class ADH_HullBreach : public ADH_CraftingStation
{
public:
	class UParticleSystemComponent*                    WaterParticle;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WaterSound;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SubmergedSound;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RippleLocation;                                           // 0x0268(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0274(0x0014) MISSED OFFSET
	class ADH_Warship*                                 OwningShip;                                               // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADH_HullBreach*                              DefaultBreach;                                            // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	void OnRepaired(class UDH_CraftingProject* Project, TArray<class AActor*> Results)//offset:0xF3EBE0;
};


// Class DreadHunger.DH_HumanAnimInstance
// size:0x01F0 (0x03B0 - 0x05A0)
class UDH_HumanAnimInstance : public UDH_CharacterAnimInstance
{
public:
	EInventoryType                                     SelectedInventoryType;                                    // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           SelectedInventoryHeldAnimation;                           // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SelectedInventoryHeldAnimation_FP;                        // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SelectedInventoryAimedAnimation;                          // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SelectedInventoryAimedAnimation_FP;                       // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDHFloatInterval                            WristRollLimit_Right;                                     // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDHFloatInterval                            WristRollLimit_Left;                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              SteeringIKAlpha_RightHand;                                // 0x03E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SteeringIKLocation_RightHand;                             // 0x03EC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SteeringWristRotation_RightHand;                          // 0x03F8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SteeringIKAlpha_LeftHand;                                 // 0x0404(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SteeringIKLocation_LeftHand;                              // 0x0408(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SteeringWristRotation_LeftHand;                           // 0x0414(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAimingInventory;                                         // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldingInventory;                                        // 0x0421(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldingLargeInventory;                                   // 0x0422(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDrivingShip;                                             // 0x0423(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCarrying;                                                // 0x0424(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCarried;                                                 // 0x0425(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bResting;                                                 // 0x0426(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrawling;                                                // 0x0427(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocallyControlled;                                       // 0x0428(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerTeamRole                                    CurrentRole;                                              // 0x0429(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x042A(0x0002) MISSED OFFSET
	float                                              CrawlSpeedAlpha;                                          // 0x042C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LocalLeftArmOffset;                                       // 0x0430(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  LocalRightArmOffset;                                      // 0x0460(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  LocalTorsoOffset;                                         // 0x0490(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     UpperBodyAimDirection;                                    // 0x04C0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpperBodyAimLimit;                                        // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StareTarget;                                              // 0x04D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StareRotation_LeftEye;                                    // 0x04DC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StareRotation_RightEye;                                   // 0x04E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StareAlpha;                                               // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalTorsoAimLag;                                         // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class ADH_HumanCharacter*                          HumanOwner;                                               // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SteeringPosition;                                         // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSteeringIdle;                                            // 0x050C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x050D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2A];                                      // 0x050E(0x002A) MISSED OFFSET
	class ADH_InventoryView*                           PreviousView;                                             // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADH_InventoryView*                           CurrentView;                                              // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0548(0x0008) MISSED OFFSET
	class ADH_Inventory*                               HeldInvCDO;                                               // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0558(0x0048) MISSED OFFSET

	EInventoryAnimMontageState GetLastInventoryAnimState()//offset:0xF3DFB0;
	EInventoryAnimMontageState GetCurrentInventoryAnimState()//offset:0xF3DC80;
};


// Class DreadHunger.DH_HumanCharacter
// size:0x0920 (0x0960 - 0x1280)
class ADH_HumanCharacter : public ADH_Character
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0960(0x0040) MISSED OFFSET
	class UAudioComponent*                             VoiceAudioComponent;                                      // 0x09A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADH_HumanCharacter*                          DefaultHuman;                                             // 0x09A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_PlayerRoleData*                          AIRole;                                                   // 0x09B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogueVoice*                              AudienceVoiceData;                                        // 0x09B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_ImpactEffect*                            VomitParticleImpactEffect;                                // 0x09C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VomitParticle;                                            // 0x09C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VomitParticle_FP;                                         // 0x09D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  VomitSound;                                               // 0x09D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VomitSlowDuration;                                        // 0x09E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	class UParticleSystem*                             MarkedParticle;                                           // 0x09E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    MarkedParticleComponent;                                  // 0x09F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADH_Warship*                                 ShipBase;                                                 // 0x09F8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOutdoors;                                              // 0x0A00(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugAnimations;                                         // 0x0A01(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0A02(0x0006) MISSED OFFSET
	class ADH_PlayerController*                        DHPlayerController;                                       // 0x0A08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PostProcessSilhouetteMaterial;                            // 0x0A10(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ThrallPostProcessSilhouetteMaterial;                      // 0x0A18(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PostProcessInteractMaterial;                              // 0x0A20(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraComponent*                            PlayerCamera;                                             // 0x0A28(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               HandSocketNames;                                          // 0x0A30(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUpdateHunger;                                            // 0x0A40(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateWarmth;                                            // 0x0A41(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A42(0x0002) MISSED OFFSET
	float                                              CriticalWarmthThreshold;                                  // 0x0A44(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumStamina;                                           // 0x0A48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumStamina;                                           // 0x0A4C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStamina;                                           // 0x0A50(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x0A54(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWasSprinting;                                            // 0x0A55(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0A56(0x0002) MISSED OFFSET
	float                                              HealthBoostRegenRate;                                     // 0x0A58(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SanityRegenRate;                                          // 0x0A5C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   HallucinationSpawnQueryTemplate;                          // 0x0A60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHallucination>                      HallucinationTypes;                                       // 0x0A68(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              HallucinationSanityThreshold;                             // 0x0A78(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET
	float                                              WarmthRegenRate;                                          // 0x0A80(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HungerRegenRate;                                          // 0x0A84(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HungerIncreasePerSecond;                                  // 0x0A88(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpStaminaConsumption;                                   // 0x0A8C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyTossStaminaConsumption;                               // 0x0A90(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	class USoundBase*                                  JumpSound;                                                // 0x0A98(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IntoWaterSound;                                           // 0x0AA0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StartClimbingSound;                                       // 0x0AA8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StatusAudioSound;                                         // 0x0AB0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnterIncapacitationSoundVox;                              // 0x0AB8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnterIncapacitationSoundSFX;                              // 0x0AC0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IncapacitatedLandSoundSFX;                                // 0x0AC8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LeaveIncapacitationSoundVox;                              // 0x0AD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LeaveIncapacitationSoundSFX;                              // 0x0AD8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightAboveWaterToScream;                                 // 0x0AE0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	class UAudioComponent*                             StatusAudioComponent;                                     // 0x0AE8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      JumpCount;                                                // 0x0AF0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	struct FVector                                     ReplicatedLookDir;                                        // 0x0AF4(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDBNO;                                               // 0x0B00(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B01(0x0003) MISSED OFFSET
	float                                              ExtraPawnThrowLift;                                       // 0x0B04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_Inventory*                               BodyInventoryClass;                                       // 0x0B08(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ImpactEffect*                            IncapacitatedLandingEffects;                              // 0x0B10(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BleedoutDPS;                                              // 0x0B18(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TossPawnVelocity;                                         // 0x0B1C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveSlot;                                               // 0x0B20(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverRevive;                                             // 0x0B24(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B25(0x0003) MISSED OFFSET
	float                                              ReviveHealthPercentage;                                   // 0x0B28(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveWarmthPct;                                          // 0x0B2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DBNOStartingHealth;                                       // 0x0B30(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class USoundBase*                                  FailedDropPawnSound;                                      // 0x0B38(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FallingScreamSound;                                       // 0x0B40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   RestingSoundMix;                                          // 0x0B48(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   NormalSoundMix;                                           // 0x0B50(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnIncapacitatedChangedDelegate;                           // 0x0B58(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnStareTargetChangedDelegate;                             // 0x0B68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bMarkedForWendigoAttack;                                  // 0x0B78(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x47];                                      // 0x0B79(0x0047) MISSED OFFSET
	float                                              SpiritWalkSpeedModifier;                                  // 0x0BC0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0xC];                                       // 0x0BC4(0x000C) MISSED OFFSET
	class UMaterialInterface*                          MarkerMaterial;                                           // 0x0BD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpiritWalkTrailParticle;                                  // 0x0BD8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               SpiritWalkTrailBones;                                     // 0x0BE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct UEMulticastInlineDelegate                   OnSpiritWalkingChangedDelegate;                           // 0x0BF0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarmthRateOfChangeChangedDelegate;                      // 0x0C00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCurveFloat*                                 PoisonReserveHealth;                                      // 0x0C10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_Warship*                                 ControlledShip;                                           // 0x0C18(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SpiritWalkBeginSound;                                     // 0x0C20(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0C28(0x0008) MISSED OFFSET
	class USoundBase*                                  SpiritWalkEndSound;                                       // 0x0C30(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SpiritWalkEndSoundFP;                                     // 0x0C38(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_PlayerState*                             LastDHPlayerState;                                        // 0x0C40(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AController*                                 LastPoisoner;                                             // 0x0C48(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             AvatarOverride;                                           // 0x0C50(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             PreviousAvatarOverride;                                   // 0x0C58(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      NameOverride;                                             // 0x0C60(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData15[0x1];                                       // 0x0C70(0x0001) MISSED OFFSET
	bool                                               bSpiritWalking;                                           // 0x0C71(0x0001) 起死回生 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIsAiming;                                                // 0x0C72(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x0C73(0x0005) MISSED OFFSET
	class UMaterialInterface*                          CurrentAimingPostProcessMaterial;                         // 0x0C78(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x10];                                      // 0x0C80(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      FirstPersonShadowMesh;                                    // 0x0C90(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimInstance*                               DoppelgangerAnimInstanceClass;                            // 0x0C98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HungerHealthReserveSpeed;                                 // 0x0CA0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealthRegenSpeed;                                      // 0x0CA4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x30];                                      // 0x0CA8(0x0030) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PostProcessMID;                                           // 0x0CD8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x10];                                      // 0x0CE0(0x0010) MISSED OFFSET
	class ADH_HumanCharacter*                          LastCarrier;                                              // 0x0CF0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AController*                                 LastCarrierController;                                    // 0x0CF8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADH_PlayerReviveStation*                     LastReviver;                                              // 0x0D00(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x9C];                                      // 0x0D08(0x009C) MISSED OFFSET
	float                                              HealthBoostDelayThreshold;                                // 0x0DA4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthBoostDelayTime;                                     // 0x0DA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      VomitCount;                                               // 0x0DAC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x43];                                      // 0x0DAD(0x0043) MISSED OFFSET
	TArray<struct FVector>                             AuthorityBoneLocations;                                   // 0x0DF0(0x0010) (Net, ZeroConstructor)
	class AActor*                                      CurrentInteractTarget;                                    // 0x0E00(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ADH_InventoryPickup*                         GrabbedPickup;                                            // 0x0E08(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIncapacitated;                                         // 0x0E10(0x0001) 倒地交互(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0E11(0x0007) MISSED OFFSET
	class ADH_HumanCharacter*                          CarryingPawn;                                             // 0x0E18(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               CarriedPawnInv;                                           // 0x0E20(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerReviveStation*                     CurrentReviver;                                           // 0x0E28(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class APhysicsVolume*                              CachedPhysicsVolume;                                      // 0x0E30(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0xA0];                                      // 0x0E38(0x00A0) MISSED OFFSET
	struct FDH_ProjectileSpawnFlash                    ProjectileSpawnFlash;                                     // 0x0ED8(0x0028) (Net)
	struct FMeleeHitFlash                              MeleeHitFlash;                                            // 0x0F00(0x00A0) (Net)
	unsigned char                                      UnknownData24[0x50];                                      // 0x0FA0(0x0050) MISSED OFFSET
	float                                              SanityBoostRemaining;                                     // 0x0FF0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              WarmthBoostRemaining;                                     // 0x0FF4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              HungerBoostRemaining;                                     // 0x0FF8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealthBoostRemaining;                                     // 0x0FFC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              MinHealth;                                                // 0x1000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinIncapacitatedHealth;                                   // 0x1004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHunger;                                            // 0x1008(0x0004) 当前饥饿值(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              InitialHunger;                                            // 0x100C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHunger;                                                // 0x1010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWarmth;                                            // 0x1014(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              MinWarmth;                                                // 0x1018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialWarmth;                                            // 0x101C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSanity;                                            // 0x1020(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x1024(0x0004) MISSED OFFSET
	float                                              LastSpiritWalkStartTime;                                  // 0x1028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x194];                                     // 0x102C(0x0194) MISSED OFFSET
	float                                              CurrentTemperature;                                       // 0x11C0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHungerIncreasing;                                        // 0x11C4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x8B];                                      // 0x11C5(0x008B) MISSED OFFSET
	bool                                               bPoisoned;                                                // 0x1250(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0xF];                                       // 0x1251(0x000F) MISSED OFFSET
	class UAudioComponent*                             PhonographComponent;                                      // 0x1260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData29[0x18];                                      // 0x1268(0x0018) MISSED OFFSET

	bool ShouldSpawnAsGhost()//offset:0xF3F5D0;
	void SetNameOverride(const class FString& NewName)//offset:0xF3F4D0;
	void SetIsSpiritWalking(bool bNewIsSpiritWalking, float Duration)//offset:0xF3F400;
	void SetIncapacitated(bool bNewIncapacitated)//offset:0xF3F370;
	void SetCurrentWarmth(float NewWarmth)//offset:0xF3F2F0;
	void SetCurrentHunger(float NewHunger)//offset:0xF3F270;
	void SetAvatarOverride(class ADH_PlayerState* NewAvatar)//offset:0xF3F1E0;
	void PlayVomitEffects()//offset:0xF3F1C0;
	bool PlayDialogue(class UDialogueWave* InDialogueWave)//offset:0xF3F120;
	void OnVomitParticleImpact(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)//offset:0xF3EDA0;
	void OnRoleAssigned(class ADH_PlayerState* PS)//offset:0xF3ED10;
	void OnRep_WarmthBoostRemaining()//offset:0xF3EA40;
	void OnRep_SpiritWalking()//offset:0xF3EBC0;
	void OnRep_MeleeHitFlash()//offset:0xF3EBA0;
	void OnRep_MarkedForWendigoAttack()//offset:0xF3EB80;
	void OnRep_LastDHPlayerState()//offset:0xF3EB60;
	void OnRep_JumpCount()//offset:0xF3EB40;
	void OnRep_IsSprinting()//offset:0xF3EB20;
	void OnRep_IsIncapacitated()//offset:0xF3EB00;
	void OnRep_IsAiming()//offset:0xF3EAE0;
	void OnRep_InteractTarget()//offset:0xF3EAC0;
	void OnRep_HungerIncreasing()//offset:0xF3EAA0;
	void OnRep_GrabbedPickup()//offset:0xF3EA80;
	void OnRep_CurrentWarmth()//offset:0xF3EA60;
	void OnRep_CurrentTemperature()//offset:0xF3EA40;
	void OnRep_CurrentReviver()//offset:0xF3EA20;
	void OnRep_CurrentHunger()//offset:0xF3EA00;
	void OnRep_ControlledShip()//offset:0xF3E9E0;
	void OnRep_CarryingPawn()//offset:0xF3E9C0;
	void OnRep_AvatarOverride()//offset:0xF3E9A0;
	void OnProjectileSpawnFlashReplicated()//offset:0xF3E980;
	void OnHallucinationDestroyed(class AActor* DestroyedHallucination)//offset:0xF3E8F0;
	void OnCarriedPawnInvRemoved(class AActor* DestroyedActor)//offset:0xF3E840;
	void OnCarriedPawnDied(class ADH_Character* DeadCharacter)//offset:0xF3E7B0;
	void ModifyStamina(float Delta)//offset:0xF3E730;
	void ModifyHealthBoostRemaining(float Delta, class ADH_PlayerState* Creditor, class AActor* Causer)//offset:0xF3E610;
	bool IsUsingInventory()//offset:0xF3E550;
	bool IsThrall()//offset:0xF3E520;
	bool IsSpiritWalking()//offset:0xF3E4F0;
	bool IsResting()//offset:0xF3E4C0;
	bool IsReloadingInventory()//offset:0xF3E490;
	bool IsOnShip()//offset:0xF3E460;
	bool IsIncapacitated()//offset:0xF3E430;
	bool IsDrivingShip()//offset:0xF3E400;
	bool IsDoppelganger()//offset:0xF3E3D0;
	bool IsCarryingPawn()//offset:0xF3E3A0;
	bool IsBeingCarried()//offset:0xF3E370;
	bool IsAiming()//offset:0xF3E340;
	void InventoryChanged(class ADH_Inventory* Item, int Delta)//offset:0xF3E270;
	float GetWarmthRateOfChange()//offset:0xF3E240;
	float GetWarmthBoostRemaining()//offset:0xF3E220;
	EPlayerTeamRole GetTeamRole()//offset:0xF3E1F0;
	class UDH_HumanAnimInstance* GetShadowAnimInst()//offset:0xF3E1C0;
	class ADH_InventoryView* GetSelectedInventoryView()//offset:0xF3E190;
	class ADH_Inventory* GetSelectedInventory()//offset:0xF3E160;
	float GetSanityBoostRemaining()//offset:0xF3E140;
	bool GetPoisoned()//offset:0xF3E120;
	class ADH_Inventory* GetPendingInventorySelection()//offset:0xF3E0F0;
	class FString GetNameOverride()//offset:0xF3E030;
	float GetMaximumStamina()//offset:0xF3E000;
	float GetLastSpiritWalkStartTime()//offset:0xF3DFE0;
	bool GetHungerIncreasing()//offset:0xF3DF00;
	float GetHungerBoostRemaining()//offset:0xF3DEE0;
	class UDH_HumanMovementComponent* GetHumanMovement()//offset:0xF3DEB0;
	class UDH_HumanAnimInstance* GetHumanAnimInst()//offset:0xF3DE80;
	float GetHealthBoostRemaining()//offset:0xF3DE60;
	TArray<class UDH_CraftingRecipe*> GetGroundCraftingRecipes()//offset:0xF3DDC0;
	float GetCurrentWarmth()//offset:0xF3DD70;
	float GetCurrentTemperature()//offset:0xF3DD50;
	float GetCurrentSanity()//offset:0xF3DD30;
	class FString GetCurrentName()//offset:0xF3DCB0;
	float GetCurrentHunger()//offset:0xF3DC60;
	class UDH_PlayerRoleData* GetCurrentAvatar()//offset:0xF3DC30;
	class UDH_CraftingComponent* GetCraftingComponent()//offset:0xF3DC00;
	class ADH_HumanCharacter* GetCarryingPawn()//offset:0xF3DBD0;
	class ADH_Inventory* GetCarriedPawnInv()//offset:0xF3DBB0;
	class ADH_HumanCharacter* GetCarriedPawn()//offset:0xF3DB80;
	class ADH_PlayerState* GetAvatarOverride()//offset:0xF3DB60;
	void DropCarriedPawn(const struct FVector& DropVelocity, bool bFindDropLocation)//offset:0xF3DA80;
	class ADH_HumanCharacter* CreateDoppelganger(class ADH_PlayerController* InstigatingPlayer, ETotemSpellTiers CastTier)//offset:0xF3D8E0;
	void ClearAvatarOverride()//offset:0xF3D8C0;
	bool CanUseGroundCraftingRadial()//offset:0xF3D890;
	void ApplyPendingPoison(class ADH_PlayerState* Creditor, class AActor* Causer)//offset:0xF3D7C0;
};


// Class DreadHunger.DH_HumanMovementComponent
// size:0x0020 (0x0B40 - 0x0B60)
class UDH_HumanMovementComponent : public UDH_CharacterMovementComponent
{
public:
	float                                              CrawlingSpeed;                                            // 0x0B40(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintMoveSpeedModifier;                                  // 0x0B44(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipClientCorrectionDistance;                             // 0x0B48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	class ADH_HumanCharacter*                          HumanOwner;                                               // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bWantsToSprint;                                           // 0x0B58(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B59(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_Iceberg
// size:0x0038 (0x0310 - 0x0348)
class ADH_Iceberg : public ADH_DestructibleActor
{
public:
	bool                                               bAllowRepeatedShipImpact;                                 // 0x0310(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class UDH_ImpactEffect*                            ChunkBreakEffect;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipImpactDamage;                                         // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0324(0x0024) MISSED OFFSET
};


// Class DreadHunger.DH_Iceberg_Large
// size:0x0078 (0x0348 - 0x03C0)
class ADH_Iceberg_Large : public ADH_Iceberg
{
public:
	class UDH_ImpactEffect*                            ChunkSinkEffect;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDestructibleComponent*                      LeftChunk;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              LeftChunkSinkSpeed;                                       // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeftChunkLeanSpeed;                                       // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDestructibleComponent*                      RightChunk;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              RightChunkSinkSpeed;                                      // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RightChunkLeanSpeed;                                      // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRemovedIcebergChunks                       RemovedChunks;                                            // 0x0370(0x0020) (Net)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0390(0x0030) MISSED OFFSET

	void OnRep_RemovedChunks()//offset:0xF45CC0;
};


// Class DreadHunger.DH_Iceberg_Small
// size:0x0008 (0x0348 - 0x0350)
class ADH_Iceberg_Small : public ADH_Iceberg
{
public:
	class UDestructibleComponent*                      DestructionMesh;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	void CrumbleChunks()//offset:0xF446F0;
};


// Class DreadHunger.DH_ImpactEffect
// size:0x0018 (0x0028 - 0x0040)
class UDH_ImpactEffect : public UObject
{
public:
	float                                              MinimumVelocity;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenInstances;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxInstances_Global;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxInstances_PerInstigator;                               // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxInstances_PerSurface;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	bool PlayImpact(class AActor* Instigator, const struct FHitResult& Hit)//offset:0xF45DF0;
	struct FImpactEffect GetImpactEffects(TEnumAsByte<EPhysicalSurface> ImpactedSurface, bool bWasScrape)//offset:0x13CEB30;
	static class UDH_ImpactEffect* GetFromPM(class UPrimitiveComponent* PrimComp, const struct FName& Bone)//offset:0xF44CC0;
	static class UDH_ImpactEffect* GetFromDT(class UDamageType* DamageType)//offset:0xF44C30;
};


// Class DreadHunger.DH_ImpactEffectManager
// size:0x0060 (0x0220 - 0x0280)
class ADH_ImpactEffectManager : public AActor
{
public:
	TMap<class AActor*, struct FActorImpactEffectList> ActiveImpactEffects;                                      // 0x0220(0x0050)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	void OnImpactInstigatorDestroyed(class AActor* DestroyedActor)//offset:0xF45A80;
};


// Class DreadHunger.DH_InputModeComponent
// size:0x0010 (0x00B0 - 0x00C0)
class UDH_InputModeComponent : public UActorComponent
{
public:

	void Reset()//offset:0xF46090;
	void PushUIInputMode(class UWidget* WidgetToFocus, bool bGameAndUI)//offset:0xF45FC0;
	void PopUIInputMode(class UWidget* WidgetToUnfocus)//offset:0xF45F30;
};


// Class DreadHunger.DH_InteractComponent
// size:0x00F0 (0x00B0 - 0x01A0)
class UDH_InteractComponent : public UActorComponent
{
public:
	float                                              InteractRange;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractAOE;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B8(0x0001) MISSED OFFSET
	unsigned char                                      InteractionCounter;                                       // 0x00B9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class UPrimitiveComponent*                         CurrentInteractTarget;                                    // 0x00C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      LockedInteractTarget;                                     // 0x00C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC8];                                      // 0x00D0(0x00C8) MISSED OFFSET
	class ADH_HumanCharacter*                          InstigatingCharacter;                                     // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)

	void StopInteracting()//offset:0xF46340;
	void OnRep_LockedInteractTarget()//offset:0xF45C80;
	void OnRep_InteractionCounter()//offset:0xF45C20;
	static bool NotEqual_InteractPermissionsInteractPermissions(const struct FDH_InteractPermissions& A, const struct FDH_InteractPermissions& B)//offset:0xF45880;
	static struct FDH_InteractPermissions InteractPermissions_NoPermission()//offset:0xF45660;
	static struct FDH_InteractPermissions InteractPermissions_FullPermission()//offset:0xF45640;
	static struct FDH_InteractPermissions InteractPermissions_CanOnlyLook()//offset:0xF45620;
	void Interact(class UPrimitiveComponent* InteractTarget, int SlotIndex)//offset:0xF45550;
	class UPrimitiveComponent* GetCurrentInteractTarget()//offset:0xF44A30;
	static bool EqualEqual_InteractPermissionsInteractPermissions(const struct FDH_InteractPermissions& A, const struct FDH_InteractPermissions& B)//offset:0xF44820;
};


// Class DreadHunger.DH_InteractionInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_InteractionInterface : public UInterface
{
public:

	bool UsePreciseInteractions(class UPrimitiveComponent* TargetComponent)//offset:0xF46520;
	bool OnInteract(class AController* InteractInstigator, int SlotIndex, class UPrimitiveComponent* TargetComponent)//offset:0xF45B10;
	struct FDH_KeybindInteractionMessage GetKeybindInteractText(class AController* InteractInstigator)//offset:0xF45040;
	float GetInteractTime(class AController* InteractInstigator)//offset:0xF44F80;
	unsigned char GetInteractPriority(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)//offset:0xF44EB0;
	struct FText GetInteractFailedMessage(class AController* InteractInstigator)//offset:0xF44DB0;
	struct FText GetFriendlyName()//offset:0xF44B90;
	bool CanBeInteractedWithThroughWalls()//offset:0xF445B0;
	struct FDH_InteractPermissions CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)//offset:0xF444D0;
};


// Class DreadHunger.DH_InventoryListDataAsset
// size:0x0018 (0x0030 - 0x0048)
class UDH_InventoryListDataAsset : public UPrimaryDataAsset
{
public:
	TArray<class ADH_Inventory*>                       List;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      BackpackClass;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_InventoryManager
// size:0x0228 (0x00B0 - 0x02D8)
class UDH_InventoryManager : public UActorComponent
{
public:
	bool                                               bDropContentsOnDestruction;                               // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideSlotContents;                                        // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTransactOnInteract;                                      // 0x00B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00B3(0x0005) MISSED OFFSET
	struct FText                                       FriendlyName;                                             // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       TutorialConcept;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_HumanCharacter*                          HumanOwner;                                               // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        TransactingInventory;                                     // 0x00E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<EInventoryType>                             AcceptedTransactionTypes;                                 // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class ADH_Inventory*                               SelectedInventory;                                        // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInventoryItemState                         SelectedInventoryState;                                   // 0x0100(0x0038) (BlueprintVisible, BlueprintReadOnly, Net)
	TArray<class ADH_Inventory*>                       StoredInventory;                                          // 0x0138(0x0010) (Net, ZeroConstructor, Transient)
	class ADH_InventoryView*                           SelectedInventory_View_Shadow;                            // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInventoryViewFlash                         SelectedInventory_ViewClass;                              // 0x0150(0x0010) (Net)
	struct UEMulticastInlineDelegate                   OnInventoryAdded;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInventoryRemoved;                                       // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInventoryEmptied;                                       // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTransactionStarted;                                     // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTransactionEnded;                                       // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnReceivedInventoryTransfer;                              // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSelectedInventoryViewUpdatedChangedDelegate;            // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnStoredInventoryChangedDelegate;                         // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnUseFailedDelegate;                                      // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USoundBase*                                  UI_TransactionBeginSound;                                 // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UI_TransactionEndSound;                                   // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfiniteItems;                                           // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLimitRangedWeapons;                                      // 0x0201(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
	class UUserWidget*                                 TransactionWidgetClass;                                   // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_DropTable*                               SpawnDropTable;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 UnacceptedTypesTooltipClass;                              // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     UnacceptedIcon;                                           // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FInventorySlotContents>              ReplicatedInventoryContents;                              // 0x0228(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class ADH_InventoryView*                           SelectedInventory_View;                                   // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StorageLimit;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EInventoryTransactionRules                         TransactionRules;                                         // 0x0244(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0245(0x0013) MISSED OFFSET
	class ADH_InventoryView*                           LastSelectedViewClass;                                    // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FInventoryReplicationCounter                DroppedInventoryCount;                                    // 0x0260(0x0008) (Net)
	struct FInventoryReplicationCounter                UsedInventoryCount;                                       // 0x0268(0x0008) (Net)
	struct FInventoryReplicationCounter                SelectedInventoryCount;                                   // 0x0270(0x0008) (Net)
	struct FInventoryReplicationCounter                ReloadInventoryCount;                                     // 0x0278(0x0008) (Net)
	struct FApplyInventoryCounter                      LastAppliedInventory;                                     // 0x0280(0x0010) (Net)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	EDropTableSpawnMethod                              DropTableSpawnMethod;                                     // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	int                                                DefaultInventorySelectionSlot;                            // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x38];                                      // 0x02A0(0x0038) MISSED OFFSET

	void UseInventory(const struct FTransform& UseTransform, unsigned char UseState)//offset:0xF4A0F0;
	void UpdateInventoryUsedCounter(unsigned char State)//offset:0xF4A070;
	void ThrowSelectedInventory()//offset:0xF4A050;
	void SetTransactionRules(EInventoryTransactionRules NewRules)//offset:0xF49FD0;
	void SetStorageLimit(int NewLimit)//offset:0xF49F40;
	void SelectInventory_Simulated(const struct FInventorySelection& InvToSelect, bool bForce)//offset:0xF49DD0;
	void SelectInventory(const struct FInventorySelection& InvToSelect)//offset:0xF49D30;
	void ReloadInventory()//offset:0xF46340;
	void OwnerDestroyed(class AActor* DestroyedActor)//offset:0xF49BD0;
	void OnRep_UsedInventoryCount()//offset:0xF49BB0;
	void OnRep_TransactingInventory()//offset:0xF49B90;
	void OnRep_StoredInventory()//offset:0xF49B50;
	void OnRep_StorageLimit(int PreviousLimit)//offset:0xF49AC0;
	void OnRep_SelectedInventoryViewClass()//offset:0xF49AA0;
	void OnRep_SelectedInventoryCount()//offset:0xF49A80;
	void OnRep_ReloadInventoryCount()//offset:0xF49A60;
	void OnRep_LastAppliedInventory()//offset:0xF49A40;
	void OnRep_InventoryContents()//offset:0xF49A20;
	void OnRep_DroppedInventoryCount()//offset:0xF49A00;
	void OnInventoryDestroyed(class AActor* DestroyedInventory)//offset:0xF49870;
	bool IsTransacting()//offset:0xF496E0;
	bool IsFullyLooted()//offset:0xF496B0;
	bool IsControllerTheSameAsTransactingController(class AController* InController)//offset:0xF49610;
	void HolsterInventory(bool bHolster)//offset:0xF49580;
	EInventoryTransactionRules GetTransactionRules()//offset:0xF49550;
	TArray<class ADH_Inventory*> GetStoredInventoryUpToAmount(EInventoryType Type, int DesiredAmount)//offset:0xF49440;
	class ADH_Inventory* GetStoredInventory(int SlotIndex)//offset:0xF493A0;
	int GetStorageLimit()//offset:0xF49370;
	class ADH_InventoryView* GetSelectedInventoryView()//offset:0xF49350;
	int GetQuantityOfInventory(EInventoryType Type, bool bAllowPoisoned)//offset:0xF49280;
	struct FText GetCantTransactMessage(const struct FText& ObjectName)//offset:0xF49000;
	int GetBestAvailableSlot(class UObject* Item, int StartIndex, bool bAllowStackWithClean)//offset:0xF48EF0;
	class UUserWidget* GetAssociatedWidget()//offset:0xF48E90;
	class ADH_Inventory* FindInventory(class UObject* InClass, int ClosestToIndex)//offset:0xF48DC0;
	void EndTransaction()//offset:0xF48DA0;
	void DropInventory(const struct FInventorySelection& InvToDrop, const struct FVector& Offset, const struct FRotator& Rotation, int NumToDrop, bool bThrow, EInventoryDropMethod DropMethod)//offset:0xF48BA0;
	bool CopyAllInventory(class UDH_InventoryManager* Recipient)//offset:0xF48B00;
	bool BeginTransaction(class UDH_InventoryManager* OtherInventory)//offset:0xF48A60;
	void AimInventory_Simulated(bool bNewWantsToAim)//offset:0xF489D0;
	void AimInventory(bool bNewWantsToAim)//offset:0xF48940;
	void AddRandomInventoryFromList(TMap<class ADH_Inventory*, int>* InventoryList, bool bSpawnAll)//offset:0xF487A0;
	TArray<class ADH_Inventory*> AddInventoryFromTable(class UDH_DropTable* DropTable, class ADH_Inventory* TrinketToSpawn, EInventoryType IgnoredType)//offset:0xF48640;
	class ADH_Inventory* AddInventory(class UObject* ItemToAdd, TArray<struct FInventoryItemState> ItemStates, int* NumItemsAdded, int* ItemSlotIndex, int DesiredSlotIndex, bool bDesiredSlotOnly, bool bExpandToFit, bool bIsGeneratedByproduct, bool bFlushNetDormancy, class APawn* CreatedBy, bool bAddWholeStack)//offset:0xF482B0;
};


// Class DreadHunger.DH_InventorySlotInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_InventorySlotInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_InventoryTransactionComponent
// size:0x0040 (0x00B0 - 0x00F0)
class UDH_InventoryTransactionComponent : public UActorComponent
{
public:

	void ShowLootInterface(class UDH_InventoryManager* LootManager)//offset:0xF4F920;
	void OnInventoryTransactionEnded(class UDH_InventoryManager* OtherInventory)//offset:0xF4EE50;
	bool IsLootInterfaceOpen()//offset:0xF4EE20;
	void HideLootInterface()//offset:0xF4EE00;
	bool HandleLootClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)//offset:0xF4ECE0;
	static class UDH_InventoryTransactionComponent* Get(class AController* InController)//offset:0xF4EB60;
	void EndInventoryTransaction()//offset:0xF46340;
	void CloseLootInterface()//offset:0xF4EB40;
	void BeginInventoryTransaction(class UDH_InventoryManager* OtherInventory)//offset:0xF4EAB0;
};


// Class DreadHunger.DH_Journal
// size:0x0038 (0x0220 - 0x0258)
class ADH_Journal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 JournalWidgetClass;                                       // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HintMaterial;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_LanguageCodeDataAsset
// size:0x0020 (0x0030 - 0x0050)
class UDH_LanguageCodeDataAsset : public UDataAsset
{
public:
	TArray<struct FDH_LanguageCode>                    Languages;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDH_DisabledLanguageCode>            DisabledLanguages;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_LoadingScreenInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_LoadingScreenInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_LobbyEmote
// size:0x0098 (0x0030 - 0x00C8)
class UDH_LobbyEmote : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData01[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData02[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: 
	struct FText                                       Label;                                                    // 0x00A8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bEarlyAccessReward;                                       // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlaytesterReward;                                        // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET
};


// Class DreadHunger.DH_LobbyFilterRulesTitleData
// size:0x0070 (0x0028 - 0x0098)
class UDH_LobbyFilterRulesTitleData : public UDH_TitleData
{
public:
};


// Class DreadHunger.DH_LobbyGameMode
// size:0x00C0 (0x0380 - 0x0440)
class ADH_LobbyGameMode : public ADH_GameModeBase
{
public:
	class UDH_DropTable*                               LobbyPawnStartingInventory;                               // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0388(0x00B8) MISSED OFFSET

	void RemoveOrphanExemption(const class FString& InOrphanExemption)//offset:0xF4F830;
};


// Class DreadHunger.DH_LobbyGameState
// size:0x0178 (0x03D0 - 0x0548)
class ADH_LobbyGameState : public ADH_GameStateBase
{
public:
	class USoundBase*                                  PlayerBoardedShipSound;                                   // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x03D8(0x00D8) MISSED OFFSET
	struct FDH_LobbySessionData                        CurrentSessionSettings;                                   // 0x04B0(0x0088) (Net)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0538(0x0010) MISSED OFFSET

	void UpdateShipMPCs()//offset:0xF4F9B0;
	void ReceivedReplayData(const class FString& MatchID, TArray<unsigned char> ReplayBuffer)//offset:0xF4F730;
	void OnRep_CurrentSessionSettings()//offset:0xF4F040;
	void OnPlayerOnShipChanged(class ADH_HumanCharacter* HumanCharacter)//offset:0xF4EFB0;
	void OnMerchantShopVisibilityChanged(EDH_EntitlementsShopType ShopType, bool bVisible)//offset:0xF4EEE0;
};


// Class DreadHunger.DH_LobbyPawn
// size:0x0180 (0x0280 - 0x0400)
class ADH_LobbyPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0280(0x0050) MISSED OFFSET
	class UAudioComponent*                             VoiceAudioComponent;                                      // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReplicatedLookDir;                                        // 0x02D8(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSelectedCardIndexChangedDelegate;                       // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<uint32_t>                                   Redraws;                                                  // 0x02F8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0310(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            PlayerCamera;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0328(0x0010) MISSED OFFSET
	class AController*                                 OldController;                                            // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0340(0x0030) MISSED OFFSET
	int                                                SelectedCardIndex;                                        // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7C];                                      // 0x0374(0x007C) MISSED OFFSET
	bool                                               bIsHoveringCards;                                         // 0x03F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      FaceCaptureRT;                                            // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	void UpdateLookTarget(const struct FVector& NewLookTarget)//offset:0xF54AE0;
	void SimulatedPlayEmote(class UDH_LobbyEmote* Emote)//offset:0xF54A50;
	void SetIsHoveringCards(bool bWantsToHover)//offset:0xF549C0;
	void SetFaceCaptureRT(class UTextureRenderTarget2D* InFaceCaptureRT)//offset:0xF54930;
	void ServerPlayEmote(class UDH_LobbyEmote* Emote)//offset:0xF548A0;
	void RequestRedraw(const struct FPlayingCardProperties& OldCard)//offset:0xF547D0;
	void OnRoleAssigned(class ADH_PlayerState* PS)//offset:0xF544F0;
	void MulticastPlayEmote(class UDH_LobbyEmote* Emote)//offset:0xF540A0;
	int GetSelectedCardIndex()//offset:0xF53EC0;
	class ADH_PlayingCard* GetSelectedCard()//offset:0xF53E90;
	int GetPostProcessInteractStackNum()//offset:0xF53C10;
	class UDH_LobbyPawnAnimInstance* GetLobbyPawnAnimInst()//offset:0xF53BB0;
	class UTextureRenderTarget2D* GetFaceCaptureRT()//offset:0xF53AB0;
	class USceneCaptureComponent2D* GetFaceCaptureComponent()//offset:0xF53A80;
	void ChooseSelectedRoleCard()//offset:0xF537D0;
	void BP_OnPostProcessInteractStackChanged()//offset:0x13CEB30;
	void BP_OnCaptureFace()//offset:0x13CEB30;
};


// Class DreadHunger.DH_LobbyPawnAnimInstance
// size:0x00B0 (0x02C0 - 0x0370)
class UDH_LobbyPawnAnimInstance : public UAnimInstance
{
public:
	bool                                               bLocallyControlled;                                       // 0x02C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHoveringCards;                                           // 0x02C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldingCards;                                            // 0x02C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C3(0x0001) MISSED OFFSET
	struct FVector                                     UpperBodyAimDirection;                                    // 0x02C4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StareTarget;                                              // 0x02D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StareAlpha;                                               // 0x02DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpperBodyAimAlpha;                                        // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FirstPersonTorsoRotation;                                 // 0x02E4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandHoverIKTargetLocation;                           // 0x02F0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RightHandHoverIKAlpha;                                    // 0x02FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandPlacementIKTargetLocation;                       // 0x0300(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandRestingPosition;                                 // 0x030C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightHandPlacementIKAlpha;                                // 0x0318(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           DiscardAnimation_Single;                                  // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           PickupAnimation_Single;                                   // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DiscardAnimation_Hand;                                    // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           PickupAnimation_Hand;                                     // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           WinAnimation;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           LoseAnimation;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0351(0x001F) MISSED OFFSET
};


// Class DreadHunger.DH_LoginHandler
// size:0x0068 (0x0028 - 0x0090)
class UDH_LoginHandler : public UObject
{
public:
	TArray<class UDH_LoginStep*>                       Steps;                                                    // 0x0028(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	void OnLoginFinished()//offset:0xF54260;
	bool CanAcceptInvites()//offset:0xF537A0;
};


// Class DreadHunger.DH_LoginHandlerDebug
// size:0x0000 (0x0090 - 0x0090)
class UDH_LoginHandlerDebug : public UDH_LoginHandler
{
public:
};


// Class DreadHunger.DH_LoginHandlerPIE
// size:0x0000 (0x0090 - 0x0090)
class UDH_LoginHandlerPIE : public UDH_LoginHandler
{
public:
};


// Class DreadHunger.DH_LoginStepReconnect
// size:0x0110 (0x0068 - 0x0178)
class UDH_LoginStepReconnect : public UDH_LoginStep
{
public:

	void OnDeclinedReconnect()//offset:0xF54150;
	void OnAcceptedReconnect()//offset:0xF54130;
};


// Class DreadHunger.DH_LoginStepRestoreInvites
// size:0x0008 (0x0068 - 0x0070)
class UDH_LoginStepRestoreInvites : public UDH_LoginStep
{
public:

	void OnSessionUserInviteAcceptedFailed()//offset:0xF545A0;
	void OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)//offset:0xF54320;
	void OnOnlineSessionGameHasStarted()//offset:0xF54300;
	void OnOnlineRestoreInvitesComplete(EDH_RestoreInvitesResult Result)//offset:0xF54280;
	void OnLobbyInviteReceivedWidgetShown()//offset:0xF54240;
};


// Class DreadHunger.DH_LoginStepSessionLogin
// size:0x0000 (0x0068 - 0x0068)
class UDH_LoginStepSessionLogin : public UDH_LoginStep
{
public:

	void OnlineSessionCreateComplete(bool bWasSuccessful, const struct FText& ErrorText)//offset:0xF546B0;
};


// Class DreadHunger.DH_LoginStepUpdateGameLanguage
// size:0x0000 (0x0068 - 0x0068)
class UDH_LoginStepUpdateGameLanguage : public UDH_LoginStep
{
public:
};


// Class DreadHunger.DH_LoginStepUpdatePlayerCloudData
// size:0x0020 (0x0068 - 0x0088)
class UDH_LoginStepUpdatePlayerCloudData : public UDH_LoginStep
{
public:

	void OnSaveConversionCompleteDelegate()//offset:0xF54580;
	void OnLoadedUserCloudSaveObject(class UDH_UserCloudSaveObject* LoadedObject, bool bWasSuccessful)//offset:0xF54170;
};


// Class DreadHunger.DH_LoginStepUpdateTitleData
// size:0x0030 (0x0068 - 0x0098)
class UDH_LoginStepUpdateTitleData : public UDH_LoginStep
{
public:
	TArray<struct FTitleDataFile>                      RequiredFileNames;                                        // 0x0068(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET
};


// Class DreadHunger.DH_LogStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_LogStatics : public UObject
{
public:

	static void LogUI(class UObject* WorldContextObject, const struct FText& Message, EDH_LogVerbosity Verbosity, float Duration)//offset:0xF53EE0;
};


// Class DreadHunger.DH_LoreDataAsset
// size:0x0008 (0x0030 - 0x0038)
class UDH_LoreDataAsset : public UDataAsset
{
public:
	int                                                ExpeditionYear;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_MapData
// size:0x00D0 (0x0030 - 0x0100)
class UDH_MapData : public UDataAsset
{
public:
	struct FText                                       FriendlyName;                                             // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FString                                      PersistentLevelName;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      OnlineCode;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FMapPlayerCountRange                        SupportedPlayerCount;                                     // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UTexture2D*                                  OverheadImage;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PreviewImage;                                             // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class FString, int>                           UnlockRequirements;                                       // 0x00A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bIsReleased;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class USoundCue*                                   MapTableSelectionSound;                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static int GetIndex(const class FString& InCode, class UObject* Context)//offset:0xF53AD0;
	static class UDH_MapData* GetCurrent(class UObject* Context)//offset:0xF53960;
	static class UDH_MapData* Find(const class FString& InCode, class UObject* Context)//offset:0xF53880;
};


// Class DreadHunger.DH_MapListDataAsset
// size:0x0010 (0x0030 - 0x0040)
class UDH_MapListDataAsset : public UDataAsset
{
public:
	TArray<class UDH_MapData*>                         Maps;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_MatchReplay
// size:0x01A8 (0x0028 - 0x01D0)
class UDH_MatchReplay : public UObject
{
public:
	class FString                                      MatchUniqueID;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      LoadedFilePath;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              SecondsPerFramesChunk;                                    // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x184];                                     // 0x004C(0x0184) MISSED OFFSET

	static TArray<class FString> GetReplayFiles()//offset:0xF53DB0;
	static class FString GetReplayDir()//offset:0xF53C30;
	class UDH_MapData* GetMapData()//offset:0xF53BE0;
	static class UDH_MatchReplay* GetCurrent(class UObject* Context)//offset:0xF539F0;
	static class UDH_MatchReplay* Create(class UObject* Outer)//offset:0xF537F0;
};


// Class DreadHunger.DH_Merchant
// size:0x00E8 (0x0220 - 0x0308)
class ADH_Merchant : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UAnimSequenceBase*                           IdleAnimation;                                            // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           GreetingAnimation;                                        // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           FarewellAnimation;                                        // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ShopTitle;                                                // 0x0248(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<EMerchantDialogueType, struct FMerchantDialogueList> Dialogue;                                                 // 0x0260(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EDH_EntitlementsShopType                           ShopType;                                                 // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	struct FDHFloatInterval                            IdleDialogueInterval;                                     // 0x02CC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<class UDH_CosmeticItemBase*>                DiscountedItems;                                          // 0x02D8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x20];                                      // 0x02E8(0x0020) MISSED OFFSET

	void OnShopUIVisibilityChanged(EDH_EntitlementsShopType InShopType, bool bVisible)//offset:0xF545C0;
	void OnReceivedDLCPrices(const struct FDH_PriceDataWrapper& PriceData)//offset:0xF543B0;
};


// Class DreadHunger.DH_MerchantAnimInstance
// size:0x0040 (0x02C0 - 0x0300)
class UDH_MerchantAnimInstance : public UAnimInstance
{
public:
	struct FVector                                     StareTarget;                                              // 0x02C0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StareAlpha;                                               // 0x02CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           IdleAnimation;                                            // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           GreetingAnimation;                                        // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           FarewellAnimation;                                        // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x02E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	class ADH_HumanCharacter*                          CurrentCustomer;                                          // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_MessageBus
// size:0x1140 (0x0028 - 0x1168)
class UDH_MessageBus : public UObject
{
public:
	struct UEMulticastInlineDelegate                   ShowConnectToIPAddressWidget;                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnNamedServerAddressesChanged;                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnBearTrapPlacedDelegate;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInputTypeChangedDelegate;                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnNotifyHitDelegate;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnVivoxLoggedInDelegate;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAvailableAudioDevicesChangedDelegate;                   // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInitOnlineVoiceSuccessDelegate;                         // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnInitOnlineVoiceFailedDelegate;                          // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnStopOnlineVoiceSuccessDelegate;                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnVivoxLoggedOutDelegate;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnGameStateChangedDelegate;                               // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerAddedToGameDelegate;                              // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerRemovedFromGameDelegate;                          // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerDisconnectedFromGameDelegate;                     // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerReconnectedToGameDelegate;                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerRegisteredWithSessionDelegate;                    // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerUnregisteredWithSessionDelegate;                  // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerNameChangedDelegate;                              // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerRoleChangedDelegate;                              // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCosmeticItemSelectedDelegate;                           // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0198(0x0080) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerThrallChangedDelegate;                            // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0228(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerCannibalismChangedDelegate;                       // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0258(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnActiveSpellsChangedDelegate;                            // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnEquippedSpellsChangedDelegate;                          // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSpellCooldownsChangedDelegate;                          // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSetDesiredCastingSpellDelegate;                         // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnThrallSpellCastDelegate;                                // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnThrallSpellExpiredDelegate;                             // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDoppelgangerSpawnedDelegate;                            // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarshipChangedDelegate;                                 // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarshipSankDelegate;                                    // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPowderkegFuseUpdate;                                    // 0x02F8(0x0010) (ZeroConstructor, InstancedReference)
	struct UEMulticastInlineDelegate                   OnBuriedActorDugUpDelegate;                               // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0318(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnDestructibleActorDestroyedDelegate;                     // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0338(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCurrentHelmsmanChangedDelegate;                         // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnGameStateDistanceFromStartToEndChangedDelegate;         // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTotemVictimCountChangedDelegate;                        // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTotemCountChangedDelegate;                              // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0388(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnVoiceChatParticipantChangedDelegate;                    // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerControllerPlayerStateChangedDelegate;             // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerControllerControlledHumanChangedDelegate;         // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHotbarSelectedIndexChangedDelegate;                     // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCurrentInteractTargetChangedDelegate;                   // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0x20];                                      // 0x03F8(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnWantsToTalkDelegate;                                    // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTransactingInventoryChangedDelegate;                    // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnShowHotbarChangedDelegate;                              // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x20];                                      // 0x0448(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSpiritWalkingChangedDelegate;                           // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnIncapacitatedChangedDelegate;                           // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRestingChangedDelegate;                                 // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnClimbingChangedDelegate;                                // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData11[0x20];                                      // 0x04A8(0x0020) MISSED OFFSET
	struct MulticastSparseDelegate                     OnHumanCharacterPoisonAppliedDelegate;                    // 0x04C8(0x0010) (InstancedReference, BlueprintAssignable)
	struct MulticastSparseDelegate                     OnHumanCharacterHealthBoostRemainingModifiedDelegate;     // 0x04C9(0x0010) (InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0x6];                                       // 0x04CA(0x0006) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSelectedInventoryViewChangedDelegate;                   // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWidgetAnimationHandlerBeginShowDelegate;                // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWidgetAnimationHandlerFinishedHideDelegate;             // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFinishedDroppingDelegate;                               // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData13[0x10];                                      // 0x0510(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnDurabilityChangedDelegate;                              // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPokerGameTimeStatsChangedDelegate;                      // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnListeningForToggleGroundCraftableDelegate;              // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMapTableInteractedWithDelegate;                         // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCrewBoardInteractedWithDelegate;                        // 0x0560(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMerchantInteractedWithDelegate;                         // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMerchantShopUIVisibilityChangedDelegate;                // 0x0580(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRoleSelectStationInteractedWithDelegate;                // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnReplayViewerInteractedWithDelegate;                     // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData14[0x20];                                      // 0x05B0(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPrisonerFreedDelegate;                                  // 0x05D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHumanCharacterPlayerStateSetDelegate;                   // 0x05E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData15[0x20];                                      // 0x05F0(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerStateOwnedTotemsChangedDelegate;                  // 0x0610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData16[0x30];                                      // 0x0620(0x0030) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnInventoryManagerSlotContentsChangedDelegate;            // 0x0650(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData17[0x20];                                      // 0x0660(0x0020) MISSED OFFSET
	struct MulticastSparseDelegate                     OnCraftingProjectConsumedInventoryDelegate;               // 0x0680(0x0010) (InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData18[0x17];                                      // 0x0681(0x0017) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCraftingProjectAbortedChangedDelegate;                  // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCraftingProjectCompletedChangedDelegate;                // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData19[0x40];                                      // 0x06B8(0x0040) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSpiedTargetChangedDelegate;                             // 0x06F8(0x0010) (ZeroConstructor, InstancedReference)
	struct UEMulticastInlineDelegate                   OnSpyingChangedDelegate;                                  // 0x0708(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData20[0x10];                                      // 0x0718(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCharacterDiedDelegate;                                  // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData21[0x60];                                      // 0x0738(0x0060) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCreateVoiceAudioComponentCompleteDelegate;              // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPartyPublicStateChanged;                                // 0x07A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData22[0x10];                                      // 0x07B8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCultureChangedDelegate;                                 // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData23[0x20];                                      // 0x07D8(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnShowPregameInstructionsDelegate;                        // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCinematicModeChangedDelegate;                           // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   AddWidgetToHUDDelegate;                                   // 0x0818(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   RemoveWidgetFromHUDDelegate;                              // 0x0828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData24[0x10];                                      // 0x0838(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnRoleConfirmedDelegate;                                  // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnShowScoreboardDelegate;                                 // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData25[0x30];                                      // 0x0868(0x0030) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnCurrentReplayChangedDelegate;                           // 0x0898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTitlePlayerInputCapturedDelegate;                       // 0x08A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTitleScreenHiddenDelegate;                              // 0x08B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMatchStarted;                                           // 0x08C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMatchEnded;                                             // 0x08D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData26[0x80];                                      // 0x08E8(0x0080) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnThrallMessageReceivedDelegate;                          // 0x0968(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData27[0x360];                                     // 0x0978(0x0360) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnOnlineSessionCreateCompleteDelegate;                    // 0x0CD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData28[0x10];                                      // 0x0CE8(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnSearchForLobbiesCompleteDelegate;                       // 0x0CF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData29[0x20];                                      // 0x0D08(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnOnlineSearchForLobbiesStartedDelegate;                  // 0x0D28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnOnlineFailedToBeginToSearchForLobbiesDelegate;          // 0x0D38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData30[0x148];                                     // 0x0D48(0x0148) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnVivoxLoginRetryDelegate;                                // 0x0E90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlayerMuteStatusChanged;                                // 0x0EA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnVivoxShowEchoTestDelegate;                              // 0x0EB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAddVivoxErrorDelegate;                                  // 0x0EC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnClearVivoxErrorDelegate;                                // 0x0ED0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData31[0x10];                                      // 0x0EE0(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnAddOnlineErrorDelegate;                                 // 0x0EF0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnClearOnlineErrorDelegate;                               // 0x0F00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData32[0x20];                                      // 0x0F10(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnTutorialObjectiveCompletedDelegate;                     // 0x0F30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialObjectiveChangedDelegate;                       // 0x0F40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialConceptChangedDelegate;                         // 0x0F50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialChapterChangedDelegate;                         // 0x0F60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialChapterEndedDelegate;                           // 0x0F70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialConceptClosedDelegate;                          // 0x0F80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialIntroScreenHiddenDelegate;                      // 0x0F90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData33[0x10];                                      // 0x0FA0(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnInventoryConsumedDelegate;                              // 0x0FB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHumanCharacterBeingCarriedDelegate;                     // 0x0FC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHumanCharacterGainedInventoryDelegate;                  // 0x0FD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarshipBoilerFueledDelegate;                            // 0x0FE0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarshipBoilerSabotagedDelegate;                         // 0x0FF0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWarshipBoilerChangedDelegate;                           // 0x1000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTutorialTriggerVolumeTriggeredDelegate;                 // 0x1010(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnGroundCraftingBlueprintChangedDelegate;                 // 0x1020(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData34[0x10];                                      // 0x1030(0x0010) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnPlayerReceivedDialogueDelegate;                         // 0x1040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnGrimoireSpellSelectedDelegate;                          // 0x1050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData35[0x20];                                      // 0x1060(0x0020) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnGrimoireInteractedWithDelegate;                         // 0x1080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData36[0x60];                                      // 0x1090(0x0060) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnJournalInteractedWithDelegate;                          // 0x10F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnRichTextHyperlinkClickedDelegate;                       // 0x1100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData37[0x40];                                      // 0x1110(0x0040) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnTitleDataLoadedDelegate;                                // 0x1150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct MulticastSparseDelegate                     OnPlayerStateQuestChanged;                                // 0x1160(0x0010) (InstancedReference, BlueprintAssignable)
	struct MulticastSparseDelegate                     OnStreamerModeChangedDelegate;                            // 0x1161(0x0010) (InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData38[0x6];                                       // 0x1162(0x0006) MISSED OFFSET

	void TotemVictimCountChangedSignature__DelegateSignature(class ADH_GameState* GameState)//offset:0x13CEB30;
	void TotemCountChangedSignature__DelegateSignature(class ADH_GameState* GameState)//offset:0x13CEB30;
	void ShowSaveConversionPopupSignature__DelegateSignature()//offset:0x13CEB30;
	void ShowLoadingScreenSignature__DelegateSignature(const TScriptInterface<class UDH_LoadingScreenInterface>& Caller)//offset:0x13CEB30;
	void ShowConnectToIPAddressWidgetSignature__DelegateSignature()//offset:0x13CEB30;
	void RemoveWidgetFromHUDSignature__DelegateSignature(class UUserWidget* WidgetClass)//offset:0x13CEB30;
	void OnXPProgressUpdatedSignature__DelegateSignature(const struct FDH_XPProgressData& Data)//offset:0x13CEB30;
	void OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature(class UDH_WidgetAnimationHandler* AnimationHandler)//offset:0x13CEB30;
	void OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature(class UDH_WidgetAnimationHandler* AnimationHandler)//offset:0x13CEB30;
	void OnWarshipSankSignature__DelegateSignature(class ADH_Warship* Warship)//offset:0x13CEB30;
	void OnWarshipHullIntegrityChangedSignature__DelegateSignature(class ADH_Warship* Warship, float Delta)//offset:0x13CEB30;
	void OnWarshipChangedSignature__DelegateSignature(class ADH_Warship* Warship)//offset:0x13CEB30;
	void OnWarshipBoilerSabotagedSignature__DelegateSignature(int SabotageUnits)//offset:0x13CEB30;
	void OnWarshipBoilerFueledSignature__DelegateSignature(int PiecesAdded)//offset:0x13CEB30;
	void OnWarshipBoilerChangedSignature__DelegateSignature(class ADH_WarshipBoiler* Boiler)//offset:0x13CEB30;
	void OnWantsToTalkSignature__DelegateSignature(class ADH_PlayerController* PlayerController, bool bWantsToTalk)//offset:0x13CEB30;
	void OnVoiceChatParticipantChangedSignature__DelegateSignature(const class FString& AccountName)//offset:0x13CEB30;
	void OnVivoxShowEchoTestSignature__DelegateSignature()//offset:0x13CEB30;
	void OnVivoxLoginRetrySignature__DelegateSignature(float RetryTimeSeconds)//offset:0x13CEB30;
	void OnVivoxLoggedOutSignature__DelegateSignature()//offset:0x13CEB30;
	void OnVivoxLoggedInSignature__DelegateSignature()//offset:0x13CEB30;
	void OnVivoxErrorsUpdatedSignature__DelegateSignature(TArray<struct FDH_VivoxError> Errors)//offset:0x13CEB30;
	void OnVisibilityTagsChangedSignature__DelegateSignature(class UDH_UIVisibilityTagHandler* TagHandler)//offset:0x13CEB30;
	void OnUpdateTotemTargetsChangedDelegate__DelegateSignature()//offset:0x13CEB30;
	void OnUIModeChanged__DelegateSignature(bool bIsUIOnlyMode)//offset:0x13CEB30;
	void OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature(class ADH_TutorialTriggerVolume* Volume)//offset:0x13CEB30;
	void OnTutorialObjectiveCompletedSignature__DelegateSignature(class UDH_TutorialObjective* Objective)//offset:0x13CEB30;
	void OnTutorialObjectiveChangedSignature__DelegateSignature(class UDH_TutorialObjective* Objective)//offset:0x13CEB30;
	void OnTutorialIntroScreenHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnTutorialConceptClosedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnTutorialConceptChangedSignature__DelegateSignature(const struct FName& Concept)//offset:0x13CEB30;
	void OnTutorialChapterChangedSignature__DelegateSignature(class UDH_TutorialChapter* Chapter)//offset:0x13CEB30;
	void OnTransactingInventoryChangedSignature__DelegateSignature(class UDH_InventoryTransactionComponent* InventoryTransactionComponent, class UDH_InventoryManager* InventoryManager)//offset:0x13CEB30;
	void OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature()//offset:0x13CEB30;
	void OnTitleScreenHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnTitleScreenChoseTutorialSignature__DelegateSignature(bool bDesiresTutorial)//offset:0x13CEB30;
	void OnTitlePlayerInputCapturedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnTitleDataLoadedSignature__DelegateSignature(const class FString& Filename, class UDH_TitleData* TitleData)//offset:0x13CEB30;
	void OnThrallSpellExpiredSignature__DelegateSignature(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0x13CEB30;
	void OnThrallSpellCastSignature__DelegateSignature(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0x13CEB30;
	void OnTalismanDraggedWidgetEndSignature__DelegateSignature(class UDH_PlayerTalisman* Talisman)//offset:0x13CEB30;
	void OnTalismanDraggedWidgetBeginSignature__DelegateSignature(class UDH_PlayerTalisman* Talisman)//offset:0x13CEB30;
	void OnSuccessfulTransferSignature__DelegateSignature(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* SourceInventory)//offset:0x13CEB30;
	void OnSuccessfulQuickTransferDelegateSignature__DelegateSignature(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* TargetInventory)//offset:0x13CEB30;
	void OnStreamerModeChangedSignature__DelegateSignature(bool bStreamerMode)//offset:0x13CEB30;
	void OnStopOnlineVoiceSuccessSignature__DelegateSignature()//offset:0x13CEB30;
	void OnSpyingChangedSignature__DelegateSignature(bool bInSpying)//offset:0x13CEB30;
	void OnSpiritWalkingChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character)//offset:0x13CEB30;
	void OnSpiedTargetChangedSignature__DelegateSignature(class AActor* SpiedActor)//offset:0x13CEB30;
	void OnSpellWidgetMouseLeaveSignature__DelegateSignature(class UDH_TotemSpell* Spell)//offset:0x13CEB30;
	void OnSpellWidgetMouseEnterSignature__DelegateSignature(class UDH_TotemSpell* Spell)//offset:0x13CEB30;
	void OnSpellSelectionSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnSpellDraggedWidgetEndSignature__DelegateSignature(class UDH_TotemSpell* Spell)//offset:0x13CEB30;
	void OnSpellDraggedWidgetBeginSignature__DelegateSignature(class UDH_TotemSpell* Spell)//offset:0x13CEB30;
	void OnSpellCooldownsChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnShowScoreboardSignature__DelegateSignature(bool bShowScoreboard, bool bReplayJustLoaded)//offset:0x13CEB30;
	void OnShowRoleCustomizationSignature__DelegateSignature(bool bShow)//offset:0x13CEB30;
	void OnShowPregameInstructionsSignature__DelegateSignature(int ThrallCount)//offset:0x13CEB30;
	void OnShowLobbyBrowserOverlaySignature__DelegateSignature()//offset:0x13CEB30;
	void OnShowHotbarChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnShipObstructionsChangedSignature__DelegateSignature(class ADH_GameStateBase* GameState)//offset:0x13CEB30;
	void OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature(EShipCustomizationRegion Region)//offset:0x13CEB30;
	void OnShipCosmeticsAppliedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnSetSelectedLanguageCodesSignature__DelegateSignature()//offset:0x13CEB30;
	void OnSetDesiredCastingSpellSignature__DelegateSignature(class UDH_TotemSpell* DesiredSpell)//offset:0x13CEB30;
	void OnSessionUserInviteAcceptedFailedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnSelectedInventoryViewChangedSignature__DelegateSignature(class UDH_InventoryManager* InventoryManager)//offset:0x13CEB30;
	void OnSearchForLobbiesCompleteSignature__DelegateSignature(bool bWasSuccessful, TArray<struct FDH_OnlineSearchResult> SearchResults)//offset:0x13CEB30;
	void OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnScoreboardSelectedIndicesChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnScoreboardReceivedReplaySignature__DelegateSignature(class UDH_MatchReplay* Replay)//offset:0x13CEB30;
	void OnScoreboardHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnSaveConversionPopupAcceptSignature__DelegateSignature()//offset:0x13CEB30;
	void OnSaveConversionCompleteSignature__DelegateSignature()//offset:0x13CEB30;
	void OnRunLoginStepsBeginSignature__DelegateSignature()//offset:0x13CEB30;
	void OnRoleSelectStationInteractedWithSignature__DelegateSignature()//offset:0x13CEB30;
	void OnRoleSelectionWidgetShownSignature__DelegateSignature()//offset:0x13CEB30;
	void OnRoleSelectionWidgetHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnRoleConfirmedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnRichTextHyperlinkClickedSignature__DelegateSignature(const class FString& LinkID)//offset:0x13CEB30;
	void OnRetryingLoginStepSignature__DelegateSignature(int TimeRemaining)//offset:0x13CEB30;
	void OnRestingChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character)//offset:0x13CEB30;
	void OnReplayViewerInteractedWithSignature__DelegateSignature()//offset:0x13CEB30;
	void OnReconnectAvailableSignature__DelegateSignature()//offset:0x13CEB30;
	void OnReceivedDLCPricesSignature__DelegateSignature(const struct FDH_PriceDataWrapper& PriceData)//offset:0x13CEB30;
	void OnPrisonerPawnControllerChangedSignature__DelegateSignature(class ADH_PrisonerPawn* PrisonerPawn)//offset:0x13CEB30;
	void OnPrisonerFreedSignature__DelegateSignature(class ADH_PrisonerPawn* PrisonerPawn)//offset:0x13CEB30;
	void OnPreviewRoleSignature__DelegateSignature(class UDH_PlayerRoleData* RoleData)//offset:0x13CEB30;
	void OnPrestigeButtonClickedSignature__DelegateSignature(class UDH_PlayerRoleData* InPreviewRole)//offset:0x13CEB30;
	void OnPowderkegFuseUpdate__DelegateSignature(class ADH_InventoryPickup* Pickup, float DetonationTime)//offset:0x13CEB30;
	void OnPokerGameTimeStatsChangedSignature__DelegateSignature(TArray<struct FDH_PokerGameTimeStat> TimeStats)//offset:0x13CEB30;
	void OnPlayerUnregisteredWithSessionSignature__DelegateSignature(class ADH_PlayerState* UnregisteredPlayer)//offset:0x13CEB30;
	void OnPlayerThrallVisionFailedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnPlayerThrallVisionChangedSignature__DelegateSignature(bool bUsingVision)//offset:0x13CEB30;
	void OnPlayerThrallChangedDelegateSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)//offset:0x13CEB30;
	void OnPlayerStateQuestChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState, class ADH_QuestState* QuestState)//offset:0x13CEB30;
	void OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState)//offset:0x13CEB30;
	void OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState)//offset:0x13CEB30;
	void OnPlayerStateFirstTimeCannibalSignature__DelegateSignature(class ADH_PlayerState* PlayerState)//offset:0x13CEB30;
	void OnPlayerStateDeadChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState)//offset:0x13CEB30;
	void OnPlayerRoleChangedDelegateSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)//offset:0x13CEB30;
	void OnPlayerRemovedFromGameSignature__DelegateSignature(class ADH_PlayerState* RemovedPlayer)//offset:0x13CEB30;
	void OnPlayerRegisteredWithSessionSignature__DelegateSignature(class ADH_PlayerState* RegisteredPlayer)//offset:0x13CEB30;
	void OnPlayerReconnectedToGameSignature__DelegateSignature(class ADH_PlayerState* ReconnectingPlayer)//offset:0x13CEB30;
	void OnPlayerReceivedDialogueSignature__DelegateSignature(class ADH_HumanCharacter* Speaker, class UDialogueWave* Dialogue)//offset:0x13CEB30;
	void OnPlayerNameChangedSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)//offset:0x13CEB30;
	void OnPlayerMuteStatusChangedSignature__DelegateSignature(class ADH_PlayerState* MutedPlayer)//offset:0x13CEB30;
	void OnPlayerLogoutSignature__DelegateSignature(class AController* ControllerLoggingOut)//offset:0x13CEB30;
	void OnPlayerDisconnectedFromGameSignature__DelegateSignature(class ADH_PlayerState* DisconnectingPlayer)//offset:0x13CEB30;
	void OnPlayerCosmeticItemPurchasedSignature__DelegateSignature(TArray<class FString> ItemCodes)//offset:0x13CEB30;
	void OnPlayerCosmeticItemDetachedSignature__DelegateSignature(class UPrimitiveComponent* Item)//offset:0x13CEB30;
	void OnPlayerControllerShowUIChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnPlayerControllerPlayerStateChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnPlayerControllerGameStateChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnPlayerControllerControlledHumanChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature(const struct FUniqueNetIdRepl& UserId)//offset:0x13CEB30;
	void OnPlayerContextMenuShownSignature__DelegateSignature(class UWidget* Widget)//offset:0x13CEB30;
	void OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature(TArray<class UDH_CosmeticItemBase*> Items, unsigned char AppearanceIndex)//offset:0x13CEB30;
	void OnPlayerCannibalismChangedSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)//offset:0x13CEB30;
	void OnPlayerAddedToGameSignature__DelegateSignature(class ADH_PlayerState* AddedPlayer)//offset:0x13CEB30;
	void OnPhonographSongSelectionSignature__DelegateSignature(class ADH_Phonograph* Phonograph)//offset:0x13CEB30;
	void OnPartyPublicStateChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOverlayWidgetShownSignature__DelegateSignature(class UWidget* Widget)//offset:0x13CEB30;
	void OnOverlayWidgetHiddenSignature__DelegateSignature(class UWidget* Widget)//offset:0x13CEB30;
	void OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature(bool bWasSuccessful)//offset:0x13CEB30;
	void OnOnlineSessionJoiningSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineSessionInvitationSentSignature__DelegateSignature(bool bWasSuccessful)//offset:0x13CEB30;
	void OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineSessionCreateCompleteSignature__DelegateSignature(bool bWasSuccessful, const struct FText& ErrorText)//offset:0x13CEB30;
	void OnOnlineSearchForLobbiesStartedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlinePartyMembersChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlinePartyMemberPromotedSignature__DelegateSignature(bool bLocalIsHost)//offset:0x13CEB30;
	void OnOnlinePartyLeftSignature__DelegateSignature(bool bWasSuccessful, const class FString& PartyId)//offset:0x13CEB30;
	void OnOnlinePartyKickedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlinePartyJoiningCancelledSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlinePartyExitSignature__DelegateSignature(const class FString& PartyId)//offset:0x13CEB30;
	void OnOnlinePartyDataReceivedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlinePartyCantFindLobbySignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlinePartyAlreadyFullSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineJoinSessionBeginSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineInitedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineErrorsUpdatedSignature__DelegateSignature(TArray<struct FDH_OnlineError> Errors)//offset:0x13CEB30;
	void OnOnlineDestroySessionEndSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineDestroySessionBeginSignature__DelegateSignature()//offset:0x13CEB30;
	void OnOnlineAutoSearchChangedSignature__DelegateSignature(bool bAutoSearching)//offset:0x13CEB30;
	void OnNamedServerAddressesChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnMouseCursorVisibilityChangedSignature__DelegateSignature(bool bCursorVisible)//offset:0x13CEB30;
	void OnMerchantShopUIVisibilityChangedSignature__DelegateSignature(EDH_EntitlementsShopType ShopType, bool bVisible)//offset:0x13CEB30;
	void OnMerchantInteractedWithSignature__DelegateSignature(class ADH_Merchant* Merchant)//offset:0x13CEB30;
	void OnMatchReplayReceivedSignature__DelegateSignature(const class FString& MatchID, TArray<unsigned char> Replay)//offset:0x13CEB30;
	void OnMapTableInteractedWithSignature__DelegateSignature()//offset:0x13CEB30;
	void OnLoginStepFinishedSignature__DelegateSignature(int StepsCompleted, int MaxSteps, bool bAbandonFurtherSteps)//offset:0x13CEB30;
	void OnLoginFinishedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature()//offset:0x13CEB30;
	void OnLobbyBrowserWidgetShowSignature__DelegateSignature()//offset:0x13CEB30;
	void OnListeningForToggleGroundCraftableSignature__DelegateSignature(class UDH_UseCraftingMenuHintWidget* UseCraftingMenuHintWidget)//offset:0x13CEB30;
	void OnLaunchTutorialButtonClickedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnLaunchExpeditionButtonClickedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnLanguageFilterDropDownHideSignature__DelegateSignature()//offset:0x13CEB30;
	void OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature(int NumChecked)//offset:0x13CEB30;
	void OnLanguageFilterButtonClickedSignature__DelegateSignature(bool bToggleOn)//offset:0x13CEB30;
	void OnJournalInteractedWithSignature__DelegateSignature()//offset:0x13CEB30;
	void OnItemPoisoned__DelegateSignature()//offset:0x13CEB30;
	void OnInventorySlotDragEndSignature__DelegateSignature(class UUserWidget* InventorySlot)//offset:0x13CEB30;
	void OnInventorySlotDragBeginSignature__DelegateSignature(class UUserWidget* InventorySlot)//offset:0x13CEB30;
	void OnInventoryManagerSlotCountModifiedSignature__DelegateSignature(class UDH_InventoryManager* InventoryManager, int Delta)//offset:0x13CEB30;
	void OnInventoryManagerSlotContentsChangedSignature__DelegateSignature(class UDH_InventoryManager* InventoryManager, TArray<int> ModifiedSlots)//offset:0x13CEB30;
	void OnInventoryContainerSlotContentsChangedSignature__DelegateSignature(class UUserWidget* InventoryContainerWidget, int SlotIndex)//offset:0x13CEB30;
	void OnInventoryConsumedSignature__DelegateSignature(class ADH_Inventory_Consumable* Consumable)//offset:0x13CEB30;
	void OnInteractFailedSignature__DelegateSignature(class UDH_InteractComponent* InteractComponent)//offset:0x13CEB30;
	void OnInputTypeChangedSignature__DelegateSignature(EDHInputType InputType)//offset:0x13CEB30;
	void OnInitOnlineVoiceSuccessSignature__DelegateSignature()//offset:0x13CEB30;
	void OnInitOnlineVoiceFailedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnIncapacitatedChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character)//offset:0x13CEB30;
	void OnHumanCharacterPoisonAppliedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter, class ADH_PlayerState* Creditor, class AActor* Causer)//offset:0x13CEB30;
	void OnHumanCharacterPlayerStateSetSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter)//offset:0x13CEB30;
	void OnHumanCharacterOnShipChangedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter)//offset:0x13CEB30;
	void OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter)//offset:0x13CEB30;
	void OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter, class ADH_PlayerState* Creditor, class AActor* Causer)//offset:0x13CEB30;
	void OnHumanCharacterGainedInventorySignature__DelegateSignature(class ADH_Inventory* Inventory)//offset:0x13CEB30;
	void OnHumanCharacterDiedSignature__DelegateSignature(class ADH_HumanCharacter* DeadCharacter)//offset:0x13CEB30;
	void OnHumanCharacterBeingCarriedSignature__DelegateSignature(class ADH_HumanCharacter* CarriedPawn, class ADH_HumanCharacter* CarryingPawn)//offset:0x13CEB30;
	void OnHotbarSelectedIndexChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)//offset:0x13CEB30;
	void OnHandleSessionInviteAcceptSignature__DelegateSignature(bool bSuccess, bool bNewPartyInMatch, bool bKicked, bool bPartyFull, bool bCantFindLobby)//offset:0x13CEB30;
	void OnGroundCraftingBlueprintChangedSignature__DelegateSignature(class ADH_GroundCraftingBlueprint* Blueprint)//offset:0x13CEB30;
	void OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature(class UDH_TotemSpell* Spell)//offset:0x13CEB30;
	void OnGrimoireSpellSelectedDelegateSignature__DelegateSignature(class UDH_TotemSpell* Spell)//offset:0x13CEB30;
	void OnGrimoireSpellsChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnGrimoireInteractedWithSignature__DelegateSignature()//offset:0x13CEB30;
	void OnGameVictoryWidgetHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnGameStateMatchStateChangedSignature__DelegateSignature(class ADH_GameState* GameState)//offset:0x13CEB30;
	void OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature(class ADH_GameStateBase* GameState)//offset:0x13CEB30;
	void OnGameStateChangedSignature__DelegateSignature(class ADH_GameState* GameState)//offset:0x13CEB30;
	void OnFinishedDroppingSignature__DelegateSignature(class UDH_DropZoneInventoryDropper* Dropper)//offset:0x13CEB30;
	void OnFailedToCraftSignature__DelegateSignature(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingRecipe* CraftingProject, ECraftingFailReason FailReason)//offset:0x13CEB30;
	void OnFailedQuickTransferDelegateSignature__DelegateSignature(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* TargetInventory)//offset:0x13CEB30;
	void OnExpeditionSettingsWidgetShownSignature__DelegateSignature()//offset:0x13CEB30;
	void OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnErrorsUpdatedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnEquippedSpellsChangedSignature__DelegateSignature(class ADH_SpellManager* SpellManager)//offset:0x13CEB30;
	void OnDurabilityChangedSignature__DelegateSignature(class ADH_Inventory* Inventory)//offset:0x13CEB30;
	void OnDoppelgangerSpawnedSignatured__DelegateSignature()//offset:0x13CEB30;
	void OnDestructibleActorHealthChangedSignature__DelegateSignature(class ADH_DestructibleActor* DestructibleActor)//offset:0x13CEB30;
	void OnDestructibleActorDestroyedSignature__DelegateSignature(class ADH_DestructibleActor* DestructibleActor)//offset:0x13CEB30;
	void OnDesiredAutoSearchForLobbiesSignature__DelegateSignature(bool bDesired)//offset:0x13CEB30;
	void OnDeclinedReconnectSignature__DelegateSignature()//offset:0x13CEB30;
	void OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature(int NumOfPlayers)//offset:0x13CEB30;
	void OnDebugAdvertiseButtonClickedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnDaysUntilBlizzardChangedSignature__DelegateSignature(class ADH_GameState* GameState)//offset:0x13CEB30;
	void OnCurrentReplayChangedSignature__DelegateSignature(class UDH_MatchReplay* InReplay)//offset:0x13CEB30;
	void OnCurrentInteractTargetChangedSignature__DelegateSignature(class UDH_InteractComponent* InInteractComponent)//offset:0x13CEB30;
	void OnCurrentHelmsmanChangedSignature__DelegateSignature(class ADH_WarshipHelm* WarshipHelm)//offset:0x13CEB30;
	void OnCultureChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnCrewBoardInteractedWithSignature__DelegateSignature()//offset:0x13CEB30;
	void OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature(const class FString& UniquePlayerId)//offset:0x13CEB30;
	void OnCraftingProjectConsumedInventorySignature__DelegateSignature(class UDH_CraftingProject* CompletedProject, class ADH_Inventory* Item, class ADH_PlayerState* PlayerState)//offset:0x13CEB30;
	void OnCraftingProjectCompletedChangedSignature__DelegateSignature(class UDH_CraftingProject* CraftingProject)//offset:0x13CEB30;
	void OnCraftingProjectAbortedChangedSignature__DelegateSignature(class UDH_CraftingProject* CraftingProject)//offset:0x13CEB30;
	void OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature(class UDH_CraftingComponent* CraftingComponent)//offset:0x13CEB30;
	void OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature(class UDH_CraftingComponent* CraftingComponent)//offset:0x13CEB30;
	void OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)//offset:0x13CEB30;
	void OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)//offset:0x13CEB30;
	void OnCosmeticItemUnselectedDelegateSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)//offset:0x13CEB30;
	void OnCosmeticItemUnequippedSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)//offset:0x13CEB30;
	void OnCosmeticItemSelectedDelegateSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)//offset:0x13CEB30;
	void OnCosmeticItemEquippedSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)//offset:0x13CEB30;
	void OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)//offset:0x13CEB30;
	void OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)//offset:0x13CEB30;
	void OnControlledShipChangedSignature__DelegateSignature(class ADH_HumanCharacter* ShipController)//offset:0x13CEB30;
	void OnCloudSaveCompleteSignature__DelegateSignature(class UDH_UserCloudSaveObject* SaveObject)//offset:0x13CEB30;
	void OnClimbingChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character, class ADH_ClimbableActor* ClimbingActor)//offset:0x13CEB30;
	void OnClearVivoxErrorSignature__DelegateSignature(const struct FDH_VivoxError& Error)//offset:0x13CEB30;
	void OnClearOnlineErrorSignature__DelegateSignature(const struct FDH_OnlineError& Error)//offset:0x13CEB30;
	void OnCinematicModeChangedSignature__DelegateSignature(bool bCinematicMode)//offset:0x13CEB30;
	void OnChooseRoleSelectionSignature__DelegateSignature()//offset:0x13CEB30;
	void OnCharacterDiedSignature__DelegateSignature(class ADH_Character* DeadCharacter)//offset:0x13CEB30;
	void OnBuriedActorDugUpSignature__DelegateSignature(class ADH_DigSite* Digsite, class AActor* BuriedActor)//offset:0x13CEB30;
	void OnBearTrapPlacedSignature__DelegateSignature(class ADH_InventoryPickup* Trap)//offset:0x13CEB30;
	void OnAvatarDraggedChangedSignature__DelegateSignature(bool bDragged)//offset:0x13CEB30;
	void OnAvatarCreatedSignature__DelegateSignature(class ADH_PlayerController* PlayerController, class ADH_CosmeticPreviewAvatar* Avatar)//offset:0x13CEB30;
	void OnAvailableAudioDevicesChangedSignature__DelegateSignature()//offset:0x13CEB30;
	void OnAddVivoxErrorSignature__DelegateSignature(const struct FDH_VivoxError& Error)//offset:0x13CEB30;
	void OnAddOnlineErrorSignature__DelegateSignature(const struct FDH_OnlineError& Error)//offset:0x13CEB30;
	void OnAddDebugWidgetSignature__DelegateSignature(class UUserWidget* InClass)//offset:0x13CEB30;
	void OnActiveSpellsChangedSignature__DelegateSignature(class ADH_SpellManager* SpellManager)//offset:0x13CEB30;
	void OnAcceptedReconnectSignature__DelegateSignature()//offset:0x13CEB30;
	void MessageBusOnNotifyHitSignature__DelegateSignature(class ADH_PlayerState* InstigatorPlayerState)//offset:0x13CEB30;
	void MatchStartedEvent__DelegateSignature()//offset:0x13CEB30;
	void MatchEndedEvent__DelegateSignature()//offset:0x13CEB30;
	void HUDThrallMessageReceivedEvent__DelegateSignature(const struct FText& Message)//offset:0x13CEB30;
	static class UDH_MessageBus* GetInstance(class UObject* WorldContextObject)//offset:0xF5A2A0;
	void DisplayMatchEndMessageSignature__DelegateSignature(EPlayerTeam WinningTeam, bool bWinner)//offset:0x13CEB30;
	void AddWidgetToHUDSignature__DelegateSignature(class UUserWidget* WidgetClass, EDH_HUDLocationType Location)//offset:0x13CEB30;
};


// Class DreadHunger.DH_MOTDTitleData
// size:0x0080 (0x0028 - 0x00A8)
class UDH_MOTDTitleData : public UDH_TitleData
{
public:

	EDH_MOTDType GetType()//offset:0xF61A10;
	struct FText GetMOTD()//offset:0xF617C0;
	struct FLinearColor GetBackgroundColorOverride()//offset:0xF61260;
};


// Class DreadHunger.DH_MouseCursorComponent
// size:0x0010 (0x00B0 - 0x00C0)
class UDH_MouseCursorComponent : public UActorComponent
{
public:

	void Reset()//offset:0xF62CB0;
	void PushShowMouseCursor(class UObject* Shower)//offset:0xF62540;
	void PopShowMouseCursor(class UObject* Shower)//offset:0xF62400;
};


// Class DreadHunger.DH_MouseDragModifiersComponent
// size:0x0018 (0x00B0 - 0x00C8)
class UDH_MouseDragModifiersComponent : public UActorComponent
{
public:
	struct UEMulticastInlineDelegate                   OnSingleDropModifierKeyHeldChangedDelegate;               // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bSingleDropModifierKeyHeld;                               // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	bool GetSingleDropModifierKeyHeld()//offset:0x9A2940;
};


// Class DreadHunger.DH_NavigableWaterSurface
// size:0x0030 (0x0220 - 0x0250)
class ADH_NavigableWaterSurface : public AActor
{
public:
	float                                              NavigationDepth;                                          // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NavModifierStartDepth;                                    // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowNavigationSurfaceMesh;                               // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        VisibleWaterSurface;                                      // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavModifierVolume;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDH_NonCollidingNavComponent*                NavigationSurface;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDH_SpecificNavModifierComponent*            NavModifierComponent;                                     // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_NitroInventory
// size:0x0070 (0x0910 - 0x0980)
class ADH_NitroInventory : public ADH_Inventory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0910(0x0008) MISSED OFFSET
	EPlayerMatchStatType                               DestructionStat;                                          // 0x0918(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class ADH_ExplosionActor*                          ExplosionClass;                                           // 0x0920(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurabilityDecreaseRate;                                   // 0x0928(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurabilityIncreaseRate;                                   // 0x092C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionDelay;                                           // 0x0930(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class USoundBase*                                  DamageSound;                                              // 0x0938(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BreakSound;                                               // 0x0940(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0948(0x0038) MISSED OFFSET

	void OnCarrierDamaged(class AActor* InDamagedActor, float InDamage, class UDamageType* InDamageType, class AController* InInstigatedBy, class AActor* InDamageCauser)//offset:0xF61B70;
};


// Class DreadHunger.DH_NitroPickup
// size:0x0070 (0x0390 - 0x0400)
class ADH_NitroPickup : public ADH_InventoryPickup
{
public:
	class UParticleSystemComponent*                    DamagedParticleComponent;                                 // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DamagedAudioComponent;                                    // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FDamageInstance                             LastDamageReceived;                                       // 0x03A0(0x0030) (Net)
	unsigned char                                      BreakFlash;                                               // 0x03D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x03D1(0x002F) MISSED OFFSET

	void OnRep_LastDamageReceived()//offset:0xF622D0;
	void OnRep_BreakFlash()//offset:0xF62270;
};


// Class DreadHunger.DH_NitroView
// size:0x0020 (0x02E0 - 0x0300)
class ADH_NitroView : public ADH_InventoryView_Static
{
public:
	class UParticleSystemComponent*                    DamagedParticleComponent;                                 // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DamagedAudioComponent;                                    // 0x02E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET
};


// Class DreadHunger.DH_NonCollidingNavComponent
// size:0x0000 (0x04F0 - 0x04F0)
class UDH_NonCollidingNavComponent : public UStaticMeshComponent
{
public:
};


// Class DreadHunger.DH_Online
// size:0x0068 (0x0028 - 0x0090)
class UDH_Online : public UObject
{
public:
	class UDH_OnlineSession*                           Session;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_OnlinePresence*                          Presence;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class FString, class UDH_TitleData*>          TitleDataMap;                                             // 0x0038(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	void OnRunLoginStepsBegin()//offset:0xF62350;
	static class FString GetLocalPlayerNickname(int LocalUserNum)//offset:0xF616F0;
};


// Class DreadHunger.DH_OnlinePresence
// size:0x0000 (0x0028 - 0x0028)
class UDH_OnlinePresence : public UObject
{
public:
};


// Class DreadHunger.DH_OnlineSession
// size:0x0160 (0x0028 - 0x0188)
class UDH_OnlineSession : public UObject
{
public:

	void OnPostLoadMapWithWorld(class UWorld* LoadedWorld)//offset:0xF621E0;
	void OnPlayerLogout(class AController* ControllerLoggingOut)//offset:0xF620C0;
	void OnOnlineSessionUpdateComplete()//offset:0xF61F00;
	void OnMatchEnded()//offset:0xF61E50;
};


// Class DreadHunger.DH_OnlineSessionSaveGame
// size:0x0010 (0x0028 - 0x0038)
class UDH_OnlineSessionSaveGame : public USaveGame
{
public:
	TArray<struct FDH_LobbyInviteInfo>                 LobbyInviteInfos;                                         // 0x0028(0x0010) (ZeroConstructor)
};


// Class DreadHunger.DH_OnlineSettingsJsonSaveData
// size:0x0000 (0x0028 - 0x0028)
class UDH_OnlineSettingsJsonSaveData : public UDH_JsonSaveObject
{
public:

	static class UDH_OnlineSettingsJsonSaveData* GetInstance(class UObject* Context)//offset:0xF61340;
};


// Class DreadHunger.DH_OnlineSettingsSaveGame
// size:0x0000 (0x0028 - 0x0028)
class UDH_OnlineSettingsSaveGame : public USaveGame
{
public:

	static class UDH_OnlineSettingsSaveGame* GetInstance(class UObject* Context)//offset:0xF613D0;
};


// Class DreadHunger.DH_OnlineVoice
// size:0x0078 (0x0028 - 0x00A0)
class UDH_OnlineVoice : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnVoiceUserLoginSucceededDelegate;                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	void OnPlayerAddedToGame(class ADH_PlayerState* Player)//offset:0xF62030;
	void OnOnlineVoiceInputDeviceNameChanged(const class FString& NewValue)//offset:0xF61F40;
	void OnOnlineSessionUpdateComplete()//offset:0xF61F20;
	void OnGameAudioVOIPVolumeChanged(float NewValue)//offset:0xF61D20;
};


// Class DreadHunger.DH_PackIce
// size:0x0078 (0x0310 - 0x0388)
class ADH_PackIce : public ADH_DestructibleActor
{
public:
	class UDH_ImpactEffect*                            ChunkBreakEffect;                                         // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipSpeedModifier;                                        // 0x0318(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StaticRenderDistance;                                     // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     LastHitImpulse;                                           // 0x0328(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<unsigned char>                              RemovedChunks;                                            // 0x0338(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        DestroyedChunksList;                                      // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInterface*                          DestructionMaskBrushMaterial;                             // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      DestructionMaskRT;                                        // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DestructionMaskBrushMID;                                  // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	void RemoveClosestChunks(TArray<struct FVector> WorldPositions)//offset:0xF62BA0;
	void OnRep_RemovedChunks()//offset:0xF622F0;
};


// Class DreadHunger.DH_Phonograph
// size:0x0010 (0x0910 - 0x0920)
class ADH_Phonograph : public ADH_Inventory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0910(0x0008) MISSED OFFSET
	unsigned char                                      SongIndex;                                                // 0x0918(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0919(0x0007) MISSED OFFSET

	unsigned char GetSongIndex()//offset:0xF619D0;
};


// Class DreadHunger.DH_Phonograph_Pickup
// size:0x0010 (0x0390 - 0x03A0)
class ADH_Phonograph_Pickup : public ADH_InventoryPickup
{
public:
	class UAudioComponent*                             MusicComponent;                                           // 0x0390(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_Phonograph_Stationary
// size:0x0058 (0x0220 - 0x0278)
class ADH_Phonograph_Stationary : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MusicComponent;                                           // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SongChangedSound;                                         // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SwitchedOffSound;                                         // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BashedOffSound;                                           // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_PhonographSong*>                  Songs;                                                    // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                SongIndex;                                                // 0x0270(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageFlash;                                              // 0x0274(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0275(0x0003) MISSED OFFSET

	void OnRep_SongIndex()//offset:0xF62310;
	void OnRep_DamageFlash()//offset:0xF62290;
};


// Class DreadHunger.DH_Phonograph_View
// size:0x0010 (0x0320 - 0x0330)
class ADH_Phonograph_View : public ADH_InventoryView_Skeletal
{
public:
	class UAudioComponent*                             MusicComponent;                                           // 0x0320(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_PhonographSong
// size:0x0028 (0x0030 - 0x0058)
class UDH_PhonographSong : public UDataAsset
{
public:
	class USoundBase*                                  Music;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};


// Class DreadHunger.DH_PhysicalMaterial
// size:0x0008 (0x0080 - 0x0088)
class UDH_PhysicalMaterial : public UPhysicalMaterial
{
public:
	class UDH_ImpactEffect*                            ImpactEffect;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_PhysicsBuoy
// size:0x0048 (0x0220 - 0x0268)
class ADH_PhysicsBuoy : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HitCollisionSphere;                                       // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_BuoyancyComponent*                       BuoyancyComponent;                                        // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              DamageImpulse;                                            // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UDH_DamageType*                              ImpactDamageType;                                         // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBuoyHitFlash                               HitFlash;                                                 // 0x0248(0x0010) (Net)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class AController*                                 LastInteractingController;                                // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void OnRep_HitFlash()//offset:0xF622B0;
};


// Class DreadHunger.DH_PhysicsDecoration
// size:0x0000 (0x0220 - 0x0220)
class ADH_PhysicsDecoration : public AActor
{
public:
};


// Class DreadHunger.DH_PhysicsDecoration_Skeletal
// size:0x0008 (0x0220 - 0x0228)
class ADH_PhysicsDecoration_Skeletal : public ADH_PhysicsDecoration
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_PhysicsDecoration_Static
// size:0x0008 (0x0220 - 0x0228)
class ADH_PhysicsDecoration_Static : public ADH_PhysicsDecoration
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_PhysicsVolume
// size:0x0060 (0x0268 - 0x02C8)
class ADH_PhysicsVolume : public APhysicsVolume
{
public:
	float                                              InsulationFactor;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnclosedSpace;                                           // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMainShipVolume;                                          // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x56];                                      // 0x0272(0x0056) MISSED OFFSET
};


// Class DreadHunger.DH_UserCloudSaveObject
// size:0x0040 (0x0028 - 0x0068)
class UDH_UserCloudSaveObject : public UObject
{
public:
};


// Class DreadHunger.DH_PlayerCareerCloudSaveData
// size:0x00D8 (0x0068 - 0x0140)
class UDH_PlayerCareerCloudSaveData : public UDH_UserCloudSaveObject
{
public:
	TMap<class FString, int>                           MapCompletions;                                           // 0x0068(0x0050)
	TArray<ETutorialChapters>                          UnlockedTutorialChapters;                                 // 0x00B8(0x0010) (ZeroConstructor)
	TArray<int>                                        TutorialCollectables;                                     // 0x00C8(0x0010) (ZeroConstructor)
	TArray<class FString>                              UnlockedCosmetics;                                        // 0x00D8(0x0010) (ZeroConstructor)
	int                                                PokerWins;                                                // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HelmsmanDistance;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<class FString, struct FCharacterRoleProgress> CharacterRoleProgress;                                    // 0x00F0(0x0050)

	static class UDH_PlayerCareerCloudSaveData* GetInstance(class UObject* Context)//offset:0xF61460;
};


// Class DreadHunger.DH_PlayerCareerSaveGame
// size:0x0120 (0x0028 - 0x0148)
class UDH_PlayerCareerSaveGame : public USaveGame
{
public:
	bool                                               bHasMadeTutorialChoice;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FEquippedPlayerCosmetics>            EquippedCosmeticItems;                                    // 0x0030(0x0010) (ZeroConstructor)
	TArray<class FString>                              EquippedSpells;                                           // 0x0040(0x0010) (ZeroConstructor)
	TArray<class FString>                              EquippedTalismans;                                        // 0x0050(0x0010) (ZeroConstructor)
	TMap<class FString, int>                           MapCompletions;                                           // 0x0060(0x0050)
	EPlayerTeamRole                                    StartingRole;                                             // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<ETutorialChapters>                          UnlockedTutorialChapters;                                 // 0x00B8(0x0010) (ZeroConstructor)
	TArray<int>                                        TutorialCollectables;                                     // 0x00C8(0x0010) (ZeroConstructor)
	ETutorialChapters                                  CurrentTutorialChapter;                                   // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TMap<struct FName, struct FSavedAchievementProgress> ProgressiveAchievements;                                  // 0x00E0(0x0050)
	bool                                               bSelectedLanguageCodesInited;                             // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<struct FText>                               SelectedLanguageCodes;                                    // 0x0138(0x0010) (ZeroConstructor)

	static class UDH_PlayerCareerSaveGame* GetInstance(class UObject* Context)//offset:0xF614F0;
};


// Class DreadHunger.DH_PlayerControllerBase
// size:0x0010 (0x0570 - 0x0580)
class ADH_PlayerControllerBase : public APlayerController
{
public:
	class UDH_MouseCursorComponent*                    MouseCursorComponent;                                     // 0x0570(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_InputModeComponent*                      InputModeComponent;                                       // 0x0578(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	void PushUIInputMode(class UWidget* WidgetToFocus, bool bGameAndUI)//offset:0xF6AE50;
	void PushShowMouseCursor(class UObject* Shower)//offset:0xF6ADC0;
	void PopUIInputMode(class UWidget* WidgetToUnfocus)//offset:0xF6AD30;
	void PopShowMouseCursor(class UObject* Shower)//offset:0xF6ACA0;
	void ClientPrintLog(const class FString& Text)//offset:0xF69AB0;
};


// Class DreadHunger.DH_PlayerController
// size:0x0260 (0x0580 - 0x07E0)
class ADH_PlayerController : public ADH_PlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	class ADH_HumanCharacter*                          ControlledHuman;                                          // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CraftingPlacementRange;                                   // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnHotbarSelectedIndexChangedDelegate;                     // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnControlledHumanChangedDelegate;                         // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDHPlayerStateChangedDelegate;                           // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDHGameStateChangedDelegate;                             // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnWinningHandReceivedDelegate;                            // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnHoldDelegate;                                           // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x05F8(0x0010) MISSED OFFSET
	class USoundBase*                                  SpellTargetChangedSound;                                  // 0x0608(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpellTargetingParticle;                                   // 0x0610(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrallVisionEnterSound;                                   // 0x0618(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrallVisionExitSound;                                    // 0x0620(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrallVisionFailedSound;                                  // 0x0628(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PostProcessMaterial;                                      // 0x0630(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PostProcessMID;                                           // 0x0638(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDH_BufferTransferComponent*                 BufferTransferComponent;                                  // 0x0640(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0648(0x0010) MISSED OFFSET
	class ADH_PlayerState*                             DHPlayerState;                                            // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_GameState*                               DHGameState;                                              // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_MouseDragModifiersComponent*             MouseDragModifiersComponent;                              // 0x0668(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_GroundCraftingProjectComponent*          GroundCraftingProjectComponent;                           // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_SuicideComponent*                        SuicideComponent;                                         // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_InteractComponent*                       InteractComponent;                                        // 0x0680(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_InventoryTransactionComponent*           LootInterfaceComponent;                                   // 0x0688(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0690(0x0008) MISSED OFFSET
	class UDH_TotemSpell*                              CurrentSpellCasting;                                      // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowUI;                                                  // 0x06A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06A1(0x0003) MISSED OFFSET
	int                                                HotbarSelectedIndex;                                      // 0x06A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x06A8(0x0010) MISSED OFFSET
	class UDH_CraftingComponent*                       CurrentCraftingComponent;                                 // 0x06B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      CurrentCastingTarget;                                     // 0x06C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x06C8(0x0018) MISSED OFFSET
	bool                                               bShowHotbar;                                              // 0x06E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectingSpell;                                          // 0x06E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x06E2(0x0007) MISSED OFFSET
	bool                                               bUsingThrallVision;                                       // 0x06E9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0xD6];                                      // 0x06EA(0x00D6) MISSED OFFSET
	class ADH_RoleCustomizationAvatar*                 PlayerAvatarClass;                                        // 0x07C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_RoleCustomizationAvatar*                 PlayerAvatar;                                             // 0x07C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADH_ShipCustomizationAvatar*                 ShipAvatarClass;                                          // 0x07D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_ShipCustomizationAvatar*                 ShipAvatar;                                               // 0x07D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void TakeHallucinationDamage(float Amount, class UDamageType* DamageType)//offset:0xF638E0;
	void ShowPreGameInstructions(int ThrallCount)//offset:0xF63850;
	void SetSpellSelecting(bool bNewSelectingSpell)//offset:0xF637C0;
	void SetSpellCasting(class UDH_TotemSpell* Spell)//offset:0xF63730;
	void SetShipThrust(float NewIsThrottle)//offset:0xF636A0;
	void SetShipBoosting(bool bNewIsBoosting)//offset:0xF63610;
	void SetPrestigeLevel(int NewPrestigeLevel)//offset:0xF63580;
	void SetPlayerRole_Simulated(class UDH_PlayerRoleData* NewRole)//offset:0xF634F0;
	void SetPlayerRole(class UDH_PlayerRoleData* NewRole)//offset:0xF63460;
	void SetEquippedTalismans(TArray<class UDH_PlayerTalisman*> InTalismans)//offset:0xF633C0;
	void SetEquippedSpells(TArray<class UDH_TotemSpell*> InSpells)//offset:0xF63320;
	void SetEquippedShipCosmetics(TArray<struct FEquippedShipCosmetics> NewItems)//offset:0xF63250;
	void SetEquippedCosmetics(TArray<struct FEquippedPlayerCosmetics> NewItems)//offset:0xF63180;
	void SetDesiresThrallVision(bool bNewDesiresThrallVision)//offset:0xF630F0;
	void SetCraftingPreview(class UDH_CraftingRecipe* NewRecipe, bool bClearPreview)//offset:0xF63020;
	void SetAllPlayersRole_Simulated(class UDH_PlayerRoleData* NewRole)//offset:0xF39610;
	void SetAllPlayersRole(class UDH_PlayerRoleData* NewRole)//offset:0xF62F90;
	void ServerCheat(const class FString& Msg)//offset:0xF62EF0;
	void SendThrallMessage_Simulated(const struct FText& Message)//offset:0xF62E20;
	void SendThrallMessage(const struct FText& Message)//offset:0xF62D60;
	void SaveMapCompletion(class UDH_MapData* MapData)//offset:0xF62CD0;
	void ResetAchievements()//offset:0x806320;
	void RemoveKickExemption()//offset:0xF62C90;
	void RecordVersionMismatch(const struct FDHCompleteVersion& ClientVersion, const class FString& PlayerName)//offset:0xF62A80;
	void ReceiveWinningHand(const struct FPlayingCardHand& WinningHand, class USoundBase* Sound, const struct FText& Message)//offset:0xF628C0;
	void ReceiveThrallMessage(const struct FText& Message, class USoundBase* Sound)//offset:0xF627B0;
	void ReceiveGameplayMessage(const struct FText& Message, class USoundBase* Sound, class UTexture2D* Image, const struct FText& Title)//offset:0xF625D0;
	void PushIgnoreLookInput(class UObject* Suppressor)//offset:0xF624B0;
	void PressedAttack_Simulated()//offset:0xF62490;
	void PopIgnoreLookInput(class UObject* Suppressor)//offset:0xF62370;
	void OnRep_UsingThrallVision()//offset:0xF62330;
	void OnPlayerSpellsChanged(class ADH_SpellManager* InSpellManager)//offset:0xF62150;
	void OnMatchStateChanged(class ADH_GameState* GameState)//offset:0xF61E70;
	void OnMatchEnded()//offset:0xF61E30;
	void OnInvitationSent(bool bWasSuccessful)//offset:0xF61DA0;
	bool IsUsingThrallVision()//offset:0xF61B40;
	bool IsSelectingSpell()//offset:0xF61B20;
	bool IsLooting()//offset:0xF61AF0;
	void GrantAchievement(const struct FName& AchievementName)//offset:0xF61A60;
	bool GetWantsToTalk()//offset:0xF61A30;
	class UDH_SuicideComponent* GetSuicideComponent()//offset:0xF619F0;
	bool GetShowUI()//offset:0xF619B0;
	bool GetShowHotbar()//offset:0xF61990;
	int GetSelectedHotbarIndex()//offset:0xF61970;
	void GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation)//offset:0xF61880;
	class UDH_MouseDragModifiersComponent* GetMouseDragModifiersComponent()//offset:0xF61860;
	void GetListenerPosition(struct FVector* OutLocation, struct FVector* OutFrontDir, struct FVector* OutRightDir)//offset:0xF615B0;
	class UDH_InventoryManager* GetInventory()//offset:0xF61580;
	class UDH_GroundCraftingProjectComponent* GetGroundCraftingProjectComponent()//offset:0xF61320;
	class ADH_PlayerState* GetDHPlayerState()//offset:0xF61300;
	class ADH_GameState* GetDHGameState()//offset:0xF612E0;
	class UDH_TotemSpell* GetCurrentSpellCasting()//offset:0xF612C0;
	class ADH_HumanCharacter* GetControlledDoppelganger()//offset:0xF61290;
	void DisplayMatchEndMessage(EPlayerTeam WinningTeam, bool bWinner)//offset:0xF61180;
	void DeclineBrigRelease()//offset:0xF61160;
	bool Craft_Simulated(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingRecipe* CraftingProject)//offset:0xF61090;
	void Craft(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingRecipe* CraftingProject)//offset:0xF60FC0;
	void ClientSetPlayerRole(class UDH_PlayerRoleData* NewRole)//offset:0xF60F30;
	void ChooseRoleSelection()//offset:0xF60F10;
	void Cheat(const class FString& Msg)//offset:0xF60E20;
	void ChangeShipYawDirection(int8_t NewYawDirection)//offset:0xF60DA0;
	void CastTotemSpell(class UDH_TotemSpell* Spell, class AActor* Target)//offset:0xF60CD0;
	void AddShowOnlyActor(class AActor* InActor)//offset:0xF60C40;
	void AddKickExemption()//offset:0xF60C20;
	void AbortProject_Simulated(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingProject* AbortedProject)//offset:0xF60B50;
	void AbortProject(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingProject* AbortedProject)//offset:0xF60A80;
};


// Class DreadHunger.DH_PlayerCosmeticItem
// size:0x00A8 (0x0108 - 0x01B0)
class UDH_PlayerCosmeticItem : public UDH_CosmeticItemBase
{
public:
	TMap<class USkeletalMesh*, struct FCosmeticAppearance> Appearances;                                              // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<EPlayerCosmeticSlot, struct FDH_CosmeticSlotSettings> Slots;                                                    // 0x0158(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	ECosmeticLimbDetachmentHandling                    LimbRemovalHandling;                                      // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_PlayerMatchStat
// size:0x0070 (0x0028 - 0x0098)
class UDH_PlayerMatchStat : public UObject
{
public:
	EPlayerMatchStatType                               StatType;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScoreableActionData                        BaseScore;                                                // 0x0048(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	float GetScoreModifiers(class ADH_PlayerState* ScoringPlayer, class AActor* Target)//offset:0xF6A4A0;
};


// Class DreadHunger.DH_PlayerRanks
// size:0x0058 (0x0030 - 0x0088)
class UDH_PlayerRanks : public UDataAsset
{
public:
	TMap<EPlayerExperienceRank, struct FPlayerExperienceRank> Ranks;                                                    // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCurveFloat*                                 RanksExperienceCurve;                                     // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_PlayerReviveStation
// size:0x0068 (0x0220 - 0x0288)
class ADH_PlayerReviveStation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              ReviveTime;                                               // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FName>                               ReviveSlots;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UArrowComponent*                             ReviveTransform;                                          // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  EnterSound;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExitSound;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        OccupiedSlots;                                            // 0x0270(0x0010) (Net, ZeroConstructor)
	class ADH_HumanCharacter*                          CurrentLocalHuman;                                        // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData)

	void UpdateColorMaskFriendly(class ADH_HumanCharacter* LocalHuman)//offset:0xF6B120;
	void OnLocalHumanChanged(class ADH_PlayerController* PlayerController)//offset:0xF6AA10;
};


// Class DreadHunger.DH_PlayerRoleData
// size:0x0160 (0x0030 - 0x0190)
class UDH_PlayerRoleData : public UDataAsset
{
public:
	struct FText                                       RoleTitle;                                                // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FString                                      OnlineName;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	EPlayerTeamRole                                    Type;                                                     // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerVoiceType                                   VoiceType;                                                // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	class UDialogueVoice*                              VoiceData;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Icon;                                                     // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0070(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UDH_RolePerkData*>                    Perks;                                                    // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_RolePerkData*>                    MasteryPerks;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               Mesh;                                                     // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAssetOverride;                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class UMaterialInterface*>               OverrideMaterials;                                        // 0x00B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<int>                                        HiddenFirstPersonMaterials;                               // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class ADH_BodyPartPickup*>                  BodyParts;                                                // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDH_DropTable*                               StartingDropTable;                                        // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeshRelativeTransform_Brig;                               // 0x0130(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  MeshRelativeTransform_Poker;                              // 0x0160(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)

	static TArray<class UDH_PlayerRoleData*> GetAllRoles(class UObject* Context)//offset:0xF69DE0;
	static class UDH_PlayerRoleData* FindByType(EPlayerTeamRole InType, class UObject* Context)//offset:0xF69C30;
	static class UDH_PlayerRoleData* FindByName(const class FString& InName, class UObject* Context)//offset:0xF69B50;
};


// Class DreadHunger.DH_PlayerSession
// size:0x0298 (0x0028 - 0x02C0)
class UDH_PlayerSession : public UObject
{
public:
	struct FDH_PlayerProgression                       Progression;                                              // 0x0028(0x0298) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static class UDH_PlayerSession* GetInstance(class UObject* WorldContextObject)//offset:0xF6A000;
};


// Class DreadHunger.DH_PlayerSettingsJsonSaveData
// size:0x0078 (0x0028 - 0x00A0)
class UDH_PlayerSettingsJsonSaveData : public UDH_JsonSaveObject
{
public:
	TArray<struct FEquippedShipCosmetics>              EquippedShipCosmetics;                                    // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FEquippedPlayerCosmetics>            EquippedCosmeticItems;                                    // 0x0038(0x0010) (ZeroConstructor)
	EPlayerTeamRole                                    StartingRole;                                             // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<class FString>                              EquippedSpells;                                           // 0x0050(0x0010) (ZeroConstructor)
	TArray<class FString>                              EquippedTalismans;                                        // 0x0060(0x0010) (ZeroConstructor)
	bool                                               bSelectedLanguageCodesInited;                             // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FText>                               SelectedLanguageCodes;                                    // 0x0078(0x0010) (ZeroConstructor)
	ETutorialChapters                                  CurrentTutorialChapter;                                   // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasMadeTutorialChoice;                                   // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasAttemptedSaveMigration;                               // 0x008A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x008B(0x0005) MISSED OFFSET
	TArray<struct FDH_ServerAddress>                   NamedServerAddresses;                                     // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	void RemoveNamedServerAddress(const class FString& Name)//offset:0xF6AF20;
	bool GetNamedServerAddress(const class FString& Name, TArray<unsigned char>* Out_IPAddress, int* Out_Port)//offset:0xF6A120;
	static class UDH_PlayerSettingsJsonSaveData* GetInstance(class UObject* Context)//offset:0xF6A090;
	void AddNamedServerAddress(const class FString& Name, TArray<unsigned char> IPAddress, int Port)//offset:0xF69960;
};


// Class DreadHunger.DH_PlayerState
// size:0x0350 (0x0320 - 0x0670)
class ADH_PlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
	TArray<struct FPlayerMatchStat>                    MatchStats;                                               // 0x0330(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDH_ScoreboardDataAsset*                     ScoreboardDataAsset;                                      // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FUniqueNetIdRepl>                    VictimIDs;                                                // 0x0348(0x0010) (ZeroConstructor)
	struct FUniqueNetIdRepl                            KillerID;                                                 // 0x0358(0x0028)
	class UDH_DamageType*                              CauseOfDeath;                                             // 0x0380(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxConcurrentTotems;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	TMap<ETotemSpellTiers, float>                      SpellTierLevels;                                          // 0x0390(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	class ADH_GroundCraftingBlueprint*                 ActiveCraftingProject;                                    // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	struct UEMulticastInlineDelegate                   OnThrallChangedDelegate;                                  // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDeadChangedDelegate;                                    // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnDeathCountChangedDelegate;                              // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSelectedRoleChangedDelegate;                            // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	TArray<struct FTrinket>                            Trinkets;                                                 // 0x0440(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0450(0x0008) MISSED OFFSET
	class ADH_Inventory*                               QuestNoteClass;                                           // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0460(0x0004) MISSED OFFSET
	float                                              TrinketChanceIncrease;                                    // 0x0464(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrinketChanceInitial;                                     // 0x0468(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class ADH_Inventory*                               ArmoryCodeClass;                                          // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_QuestState*                              QuestState;                                               // 0x0478(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ADH_SpellManager*                            SpellManagerClass;                                        // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_SpellManager*                            SpellManager;                                             // 0x0488(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FArmoryCode>                         KnownArmoryCodes;                                         // 0x0490(0x0010) (Net, ZeroConstructor)
	class USoundBase*                                  ReceivedArmoryCodeSound;                                  // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ReceivedArmoryCodeImage;                                  // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDH_XPProgressData                          ProgressData;                                             // 0x04B0(0x000C) (Net)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	TMap<EPlayerTeam, class USoundMix*>                HushedSoundMix;                                           // 0x04C0(0x0050) (Edit, DisableEditOnInstance)
	TMap<EPlayerTeam, class UReverbEffect*>            HushedReverbEffect;                                       // 0x0510(0x0050) (Edit, DisableEditOnInstance)
	TArray<struct FCraftingRecord>                     CraftedRecipes;                                           // 0x0560(0x0010) (Net, ZeroConstructor)
	bool                                               bIsDead;                                                  // 0x0570(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDisconnected;                                          // 0x0571(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsThrall;                                                // 0x0572(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x0573(0x0005) MISSED OFFSET
	TArray<class ADH_PlayerState*>                     OtherThralls;                                             // 0x0578(0x0010) (Net, ZeroConstructor)
	float                                              CannibalLevel;                                            // 0x0588(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UDH_PlayerRoleData*                          SelectedRole;                                             // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0598(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x54];                                      // 0x059C(0x0054) MISSED OFFSET
	TArray<struct FEquippedPlayerCosmetics>            EquippedCosmeticItems;                                    // 0x05F0(0x0010) (Net, ZeroConstructor)
	TArray<class UDH_PlayerTalisman*>                  EquippedTalismans;                                        // 0x0600(0x0010) (ZeroConstructor)
	int                                                Auth_Experience;                                          // 0x0610(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                Auth_Rank;                                                // 0x0614(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
	TArray<class ADH_ThrallTotem*>                     OwnedTotems;                                              // 0x0620(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                DeathCount;                                               // 0x0630(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	class APawn*                                       RealPawn;                                                 // 0x0638(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0640(0x0008) MISSED OFFSET
	bool                                               bGloballyMuted;                                           // 0x0648(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
	TArray<uint16_t>                                   PoisonedItemUIDs;                                         // 0x0650(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData16[0x10];                                      // 0x0660(0x0010) MISSED OFFSET

	void SetPlayerRole(class UDH_PlayerRoleData* NewStartingRole, bool bBroadcastNotification)//offset:0xF6B050;
	class ADH_Inventory* RollForTrinket(bool bWildlifeTable)//offset:0xF6AFC0;
	void OnRep_SpellManager()//offset:0xF6AC80;
	void OnRep_SelectedRole()//offset:0x8A1790;
	void OnRep_QuestState()//offset:0xF6AC60;
	void OnRep_ProgressData()//offset:0xF6AC40;
	void OnRep_PrestigeLevel()//offset:0xF6AC20;
	void OnRep_PoisonedItemUIDs()//offset:0xF6AC00;
	void OnRep_OwnedTotems()//offset:0xF6ABE0;
	void OnRep_OtherThralls()//offset:0xF6ABC0;
	void OnRep_KnownArmoryCodes()//offset:0xF6ABA0;
	void OnRep_IsThrall()//offset:0xF6AB80;
	void OnRep_IsDisconnected()//offset:0xF6AB60;
	void OnRep_IsDead()//offset:0xF6AB40;
	void OnRep_GloballyMuted()//offset:0xF6AB20;
	void OnRep_EquippedCosmeticItems()//offset:0xF6AB00;
	void OnRep_DeathCount()//offset:0xF6AAE0;
	void OnRep_CannibalLevel()//offset:0xF6AAC0;
	void ModifySpellChargeLevel(float Delta)//offset:0xF6A990;
	void ModifyMatchStat(EPlayerMatchStatType Stat, int Delta, class AActor* Target, bool bScoreAfterShipEscaped)//offset:0xF6A830;
	bool IsThrall()//offset:0xF6A810;
	bool IsRecipeExhausted(class UDH_CraftingRecipe* Recipe)//offset:0xF6A770;
	bool IsItemPoisoned(int ItemUID)//offset:0xF6A6D0;
	bool IsDead()//offset:0xF6A6A0;
	bool IsCannibal()//offset:0xF6A670;
	float GetSpellCooldown(class UDH_TotemSpell* SpellType)//offset:0xF6A5D0;
	ETotemSpellTiers GetSpellChargeTier()//offset:0xF6A5A0;
	float GetSpellChargeLevel()//offset:0xF6A570;
	EPlayerTeam GetPlayerTeam()//offset:0xF6A470;
	class UDH_PlayerRoleData* GetPlayerRoleData()//offset:0xF6A450;
	EPlayerTeamRole GetPlayerRole()//offset:0xF6A420;
	TArray<class ADH_ThrallTotem*> GetOwnedTotemsOfType(class ADH_ThrallTotem* Type)//offset:0xF6A340;
	TArray<class ADH_ThrallTotem*> GetOwnedTotems()//offset:0xF6A280;
	struct FEquippedPlayerCosmetics GetEquippedCosmeticItemsForRole(EPlayerTeamRole InRole)//offset:0xF69F20;
	int GetDeathCount()//offset:0xF69F00;
	class ADH_HumanCharacter* GetControlledDoppelganger()//offset:0xF69ED0;
	float GetCannibalLevel()//offset:0xF69EB0;
	TArray<class UDH_TotemSpell*> GetActiveSpellsOfType(class UDH_TotemSpell* Type)//offset:0xF69D00;
};


// Class DreadHunger.DH_PlayerTalisman
// size:0x0068 (0x0030 - 0x0098)
class UDH_PlayerTalisman : public UDataAsset
{
public:
	struct FText                                       FriendlyName;                                             // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FString                                      OnlineCode;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     Icon;                                                     // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDH_TalismanPerkData*>                Buffs;                                                    // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_TalismanPerkData*>                Nerfs;                                                    // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_PlayingCard
// size:0x01C0 (0x0220 - 0x03E0)
class ADH_PlayingCard : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	struct FName                                       HandAttachSocket;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  FlippedSound;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DealtSound;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StoppedSound;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TMap<EPlayingCardSuit, struct FCardRankTextures>   SuitTextures;                                             // 0x0258(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FCardBGTextures>                     BGTextures;                                               // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x02B8(0x00C8) MISSED OFFSET
	class ADH_RoleDealer*                              Dealer;                                                   // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0388(0x0048) MISSED OFFSET
	class ADH_LobbyPawn*                               LobbyPawnOwner;                                           // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FaceMID;                                                  // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)

	void SetProperties(const struct FPlayingCardProperties& InProperties)//offset:0xF6EC00;
	void OnSelected()//offset:0xF6E9A0;
	void OnPropertiesAssigned()//offset:0x13CEB30;
	void OnDeselected()//offset:0xF45DD0;
	void GetProperties(struct FPlayingCardProperties* OutProperties)//offset:0xF6E4B0;
	class UTexture2D* GetFaceTexture()//offset:0xF6E360;
};


// Class DreadHunger.DH_PostProcessingInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_PostProcessingInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_PreviousMatchSaveGame
// size:0x0010 (0x0028 - 0x0038)
class UDH_PreviousMatchSaveGame : public USaveGame
{
public:
	class FString                                      MatchID;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static class UDH_PreviousMatchSaveGame* GetInstance()//offset:0xF6E390;
};


// Class DreadHunger.DH_PrisonerPawn
// size:0x0100 (0x0280 - 0x0380)
class ADH_PrisonerPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0280(0x0050) MISSED OFFSET
	class UAudioComponent*                             VoiceAudioComponent;                                      // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           BodyPhysicalMaterial;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_Inventory*                               ThrallItemClass;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StarvationTime;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class USoundBase*                                  DeathSound;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UEMulticastInlineDelegate                   OnPrisonerDied;                                           // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          PostProcessSilhouetteMaterial;                            // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            PlayerCamera;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	class AController*                                 OldController;                                            // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StarvationTimeRemaining;                                  // 0x0348(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x034C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1B];                                      // 0x034D(0x001B) MISSED OFFSET
	class AActor*                                      PendingCastTarget;                                        // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             LastDHPlayerState;                                        // 0x0370(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	void SimulatedPlayEmote(class UDH_LobbyEmote* Emote)//offset:0xF6ECA0;
	void ServerPlayEmote(class UDH_LobbyEmote* Emote)//offset:0xF6EB70;
	void OnRep_LastDHPlayerState()//offset:0xF6E900;
	void OnRep_IsDead()//offset:0xF6E8E0;
	void OnPlayerReconnected(class ADH_PlayerState* ReconnectingPlayer)//offset:0xF6E810;
	void OnPlayerDisconnected(class ADH_PlayerState* DisconnectingPlayer)//offset:0xF6E780;
	void MulticastPlayEmote(class UDH_LobbyEmote* Emote)//offset:0xF540A0;
	bool IsBeingFreed()//offset:0xF6E610;
	float GetStarvationPct()//offset:0xF6E550;
	class UDH_PrisonerPawnAnimInstance* GetPrisonerPawnAnimInst()//offset:0xF6E480;
	int GetPostProcessInteractStackNum()//offset:0xF6E460;
	class UDH_CraftingComponent* GetBrigDoorUnlockComponent()//offset:0xF6E290;
	class ADH_BrigCell* GetBrig()//offset:0xF6E260;
	void BP_OnPostProcessInteractStackChanged()//offset:0x13CEB30;
};


// Class DreadHunger.DH_PrisonerPawnAnimInstance
// size:0x0010 (0x02C0 - 0x02D0)
class UDH_PrisonerPawnAnimInstance : public UAnimInstance
{
public:
	bool                                               bLocallyControlled;                                       // 0x02C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x02C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsThrall;                                                // 0x02C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	class UAnimSequenceBase*                           SpellCastAnimation;                                       // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_Projectile
// size:0x0058 (0x0220 - 0x0278)
class ADH_Projectile : public AActor
{
public:
	EProjectileImpactHandling                          ImpactHandling;                                           // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class ADH_Weapon_Ranged*                           WeaponClass;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USphereComponent*                            CollisionComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ProjectileMovementComponent*             ProjectileMovement;                                       // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0240(0x0018) MISSED OFFSET
	class USoundBase*                                  WhizbySound;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhizbySoundMaxDistSq;                                     // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class USoundBase*                                  ImpactSound;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitmarkerSound;                                           // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	void OnAttachParentDestroyed(class AActor* DestroyedActor)//offset:0xF6E660;
};


// Class DreadHunger.DH_ProjectileMovementComponent
// size:0x0020 (0x01D0 - 0x01F0)
class UDH_ProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	float                                              InWaterDamping;                                           // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	class ADH_Projectile*                              UpdatedProjectile;                                        // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET
};


// Class DreadHunger.DH_QuestDefinition
// size:0x0168 (0x0030 - 0x0198)
class UDH_QuestDefinition : public UPrimaryDataAsset
{
public:
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledDevOverride;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FText                                       TypeText;                                                 // 0x0038(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0050(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       ProgressText;                                             // 0x0068(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       CompletedText;                                            // 0x0080(0x0028) (Edit, DisableEditOnInstance)
	int                                                RequiredScore;                                            // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x009C(0x0028) UNKNOWN PROPERTY: 
	class UTexture2D*                                  Icon;                                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  CompletedIcon;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  GivenSound;                                               // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CompletedSound;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCompatibleWithAllTeams;                                  // 0x00E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x50];                                      // 0x00E9(0x0050) UNKNOWN PROPERTY: 
	bool                                               bCompatibleWithAllRoles;                                  // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData06[0x50];                                      // 0x0141(0x0050) UNKNOWN PROPERTY: 
};


// Class DreadHunger.DH_QuestState
// size:0x0020 (0x0220 - 0x0240)
class ADH_QuestState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0220(0x0004) MISSED OFFSET
	int                                                CurrentScore;                                             // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UDH_QuestDefinition*                         Definition;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_PlayerState*                             PlayerState;                                              // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	void OnRep_CurrentScore()//offset:0xF6E8A0;
	void OnRep_bCompleted()//offset:0xF6E980;
	void OnQuestStateCurrentScoreChangedSignature__DelegateSignature(class ADH_QuestState* QuestState, int CurrentScore)//offset:0x13CEB30;
	void OnQuestStateCompletedChangedSignature__DelegateSignature(class ADH_QuestState* QuestState, bool bCompleted)//offset:0x13CEB30;
	void Increment()//offset:0x806320;
};


// Class DreadHunger.DH_RandomizationVolumeVisualizationComponent
// size:0x0000 (0x00B0 - 0x00B0)
class UDH_RandomizationVolumeVisualizationComponent : public UActorComponent
{
public:
};


// Class DreadHunger.DH_ReconnectSaveGame
// size:0x0020 (0x0028 - 0x0048)
class UDH_ReconnectSaveGame : public USaveGame
{
public:
	struct FDateTime                                   ConnectionTime;                                           // 0x0028(0x0008) (ZeroConstructor)
	class FString                                      SessionId;                                                // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_ReplayViewer
// size:0x0028 (0x0220 - 0x0248)
class ADH_ReplayViewer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 ReplayBrowserWidgetClass;                                 // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_RoleCustomizationAnimInstance
// size:0x0010 (0x02C0 - 0x02D0)
class UDH_RoleCustomizationAnimInstance : public UAnimInstance
{
public:
	struct FVector                                     StareTarget;                                              // 0x02C0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StareAlpha;                                               // 0x02CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_RoleCustomizationAvatar
// size:0x0050 (0x0450 - 0x04A0)
class ADH_RoleCustomizationAvatar : public ADH_CosmeticPreviewAvatar
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0450(0x0048) MISSED OFFSET
	class UDH_PlayerRoleData*                          CurrentRole;                                              // 0x0498(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	void OnShowRoleCustomization(bool bShow)//offset:0xF6E9C0;
	void MeshToAvatar()//offset:0xF6E640;
};


// Class DreadHunger.DH_RoleDealer
// size:0x02B0 (0x0220 - 0x04D0)
class ADH_RoleDealer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UDH_DropTable*                               PrizeDropTable;                                           // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AStaticMeshActor*                            DebugTableActor;                                          // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	struct FPokerGameTiming                            GameTimes;                                                // 0x0244(0x0010) (Edit, EditFixedSize)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	TMap<EPokerHandRank, struct FText>                 PokerHandNames;                                           // 0x0258(0x0050) (Edit, DisableEditOnInstance)
	TMap<EPlayingCardRank, struct FText>               CardRankNames;                                            // 0x02A8(0x0050) (Edit, DisableEditOnInstance)
	class USoundBase*                                  ShowdownSound;                                            // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ShowdownTexture;                                          // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ShowdownText;                                             // 0x0308(0x0028) (Edit, DisableEditOnInstance)
	class ADH_PlayingCard*                             DrawCardClass;                                            // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DrawHandSize;                                             // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CardLifespan;                                             // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ADH_LobbyPawn*>                       Players;                                                  // 0x0330(0x0010) (Net, ZeroConstructor)
	TArray<class ADH_LobbyPawn*>                       ActivePlayers;                                            // 0x0340(0x0010) (Net, ZeroConstructor)
	bool                                               bGameEnded;                                               // 0x0350(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FDH_PokerGameTimeStat>               TimeStats;                                                // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FPlayingCardHand>                    PlayerHands;                                              // 0x0368(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x0378(0x00A0) MISSED OFFSET
	TMap<class APawn*, int>                            PlayerRedraws;                                            // 0x0418(0x0050)
	class ADH_LobbyPawn*                               WinningPlayer;                                            // 0x0468(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0470(0x0018) MISSED OFFSET
	TArray<class ADH_PlayingCard*>                     DealtCards;                                               // 0x0488(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x38];                                      // 0x0498(0x0038) MISSED OFFSET

	void PlayerLeft(class AActor* LeavingPlayer)//offset:0xF6EAE0;
	void OnWarshipReplicated(class ADH_Warship* Warship)//offset:0xF6EA50;
	void OnRep_WinningPlayer()//offset:0xF6E960;
	void OnRep_TimeStats()//offset:0xF6E940;
	void OnRep_PlayerHands()//offset:0xF6E920;
	void OnRep_GameEnded()//offset:0xF6E8C0;
	void OnCardDestroyed(class AActor* Card)//offset:0xF6E6F0;
	TArray<struct FDH_PokerGameTimeStat> GetTimeStats()//offset:0xF6E580;
};


// Class DreadHunger.DH_RolePerkData
// size:0x0048 (0x0030 - 0x0078)
class UDH_RolePerkData : public UDataAsset
{
public:
	struct FText                                       Title;                                                    // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EPlayerRolePerk                                    Type;                                                     // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UDH_RolePerkLevelCurve*                      Values;                                                   // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPerkValueComputation                              ValueComputationStyle;                                    // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSubtractModifier;                                        // 0x0071(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};


// Class DreadHunger.DH_RolePerkLevelCurve
// size:0x0000 (0x00B8 - 0x00B8)
class UDH_RolePerkLevelCurve : public UCurveFloat
{
public:

	int GetNextRankExperience(int Experience)//offset:0xF6E3C0;
	int GetCurrentRankExperience(int Experience)//offset:0xF6E2C0;
	static int ExperienceToRank(float InExperience, class UObject* Context)//offset:0xF6E190;
};


// Class DreadHunger.DH_RoleSelectStation
// size:0x0008 (0x0220 - 0x0228)
class ADH_RoleSelectStation : public AActor
{
public:
};


// Class DreadHunger.DH_ScoreboardDataAsset
// size:0x00D0 (0x0030 - 0x0100)
class UDH_ScoreboardDataAsset : public UDataAsset
{
public:
	struct FLinearColor                                LowestGradeColor;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HighestGradeColor;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EStatScoringValue, float>                     ScorePointValues;                                         // 0x0050(0x0050) (Edit, DisableEditOnInstance)
	TArray<class UDH_PlayerMatchStat*>                 ScorableStats;                                            // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<EPlayerPerformanceGrade, struct FPlayerScoreGrade> PerformanceGrades;                                        // 0x00B0(0x0050) (Edit, DisableEditOnInstance)
};


// Class DreadHunger.DH_ScoreboardMockGame
// size:0x0030 (0x0028 - 0x0058)
class UDH_ScoreboardMockGame : public UObject
{
public:
	int                                                MatchDuration;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      MapName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EPlayerTeam                                        WinningTeam;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<class UDH_ScoreboardMockPlayer*>            Players;                                                  // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_ScoreboardMockPlayer
// size:0x0030 (0x0028 - 0x0058)
class UDH_ScoreboardMockPlayer : public UObject
{
public:
	class FString                                      PlayerId;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDead;                                                    // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerTeam                                        PlayerTeam;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x003A(0x0016) MISSED OFFSET
	EPlayerTeamRole                                    PlayerRole;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_ShipCosmeticItem
// size:0x0060 (0x0108 - 0x0168)
class UDH_ShipCosmeticItem : public UDH_CosmeticItemBase
{
public:
	TMap<EShipCustomizationRegion, struct FShipCosmeticAppearance> Appearances;                                              // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       Slot;                                                     // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EShipCosmeticType                                  Type;                                                     // 0x0160(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
};


// Class DreadHunger.DH_ShipCustomizationAvatar
// size:0x0030 (0x0450 - 0x0480)
class ADH_ShipCustomizationAvatar : public ADH_CosmeticPreviewAvatar
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0450(0x0020) MISSED OFFSET
	float                                              CameraDragSensitivity;                                    // 0x0470(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0474(0x000C) MISSED OFFSET

	void OnCustomizationRegionChanged(EShipCustomizationRegion InRegion)//offset:0xF73640;
	void OnAvatarDraggedChanged(bool bDragged)//offset:0xF735B0;
};


// Class DreadHunger.DH_ShipDecoration
// size:0x0000 (0x0220 - 0x0220)
class ADH_ShipDecoration : public AActor
{
public:
};


// Class DreadHunger.DH_SlotSizeInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_SlotSizeInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_SoundNodeOcclusion
// size:0x0010 (0x0048 - 0x0058)
class UDH_SoundNodeOcclusion : public USoundNode
{
public:
	float                                              OcclusionStrength;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x004C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_SoundNodeVoiceType
// size:0x0008 (0x0048 - 0x0050)
class UDH_SoundNodeVoiceType : public USoundNode
{
public:
	struct FName                                       ParamName;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class DreadHunger.DH_SpawnVolume
// size:0x00B0 (0x0258 - 0x0308)
class ADH_SpawnVolume : public AVolume
{
public:
	class UTexture2D*                                  Icon;                                                     // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              IconSize;                                                 // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0264(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class AActor*                                      SpawnClass;                                               // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                SpawnCount;                                               // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                SpawnPointCount;                                          // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Spacing;                                                  // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	ESpawnRotation                                     Orientation;                                              // 0x028C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	int                                                ClusterSize;                                              // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	TArray<struct FSpawnPoint>                         SpawnPoints;                                              // 0x0298(0x0010) (ZeroConstructor)
	float                                              SpawnChance;                                              // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bAutomaticSpawn;                                          // 0x02AC(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bGenerateRuntimePositions;                                // 0x02AD(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData04[0x50];                                      // 0x02AE(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData05[0x8];                                       // 0x0300(0x0008) MISSED OFFSET

	void GenerateSpawnPoints()//offset:0xF73200;
};


// Class DreadHunger.DH_SpawnVolumeVisualizationComponent
// size:0x0000 (0x00B0 - 0x00B0)
class UDH_SpawnVolumeVisualizationComponent : public UActorComponent
{
public:
};


// Class DreadHunger.DH_SpecificNavModifierComponent
// size:0x0010 (0x0140 - 0x0150)
class UDH_SpecificNavModifierComponent : public UNavModifierComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	TWeakObjectPtr<class USceneComponent>              BoundsComponent;                                          // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_SpellManager
// size:0x0098 (0x0220 - 0x02B8)
class ADH_SpellManager : public AActor
{
public:
	class UCurveFloat*                                 SpellChargeCurve;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSpells;                                                // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TMap<ETotemSpellTiers, float>                      SpellTierLevels;                                          // 0x0230(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              CooldownMultiplier;                                       // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpellChargeLevel;                                         // 0x0284(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class UDH_TotemSpell*>                      EquippedSpells;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_TotemSpell*>                      ActiveSpells;                                             // 0x0298(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst)
	TArray<struct FSpellCooldown>                      SpellCooldowns;                                           // 0x02A8(0x0010) (Net, ZeroConstructor)

	void OnRep_SpellCooldowns()//offset:0xF737B0;
	void OnRep_EquippedSpells()//offset:0xF73790;
	void OnRep_ActiveSpells(TArray<class UDH_TotemSpell*> PreviousActiveSpells)//offset:0xF736C0;
	static class UDH_TotemSpell* CastSpell(class AActor* WorldContext, class UDH_TotemSpell* SpellType, class AActor* CastingTarget, ETotemSpellTiers CastTier)//offset:0xF72ED0;
};


// Class DreadHunger.DH_Stove
// size:0x0010 (0x0250 - 0x0260)
class ADH_Stove : public ADH_CraftingStation
{
public:
	class UDH_HeatSourceComponent*                     HeatComponent;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       StartupComponent;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	void OnStoveLit(class UActorComponent* Component, bool bReset)//offset:0xF73860;
	void OnStoveDied(class UActorComponent* Component)//offset:0xF737D0;
	void LightStove(class UDH_CraftingProject* StartupProject)//offset:0xF73520;
};


// Class DreadHunger.DH_SuicideComponent
// size:0x0070 (0x00B0 - 0x0120)
class UDH_SuicideComponent : public UActorComponent
{
public:
	struct UEMulticastInlineDelegate                   OnSuicideActionPressedDelegate;                           // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSuicideActionReleasedDelegate;                          // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSuicideCompleteDelegate;                                // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnCanSuicideChangedDelegate;                              // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              HoldDuration;                                             // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00F4(0x002C) MISSED OFFSET

	void Suicide()//offset:0xF46340;
	float GetTimerAlpha()//offset:0xF73390;
	bool GetCachedCanSuicide()//offset:0xF73220;
};


// Class DreadHunger.DH_TalismanPerkData
// size:0x0040 (0x0030 - 0x0070)
class UDH_TalismanPerkData : public UDataAsset
{
public:
	struct FText                                       Title;                                                    // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EPlayerTalismanPerk                                Type;                                                     // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Values;                                                   // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_ThrallMessagesDataAsset
// size:0x0010 (0x0030 - 0x0040)
class UDH_ThrallMessagesDataAsset : public UPrimaryDataAsset
{
public:
	TArray<struct FThrallMessageData>                  Messages;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_ThrallTotem
// size:0x0098 (0x0310 - 0x03A8)
class ADH_ThrallTotem : public ADH_DestructibleActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET
	TArray<class UStaticMesh*>                         RandomizedSkins;                                          // 0x0318(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0328(0x0014) MISSED OFFSET
	float                                              MaxSanityDrainRate;                                       // 0x033C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SanityDrainRampUpRate;                                    // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x0344(0x0054) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EffectRadiusComponent;                                    // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	void CacheOwner()//offset:0xF72D80;
};


// Class DreadHunger.DH_TitleGameState
// size:0x0000 (0x0290 - 0x0290)
class ADH_TitleGameState : public AGameState
{
public:
};


// Class DreadHunger.DH_TotemSpell
// size:0x0110 (0x0028 - 0x0138)
class UDH_TotemSpell : public UObject
{
public:
	struct FText                                       FriendlyName;                                             // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FString                                      OnlineCode;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TutorialConcept;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerMatchStatType                               CastingStat;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayerExperienceRank                              RequiredRank;                                             // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESpellTargetingStyle                               TargetingType;                                            // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	TMap<ETotemSpellTiers, float>                      Duration;                                                 // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              CastingCost;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CooldownTime;                                             // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxConcurrentInstances_Global;                            // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxConcurrentInstances_PerPlayer;                         // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ValidCastingTargets;                                      // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAllowCorpseTargets;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDoppelgangerTargets;                                // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET
	class USoundBase*                                  CastSound;                                                // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LocalCastSound;                                           // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExpiredSound;                                             // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LocalExpiredSound;                                        // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Caster;                                                   // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReleased;                                                // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0122(0x0013) MISSED OFFSET
	ETotemSpellTiers                                   CastTier;                                                 // 0x0135(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0136(0x0002) MISSED OFFSET

	static class UDH_TotemSpell* Whiteout(class UObject* Context)//offset:0xF739C0;
	static class UDH_TotemSpell* SpiritWalk(class UObject* Context)//offset:0xF73930;
	void OnRep_Caster()//offset:0xF73770;
	void OnExpired(class AActor* WorldContext)//offset:0x13CEB30;
	void OnCast(class AActor* WorldContext)//offset:0x13CEB30;
	static class UDH_TotemSpell* Hush(class UObject* Context)//offset:0xF73490;
	bool HasValidCastingTarget(class AActor* InCaster, class AActor* InTarget)//offset:0xF733C0;
	class ADH_PlayerState* GetPlayerCaster()//offset:0xF73360;
	static int GetGlobalActiveSpellCount(class UDH_TotemSpell* SpellClass, class UObject* Context)//offset:0xF73290;
	float GetDuration()//offset:0xF73260;
	ETotemSpellTiers GetCastTier()//offset:0xF73240;
	static class UDH_TotemSpell* Gale(class UObject* Context)//offset:0xF73170;
	void Expire()//offset:0xF73150;
	bool DoSpellEffects(class AActor* SpellTarget)//offset:0xF73020;
	static class UDH_TotemSpell* Doppelganger(class UObject* Context)//offset:0xF730C0;
	static class UDH_TotemSpell* Cannibals(class UObject* Context)//offset:0xF72E40;
	bool CanCast(class AActor* InCaster)//offset:0xF72DA0;
};


// Class DreadHunger.DH_TotemSpell_Summoning
// size:0x00C0 (0x0138 - 0x01F8)
class UDH_TotemSpell_Summoning : public UDH_TotemSpell
{
public:
	class UEnvQuery*                                   AISpawnQueryTemplate;                                     // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   AIFallbackSpawnQueryTemplate;                             // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ADH_Character*>                       SummonedAIClasses;                                        // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class AController*                                 AIControllerClass;                                        // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ETotemSpellTiers, int>                        SummonedAICount;                                          // 0x0160(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              SummonRetryTime;                                          // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<class ADH_Character*>                       SummonedAIs;                                              // 0x01B8(0x0010) (ZeroConstructor)
	class ADH_Character*                               CurrentCastingTarget;                                     // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ADH_HumanCharacter*>                  AdditionalTargets;                                        // 0x01D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01E0(0x0018) MISSED OFFSET

	void SummonAI(class ADH_Character* Target)//offset:0xF789F0;
	void OnSummonedAIKilled(class ADH_Character* DeadCharacter)//offset:0xF78310;
	void OnSummonedAIDestroyed(class AActor* DestroyedActor)//offset:0xF78280;
};


// Class DreadHunger.DH_TutorialChapter
// size:0x0708 (0x0028 - 0x0730)
class UDH_TutorialChapter : public UObject
{
public:
	ETutorialChapters                                  Index;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      NextChapter;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class ADH_ChapterBoundsVolume*                     Bounds;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EActorCleanupPhase                                 CleanupPhase;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<class UDH_TutorialObjective*>               Objectives;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       StartingObjective;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndingObjective;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChapterEndDelay;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class UDH_EnvironmentalSettings*                   EnvironmentSettings;                                      // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartingTimeOfDay;                                        // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlizzardIntensity;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0090(0x0550) (Edit)
	bool                                               bDisplayIntroScreen;                                      // 0x05E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	struct FText                                       IntroScreenTitle;                                         // 0x05E8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       IntroScreenBody;                                          // 0x0600(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              IntroScreenDuration;                                      // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	class USoundBase*                                  IntroSound;                                               // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              IntroSequence;                                            // 0x0628(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              OutroSequence;                                            // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartSpot;                                                // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDH_DropTable*                               StartingGear;                                             // 0x0640(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerTeamRole                                    StartingRole;                                             // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	int                                                StartingRoleRank;                                         // 0x064C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartingHealth;                                           // 0x0650(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartingWarmth;                                           // 0x0654(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartingHunger;                                           // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	class ADH_WarshipSpawnPoint*                       ShipSpawnPoint;                                           // 0x0660(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bShowProgressWidget;                                      // 0x0668(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	TArray<class ADH_SpawnVolume*>                     SpawnVolumes;                                             // 0x0670(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FChapterAISpawnGroup>                AISpawns;                                                 // 0x0680(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ADH_AIPathSpline*>                    AIPaths;                                                  // 0x0690(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TMap<EPlayerTeamRole, struct FChapterAICrewmate>   Crew;                                                     // 0x06A0(0x0050) (Edit, DisableEditOnTemplate)
	class UDH_CrewDialogueSet*                         CrewDialogue;                                             // 0x06F0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDH_TutorialObjective*                       CurrentObjective;                                         // 0x06F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADH_Warship*                                 Warship;                                                  // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ADH_HumanCharacter*>                  CrewNPCs;                                                 // 0x0708(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x18];                                      // 0x0718(0x0018) MISSED OFFSET

	void SpawnAIGroup(const struct FName& GroupName)//offset:0xF78960;
	void SetCurrentObjective(const struct FName& ObjectiveName)//offset:0xF78810;
	class ULevelSequencePlayer* PlayCinematicSequence(class ULevelSequence* InSequence)//offset:0xF785D0;
	void OnWarshipSpawned(class ADH_Warship* Ship)//offset:0x13CEB30;
	void OnPlayerSpawned(class ADH_HumanCharacter* PlayerPawn)//offset:0x13CEB30;
	void OnOutroSequenceComplete()//offset:0xF78100;
	void OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)//offset:0x13CEB30;
	void OnIntroTitleScreenHidden()//offset:0xF780E0;
	void OnIntroSequenceComplete()//offset:0xF780C0;
	void OnEnd()//offset:0x13CEB30;
	void OnCinematicSequenceFinished(class ULevelSequence* FinishedSequence)//offset:0x13CEB30;
	void OnCinematicSequenceComplete()//offset:0xF77F80;
	void OnBegin()//offset:0x13CEB30;
	void OnActorsInitialized()//offset:0x13CEB30;
	bool IncapacitationResultsInFailure(class ADH_Character* NPC)//offset:0xF77E50;
	bool GetTimeOfDayOverride(float* DesiredTimeOfDay, float* DesiredInterpSpeed)//offset:0xF77C50;
	class AActor* GetStartSpot()//offset:0xF77BE0;
	struct FName GetStartingObjective()//offset:0xF77C10;
	class UObject* GetPlayerPawnClassOverride()//offset:0xF77BB0;
	class UDH_TutorialObjective* GetCurrentObjective()//offset:0xF77B90;
	class AActor* GetCrewSpawnPoint(EPlayerTeamRole CrewRole)//offset:0xF77A80;
	class ADH_HumanCharacter* GetCrewNPC(EPlayerTeamRole Role)//offset:0xF779F0;
	bool GetBlizzardIntensityOverride(float* DesiredBlizzardIntensity)//offset:0xF77860;
	void DespawnAI()//offset:0xF77730;
	bool AllowItemSpawn(class AActor* ItemOwner, EInventoryType ItemType)//offset:0xF77500;
	bool AllowInteraction(class AActor* InteractTarget)//offset:0xF773C0;
	bool AllowInput(const struct FName& InputMapping)//offset:0xF77260;
	bool AllowCrewActivity(class UDH_CrewActivity* InActivity)//offset:0xF77120;
	bool AllowCrafting(class UDH_CraftingRecipe* InRecipe)//offset:0xF76FE0;
};


// Class DreadHunger.DH_TutorialChapterList
// size:0x0050 (0x0030 - 0x0080)
class UDH_TutorialChapterList : public UDataAsset
{
public:
	TMap<ETutorialChapters, struct FTutorialChapter>   Chapters;                                                 // 0x0030(0x0050) (Edit, DisableEditOnInstance)
};


// Class DreadHunger.DH_TutorialConcepts
// size:0x0020 (0x0030 - 0x0050)
class UDH_TutorialConcepts : public UDataAsset
{
public:
	TArray<struct FTutorialConcept>                    Concepts;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialTerm>                       Terms;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};


// Class DreadHunger.DH_TutorialGameMode
// size:0x0028 (0x0380 - 0x03A8)
class ADH_TutorialGameMode : public ADH_GameModeBase
{
public:
	class USoundBase*                                  TutorialFailedSound;                                      // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  TutorialFailedIcon;                                       // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_TutorialManager*                         TutorialManager;                                          // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	void OnWarshipSank(class ADH_Warship* SunkShip)//offset:0xF78540;
	void OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InventoryTransactionComponent, class UDH_InventoryManager* InventoryManager)//offset:0xF78470;
	void OnThrallSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)//offset:0xF783A0;
	void OnPlayerGainedInventory(class ADH_Inventory* Inv, int Amount)//offset:0xF781B0;
	void OnPlayerBecameCannibal(class ADH_PlayerState* CannibalPlayerState)//offset:0xF78120;
	void OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)//offset:0xF39610;
	void OnObjectiveChanged(class UDH_TutorialObjective* NewObjective)//offset:0xF39610;
	void OnIncapacitationChanged(class ADH_HumanCharacter* InHumanPawn)//offset:0xF78030;
};


// Class DreadHunger.DH_TutorialGameState
// size:0x0008 (0x03D0 - 0x03D8)
class ADH_TutorialGameState : public ADH_GameStateBase
{
public:
	float                                              TimeOfDayInterpSpeed;                                     // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
};


// Class DreadHunger.DH_TutorialManager
// size:0x0098 (0x0220 - 0x02B8)
class ADH_TutorialManager : public AActor
{
public:
	class ADH_PlayerController*                        OwningPlayer;                                             // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	ETutorialChapters                                  StartingChapter;                                          // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialChapters                                  EndingChapter;                                            // 0x0229(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x022A(0x0006) MISSED OFFSET
	class ADH_WarshipSpawnPoint*                       ShipStartSpot;                                            // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bAutoInitialize;                                          // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UBillboardComponent*                         Sprite;                                                   // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UDH_TutorialChapter*>                 Chapters;                                                 // 0x0248(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UDH_TutorialConcepts*                        Concepts;                                                 // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDH_TutorialChapter*                         CurrentChapter;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ADH_DestructibleActor*>               Collectables;                                             // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	class USoundBase*                                  CollectibleSound;                                         // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  CollectibleIcon;                                          // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentConcept;                                           // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0290(0x0028) MISSED OFFSET

	void ShowNextConcept()//offset:0xF78940;
	void SetCurrentObjective(const struct FName& ObjectiveName)//offset:0xF78780;
	void SetCurrentConcept(const struct FName& ConceptName)//offset:0xF786F0;
	void SetCurrentChapter(ETutorialChapters InChapter)//offset:0xF78670;
	void OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)//offset:0x13CEB30;
	void OnDestructibleDestroyed(class ADH_DestructibleActor* Destructible)//offset:0xF77FA0;
	void OnConceptChanged(const struct FName& NewConcept)//offset:0xF1F8E0;
	void ObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)//offset:0xF77EF0;
	class UDH_TutorialObjective* GetCurrentObjective()//offset:0xF77B60;
	struct FName GetCurrentConcept()//offset:0xF77B40;
	class UDH_TutorialChapter* GetCurrentChapter()//offset:0xF77B10;
	static class ADH_TutorialManager* Get(class UObject* Context)//offset:0xF77750;
	void BeginNextChapter(class UDH_TutorialChapter* PreviousChapter)//offset:0xF776A0;
};


// Class DreadHunger.DH_TutorialObjective
// size:0x00A8 (0x0028 - 0x00D0)
class UDH_TutorialObjective : public UObject
{
public:
	struct FName                                       Name;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       NextObjective;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FObjectiveMessage                           ActivationMessage;                                        // 0x0068(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMaterialInterface*                          GoalMaterial;                                             // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AssociatedConcepts;                                       // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              AssociatedActors;                                         // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	class ADH_PlayerController*                        Player;                                                   // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_CrewDialogueSet*                         CrewDialogue;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	bool ShouldRenderGoalMarker(class AActor* GoalActor)//offset:0xF788A0;
	void OnInitialized()//offset:0x13CEB30;
	void OnDeactivated()//offset:0x13CEB30;
	void OnCompleted()//offset:0x13CEB30;
	void OnActivated()//offset:0x13CEB30;
	bool GetTimeOfDayOverride(float* DesiredTimeOfDay, float* InterpSpeed)//offset:0xF77D50;
	class UDH_TutorialChapter* GetChapter()//offset:0xF779C0;
	bool GetBlizzardIntensityOverride(float* DesiredBlizzardIntensity)//offset:0xF77910;
	TArray<class AActor*> GetAssociatedActors()//offset:0xF777E0;
	bool CheckCompletion()//offset:0x805E00;
	bool AllowItemSpawn(class AActor* ItemOwner, EInventoryType ItemType)//offset:0xF775D0;
	bool AllowInteraction(class AActor* InteractTarget)//offset:0xF77460;
	bool AllowInput(const struct FName& InputMapping)//offset:0xF77310;
	bool AllowCrewActivity(class UDH_CrewActivity* InActivity)//offset:0xF771C0;
	bool AllowCrafting(class UDH_CraftingRecipe* InRecipe)//offset:0xF77080;
};


// Class DreadHunger.DH_TutorialStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_TutorialStatics : public UObject
{
public:

	static void SetObjective(class UObject* Context, const struct FName& ObjectiveName)//offset:0xF7CEF0;
	static void SetCurrentChapter(class UObject* Context, ETutorialChapters InChapter)//offset:0xF7CDA0;
	static bool IsTestingBearFight(class UObject* Context)//offset:0xF7CA40;
	static bool IsObjectiveComplete(class UObject* Context, const struct FName& ObjectiveName)//offset:0xF7C940;
	static bool IsChapterUnlocked(class UObject* Context, ETutorialChapters InChapter)//offset:0xF7C7E0;
	static class ADH_TutorialGameMode* GetTutorialGameMode(class UObject* Context)//offset:0xF7C6C0;
	static class UDH_TutorialChapter* GetCurrentChapter(class UObject* Context)//offset:0xF7C320;
	static void ExplainConcept(class UObject* Context, const struct FName& ConceptName)//offset:0xF7C070;
	static void EndUITutorial(class UWidget* TargetWidget)//offset:0xF7BFF0;
	static void CompleteCurrentObjective(class UObject* Context)//offset:0xF7BC40;
	static void CompleteCurrentChapter(class UObject* Context)//offset:0xF7BBC0;
	static void BeginUITutorial(class UWidget* TargetWidget)//offset:0xF7BB40;
};


// Class DreadHunger.DH_TutorialTriggerVolume
// size:0x0018 (0x0258 - 0x0270)
class ADH_TutorialTriggerVolume : public ATriggerVolume
{
public:
	bool                                               bEnabled;                                                 // 0x0258(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	struct FName                                       Objective;                                                // 0x025C(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       Concept;                                                  // 0x0264(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	ETriggerVolumeInstigator                           TriggerInstigator;                                        // 0x026C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x026D(0x0003) MISSED OFFSET

	void SetEnabled(bool bNewIsEnabled)//offset:0xF7CE60;
};


// Class DreadHunger.DH_UIVisibilityTagHandler
// size:0x0020 (0x0028 - 0x0048)
class UDH_UIVisibilityTagHandler : public UObject
{
public:
};


// Class DreadHunger.DH_UnacceptedInventoryTypeInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_UnacceptedInventoryTypeInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_UseCraftingMenuHintWidget
// size:0x00B0 (0x02D8 - 0x0388)
class UDH_UseCraftingMenuHintWidget : public UDH_FirstTimeHintWidget
{
public:
	class UDH_CraftingRecipe*                          CampFireCraftingRecipe;                                   // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldOpenTime;                                             // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x02E4(0x00A4) MISSED OFFSET

	void SetWarmthCritical(bool bInWarmthCritical)//offset:0xF7CFB0;
	void OnIncapacitatedChanged(class ADH_HumanCharacter* Character)//offset:0xF7CAD0;
};


// Class DreadHunger.DH_UserWidgetBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UDH_UserWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class FString TrimName(const class FString& InName, int MaxLength)//offset:0xF7D040;
	static void ResetMouseAndInput(class APlayerController* PlayerController)//offset:0xF7CD20;
	static void PushMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToFocus, bool bGameAndUI)//offset:0xF7CC20;
	static void PopMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToFocus)//offset:0xF7CB60;
	static bool IsShipping()//offset:0xF7CA10;
	static bool IsDesignTime(class UWidget* Context)//offset:0xF34280;
	static bool IsControllerMode(class UObject* WorldContextObject_)//offset:0xF7C8B0;
	static class ADH_HumanCharacter* GetViewedPawn(class UUserWidget* Context)//offset:0xF7C750;
	static struct FTextBlockStyle GetTextBlockStyle(const struct FRichTextStyleRow& RichTextStyleRow)//offset:0xF7C4D0;
	static struct FLinearColor GetPaletteColor(const struct FName& ColorName)//offset:0xF7C440;
	static class UUserWidget* GetOwningUserWidget(class UWidget* Widget)//offset:0xF7C3B0;
	static struct FSlateBrush GetBrush(const struct FRichImageRow& ImageRow)//offset:0xF7C130;
	static class UDH_WidgetAnimationHandler* ConstructWidgetAnimationHandler(class UDH_WidgetAnimationHandler* WidgetAnimationHandlerClass, class UUserWidget* WidgetOwner, ESlateVisibility VisibleVisibility, ESlateVisibility HiddenVisibility, float ForwardPlaybackSpeed, float ReversePlaybackSpeed, class UWidgetAnimation* ReversibleAnimation, class UWidget* WidgetAffectedByVisibility)//offset:0xF7BD90;
	static class UWidget* ConstructWidget(class UUserWidget* InOwner, class UWidget* InClassToCreate)//offset:0xF7BCC0;
};


// Class DreadHunger.DH_VoiceInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_VoiceInterface : public UInterface
{
public:
};


// Class DreadHunger.DH_VoipSettingsJsonSaveData
// size:0x0058 (0x0028 - 0x0080)
class UDH_VoipSettingsJsonSaveData : public UDH_JsonSaveObject
{
public:

	static class UDH_VoipSettingsJsonSaveData* GetInstance(class UObject* Context)//offset:0xF80370;
};


// Class DreadHunger.DH_VoipSettingsSaveGame
// size:0x00A0 (0x0028 - 0x00C8)
class UDH_VoipSettingsSaveGame : public USaveGame
{
public:
	TMap<class FString, float>                         VoipParticipants;                                         // 0x0028(0x0050)
	TMap<class FString, bool>                          VoipParticipantsMuteStatus;                               // 0x0078(0x0050)

	static class UDH_VoipSettingsSaveGame* GetInstance(class UObject* Context)//offset:0xF80400;
};


// Class DreadHunger.DH_Warship
// size:0x0330 (0x0220 - 0x0550)
class ADH_Warship : public AActor
{
public:
	TMap<EShipSpacePartition, struct FShipSectionData> Sections;                                                 // 0x0220(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bDebugLighting;                                           // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAutoMove;                                           // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSailsOut;                                                // 0x0272(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0273(0x0001) MISSED OFFSET
	int                                                MaxHullBreaches;                                          // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HullBreachesFromLastDamage;                               // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HullBreachPerDamage;                                      // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHullBreachData>                     HullBreaches;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRiggingData>                        Rigging;                                                  // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentHullIntegrity;                                     // 0x02A0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              InitialHullIntegrityPct;                                  // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumHullIntegrity;                                     // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumHullIntegrity;                                     // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumImpactDamage;                                      // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactDamageAngle;                                        // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 ImpactDamageType;                                         // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class ADH_WarshipInteriorVolume>    InteriorVolume;                                           // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDH_BuoyancyComponent*                       BuoyancyComponent;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinimumBuoyancy;                                          // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UChildActorComponent*                        Helm;                                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ADH_WarshipBoiler*                           Boiler;                                                   // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	TMap<struct FName, class AActor*>                  ArmoryLootSpawns;                                         // 0x02E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class ADH_ArmoryDoor*                              ArmoryDoor;                                               // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class ADH_WarshipBoiler*                           BoilerClass;                                              // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BoilerSocketName;                                         // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_WarshipBoiler_Vent*                      BoilerVentClass;                                          // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BoilerVentSocketName;                                     // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        PokerTableMesh;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShipMesh;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PhysicsMesh;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDH_FluidSurfaceComponent*                   FloodMesh;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxFloodMeshZ;                                            // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UAudioComponent*                             MovementAudioComponent;                                   // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbienceAudioComponent;                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HullDamageAudioComponent;                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             PartyAmbientSound;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  NewPrisonerSound;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbienceExteriorBlendDistance;                            // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentThrusterStrength;                                  // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x03BC(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET
	class UPhysicsThrusterComponent*                   Thruster;                                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPhysicsThrusterComponent*                   BowThruster;                                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x03F8(0x000C) MISSED OFFSET
	float                                              MaxThrusterStrength;                                      // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BowThrusterStrengthScale;                                 // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecelerationSpeed;                                        // 0x040C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationSpeed;                                        // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxThrusterAngle;                                         // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxThrusterRotationSpeed;                                 // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrusterReturnRotationSpeed;                              // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxReverseThrottle;                                       // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0424(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationSmoothRate;                                       // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationSmoothRate;                                       // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FloodWaterDrainSound;                                     // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloodDrainRate;                                           // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TemperatureWhenFlooded;                                   // 0x043C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEquippedShipCosmetics>              EquippedCosmeticItems;                                    // 0x0440(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData06[0x24];                                      // 0x0450(0x0024) MISSED OFFSET
	float                                              LastHullDamageTime;                                       // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastHullIntegrity;                                        // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HullDamagePerBreach;                                      // 0x047C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0480(0x0008) MISSED OFFSET
	class ADH_Warship*                                 DefaultWarship;                                           // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x58];                                      // 0x0490(0x0058) MISSED OFFSET
	unsigned char                                      UnknownData09[0x50];                                      // 0x0490(0x0050) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData10[0x18];                                      // 0x0538(0x0018) MISSED OFFSET

	void SpawnBreaches(class APawn* BreachInstigator, int BreachCount, const struct FVector& Origin, float Radius)//offset:0xF81080;
	void SetEquippedCosmeticItems(TArray<struct FEquippedShipCosmetics> NewItems, bool bOwnershipCheck)//offset:0xF80F60;
	void SetEnableAutoMove(bool bInAutoMove)//offset:0xF80ED0;
	void OnShowPregameInstructions(int InThrallCount)//offset:0xF80E20;
	void OnShipOverlappedActor(class AActor* OtherActor)//offset:0x13CEB30;
	void OnShipBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)//offset:0xF80D50;
	void OnRep_EquippedCosmeticItems(TArray<struct FEquippedShipCosmetics> PreviousCosmetics)//offset:0xF80C20;
	void OnRep_CurrentHullIntegrity()//offset:0xF80C00;
	void OnGangwaysDetached()//offset:0x13CEB30;
	float GetShipProgress()//offset:0xF80490;
	class USceneComponent* GetPressureGauge()//offset:0xF6E360;
	class ADH_WarshipHelm* GetHelm()//offset:0xF80340;
	TArray<class UStaticMeshComponent*> GetGangways()//offset:0xF802C0;
	class ADH_WarshipBoiler* GetBoiler()//offset:0xF80270;
	void FuelBoiler(float InFuelPct)//offset:0xF801F0;
	struct FVector BP_GetSkipperLocation()//offset:0x13CEB30;
	void AddLights(TArray<class ULightComponent*> Lights, EShipSpacePartition Section)//offset:0xF7FE70;
};


// Class DreadHunger.DH_WarshipBoiler
// size:0x0098 (0x0230 - 0x02C8)
class ADH_WarshipBoiler : public ADH_HeatSource
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       StartupComponent;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        BoilerInventory;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ADH_Warship*                                 OwningShip;                                               // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               SabotageFuelType;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SabotagedSound;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SabotagedParticle;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_ExplosionActor*                          SabotageExplosionType;                                    // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RemainingSabotageTime;                                    // 0x0280(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              BaseSabotageDelay;                                        // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSabotageDelay;                                     // 0x0288(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              SabotageAmountPerPiece;                                   // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0290(0x0004) MISSED OFFSET
	unsigned char                                      SabotageFlash;                                            // 0x0294(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	int                                                PendingSabotageUnits;                                     // 0x0298(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x029C(0x0018) MISSED OFFSET
	float                                              PressureLevel;                                            // 0x02B4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PressureDecreaseCurve;                                    // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	void Sabotage()//offset:0xF80EB0;
	void OnRep_SabotageCount()//offset:0xF80D30;
	void OnRep_PendingSabotageUnits()//offset:0xF80CF0;
	void OnPlayerLeftGame(class ADH_PlayerState* RemovedPlayer)//offset:0xF80B50;
	void OnOnlineSessionUpdateComplete()//offset:0xF80AA0;
	void OnLobbyPlayerOnShipChanged(class ADH_HumanCharacter* HumanCharacter)//offset:0xF809F0;
	void OnBoilerLit(class UActorComponent* Component, bool bReset)//offset:0xF80670;
	void OnBoilerDied(class UActorComponent* Component)//offset:0xF805E0;
	void LightBoiler(class UDH_CraftingProject* StartupProject)//offset:0xF80550;
	void ConvertToFuel(class ADH_Inventory* Fuel, int Amount, class UDH_InventoryManager* Source)//offset:0xF800E0;
	void AddSaboteur(class ADH_PlayerState* InSaboteur, int InSabotageStacks, int InOverBoostStack)//offset:0xF7FFA0;
};


// Class DreadHunger.DH_WarshipBoiler_Vent
// size:0x0048 (0x0220 - 0x0268)
class ADH_WarshipBoiler_Vent : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        VentInventory;                                            // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  AddedItemSound;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	struct FVentReceivedInventoryCounter               ReceivedInventoryCounter;                                 // 0x0258(0x0010) (Net)

	void OnRep_ReceivedInventoryCounter()//offset:0xF80D10;
	void OnInventoryReceived(class ADH_Inventory* Fuel, int Amount, class UDH_InventoryManager* Source)//offset:0xF808E0;
};


// Class DreadHunger.DH_WarshipEscapeVolume
// size:0x0010 (0x0268 - 0x0278)
class ADH_WarshipEscapeVolume : public APhysicsVolume
{
public:
	bool                                               bExplorersWin;                                            // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	class USplineComponent*                            PathSpline;                                               // 0x0270(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};


// Class DreadHunger.DH_WarshipHelm
// size:0x0070 (0x0220 - 0x0290)
class ADH_WarshipHelm : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UDH_ColorMaskComponent*                      ColorMaskComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ADH_Warship*                                 OwningShip;                                               // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WheelMesh;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  WheelTurningSound;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FriendlyName;                                             // 0x0250(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class ADH_HumanCharacter*                          CurrentHelmsman;                                          // 0x0268(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          LastHelmsman;                                             // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WheelTurningSoundComponent;                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0280(0x0004) MISSED OFFSET
	float                                              TargetWheelAngle;                                         // 0x0284(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              WheelAngleScale;                                          // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x028C(0x0004) MISSED OFFSET

	void TakeHelm(class AController* NewHelmsman)//offset:0xF81230;
	void OnRep_CurrentHelmsman()//offset:0xF80BE0;
	void OnMatchEnded()//offset:0xF80A80;
	void OnHelmsmanMovementModeChanged(class ACharacter* AffectedCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)//offset:0xF807D0;
	void OnHelmsmanDied(class ADH_Character* DeadPawn)//offset:0xF80740;
	void OnHelmsmanDestroyed(class AActor* DestroyedHelmsman)//offset:0xF80740;
	class ADH_HumanCharacter* GetCurrentHelmsman()//offset:0xF802A0;
	bool CanReleaseHelm()//offset:0xF800B0;
};


// Class DreadHunger.DH_WarshipInteriorVolume
// size:0x0000 (0x02C8 - 0x02C8)
class ADH_WarshipInteriorVolume : public ADH_PhysicsVolume
{
public:
};


// Class DreadHunger.DH_WarshipMapTable
// size:0x0010 (0x0220 - 0x0230)
class ADH_WarshipMapTable : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UUserWidget*                                 LobbyMissionMapClass;                                     // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};


// Class DreadHunger.DH_WarshipMovementComponent
// size:0x0010 (0x0B00 - 0x0B10)
class UDH_WarshipMovementComponent : public UCharacterMovementComponent
{
public:
	class ADH_Warship*                                 OwningShip;                                               // 0x0B00(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B08(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_WarshipPathSpline
// size:0x0028 (0x0220 - 0x0248)
class ADH_WarshipPathSpline : public AActor
{
public:
	bool                                               bRequiresHelmsman;                                        // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class ADH_WarshipSpawnPoint*                       TargetShip;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UBillboardComponent*                         Sprite;                                                   // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADH_Warship*                                 PathingShip;                                              // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)

	void OnPathingShipDestroyed(class AActor* DestroyedActor)//offset:0xF80AC0;
	void Init(class ADH_Warship* InShip)//offset:0xF804C0;
};


// Class DreadHunger.DH_WarshipSpawnPoint
// size:0x0030 (0x0220 - 0x0250)
class ADH_WarshipSpawnPoint : public AActor
{
public:
	bool                                               bAutomaticSpawn;                                          // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class ADH_Warship*                                 WarshipClass;                                             // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SpawnTransformComponent;                                  // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ADH_Warship*                                 SpawnedShip;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	class ADH_Warship* SpawnShip()//offset:0xF81200;
};


// Class DreadHunger.DH_WaterVolume
// size:0x0000 (0x02C8 - 0x02C8)
class ADH_WaterVolume : public ADH_PhysicsVolume
{
public:
};


// Class DreadHunger.DH_Weapon_Ranged
// size:0x0030 (0x0920 - 0x0950)
class ADH_Weapon_Ranged : public ADH_Weapon
{
public:
	class ADH_Inventory*                               AmmunitionClass;                                          // 0x0920(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageScaleByDistance;                                    // 0x0928(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFireSpread;                                            // 0x0930(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadSettleSpeed;                                        // 0x0934(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoisonDamage;                                             // 0x0938(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanMisfire;                                              // 0x093C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	float                                              CurrentFireSpread;                                        // 0x0940(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0944(0x000C) MISSED OFFSET

	bool ReloadingConsumesAmmo()//offset:0xF83890;
	void OnProjectileSpawned(class ADH_Projectile* NewProjectile)//offset:0x13CEB30;
	void OnProjectileHitActor(const struct FHitResult& Hit)//offset:0x13CEB30;
	void HitActor(const struct FHitResult& Hit)//offset:0xF835C0;
	float GetFireSpread()//offset:0xF832D0;
};


// Class DreadHunger.DH_WendigoCharacter
// size:0x0010 (0x1280 - 0x1290)
class ADH_WendigoCharacter : public ADH_HumanCharacter
{
public:
	class ADH_HumanCharacter*                          CurrentTarget;                                            // 0x1280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1288(0x0008) MISSED OFFSET
};


// Class DreadHunger.DH_WidgetAnimationHandler
// size:0x0030 (0x0028 - 0x0058)
class UDH_WidgetAnimationHandler : public UObject
{
public:
	ESlateVisibility                                   VisibleVisibility;                                        // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   HiddenVisibility;                                         // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              ForwardPlaybackSpeed;                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReversePlaybackSpeed;                                     // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UWidgetAnimation*                            ReversibleAnimation;                                      // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetAffectedByVisibility;                               // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHiding;                                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0049(0x000F) MISSED OFFSET

	void Show()//offset:0xF83C70;
	void SetVisibleVisibility(ESlateVisibility NewVisibleVisibility)//offset:0xF83BF0;
	void SetReversibleAnimation(class UWidgetAnimation* NewReversibleAnimation)//offset:0xF83B60;
	void SetReversePlaybackSpeed(float NewReversePlaybackSpeed)//offset:0xF83AE0;
	void SetHiddenVisibility(ESlateVisibility NewHiddenVisibility)//offset:0xF83A60;
	void SetForwardPlaybackSpeed(float NewForwardPlaybackSpeed)//offset:0xF839E0;
	void Hide()//offset:0xF835A0;
	bool GetIsHiding()//offset:0xF83310;
};


// Class DreadHunger.DH_WidgetStatics
// size:0x0000 (0x0028 - 0x0028)
class UDH_WidgetStatics : public UObject
{
public:
};


// Class DreadHunger.DH_WidgetsToInstanceStore
// size:0x0050 (0x0028 - 0x0078)
class UDH_WidgetsToInstanceStore : public UObject
{
public:
	TMap<class UUserWidget*, EDH_HUDLocationType>      WidgetsToInstance;                                        // 0x0028(0x0050) (Transient)

	void RemoveWidget(class UUserWidget* WidgetClass)//offset:0xF838C0;
	void AddWidget(class UUserWidget* WidgetClass, EDH_HUDLocationType Location)//offset:0xF82FC0;
};


// Class DreadHunger.DH_WinningHandWidget
// size:0x0000 (0x0260 - 0x0260)
class UDH_WinningHandWidget : public UUserWidget
{
public:

	static struct FPlayingCardHand SortHand(const struct FPlayingCardHand& UnsortedHand)//offset:0xF83C90;
};


// Class DreadHunger.DH_Workbench
// size:0x0008 (0x0250 - 0x0258)
class ADH_Workbench : public ADH_CraftingStation
{
public:
	class UDH_WorkbenchRepairComponent*                RepairComponent;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	void RepairItems(class UDH_CraftingProject* RepairProject)//offset:0xF83950;
};


// Class DreadHunger.DH_WorkbenchRepairComponent
// size:0x0008 (0x0280 - 0x0288)
class UDH_WorkbenchRepairComponent : public UDH_CraftingComponent
{
public:
};


// Class DreadHunger.DH_WorldSettings
// size:0x01B8 (0x03A0 - 0x0558)
class ADH_WorldSettings : public AWorldSettings
{
public:
	class UDH_MapData*                                 MapData;                                                  // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDH_EnvironmentalSettings*                   EnvironmentSettings;                                      // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bTestMap;                                                 // 0x03B0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bLobbyMap;                                                // 0x03B1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bTitleMap;                                                // 0x03B2(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03B3(0x0005) MISSED OFFSET
	TArray<class UDH_CraftingRecipe*>                  AllowedCraftingRecipes;                                   // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bAllowDropTableSpawns;                                    // 0x03C8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIgnoreSurvivalStats;                                     // 0x03C9(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03CA(0x0002) MISSED OFFSET
	float                                              StartingTimeOfDay;                                        // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bAutoShipArrive;                                          // 0x03D0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FDateTime                                   StartingDate;                                             // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData03[0x28];                                      // 0x03E0(0x0028) UNKNOWN PROPERTY: 
	class UTextureRenderTarget2D*                      OverheadRT;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<ESceneCaptureSource>                   OverheadCaptureSource;                                    // 0x0410(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x0411(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData06[0x28];                                      // 0x0440(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData07[0x28];                                      // 0x0468(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData08[0x28];                                      // 0x0490(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData09[0x28];                                      // 0x04B8(0x0028) UNKNOWN PROPERTY: 
	class USoundBase*                                  GlobalAmbientSound;                                       // 0x04E0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class USoundAttenuation*                           FallbackAttenuationSettings;                              // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADH_RoleDealer*                              RoleDealer;                                               // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADH_ImpactEffectManager*                     ImpactEffectManager;                                      // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   WorldMapRes;                                              // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              WorldMapTraceStartZ;                                      // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              WorldMapTraceEndZ;                                        // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData10[0x28];                                      // 0x0510(0x0028) MISSED OFFSET
	struct FVector                                     WorldSize;                                                // 0x0538(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     WorldCenterLocation;                                      // 0x0544(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPrecached;                                               // 0x0550(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0551(0x0007) MISSED OFFSET

	void UpdateOverheadImage()//offset:0x806320;
};


// Class DreadHunger.DH_XPProgressWidgetInterface
// size:0x0000 (0x0028 - 0x0028)
class UDH_XPProgressWidgetInterface : public UInterface
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
