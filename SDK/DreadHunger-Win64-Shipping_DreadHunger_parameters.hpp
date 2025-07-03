                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHunger_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DreadHunger.DH_ActiveDebugControls.SetTOD
struct UDH_ActiveDebugControls_SetTOD_Params
{
	float                                              Hour;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_AIController.TargetCharacterDied
struct ADH_AIController_TargetCharacterDied_Params
{
	class ADH_Character*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIController.OnTakeDamage
struct ADH_AIController_OnTakeDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIController.OnCinematicModeChanged
struct ADH_AIController_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIController.ControlledCharacterDied
struct ADH_AIController_ControlledCharacterDied_Params
{
	class ADH_Character*                               DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIController.AddTargetToThreatTable
struct ADH_AIController_AddTargetToThreatTable_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExtraThreat;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIControllerWildlife.SensedActor
struct ADH_AIControllerWildlife_SensedActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
};

// Function DreadHunger.DH_AIPathSpline.SpawnAI
struct ADH_AIPathSpline_SpawnAI_Params
{
};

// Function DreadHunger.DH_AIPathSpline.OnStartedPathing
struct ADH_AIPathSpline_OnStartedPathing_Params
{
};

// Function DreadHunger.DH_AIPathSpline.OnPointReached
struct ADH_AIPathSpline_OnPointReached_Params
{
	int                                                PointIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.OnPathingCharacterDied
struct ADH_AIPathSpline_OnPathingCharacterDied_Params
{
	class ADH_Character*                               DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.OnPathingCharacterDestroyed
struct ADH_AIPathSpline_OnPathingCharacterDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.OnMoveComplete
struct ADH_AIPathSpline_OnMoveComplete_Params
{
	struct FAIRequestID                                RequestID;                                                // (Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.OnAISpawned
struct ADH_AIPathSpline_OnAISpawned_Params
{
	class ADH_Character*                               SpawnedAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.MoveToPoint
struct ADH_AIPathSpline_MoveToPoint_Params
{
	int                                                TargetPathIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.MoveToNextPoint
struct ADH_AIPathSpline_MoveToNextPoint_Params
{
};

// Function DreadHunger.DH_AIPathSpline.GetProximityRadius
struct ADH_AIPathSpline_GetProximityRadius_Params
{
	int                                                InPathIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_AIPathSpline.BeginPathing
struct ADH_AIPathSpline_BeginPathing_Params
{
};

// Function DreadHunger.DH_AISpawnManager.RemoveSpawnedCharacter
struct ADH_AISpawnManager_RemoveSpawnedCharacter_Params
{
	class ADH_Character*                               CharacterToRemove;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AISpawnManager.QuerySpawnLocation
struct ADH_AISpawnManager_QuerySpawnLocation_Params
{
};

// Function DreadHunger.DH_AISpawnManager.OnSpellExpired
struct ADH_AISpawnManager_OnSpellExpired_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AISpawnManager.OnSpellCast
struct ADH_AISpawnManager_OnSpellCast_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AISpawnManager.OnDaysUntilBlizzardChanged
struct ADH_AISpawnManager_OnDaysUntilBlizzardChanged_Params
{
	class ADH_GameState*                               InGameState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AITarget.IsAITargetable
struct UDH_AITarget_IsAITargetable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_AITarget.GetThreatOverride
struct UDH_AITarget_GetThreatOverride_Params
{
	float                                              CurrentThreat;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_AITarget.GetInitialThreat
struct UDH_AITarget_GetInitialThreat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.TransferInventory_Simulated
struct ADH_Character_TransferInventory_Simulated_Params
{
	class UDH_InventoryManager*                        SourceInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        TargetInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TargetSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFindTargetSlot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bQuickLoot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.TransferInventory
struct ADH_Character_TransferInventory_Params
{
	class UDH_InventoryManager*                        SourceManager;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        TargetManager;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TargetSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFindTargetSlot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bQuickLoot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.SetShouldRun
struct ADH_Character_SetShouldRun_Params
{
	bool                                               bNewShouldRun;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.SetGenericTeamId
struct ADH_Character_SetGenericTeamId_Params
{
	struct FGenericTeamId                              NewTeamID;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_Character.OnRep_TargetCharacter
struct ADH_Character_OnRep_TargetCharacter_Params
{
};

// Function DreadHunger.DH_Character.OnRep_Snare
struct ADH_Character_OnRep_Snare_Params
{
};

// Function DreadHunger.DH_Character.OnRep_LastLanding
struct ADH_Character_OnRep_LastLanding_Params
{
};

// Function DreadHunger.DH_Character.OnRep_LastDamageReceived
struct ADH_Character_OnRep_LastDamageReceived_Params
{
	struct FDamageInstance                             PreviousDamageInstance;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_Character.OnRep_DeathState
struct ADH_Character_OnRep_DeathState_Params
{
};

// Function DreadHunger.DH_Character.OnRep_CurrentReservedHealth
struct ADH_Character_OnRep_CurrentReservedHealth_Params
{
};

// Function DreadHunger.DH_Character.OnRep_CurrentHealth
struct ADH_Character_OnRep_CurrentHealth_Params
{
};

// Function DreadHunger.DH_Character.OnRep_CurrentClimbingActor
struct ADH_Character_OnRep_CurrentClimbingActor_Params
{
};

// Function DreadHunger.DH_Character.OnInventoryEmptied
struct ADH_Character_OnInventoryEmptied_Params
{
};

// Function DreadHunger.DH_Character.OnHarvestedCorpse
struct ADH_Character_OnHarvestedCorpse_Params
{
};

// Function DreadHunger.DH_Character.OnEnsnared
struct ADH_Character_OnEnsnared_Params
{
	class ADH_BearTrapPickup*                          InSnare;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.OnDied
struct ADH_Character_OnDied_Params
{
};

// Function DreadHunger.DH_Character.OnCinematicModeChanged
struct ADH_Character_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.ModifyHealth
struct ADH_Character_ModifyHealth_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.IsSwimming
struct ADH_Character_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.IsEnsnared
struct ADH_Character_IsEnsnared_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.IsClimbing
struct ADH_Character_IsClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.IsAlive
struct ADH_Character_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.InventoryTransferSucceeded
struct ADH_Character_InventoryTransferSucceeded_Params
{
	class UDH_InventoryManager*                        SourceInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        TargetInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.InventoryTransferFailed
struct ADH_Character_InventoryTransferFailed_Params
{
	class UDH_InventoryManager*                        SourceInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        TargetInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TargetSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.InventoryQuickTransferSucceeded
struct ADH_Character_InventoryQuickTransferSucceeded_Params
{
	class UDH_InventoryManager*                        SourceInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        TargetInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TargetSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.HallucinationExpired
struct ADH_Character_HallucinationExpired_Params
{
};

// Function DreadHunger.DH_Character.GetSnareDurationModifier
struct ADH_Character_GetSnareDurationModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetMaximumHealth
struct ADH_Character_GetMaximumHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetInventoryComponent
struct ADH_Character_GetInventoryComponent_Params
{
	class UDH_InventoryManager*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetInventory
struct ADH_Character_GetInventory_Params
{
	class UDH_InventoryManager*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetGenericTeamId
struct ADH_Character_GetGenericTeamId_Params
{
	struct FGenericTeamId                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_Character.GetDeathState
struct ADH_Character_GetDeathState_Params
{
	ECharacterDeathState                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetCurrentReservedHealth
struct ADH_Character_GetCurrentReservedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetCurrentHealthState
struct ADH_Character_GetCurrentHealthState_Params
{
	ECharacterHealthState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetCurrentHealth
struct ADH_Character_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetCorpseCraftingComponent
struct ADH_Character_GetCorpseCraftingComponent_Params
{
	class UDH_CraftingComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetCharacterAnimInst
struct ADH_Character_GetCharacterAnimInst_Params
{
	class UDH_CharacterAnimInstance*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.GetBodyPartBoneList
struct ADH_Character_GetBodyPartBoneList_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_Character.GetAttitudeTowards
struct ADH_Character_GetAttitudeTowards_Params
{
	class AActor*                                      Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.Ensnare
struct ADH_Character_Ensnare_Params
{
	class ADH_BearTrapPickup*                          InSnare;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSnareDuration;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.DropInventory_Simulated
struct ADH_Character_DropInventory_Simulated_Params
{
	int                                                InventoryIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bThrown;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDropMethod                               DropMethod;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetVariation;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationVariation;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DropCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.Died
struct ADH_Character_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 KillingDamageType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverkillDamage;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.CanBeEnsnared
struct ADH_Character_CanBeEnsnared_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.Attack
struct ADH_Character_Attack_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InAttackIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Character.AdjustDamage
struct ADH_Character_AdjustDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Character.AddDeathInventory
struct ADH_Character_AddDeathInventory_Params
{
	class ADH_Inventory*                               Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AnimalCharacter.PlayCallForHelp
struct ADH_AnimalCharacter_PlayCallForHelp_Params
{
};

// Function DreadHunger.DH_AnimalCharacter.OnSpellExpired
struct ADH_AnimalCharacter_OnSpellExpired_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AnimalCharacter.OnSpellCast
struct ADH_AnimalCharacter_OnSpellCast_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_AnimalCharacter.OnRep_AttackFlash
struct ADH_AnimalCharacter_OnRep_AttackFlash_Params
{
};

// Function DreadHunger.DH_AnimalCharacter.IsAttackingTeammate
struct ADH_AnimalCharacter_IsAttackingTeammate_Params
{
	class ADH_PlayerState*                             OtherPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_AnimalCharacter.GetPackIceCollider
struct ADH_AnimalCharacter_GetPackIceCollider_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.UseStateBlocksInteracts
struct ADH_Inventory_UseStateBlocksInteracts_Params
{
	unsigned char                                      State;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.Use
struct ADH_Inventory_Use_Params
{
	struct FTransform                                  UseTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.Upgrade
struct ADH_Inventory_Upgrade_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.StateConsumesUse
struct ADH_Inventory_StateConsumesUse_Params
{
	unsigned char                                      State;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.SetUsesRemaining
struct ADH_Inventory_SetUsesRemaining_Params
{
	float                                              NewUsesRemaining;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.SetPublicFlags
struct ADH_Inventory_SetPublicFlags_Params
{
	EInventoryStateFlags                               FlagsToSet;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSet;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.SetDurability
struct ADH_Inventory_SetDurability_Params
{
	float                                              NewDurability;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.OnWantsToAimChanged
struct ADH_Inventory_OnWantsToAimChanged_Params
{
	bool                                               bNewWantsToAim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.OnUseFailed
struct ADH_Inventory_OnUseFailed_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.OnUsed
struct ADH_Inventory_OnUsed_Params
{
	struct FTransform                                  UseTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.OnTopStateChanged
struct ADH_Inventory_OnTopStateChanged_Params
{
};

// Function DreadHunger.DH_Inventory.OnSpawnedPickup
struct ADH_Inventory_OnSpawnedPickup_Params
{
	class ADH_InventoryPickup*                         Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDropMethod                               SpawnMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.OnRep_TopItemState
struct ADH_Inventory_OnRep_TopItemState_Params
{
};

// Function DreadHunger.DH_Inventory.OnRep_NumberOfItems
struct ADH_Inventory_OnRep_NumberOfItems_Params
{
};

// Function DreadHunger.DH_Inventory.OnRep_InventorySlotIndex
struct ADH_Inventory_OnRep_InventorySlotIndex_Params
{
};

// Function DreadHunger.DH_Inventory.OnRep_InventoryManager
struct ADH_Inventory_OnRep_InventoryManager_Params
{
};

// Function DreadHunger.DH_Inventory.OnReloaded
struct ADH_Inventory_OnReloaded_Params
{
};

// Function DreadHunger.DH_Inventory.OnPutDown
struct ADH_Inventory_OnPutDown_Params
{
};

// Function DreadHunger.DH_Inventory.OnEquipped
struct ADH_Inventory_OnEquipped_Params
{
};

// Function DreadHunger.DH_Inventory.OnAppliedTo
struct ADH_Inventory_OnAppliedTo_Params
{
	class ADH_Inventory*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumApplied;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             ApplyingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.OnAimed
struct ADH_Inventory_OnAimed_Params
{
	bool                                               bNewIsAiming;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.ModifyDurability
struct ADH_Inventory_ModifyDurability_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.LoadFromPickup
struct ADH_Inventory_LoadFromPickup_Params
{
	class ADH_InventoryPickup*                         FromPickup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.LoadFromInventory
struct ADH_Inventory_LoadFromInventory_Params
{
	class ADH_Inventory*                               FromInventory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.IsReloading
struct ADH_Inventory_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.IsPoisoned
struct ADH_Inventory_IsPoisoned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.IncreaseItemStack
struct ADH_Inventory_IncreaseItemStack_Params
{
	TArray<struct FInventoryItemState>                 ItemStatesToAdd;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bFlushNetDormancy;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.HasAnyPublicFlags
struct ADH_Inventory_HasAnyPublicFlags_Params
{
	EInventoryStateFlags                               TestFlags;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetUseTransform
struct ADH_Inventory_GetUseTransform_Params
{
	struct FTransform                                  UseTransform;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetUseState
struct ADH_Inventory_GetUseState_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetUsesRemaining
struct ADH_Inventory_GetUsesRemaining_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetUseCooldown
struct ADH_Inventory_GetUseCooldown_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetReplicatedTopItemState
struct ADH_Inventory_GetReplicatedTopItemState_Params
{
	struct FInventoryItemState                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DreadHunger.DH_Inventory.GetInventorySlotIndex
struct ADH_Inventory_GetInventorySlotIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetFuelValue
struct ADH_Inventory_GetFuelValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetDurability
struct ADH_Inventory_GetDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetCurrentStackStates
struct ADH_Inventory_GetCurrentStackStates_Params
{
	TArray<struct FInventoryItemState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_Inventory.GetCurrentStackCount
struct ADH_Inventory_GetCurrentStackCount_Params
{
	bool                                               bDecrementReservedItems;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetCrosshairScale
struct ADH_Inventory_GetCrosshairScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetCooldownPct
struct ADH_Inventory_GetCooldownPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.GetAllItemStateUIDs
struct ADH_Inventory_GetAllItemStateUIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_Inventory.GetAimPct
struct ADH_Inventory_GetAimPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.DecreaseItemStack
struct ADH_Inventory_DecreaseItemStack_Params
{
	int                                                ToRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlushNetDormancy;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScoreItemConsumption;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.ClearAllPublicFlags
struct ADH_Inventory_ClearAllPublicFlags_Params
{
};

// Function DreadHunger.DH_Inventory.CanUse
struct ADH_Inventory_CanUse_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.CanReload
struct ADH_Inventory_CanReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.CanExitAim
struct ADH_Inventory_CanExitAim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.CanBeAppliedTo
struct ADH_Inventory_CanBeAppliedTo_Params
{
	class ADH_Inventory*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventorySlotContents                      TargetSlot;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.CanAim
struct ADH_Inventory_CanAim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Inventory.AutoReload
struct ADH_Inventory_AutoReload_Params
{
};

// Function DreadHunger.DH_Inventory_Consumable.GetConsumableStatValues
struct ADH_Inventory_Consumable_GetConsumableStatValues_Params
{
	class ADH_PlayerState*                             ConsumingPlayer;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FConsumableItemStatValues                   StatValues;                                               // (Parm, OutParm)
};

// Function DreadHunger.DH_DoorActor.SetOpen
struct ADH_DoorActor_SetOpen_Params
{
	bool                                               bNewIsOpen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OpenInstigator;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_DoorActor.OnRep_State
struct ADH_DoorActor_OnRep_State_Params
{
};

// Function DreadHunger.DH_DoorActor.OnRep_LastDamageReceived
struct ADH_DoorActor_OnRep_LastDamageReceived_Params
{
};

// Function DreadHunger.DH_DoorActor.IsLocked
struct ADH_DoorActor_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DoorLockComponent.SetIsLocked
struct UDH_DoorLockComponent_SetIsLocked_Params
{
	bool                                               bNewLocked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_DoorLockComponent.OnRep_Locked
struct UDH_DoorLockComponent_OnRep_Locked_Params
{
};

// Function DreadHunger.DH_DoorLockComponent.OnRep_Broken
struct UDH_DoorLockComponent_OnRep_Broken_Params
{
};

// Function DreadHunger.DH_DoorLockComponent.IsLocked
struct UDH_DoorLockComponent_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_ArmoryLockComponent.OnWheelPositionChanged
struct UDH_ArmoryLockComponent_OnWheelPositionChanged_Params
{
};

// Function DreadHunger.DH_ArmoryLockComponent.OnRep_Wheels
struct UDH_ArmoryLockComponent_OnRep_Wheels_Params
{
};

// Function DreadHunger.DH_ArmoryLockWheel.OnRep_TargetPosition
struct UDH_ArmoryLockWheel_OnRep_TargetPosition_Params
{
};

// Function DreadHunger.DH_BearTrapAnimInstance.SetTrapOpen
struct UDH_BearTrapAnimInstance_SetTrapOpen_Params
{
	bool                                               bNewIsOpen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayCloseAnimation;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon.GetDamageType
struct ADH_Weapon_GetDamageType_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon.GetDamage
struct ADH_Weapon_GetDamage_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.WasThrown
struct ADH_InventoryPickup_WasThrown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.SetDurability
struct ADH_InventoryPickup_SetDurability_Params
{
	float                                              NewDurability;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.Pickup
struct ADH_InventoryPickup_Pickup_Params
{
	class AController*                                 InteractInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.OnRep_ThrowState
struct ADH_InventoryPickup_OnRep_ThrowState_Params
{
};

// Function DreadHunger.DH_InventoryPickup.OnRep_AttachTarget
struct ADH_InventoryPickup_OnRep_AttachTarget_Params
{
};

// Function DreadHunger.DH_InventoryPickup.OnPickupThrownInWater
struct ADH_InventoryPickup_OnPickupThrownInWater_Params
{
};

// Function DreadHunger.DH_InventoryPickup.OnPickupMovementStopped
struct ADH_InventoryPickup_OnPickupMovementStopped_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.OnGrabbed
struct ADH_InventoryPickup_OnGrabbed_Params
{
	class ADH_HumanCharacter*                          GrabbingPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEmptyHandedGrab;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.Launch
struct ADH_InventoryPickup_Launch_Params
{
	bool                                               bThrown;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.GetMaximumHealth
struct ADH_InventoryPickup_GetMaximumHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.GetLastCarrierControlledPawn
struct ADH_InventoryPickup_GetLastCarrierControlledPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.GetDurability
struct ADH_InventoryPickup_GetDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryPickup.BP_OnRep_AttachTarget
struct ADH_InventoryPickup_BP_OnRep_AttachTarget_Params
{
	class AActor*                                      InAttachTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_BearTrapPickup.OnRep_TrapState
struct ADH_BearTrapPickup_OnRep_TrapState_Params
{
};

// Function DreadHunger.DH_InventoryView.PlayUsedEffects
struct ADH_InventoryView_PlayUsedEffects_Params
{
	unsigned char                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryView.PlayReloadEffects
struct ADH_InventoryView_PlayReloadEffects_Params
{
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryView.PlayPickupEffects
struct ADH_InventoryView_PlayPickupEffects_Params
{
	class ADH_HumanCharacter*                          HumanPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDominantHand                             Hand;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryEffectFilter                             Filter;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryView.PlayHitEffects
struct ADH_InventoryView_PlayHitEffects_Params
{
	unsigned char                                      AttackState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InHit;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryView.PlayEquipEffects
struct ADH_InventoryView_PlayEquipEffects_Params
{
	unsigned char                                      State;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EInventoryEffectFilter                             Filter;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryView.PlayDroppedEffects
struct ADH_InventoryView_PlayDroppedEffects_Params
{
	bool                                               bWasThrown;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDominantHand                             DropHand;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          HumanPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryView.PlayAimEffects
struct ADH_InventoryView_PlayAimEffects_Params
{
	bool                                               bIsAiming;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryView.GetMesh
struct ADH_InventoryView_GetMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryView.GetInventoryState
struct ADH_InventoryView_GetInventoryState_Params
{
	struct FInventoryItemState                         State;                                                    // (Parm, OutParm)
};

// Function DreadHunger.DH_BearTrapView.BP_OnArmed
struct ADH_BearTrapView_BP_OnArmed_Params
{
};

// Function DreadHunger.DH_Weapon_Melee.OnTraceStart
struct ADH_Weapon_Melee_OnTraceStart_Params
{
	unsigned char                                      State;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Melee.OnMeleeWeaponHit
struct ADH_Weapon_Melee_OnMeleeWeaponHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      AttackState;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Melee.IsHoldToAttack
struct ADH_Weapon_Melee_IsHoldToAttack_Params
{
	unsigned char                                      AttackState;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Melee.HasMeleeTrace
struct ADH_Weapon_Melee_HasMeleeTrace_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Melee.GetTraceStartTime
struct ADH_Weapon_Melee_GetTraceStartTime_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Melee.GetOverrideTraceHits
struct ADH_Weapon_Melee_GetOverrideTraceHits_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FHitResult>                          OverrideHits;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function DreadHunger.DH_Weapon_Melee.ApplyMeleeDamage
struct ADH_Weapon_Melee_ApplyMeleeDamage_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	unsigned char                                      AttackState;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_BodyPartPickup.OnRep_SpawnVelocity
struct ADH_BodyPartPickup_OnRep_SpawnVelocity_Params
{
};

// Function DreadHunger.DH_BodyPartView.OnBloodImpact
struct ADH_BodyPartView_OnBloodImpact_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerStart.OnRep_AttachedPawn
struct ADH_PlayerStart_OnRep_AttachedPawn_Params
{
};

// Function DreadHunger.DH_BrigCell.SetCellNumber
struct ADH_BrigCell_SetCellNumber_Params
{
	int                                                InCellNumber;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_BrigCell.OnRep_Prisoner
struct ADH_BrigCell_OnRep_Prisoner_Params
{
};

// Function DreadHunger.DH_BrigCell.OnPrisonerRemoved
struct ADH_BrigCell_OnPrisonerRemoved_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_BrigCell.OnPrisonerDied
struct ADH_BrigCell_OnPrisonerDied_Params
{
	class ADH_PrisonerPawn*                            DeadPrisoner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_BrigCell.FreePrisoner
struct ADH_BrigCell_FreePrisoner_Params
{
	class ADH_PlayerState*                             FreeingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_BrigCell.AddPrisoner
struct ADH_BrigCell_AddPrisoner_Params
{
	class ADH_PlayerState*                             NewPrisoner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_BrigDoor.OnUnlockCraftStarted
struct ADH_BrigDoor_OnUnlockCraftStarted_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_BrigDoor.OnUnlockCraftComplete
struct ADH_BrigDoor_OnUnlockCraftComplete_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Results;                                                  // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_BrigDoor.OnRep_CellNumber
struct ADH_BrigDoor_OnRep_CellNumber_Params
{
};

// Function DreadHunger.DH_BufferTransferComponent.SendBufferToClient
struct UDH_BufferTransferComponent_SendBufferToClient_Params
{
	int                                                BufferSize;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_BufferTransferComponent.SendBufferChunkToClient
struct UDH_BufferTransferComponent_SendBufferChunkToClient_Params
{
	TArray<unsigned char>                              BufferChunk;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_BufferTransferComponent.RequestNextBufferChunk
struct UDH_BufferTransferComponent_RequestNextBufferChunk_Params
{
	int                                                ReceivedBufferSize;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Campfire.ReLitFire
struct ADH_Campfire_ReLitFire_Params
{
	class UDH_CraftingProject*                         FuelProject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Campfire.OnFireLit
struct ADH_Campfire_OnFireLit_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Campfire.OnFireDied
struct ADH_Campfire_OnFireDied_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Campfire.AddFuel
struct ADH_Campfire_AddFuel_Params
{
	class UDH_CraftingProject*                         FuelProject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CannibalCharacter.OnSetActive
struct ADH_CannibalCharacter_OnSetActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CannibalCharacter.OnRep_Active
struct ADH_CannibalCharacter_OnRep_Active_Params
{
};

// Function DreadHunger.DH_CensorshipComponent.OnStreamerModeChanged
struct UDH_CensorshipComponent_OnStreamerModeChanged_Params
{
	bool                                               bStreamerMode;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CharacterAnimInstance.GetLimbIK
struct UDH_CharacterAnimInstance_GetLimbIK_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterIKData                            OutIK;                                                    // (Parm, OutParm)
};

// Function DreadHunger.DH_CheatManager.UseCheatDetection
struct UDH_CheatManager_UseCheatDetection_Params
{
	bool                                               bYes;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.UnlockArmory
struct UDH_CheatManager_UnlockArmory_Params
{
};

// Function DreadHunger.DH_CheatManager.TakeDamage
struct UDH_CheatManager_TakeDamage_Params
{
	float                                              Damage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.StopUpdateLobbyFilterRules
struct UDH_CheatManager_StopUpdateLobbyFilterRules_Params
{
};

// Function DreadHunger.DH_CheatManager.StartUpdateLobbyFilterRules
struct UDH_CheatManager_StartUpdateLobbyFilterRules_Params
{
};

// Function DreadHunger.DH_CheatManager.Spectate
struct UDH_CheatManager_Spectate_Params
{
};

// Function DreadHunger.DH_CheatManager.SpawnCannibalsOnMe
struct UDH_CheatManager_SpawnCannibalsOnMe_Params
{
};

// Function DreadHunger.DH_CheatManager.SimulateLostServerConnection
struct UDH_CheatManager_SimulateLostServerConnection_Params
{
};

// Function DreadHunger.DH_CheatManager.SimulateDifferentServerVersion
struct UDH_CheatManager_SimulateDifferentServerVersion_Params
{
};

// Function DreadHunger.DH_CheatManager.ShowPreGameInstructions
struct UDH_CheatManager_ShowPreGameInstructions_Params
{
};

// Function DreadHunger.DH_CheatManager.ShowConnectToIP
struct UDH_CheatManager_ShowConnectToIP_Params
{
};

// Function DreadHunger.DH_CheatManager.ShipEscaped
struct UDH_CheatManager_ShipEscaped_Params
{
};

// Function DreadHunger.DH_CheatManager.SetWarmth
struct UDH_CheatManager_SetWarmth_Params
{
	float                                              NewWarmth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetTutorialChapter
struct UDH_CheatManager_SetTutorialChapter_Params
{
	ETutorialChapters                                  Chapter;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetTOD
struct UDH_CheatManager_SetTOD_Params
{
	float                                              Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetStorageLimit
struct UDH_CheatManager_SetStorageLimit_Params
{
	int                                                NewLimit;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetSpellCharge
struct UDH_CheatManager_SetSpellCharge_Params
{
	float                                              NewSpellCharge;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetShipHealth
struct UDH_CheatManager_SetShipHealth_Params
{
	float                                              InHealthPct;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetSanity
struct UDH_CheatManager_SetSanity_Params
{
	float                                              NewSanity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetNumberOfThralls
struct UDH_CheatManager_SetNumberOfThralls_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetMaxPlayers
struct UDH_CheatManager_SetMaxPlayers_Params
{
	int                                                NewMaxPlayers;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetIsThrall
struct UDH_CheatManager_SetIsThrall_Params
{
	bool                                               bThrall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetIsSpiritWalking
struct UDH_CheatManager_SetIsSpiritWalking_Params
{
	bool                                               bNewIsSpiritWalking;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetIsCannibal
struct UDH_CheatManager_SetIsCannibal_Params
{
	float                                              InCannibalLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetHunger
struct UDH_CheatManager_SetHunger_Params
{
	float                                              NewHunger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetBlizzardIntensity
struct UDH_CheatManager_SetBlizzardIntensity_Params
{
	float                                              NewBlizzardIntensity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetAllowAllCosmetics
struct UDH_CheatManager_SetAllowAllCosmetics_Params
{
	bool                                               bAllowAllCosmetics;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.SetAllowAchievements
struct UDH_CheatManager_SetAllowAchievements_Params
{
	bool                                               AllowAchievements;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.Scumbag
struct UDH_CheatManager_Scumbag_Params
{
	bool                                               bYes;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.ResetSpellCooldowns
struct UDH_CheatManager_ResetSpellCooldowns_Params
{
};

// Function DreadHunger.DH_CheatManager.ResetCosmeticUnlocks
struct UDH_CheatManager_ResetCosmeticUnlocks_Params
{
};

// Function DreadHunger.DH_CheatManager.ResetAchivements
struct UDH_CheatManager_ResetAchivements_Params
{
};

// Function DreadHunger.DH_CheatManager.RemoveShipCosmetic
struct UDH_CheatManager_RemoveShipCosmetic_Params
{
	class FString                                      InItemCode;                                               // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.RemoveCosmetic
struct UDH_CheatManager_RemoveCosmetic_Params
{
	class FString                                      InItemCode;                                               // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.RandomizeThralls
struct UDH_CheatManager_RandomizeThralls_Params
{
};

// Function DreadHunger.DH_CheatManager.LoadReplay
struct UDH_CheatManager_LoadReplay_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.IgnoreAnyExplorersAliveCheck
struct UDH_CheatManager_IgnoreAnyExplorersAliveCheck_Params
{
	bool                                               bIgnore;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.HasEntitlement
struct UDH_CheatManager_HasEntitlement_Params
{
	class FString                                      InId;                                                     // (Parm, ZeroConstructor)
	class FString                                      InType;                                                   // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.GiveRandomQuest
struct UDH_CheatManager_GiveRandomQuest_Params
{
};

// Function DreadHunger.DH_CheatManager.GiveQuest
struct UDH_CheatManager_GiveQuest_Params
{
	struct FName                                       QuestName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.GiveInventory
struct UDH_CheatManager_GiveInventory_Params
{
	class FString                                      InventoryName;                                            // (ConstParm, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.GiveBackpack
struct UDH_CheatManager_GiveBackpack_Params
{
};

// Function DreadHunger.DH_CheatManager.GetIPCountry
struct UDH_CheatManager_GetIPCountry_Params
{
};

// Function DreadHunger.DH_CheatManager.ForceThrall
struct UDH_CheatManager_ForceThrall_Params
{
};

// Function DreadHunger.DH_CheatManager.ForceSurvivor
struct UDH_CheatManager_ForceSurvivor_Params
{
};

// Function DreadHunger.DH_CheatManager.ExportTitleData
struct UDH_CheatManager_ExportTitleData_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.ExportMatchStats
struct UDH_CheatManager_ExportMatchStats_Params
{
};

// Function DreadHunger.DH_CheatManager.EquipShipCosmetic
struct UDH_CheatManager_EquipShipCosmetic_Params
{
	class FString                                      InItemCode;                                               // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.EquipCosmetic
struct UDH_CheatManager_EquipCosmetic_Params
{
	class FString                                      InItemCode;                                               // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.EndMatch
struct UDH_CheatManager_EndMatch_Params
{
	bool                                               bExplorersWin;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.DumpEntitlementStates
struct UDH_CheatManager_DumpEntitlementStates_Params
{
};

// Function DreadHunger.DH_CheatManager.DownloadReplay
struct UDH_CheatManager_DownloadReplay_Params
{
	class FString                                      MatchUUID;                                                // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.DisplayMatchEndMessage
struct UDH_CheatManager_DisplayMatchEndMessage_Params
{
};

// Function DreadHunger.DH_CheatManager.Crash
struct UDH_CheatManager_Crash_Params
{
};

// Function DreadHunger.DH_CheatManager.ConvertReplay
struct UDH_CheatManager_ConvertReplay_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_CheatManager.CompleteCurrentChapter
struct UDH_CheatManager_CompleteCurrentChapter_Params
{
};

// Function DreadHunger.DH_CheatManager.CheckWarshipCosmeticOwnership
struct UDH_CheatManager_CheckWarshipCosmeticOwnership_Params
{
};

// Function DreadHunger.DH_CheatManager.CheckAvatarCosmeticOwnership
struct UDH_CheatManager_CheckAvatarCosmeticOwnership_Params
{
};

// Function DreadHunger.DH_CheatManager.BearFight
struct UDH_CheatManager_BearFight_Params
{
};

// Function DreadHunger.DH_CheatManager.AllowLobbyStart
struct UDH_CheatManager_AllowLobbyStart_Params
{
};

// Function DreadHunger.DH_CheatManager.AIIgnoreMe
struct UDH_CheatManager_AIIgnoreMe_Params
{
	bool                                               bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.AdvanceDate
struct UDH_CheatManager_AdvanceDate_Params
{
};

// Function DreadHunger.DH_CheatManager.AddSteamWebAPICheckAppOwnershipRequest
struct UDH_CheatManager_AddSteamWebAPICheckAppOwnershipRequest_Params
{
	class FString                                      SteamId;                                                  // (Parm, ZeroConstructor)
	int                                                AppId;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.AddSteamWebAPICheckAppDetailsRequest
struct UDH_CheatManager_AddSteamWebAPICheckAppDetailsRequest_Params
{
	int                                                AppId;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CheatManager.AddFuel
struct UDH_CheatManager_AddFuel_Params
{
	int                                                Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InventoryName;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function DreadHunger.DH_ClimbableActor.GetClimbableMesh
struct ADH_ClimbableActor_GetClimbableMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_ClimbableActor.AddClimber
struct ADH_ClimbableActor_AddClimber_Params
{
	class ADH_Character*                               NewClimber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskComponent.SetTask
struct UDH_ColorMaskComponent_SetTask_Params
{
	bool                                               bInTask;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskComponent.SetTarget
struct UDH_ColorMaskComponent_SetTarget_Params
{
	bool                                               bInTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskComponent.SetInteract
struct UDH_ColorMaskComponent_SetInteract_Params
{
	bool                                               bInInteract;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskComponent.SetFriendly
struct UDH_ColorMaskComponent_SetFriendly_Params
{
	bool                                               bInFriendly;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskComponent.SetEnemy
struct UDH_ColorMaskComponent_SetEnemy_Params
{
	bool                                               bInEnemy;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskComponent.AddPrimitiveComponent
struct UDH_ColorMaskComponent_AddPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskInterface.GetLinearColorDelta
struct UDH_ColorMaskInterface_GetLinearColorDelta_Params
{
	float                                              Distance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryLinearColorDelta;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryLinearColorData;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ColorMaskInterface.GetColorMaskComponents
struct UDH_ColorMaskInterface_GetColorMaskComponents_Params
{
	TArray<class UDH_ColorMaskComponent*>              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_ColorMaskInterface.GetColorMaskComponent
struct UDH_ColorMaskInterface_GetColorMaskComponent_Params
{
	class UActorComponent*                             TargetActorComponent;                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_ColorMaskComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_GameMode.ShipHasArrived
struct ADH_GameMode_ShipHasArrived_Params
{
};

// Function DreadHunger.DH_GameMode.SendThrallMessage
struct ADH_GameMode_SendThrallMessage_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class ADH_PlayerController*                        Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameMode.RemoveCoalPickup
struct ADH_GameMode_RemoveCoalPickup_Params
{
	class ADH_InventoryPickup*                         CoalToRemove;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameMode.OnPokerRoundEnded
struct ADH_GameMode_OnPokerRoundEnded_Params
{
	class ADH_RoleDealer*                              InRoleDealer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameMode.GiveNextCodeToPlayer
struct ADH_GameMode_GiveNextCodeToPlayer_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameMode.ExportMatchStats
struct ADH_GameMode_ExportMatchStats_Params
{
	bool                                               bMatchGivesExperience;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameMode.AddCoalPickup
struct ADH_GameMode_AddCoalPickup_Params
{
	class ADH_InventoryPickup*                         CoalToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticItemBase.Get
struct UDH_CosmeticItemBase_Get_Params
{
	class FString                                      ItemCode;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CosmeticItemBase*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.RemoveItem
struct ADH_CosmeticPreviewAvatar_RemoveItem_Params
{
	class UDH_CosmeticItemBase*                        RemovedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.OnDragEndTimerExpired
struct ADH_CosmeticPreviewAvatar_OnDragEndTimerExpired_Params
{
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemWidgetMouseLeave
struct ADH_CosmeticPreviewAvatar_OnCosmeticItemWidgetMouseLeave_Params
{
	class UDH_CosmeticItemBase*                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemWidgetMouseEnter
struct ADH_CosmeticPreviewAvatar_OnCosmeticItemWidgetMouseEnter_Params
{
	class UDH_CosmeticItemBase*                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemDraggedWidgetEnd
struct ADH_CosmeticPreviewAvatar_OnCosmeticItemDraggedWidgetEnd_Params
{
	class UDH_CosmeticItemBase*                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemDraggedWidgetBegin
struct ADH_CosmeticPreviewAvatar_OnCosmeticItemDraggedWidgetBegin_Params
{
	class UDH_CosmeticItemBase*                        InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.GetAvatarMesh
struct ADH_CosmeticPreviewAvatar_GetAvatarMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_CosmeticPreviewAvatar.EquipItem
struct ADH_CosmeticPreviewAvatar_EquipItem_Params
{
	class UDH_CosmeticItemBase*                        SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftableInterface.OnCrafted
struct UDH_CraftableInterface_OnCrafted_Params
{
	class ADH_PlayerState*                             CraftingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.StartNewProject
struct UDH_CraftingComponent_StartNewProject_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              GroundIngredientsToUse;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ADH_PlayerState*                             CraftingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingProject*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.OnRep_CurrentProjects
struct UDH_CraftingComponent_OnRep_CurrentProjects_Params
{
};

// Function DreadHunger.DH_CraftingComponent.OnRep_CraftedRecipes
struct UDH_CraftingComponent_OnRep_CraftedRecipes_Params
{
};

// Function DreadHunger.DH_CraftingComponent.OnRep_CraftableRecipes
struct UDH_CraftingComponent_OnRep_CraftableRecipes_Params
{
};

// Function DreadHunger.DH_CraftingComponent.OnOwnerDestroyed
struct UDH_CraftingComponent_OnOwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.OnMatchEnded
struct UDH_CraftingComponent_OnMatchEnded_Params
{
};

// Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryRemoved
struct UDH_CraftingComponent_OnCraftingInventoryRemoved_Params
{
};

// Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryClosed
struct UDH_CraftingComponent_OnCraftingInventoryClosed_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryAdded
struct UDH_CraftingComponent_OnCraftingInventoryAdded_Params
{
	class ADH_Inventory*                               AddedType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedAmount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.OnCraftingIngredientDestroyed
struct UDH_CraftingComponent_OnCraftingIngredientDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetQuantityOfGroundIngredients
struct UDH_CraftingComponent_GetQuantityOfGroundIngredients_Params
{
	EInventoryType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             CraftingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftingType
struct UDH_CraftingComponent_GetCraftingType_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftingProjectByRecipe
struct UDH_CraftingComponent_GetCraftingProjectByRecipe_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingProject*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftingProjectByIndex
struct UDH_CraftingComponent_GetCraftingProjectByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingProject*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftingProgressType
struct UDH_CraftingComponent_GetCraftingProgressType_Params
{
	ECraftingProgressMethod                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftingLimit
struct UDH_CraftingComponent_GetCraftingLimit_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftCount
struct UDH_CraftingComponent_GetCraftCount_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.GetCraftableRecipes
struct UDH_CraftingComponent_GetCraftableRecipes_Params
{
	TArray<class UDH_CraftingRecipe*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_CraftingComponent.EmptyCraftableRecipes
struct UDH_CraftingComponent_EmptyCraftableRecipes_Params
{
};

// Function DreadHunger.DH_CraftingComponent.Craft
struct UDH_CraftingComponent_Craft_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             CraftingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingProject*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.CompleteProject
struct UDH_CraftingComponent_CompleteProject_Params
{
	class UDH_CraftingProject*                         CompletedProject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.CompleteAllProjects
struct UDH_CraftingComponent_CompleteAllProjects_Params
{
};

// Function DreadHunger.DH_CraftingComponent.CanCraft
struct UDH_CraftingComponent_CanCraft_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             CraftingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.AbortProject
struct UDH_CraftingComponent_AbortProject_Params
{
	class UDH_CraftingProject*                         AbortedProject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingComponent.AbortAllProjects
struct UDH_CraftingComponent_AbortAllProjects_Params
{
	class ADH_PlayerState*                             OnlyInstigatedBy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingProject.OnRep_Recipe
struct UDH_CraftingProject_OnRep_Recipe_Params
{
};

// Function DreadHunger.DH_CraftingProject.OnRep_Completed
struct UDH_CraftingProject_OnRep_Completed_Params
{
};

// Function DreadHunger.DH_CraftingProject.OnRep_Aborted
struct UDH_CraftingProject_OnRep_Aborted_Params
{
};

// Function DreadHunger.DH_CraftingProject.GetCompleted
struct UDH_CraftingProject_GetCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CraftingProject.GetAborted
struct UDH_CraftingProject_GetAborted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_CrewController.StopActivity
struct ADH_CrewController_StopActivity_Params
{
};

// Function DreadHunger.DH_CrewController.OnPawnStareTargetChanged
struct ADH_CrewController_OnPawnStareTargetChanged_Params
{
	class ADH_HumanCharacter*                          StareTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CrewController.OnPawnHitObject
struct ADH_CrewController_OnPawnHitObject_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_CrewController.OnPawnDamaged
struct ADH_CrewController_OnPawnDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CrewController.OnCinematicModeChanged
struct ADH_CrewController_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_CustomGameSettings.Get
struct UDH_CustomGameSettings_Get_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CustomGameSettings*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Suicide
struct UDH_DamageType_Suicide_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Starvation
struct UDH_DamageType_Starvation_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Poison
struct UDH_DamageType_Poison_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Nitro
struct UDH_DamageType_Nitro_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Falling
struct UDH_DamageType_Falling_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Drowning
struct UDH_DamageType_Drowning_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DamageType.Cold
struct UDH_DamageType_Cold_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_DebugControls.OnCheatManagerChanged
struct UDH_DebugControls_OnCheatManagerChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LoginStep.UpdateRetryTime
struct UDH_LoginStep_UpdateRetryTime_Params
{
};

// Function DreadHunger.DH_LoginStep.Run
struct UDH_LoginStep_Run_Params
{
};

// Function DreadHunger.DH_LoginStep.RetryStep
struct UDH_LoginStep_RetryStep_Params
{
};

// Function DreadHunger.DH_LoginStep.OnTimeout
struct UDH_LoginStep_OnTimeout_Params
{
};

// Function DreadHunger.DH_Defines.GetVersion
struct UDH_Defines_GetVersion_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_Defines.GetEnvironment
struct UDH_Defines_GetEnvironment_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_Defines.GetChangelist
struct UDH_Defines_GetChangelist_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_DestructibleActor.OnRep_LastDamageReceived
struct ADH_DestructibleActor_OnRep_LastDamageReceived_Params
{
	struct FDamageInstance                             PreviousDamageInstance;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_DestructibleActor.OnRep_IsDestroyed
struct ADH_DestructibleActor_OnRep_IsDestroyed_Params
{
};

// Function DreadHunger.DH_DestructibleActor.OnRep_DormantFragments
struct ADH_DestructibleActor_OnRep_DormantFragments_Params
{
};

// Function DreadHunger.DH_DestructibleActor.OnBasedPickupDestroyed
struct ADH_DestructibleActor_OnBasedPickupDestroyed_Params
{
	class AActor*                                      Act;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_DestructibleActor.BreakApart
struct ADH_DestructibleActor_BreakApart_Params
{
	bool                                               bSpawnBonusFragments;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_DigSite.OnRep_DugUp
struct ADH_DigSite_OnRep_DugUp_Params
{
};

// Function DreadHunger.DH_DigSite.OnRep_CurrentDiggingHealth
struct ADH_DigSite_OnRep_CurrentDiggingHealth_Params
{
};

// Function DreadHunger.DH_DigSite.OnRep_BuriedActor
struct ADH_DigSite_OnRep_BuriedActor_Params
{
};

// Function DreadHunger.DH_DraggedInventoryInterface.ShowDropResultNotification
struct UDH_DraggedInventoryInterface_ShowDropResultNotification_Params
{
	class UObject*                                     InDropResultIcon;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_ErrorStore.OnClearVivoxError
struct UDH_ErrorStore_OnClearVivoxError_Params
{
	struct FDH_VivoxError                              InError;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_ErrorStore.OnClearOnlineError
struct UDH_ErrorStore_OnClearOnlineError_Params
{
	struct FDH_OnlineError                             InError;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_ErrorStore.OnClearAllErrors
struct UDH_ErrorStore_OnClearAllErrors_Params
{
};

// Function DreadHunger.DH_ErrorStore.OnAddVivoxError_Internal
struct UDH_ErrorStore_OnAddVivoxError_Internal_Params
{
	struct FDH_VivoxError                              InError;                                                  // (Parm)
};

// Function DreadHunger.DH_ErrorStore.OnAddVivoxError
struct UDH_ErrorStore_OnAddVivoxError_Params
{
	struct FDH_VivoxError                              InError;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_ErrorStore.OnAddOnlineError_Internal
struct UDH_ErrorStore_OnAddOnlineError_Internal_Params
{
	struct FDH_OnlineError                             InError;                                                  // (Parm)
};

// Function DreadHunger.DH_ErrorStore.OnAddOnlineError
struct UDH_ErrorStore_OnAddOnlineError_Params
{
	struct FDH_OnlineError                             InError;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_ErrorStore.LogVivoxErrors
struct UDH_ErrorStore_LogVivoxErrors_Params
{
	TArray<struct FDH_VivoxError>                      Codes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_ErrorStore.LogOnlineErrors
struct UDH_ErrorStore_LogOnlineErrors_Params
{
	TArray<struct FDH_OnlineError>                     Codes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_ExplosionActor.DealDamage
struct ADH_ExplosionActor_DealDamage_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginOffset;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_FirstTimeHintWidget.OnWidgetAnimationHandlerBeginShow
struct UDH_FirstTimeHintWidget_OnWidgetAnimationHandlerBeginShow_Params
{
	class UDH_WidgetAnimationHandler*                  InAnimationHandler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_FirstTimeHintWidget.OnMappingsChangedEvent
struct UDH_FirstTimeHintWidget_OnMappingsChangedEvent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_FirstTimeHintWidget.OnHumanCharacterPlayerStateSet
struct UDH_FirstTimeHintWidget_OnHumanCharacterPlayerStateSet_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_FirstTimeHintWidget.BP_SetInteractionMessage
struct UDH_FirstTimeHintWidget_BP_SetInteractionMessage_Params
{
	struct FDH_KeybindInteractionMessage               InteractionMessage;                                       // (Parm)
};

// Function DreadHunger.DH_FirstTimeHintWidget.BP_CreateAnimationHandler
struct UDH_FirstTimeHintWidget_BP_CreateAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_FluidSurfaceComponent.CreateDisturbance
struct UDH_FluidSurfaceComponent_CreateDisturbance_Params
{
	struct FFluidDisturbance                           Disturbance;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_GameInstance.OnSetCurrentReplay
struct UDH_GameInstance_OnSetCurrentReplay_Params
{
	class UDH_MatchReplay*                             InReplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameInstance.IsLowGore
struct UDH_GameInstance_IsLowGore_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameInstance.ConvertSaveGameDataToJsonSaveData
struct UDH_GameInstance_ConvertSaveGameDataToJsonSaveData_Params
{
};

// Function DreadHunger.DH_GameplayMessageWidget.Init
struct UDH_GameplayMessageWidget_Init_Params
{
	struct FText                                       Messsage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_GameplayStatics.WorldPosToRefPose
struct UDH_GameplayStatics_WorldPosToRefPose_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     WorldPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RefPose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.UpdateComponentOverlaps
struct UDH_GameplayStatics_UpdateComponentOverlaps_Params
{
	class USceneComponent*                             Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.SetViewportClientDrawBlackOutScreen
struct UDH_GameplayStatics_SetViewportClientDrawBlackOutScreen_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawBlackOutScreen;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.SetMeshToAvatar
struct UDH_GameplayStatics_SetMeshToAvatar_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_PlayerRoleData*                          Avatar;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDH_CosmeticItemBase*>                Cosmetics;                                                // (Parm, ZeroConstructor)
	bool                                               bReinitPose;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.PlayVoice
struct UDH_GameplayStatics_PlayVoice_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             AttachComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachRules;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LocalSound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckParentInstigator;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.PlayUISound
struct UDH_GameplayStatics_PlayUISound_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.PlaySoundViewAligned
struct UDH_GameplayStatics_PlaySoundViewAligned_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             AttachComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachRules;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LocalSound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckParentInstigator;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.PlaySound3D
struct UDH_GameplayStatics_PlaySound3D_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             AttachComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachRules;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.ModifyBrightness
struct UDH_GameplayStatics_ModifyBrightness_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              InScale;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.LobbyHasRequiredPlayerCount
struct UDH_GameplayStatics_LobbyHasRequiredPlayerCount_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsWorldTearingDown
struct UDH_GameplayStatics_IsWorldTearingDown_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsVivoxLoggedIn
struct UDH_GameplayStatics_IsVivoxLoggedIn_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsTutorialMap
struct UDH_GameplayStatics_IsTutorialMap_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsTitleMap
struct UDH_GameplayStatics_IsTitleMap_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsTestMap
struct UDH_GameplayStatics_IsTestMap_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsSpecialEventActive
struct UDH_GameplayStatics_IsSpecialEventActive_Params
{
	ESpecialEventType                                  Event;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsOnlineVoiceLoggedIn
struct UDH_GameplayStatics_IsOnlineVoiceLoggedIn_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsMissionSelected
struct UDH_GameplayStatics_IsMissionSelected_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsLocalPlayerThrall
struct UDH_GameplayStatics_IsLocalPlayerThrall_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsLobbyOrTitleMap
struct UDH_GameplayStatics_IsLobbyOrTitleMap_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsLobbyMap
struct UDH_GameplayStatics_IsLobbyMap_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsLobbyLanguageDisabled
struct UDH_GameplayStatics_IsLobbyLanguageDisabled_Params
{
	struct FText                                       InCode;                                                   // (ConstParm, Parm)
	class UDH_LanguageCodeDataAsset*                   LanguageCodeDataAsset;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsLive
struct UDH_GameplayStatics_IsLive_Params
{
	class FString                                      EnvironmentStr;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsInteractTarget
struct UDH_GameplayStatics_IsInteractTarget_Params
{
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsInsideShip
struct UDH_GameplayStatics_IsInsideShip_Params
{
	class APawn*                                       TestPawn;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsCraftingAllowed
struct UDH_GameplayStatics_IsCraftingAllowed_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingRecipe*                          Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsConsolePlatform
struct UDH_GameplayStatics_IsConsolePlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsAxisKeyDown
struct UDH_GameplayStatics_IsAxisKeyDown_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.IsActionKeyDown
struct UDH_GameplayStatics_IsActionKeyDown_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.HasOpenLobbySlot
struct UDH_GameplayStatics_HasOpenLobbySlot_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetWaterDepthAtLocation
struct UDH_GameplayStatics_GetWaterDepthAtLocation_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetWarship
struct UDH_GameplayStatics_GetWarship_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Warship*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetTimeOfDay
struct UDH_GameplayStatics_GetTimeOfDay_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetSyncedServerTime
struct UDH_GameplayStatics_GetSyncedServerTime_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetStartDate
struct UDH_GameplayStatics_GetStartDate_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GameplayStatics.GetSeaLevel
struct UDH_GameplayStatics_GetSeaLevel_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetRefPoseTransform
struct UDH_GameplayStatics_GetRefPoseTransform_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InMesh;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetPreskinnedRefposeTransform
struct UDH_GameplayStatics_GetPreskinnedRefposeTransform_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InMesh;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetPlayerDefaultAvatar
struct UDH_GameplayStatics_GetPlayerDefaultAvatar_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDH_PlayerCosmeticItem*>              EquippedCosmetics;                                        // (Parm, OutParm, ZeroConstructor)
	class UDH_PlayerRoleData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetParticipantPositionalAudioEnergy
struct UDH_GameplayStatics_GetParticipantPositionalAudioEnergy_Params
{
	class APlayerState*                                PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetOceanVolume
struct UDH_GameplayStatics_GetOceanVolume_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PhysicsVolume*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetObstructionRemainingStatus
struct UDH_GameplayStatics_GetObstructionRemainingStatus_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetMissionData
struct UDH_GameplayStatics_GetMissionData_Params
{
	class FString                                      MissionCode;                                              // (Parm, ZeroConstructor)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_MapData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLocalViewPosition
struct UDH_GameplayStatics_GetLocalViewPosition_Params
{
	class AActor*                                      Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLocalPawn
struct UDH_GameplayStatics_GetLocalPawn_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLocalHuman
struct UDH_GameplayStatics_GetLocalHuman_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLocalDHPlayerState
struct UDH_GameplayStatics_GetLocalDHPlayerState_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLocalDHPlayerController
struct UDH_GameplayStatics_GetLocalDHPlayerController_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLobbyPlayerCounts
struct UDH_GameplayStatics_GetLobbyPlayerCounts_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Desired;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetLobbyDestinationMission
struct UDH_GameplayStatics_GetLobbyDestinationMission_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GameplayStatics.GetLastServerReceivePacketTime
struct UDH_GameplayStatics_GetLastServerReceivePacketTime_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetKeyName
struct UDH_GameplayStatics_GetKeyName_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetGlobalTemperature
struct UDH_GameplayStatics_GetGlobalTemperature_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ETemperatureScale                                  Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetGameCompletionPct
struct UDH_GameplayStatics_GetGameCompletionPct_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDistFromIcebergSq
struct UDH_GameplayStatics_GetDistFromIcebergSq_Params
{
	class AActor*                                      TestActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHWorldSettings
struct UDH_GameplayStatics_GetDHWorldSettings_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_WorldSettings*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHPlayerStateFromUniqueNetId
struct UDH_GameplayStatics_GetDHPlayerStateFromUniqueNetId_Params
{
	struct FUniqueNetIdRepl                            InPlayerId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHPlayerState
struct UDH_GameplayStatics_GetDHPlayerState_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHPlayerController
struct UDH_GameplayStatics_GetDHPlayerController_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHPlayerCharacter
struct UDH_GameplayStatics_GetDHPlayerCharacter_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHLobbyGameState
struct UDH_GameplayStatics_GetDHLobbyGameState_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_LobbyGameState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHLobbyGameMode
struct UDH_GameplayStatics_GetDHLobbyGameMode_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_LobbyGameMode*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHHUD
struct UDH_GameplayStatics_GetDHHUD_Params
{
	class APawn*                                       Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HUD*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHGameStateBase
struct UDH_GameplayStatics_GetDHGameStateBase_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_GameStateBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHGameState
struct UDH_GameplayStatics_GetDHGameState_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_GameState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHGameModeBase
struct UDH_GameplayStatics_GetDHGameModeBase_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_GameModeBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetDHGameMode
struct UDH_GameplayStatics_GetDHGameMode_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_GameMode*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetCraftingData
struct UDH_GameplayStatics_GetCraftingData_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_CraftingData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetCollectionVectorParameterDefaultValue
struct UDH_GameplayStatics_GetCollectionVectorParameterDefaultValue_Params
{
	class UMaterialParameterCollection*                MPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultValue;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetClassDefaultObject
struct UDH_GameplayStatics_GetClassDefaultObject_Params
{
	class UObject*                                     InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetBoneClosestToHit
struct UDH_GameplayStatics_GetBoneClosestToHit_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyVisibleBones;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetBlizzardIntensity
struct UDH_GameplayStatics_GetBlizzardIntensity_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.GetArmoryCombination
struct UDH_GameplayStatics_GetArmoryCombination_Params
{
	class AActor*                                      Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GameplayStatics.GetActorPctDistanceFromMapEnd
struct UDH_GameplayStatics_GetActorPctDistanceFromMapEnd_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.FindSlopeRotation
struct UDH_GameplayStatics_FindSlopeRotation_Params
{
	struct FVector                                     FloorNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.ConstructCompleteVersion
struct UDH_GameplayStatics_ConstructCompleteVersion_Params
{
	struct FDHCompleteVersion                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_GameplayStatics.CompleteVersionToString
struct UDH_GameplayStatics_CompleteVersionToString_Params
{
	struct FDHCompleteVersion                          CompleteVersion;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GameplayStatics.ClearMPCOverrides
struct UDH_GameplayStatics_ClearMPCOverrides_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                MPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Params;                                                   // (ConstParm, Parm, ZeroConstructor)
};

// Function DreadHunger.DH_GameplayStatics.CanReceiveOnlineInvites
struct UDH_GameplayStatics_CanReceiveOnlineInvites_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.BroadcastGameplayMessage
struct UDH_GameplayStatics_BroadcastGameplayMessage_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.AttachToFloor
struct UDH_GameplayStatics_AttachToFloor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.AreVersionsCompatible
struct UDH_GameplayStatics_AreVersionsCompatible_Params
{
	struct FDHCompleteVersion                          A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDHCompleteVersion                          B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ComponentsToTest;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.AreAnyThrallsBrigged
struct UDH_GameplayStatics_AreAnyThrallsBrigged_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameplayStatics.AllowDropTableSpawns
struct UDH_GameplayStatics_AllowDropTableSpawns_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.SetWindVector
struct ADH_GameStateBase_SetWindVector_Params
{
	struct FVector                                     InWindVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.SetTimeOfDay
struct ADH_GameStateBase_SetTimeOfDay_Params
{
	float                                              InHour;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediateUpdate;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.SetHushOnPlayers
struct ADH_GameStateBase_SetHushOnPlayers_Params
{
	bool                                               bPlayersHushed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.SetBlizzardIntensity
struct ADH_GameStateBase_SetBlizzardIntensity_Params
{
	float                                              InBlizzardIntensity;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.OnSpellExpired
struct ADH_GameStateBase_OnSpellExpired_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.OnSpellCast
struct ADH_GameStateBase_OnSpellCast_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.OnRep_Warship
struct ADH_GameStateBase_OnRep_Warship_Params
{
};

// Function DreadHunger.DH_GameStateBase.OnRep_ShipObstructions
struct ADH_GameStateBase_OnRep_ShipObstructions_Params
{
};

// Function DreadHunger.DH_GameStateBase.OnRep_ActiveSpells
struct ADH_GameStateBase_OnRep_ActiveSpells_Params
{
	TArray<struct FSpellInstance>                      PreviouslyActiveSpells;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_GameStateBase.GetTimeOfDay
struct ADH_GameStateBase_GetTimeOfDay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.GetNumActiveSpellsOfType
struct ADH_GameStateBase_GetNumActiveSpellsOfType_Params
{
	class UDH_TotemSpell*                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.GetGlobalTemperature
struct ADH_GameStateBase_GetGlobalTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameStateBase.GetDate
struct ADH_GameStateBase_GetDate_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GameStateBase.GetBlizzardIntensity
struct ADH_GameStateBase_GetBlizzardIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameState.OnTotemDrainTargetsChanged
struct ADH_GameState_OnTotemDrainTargetsChanged_Params
{
	int                                                Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameState.OnRep_WinningTeam
struct ADH_GameState_OnRep_WinningTeam_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_TotemDrainCount
struct ADH_GameState_OnRep_TotemDrainCount_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_ServerVersion
struct ADH_GameState_OnRep_ServerVersion_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_PlayerVersionMismatches
struct ADH_GameState_OnRep_PlayerVersionMismatches_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_GameUniqueID
struct ADH_GameState_OnRep_GameUniqueID_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_ExpectedPlayerIDs
struct ADH_GameState_OnRep_ExpectedPlayerIDs_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_DaysUntilBlizzard
struct ADH_GameState_OnRep_DaysUntilBlizzard_Params
{
};

// Function DreadHunger.DH_GameState.OnRep_AllTotems
struct ADH_GameState_OnRep_AllTotems_Params
{
};

// Function DreadHunger.DH_GameState.GiveQuest
struct ADH_GameState_GiveQuest_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameState.GetWinningTeam
struct ADH_GameState_GetWinningTeam_Params
{
	EPlayerTeam                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameState.GetTotemDrainCount
struct ADH_GameState_GetTotemDrainCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameState.GetTotalTotemCount
struct ADH_GameState_GetTotalTotemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GameState.GetServerVersion
struct ADH_GameState_GetServerVersion_Params
{
	struct FDHCompleteVersion                          ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DreadHunger.DH_GameState.GetPlayerVersionMismatches
struct ADH_GameState_GetPlayerVersionMismatches_Params
{
	TArray<struct FDHPlayerVersionMismatch>            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DreadHunger.DH_GameState.GetAllTotems
struct ADH_GameState_GetAllTotems_Params
{
	TArray<class ADH_ThrallTotem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GameViewportClient.SetUIOnlyMode
struct UDH_GameViewportClient_SetUIOnlyMode_Params
{
	bool                                               bNewUIOnlyMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GameViewportClient.GetRelevantActionMappingKey
struct UDH_GameViewportClient_GetRelevantActionMappingKey_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePlayerKeyGroup;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_GameViewportClient.GetInputType
struct UDH_GameViewportClient_GetInputType_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EDHInputType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_GiveInventoryDebugControl.GiveInventory
struct UDH_GiveInventoryDebugControl_GiveInventory_Params
{
	class ADH_Inventory*                               InventoryClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_GoreStatics.SeverLimb
struct UDH_GoreStatics_SeverLimb_Params
{
	class ADH_Character*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneToSever;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GroundCraftingBlueprint.OnRep_AssociatedRecipe
struct ADH_GroundCraftingBlueprint_OnRep_AssociatedRecipe_Params
{
};

// Function DreadHunger.DH_GroundCraftingBlueprint.OnProjectComplete
struct ADH_GroundCraftingBlueprint_OnProjectComplete_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GroundCraftingBlueprint.Init
struct ADH_GroundCraftingBlueprint_Init_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.SpawnCraftingProject
struct UDH_GroundCraftingProjectComponent_SpawnCraftingProject_Params
{
	struct FPotentialCraftingProject                   CraftingProject;                                          // (ConstParm, Parm, ReferenceParm)
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.SetCraftingPreviewRecipe
struct UDH_GroundCraftingProjectComponent_SetCraftingPreviewRecipe_Params
{
	class UDH_CraftingRecipe*                          NewRecipe;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.SetCraftingPreview
struct UDH_GroundCraftingProjectComponent_SetCraftingPreview_Params
{
	class UDH_CraftingRecipe*                          NewRecipe;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearPreview;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.GetCraftingPreview
struct UDH_GroundCraftingProjectComponent_GetCraftingPreview_Params
{
	struct FPotentialCraftingProject                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.Get
struct UDH_GroundCraftingProjectComponent_Get_Params
{
	class AActor*                                      Owner;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_GroundCraftingProjectComponent*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.DestroyActiveCraftingProject_Simulated
struct UDH_GroundCraftingProjectComponent_DestroyActiveCraftingProject_Simulated_Params
{
};

// Function DreadHunger.DH_GroundCraftingProjectComponent.DestroyActiveCraftingProject
struct UDH_GroundCraftingProjectComponent_DestroyActiveCraftingProject_Params
{
};

// Function DreadHunger.DH_HeatSourceComponent.SetFuelPct
struct UDH_HeatSourceComponent_SetFuelPct_Params
{
	float                                              NewFuelPct;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HeatSourceComponent.OnRep_FuelAddedCount
struct UDH_HeatSourceComponent_OnRep_FuelAddedCount_Params
{
};

// Function DreadHunger.DH_HeatSourceComponent.OnFuelContributionExpired
struct UDH_HeatSourceComponent_OnFuelContributionExpired_Params
{
	class ADH_PlayerState*                             ExpiredContributor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HeatSourceComponent.InitFrom
struct UDH_HeatSourceComponent_InitFrom_Params
{
	class UDH_HeatSourceComponent*                     Other;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_HeatSourceComponent.HasFuel
struct UDH_HeatSourceComponent_HasFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HeatSourceComponent.GetFuelPct
struct UDH_HeatSourceComponent_GetFuelPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HeatSourceComponent.AddFuel
struct UDH_HeatSourceComponent_AddFuel_Params
{
	class AActor*                                      Fuel;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             FuelContributor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeNonFuelItems;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeFuel;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackLimit;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScoreConsumption;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsJsonSaveData.WasSpellMenuUsed
struct UDH_HintsJsonSaveData_WasSpellMenuUsed_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsJsonSaveData.WasSpellMenuOpened
struct UDH_HintsJsonSaveData_WasSpellMenuOpened_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsJsonSaveData.WasJournalOpened
struct UDH_HintsJsonSaveData_WasJournalOpened_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsJsonSaveData.WasCraftingMenuUsed
struct UDH_HintsJsonSaveData_WasCraftingMenuUsed_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsJsonSaveData.GetInstance
struct UDH_HintsJsonSaveData_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_HintsJsonSaveData*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsSaveGame.WasSpellMenuUsed
struct UDH_HintsSaveGame_WasSpellMenuUsed_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsSaveGame.WasSpellMenuOpened
struct UDH_HintsSaveGame_WasSpellMenuOpened_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsSaveGame.WasJournalOpened
struct UDH_HintsSaveGame_WasJournalOpened_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HintsSaveGame.WasCraftingMenuUsed
struct UDH_HintsSaveGame_WasCraftingMenuUsed_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HitMarkersWidget.Log
struct UDH_HitMarkersWidget_Log_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_HUD.OnXPProgressUpdated
struct ADH_HUD_OnXPProgressUpdated_Params
{
	struct FDH_XPProgressData                          InData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_HUD.OnGameVictoryWidgetHidden
struct ADH_HUD_OnGameVictoryWidgetHidden_Params
{
};

// Function DreadHunger.DH_HUD.GetGameMessageVisibility
struct ADH_HUD_GetGameMessageVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HUD.CreateMatchEndMessage
struct ADH_HUD_CreateMatchEndMessage_Params
{
	EPlayerTeam                                        WinningTeam;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWinner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HullBreach.OnRepaired
struct ADH_HullBreach_OnRepaired_Params
{
	class UDH_CraftingProject*                         Project;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Results;                                                  // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_HumanAnimInstance.GetLastInventoryAnimState
struct UDH_HumanAnimInstance_GetLastInventoryAnimState_Params
{
	EInventoryAnimMontageState                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanAnimInstance.GetCurrentInventoryAnimState
struct UDH_HumanAnimInstance_GetCurrentInventoryAnimState_Params
{
	EInventoryAnimMontageState                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.ShouldSpawnAsGhost
struct ADH_HumanCharacter_ShouldSpawnAsGhost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.SetNameOverride
struct ADH_HumanCharacter_SetNameOverride_Params
{
	class FString                                      NewName;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function DreadHunger.DH_HumanCharacter.SetIsSpiritWalking
struct ADH_HumanCharacter_SetIsSpiritWalking_Params
{
	bool                                               bNewIsSpiritWalking;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.SetIncapacitated
struct ADH_HumanCharacter_SetIncapacitated_Params
{
	bool                                               bNewIncapacitated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.SetCurrentWarmth
struct ADH_HumanCharacter_SetCurrentWarmth_Params
{
	float                                              NewWarmth;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.SetCurrentHunger
struct ADH_HumanCharacter_SetCurrentHunger_Params
{
	float                                              NewHunger;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.SetAvatarOverride
struct ADH_HumanCharacter_SetAvatarOverride_Params
{
	class ADH_PlayerState*                             NewAvatar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.PlayVomitEffects
struct ADH_HumanCharacter_PlayVomitEffects_Params
{
};

// Function DreadHunger.DH_HumanCharacter.PlayDialogue
struct ADH_HumanCharacter_PlayDialogue_Params
{
	class UDialogueWave*                               InDialogueWave;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.OnVomitParticleImpact
struct ADH_HumanCharacter_OnVomitParticleImpact_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.OnRoleAssigned
struct ADH_HumanCharacter_OnRoleAssigned_Params
{
	class ADH_PlayerState*                             PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.OnRep_WarmthBoostRemaining
struct ADH_HumanCharacter_OnRep_WarmthBoostRemaining_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_SpiritWalking
struct ADH_HumanCharacter_OnRep_SpiritWalking_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_MeleeHitFlash
struct ADH_HumanCharacter_OnRep_MeleeHitFlash_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_MarkedForWendigoAttack
struct ADH_HumanCharacter_OnRep_MarkedForWendigoAttack_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_LastDHPlayerState
struct ADH_HumanCharacter_OnRep_LastDHPlayerState_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_JumpCount
struct ADH_HumanCharacter_OnRep_JumpCount_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_IsSprinting
struct ADH_HumanCharacter_OnRep_IsSprinting_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_IsIncapacitated
struct ADH_HumanCharacter_OnRep_IsIncapacitated_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_IsAiming
struct ADH_HumanCharacter_OnRep_IsAiming_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_InteractTarget
struct ADH_HumanCharacter_OnRep_InteractTarget_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_HungerIncreasing
struct ADH_HumanCharacter_OnRep_HungerIncreasing_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_GrabbedPickup
struct ADH_HumanCharacter_OnRep_GrabbedPickup_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentWarmth
struct ADH_HumanCharacter_OnRep_CurrentWarmth_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentTemperature
struct ADH_HumanCharacter_OnRep_CurrentTemperature_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentReviver
struct ADH_HumanCharacter_OnRep_CurrentReviver_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentHunger
struct ADH_HumanCharacter_OnRep_CurrentHunger_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_ControlledShip
struct ADH_HumanCharacter_OnRep_ControlledShip_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_CarryingPawn
struct ADH_HumanCharacter_OnRep_CarryingPawn_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnRep_AvatarOverride
struct ADH_HumanCharacter_OnRep_AvatarOverride_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnProjectileSpawnFlashReplicated
struct ADH_HumanCharacter_OnProjectileSpawnFlashReplicated_Params
{
};

// Function DreadHunger.DH_HumanCharacter.OnHallucinationDestroyed
struct ADH_HumanCharacter_OnHallucinationDestroyed_Params
{
	class AActor*                                      DestroyedHallucination;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.OnCarriedPawnInvRemoved
struct ADH_HumanCharacter_OnCarriedPawnInvRemoved_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.OnCarriedPawnDied
struct ADH_HumanCharacter_OnCarriedPawnDied_Params
{
	class ADH_Character*                               DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.ModifyStamina
struct ADH_HumanCharacter_ModifyStamina_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.ModifyHealthBoostRemaining
struct ADH_HumanCharacter_ModifyHealthBoostRemaining_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             Creditor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsUsingInventory
struct ADH_HumanCharacter_IsUsingInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsThrall
struct ADH_HumanCharacter_IsThrall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsSpiritWalking
struct ADH_HumanCharacter_IsSpiritWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsResting
struct ADH_HumanCharacter_IsResting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsReloadingInventory
struct ADH_HumanCharacter_IsReloadingInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsOnShip
struct ADH_HumanCharacter_IsOnShip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsIncapacitated
struct ADH_HumanCharacter_IsIncapacitated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsDrivingShip
struct ADH_HumanCharacter_IsDrivingShip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsDoppelganger
struct ADH_HumanCharacter_IsDoppelganger_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsCarryingPawn
struct ADH_HumanCharacter_IsCarryingPawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsBeingCarried
struct ADH_HumanCharacter_IsBeingCarried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.IsAiming
struct ADH_HumanCharacter_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.InventoryChanged
struct ADH_HumanCharacter_InventoryChanged_Params
{
	class ADH_Inventory*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetWarmthRateOfChange
struct ADH_HumanCharacter_GetWarmthRateOfChange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetWarmthBoostRemaining
struct ADH_HumanCharacter_GetWarmthBoostRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetTeamRole
struct ADH_HumanCharacter_GetTeamRole_Params
{
	EPlayerTeamRole                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetShadowAnimInst
struct ADH_HumanCharacter_GetShadowAnimInst_Params
{
	class UDH_HumanAnimInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetSelectedInventoryView
struct ADH_HumanCharacter_GetSelectedInventoryView_Params
{
	class ADH_InventoryView*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetSelectedInventory
struct ADH_HumanCharacter_GetSelectedInventory_Params
{
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetSanityBoostRemaining
struct ADH_HumanCharacter_GetSanityBoostRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetPoisoned
struct ADH_HumanCharacter_GetPoisoned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetPendingInventorySelection
struct ADH_HumanCharacter_GetPendingInventorySelection_Params
{
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetNameOverride
struct ADH_HumanCharacter_GetNameOverride_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_HumanCharacter.GetMaximumStamina
struct ADH_HumanCharacter_GetMaximumStamina_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetLastSpiritWalkStartTime
struct ADH_HumanCharacter_GetLastSpiritWalkStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetHungerIncreasing
struct ADH_HumanCharacter_GetHungerIncreasing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetHungerBoostRemaining
struct ADH_HumanCharacter_GetHungerBoostRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetHumanMovement
struct ADH_HumanCharacter_GetHumanMovement_Params
{
	class UDH_HumanMovementComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetHumanAnimInst
struct ADH_HumanCharacter_GetHumanAnimInst_Params
{
	class UDH_HumanAnimInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetHealthBoostRemaining
struct ADH_HumanCharacter_GetHealthBoostRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetGroundCraftingRecipes
struct ADH_HumanCharacter_GetGroundCraftingRecipes_Params
{
	TArray<class UDH_CraftingRecipe*>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_HumanCharacter.GetCurrentWarmth
struct ADH_HumanCharacter_GetCurrentWarmth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCurrentTemperature
struct ADH_HumanCharacter_GetCurrentTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCurrentSanity
struct ADH_HumanCharacter_GetCurrentSanity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCurrentName
struct ADH_HumanCharacter_GetCurrentName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_HumanCharacter.GetCurrentHunger
struct ADH_HumanCharacter_GetCurrentHunger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCurrentAvatar
struct ADH_HumanCharacter_GetCurrentAvatar_Params
{
	class UDH_PlayerRoleData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCraftingComponent
struct ADH_HumanCharacter_GetCraftingComponent_Params
{
	class UDH_CraftingComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCarryingPawn
struct ADH_HumanCharacter_GetCarryingPawn_Params
{
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCarriedPawnInv
struct ADH_HumanCharacter_GetCarriedPawnInv_Params
{
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetCarriedPawn
struct ADH_HumanCharacter_GetCarriedPawn_Params
{
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.GetAvatarOverride
struct ADH_HumanCharacter_GetAvatarOverride_Params
{
	class ADH_PlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.DropCarriedPawn
struct ADH_HumanCharacter_DropCarriedPawn_Params
{
	struct FVector                                     DropVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFindDropLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.CreateDoppelganger
struct ADH_HumanCharacter_CreateDoppelganger_Params
{
	class ADH_PlayerController*                        InstigatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.ClearAvatarOverride
struct ADH_HumanCharacter_ClearAvatarOverride_Params
{
};

// Function DreadHunger.DH_HumanCharacter.CanUseGroundCraftingRadial
struct ADH_HumanCharacter_CanUseGroundCraftingRadial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_HumanCharacter.ApplyPendingPoison
struct ADH_HumanCharacter_ApplyPendingPoison_Params
{
	class ADH_PlayerState*                             Creditor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Iceberg_Large.OnRep_RemovedChunks
struct ADH_Iceberg_Large_OnRep_RemovedChunks_Params
{
};

// Function DreadHunger.DH_Iceberg_Small.CrumbleChunks
struct ADH_Iceberg_Small_CrumbleChunks_Params
{
};

// Function DreadHunger.DH_ImpactEffect.PlayImpact
struct UDH_ImpactEffect_PlayImpact_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_ImpactEffect.GetImpactEffects
struct UDH_ImpactEffect_GetImpactEffects_Params
{
	TEnumAsByte<EPhysicalSurface>                      ImpactedSurface;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasScrape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffect                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_ImpactEffect.GetFromPM
struct UDH_ImpactEffect_GetFromPM_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_ImpactEffect*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_ImpactEffect.GetFromDT
struct UDH_ImpactEffect_GetFromDT_Params
{
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_ImpactEffect*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_ImpactEffectManager.OnImpactInstigatorDestroyed
struct ADH_ImpactEffectManager_OnImpactInstigatorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InputModeComponent.Reset
struct UDH_InputModeComponent_Reset_Params
{
};

// Function DreadHunger.DH_InputModeComponent.PushUIInputMode
struct UDH_InputModeComponent_PushUIInputMode_Params
{
	class UWidget*                                     WidgetToFocus;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameAndUI;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InputModeComponent.PopUIInputMode
struct UDH_InputModeComponent_PopUIInputMode_Params
{
	class UWidget*                                     WidgetToUnfocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InteractComponent.StopInteracting
struct UDH_InteractComponent_StopInteracting_Params
{
};

// Function DreadHunger.DH_InteractComponent.OnRep_LockedInteractTarget
struct UDH_InteractComponent_OnRep_LockedInteractTarget_Params
{
};

// Function DreadHunger.DH_InteractComponent.OnRep_InteractionCounter
struct UDH_InteractComponent_OnRep_InteractionCounter_Params
{
};

// Function DreadHunger.DH_InteractComponent.NotEqual_InteractPermissionsInteractPermissions
struct UDH_InteractComponent_NotEqual_InteractPermissionsInteractPermissions_Params
{
	struct FDH_InteractPermissions                     A;                                                        // (Parm)
	struct FDH_InteractPermissions                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractComponent.InteractPermissions_NoPermission
struct UDH_InteractComponent_InteractPermissions_NoPermission_Params
{
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InteractComponent.InteractPermissions_FullPermission
struct UDH_InteractComponent_InteractPermissions_FullPermission_Params
{
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InteractComponent.InteractPermissions_CanOnlyLook
struct UDH_InteractComponent_InteractPermissions_CanOnlyLook_Params
{
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InteractComponent.Interact
struct UDH_InteractComponent_Interact_Params
{
	class UPrimitiveComponent*                         InteractTarget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InteractComponent.GetCurrentInteractTarget
struct UDH_InteractComponent_GetCurrentInteractTarget_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InteractComponent.EqualEqual_InteractPermissionsInteractPermissions
struct UDH_InteractComponent_EqualEqual_InteractPermissionsInteractPermissions_Params
{
	struct FDH_InteractPermissions                     A;                                                        // (Parm)
	struct FDH_InteractPermissions                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractionInterface.UsePreciseInteractions
struct UDH_InteractionInterface_UsePreciseInteractions_Params
{
	class UPrimitiveComponent*                         TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractionInterface.OnInteract
struct UDH_InteractionInterface_OnInteract_Params
{
	class AController*                                 InteractInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractionInterface.GetKeybindInteractText
struct UDH_InteractionInterface_GetKeybindInteractText_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDH_KeybindInteractionMessage               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InteractionInterface.GetInteractTime
struct UDH_InteractionInterface_GetInteractTime_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractionInterface.GetInteractPriority
struct UDH_InteractionInterface_GetInteractPriority_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractionInterface.GetInteractFailedMessage
struct UDH_InteractionInterface_GetInteractFailedMessage_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InteractionInterface.GetFriendlyName
struct UDH_InteractionInterface_GetFriendlyName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InteractionInterface.CanBeInteractedWithThroughWalls
struct UDH_InteractionInterface_CanBeInteractedWithThroughWalls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InteractionInterface.CanBeInteractedWith
struct UDH_InteractionInterface_CanBeInteractedWith_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDH_InteractPermissions                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryManager.UseInventory
struct UDH_InventoryManager_UseInventory_Params
{
	struct FTransform                                  UseTransform;                                             // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	unsigned char                                      UseState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.UpdateInventoryUsedCounter
struct UDH_InventoryManager_UpdateInventoryUsedCounter_Params
{
	unsigned char                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.ThrowSelectedInventory
struct UDH_InventoryManager_ThrowSelectedInventory_Params
{
};

// Function DreadHunger.DH_InventoryManager.SetTransactionRules
struct UDH_InventoryManager_SetTransactionRules_Params
{
	EInventoryTransactionRules                         NewRules;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.SetStorageLimit
struct UDH_InventoryManager_SetStorageLimit_Params
{
	int                                                NewLimit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.SelectInventory_Simulated
struct UDH_InventoryManager_SelectInventory_Simulated_Params
{
	struct FInventorySelection                         InvToSelect;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.SelectInventory
struct UDH_InventoryManager_SelectInventory_Params
{
	struct FInventorySelection                         InvToSelect;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function DreadHunger.DH_InventoryManager.ReloadInventory
struct UDH_InventoryManager_ReloadInventory_Params
{
};

// Function DreadHunger.DH_InventoryManager.OwnerDestroyed
struct UDH_InventoryManager_OwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.OnRep_UsedInventoryCount
struct UDH_InventoryManager_OnRep_UsedInventoryCount_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_TransactingInventory
struct UDH_InventoryManager_OnRep_TransactingInventory_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_StoredInventory
struct UDH_InventoryManager_OnRep_StoredInventory_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_StorageLimit
struct UDH_InventoryManager_OnRep_StorageLimit_Params
{
	int                                                PreviousLimit;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.OnRep_SelectedInventoryViewClass
struct UDH_InventoryManager_OnRep_SelectedInventoryViewClass_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_SelectedInventoryCount
struct UDH_InventoryManager_OnRep_SelectedInventoryCount_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_ReloadInventoryCount
struct UDH_InventoryManager_OnRep_ReloadInventoryCount_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_LastAppliedInventory
struct UDH_InventoryManager_OnRep_LastAppliedInventory_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_InventoryContents
struct UDH_InventoryManager_OnRep_InventoryContents_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnRep_DroppedInventoryCount
struct UDH_InventoryManager_OnRep_DroppedInventoryCount_Params
{
};

// Function DreadHunger.DH_InventoryManager.OnInventoryDestroyed
struct UDH_InventoryManager_OnInventoryDestroyed_Params
{
	class AActor*                                      DestroyedInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.IsTransacting
struct UDH_InventoryManager_IsTransacting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.IsFullyLooted
struct UDH_InventoryManager_IsFullyLooted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.IsControllerTheSameAsTransactingController
struct UDH_InventoryManager_IsControllerTheSameAsTransactingController_Params
{
	class AController*                                 InController;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.HolsterInventory
struct UDH_InventoryManager_HolsterInventory_Params
{
	bool                                               bHolster;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetTransactionRules
struct UDH_InventoryManager_GetTransactionRules_Params
{
	EInventoryTransactionRules                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetStoredInventoryUpToAmount
struct UDH_InventoryManager_GetStoredInventoryUpToAmount_Params
{
	EInventoryType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ADH_Inventory*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_InventoryManager.GetStoredInventory
struct UDH_InventoryManager_GetStoredInventory_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetStorageLimit
struct UDH_InventoryManager_GetStorageLimit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetSelectedInventoryView
struct UDH_InventoryManager_GetSelectedInventoryView_Params
{
	class ADH_InventoryView*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetQuantityOfInventory
struct UDH_InventoryManager_GetQuantityOfInventory_Params
{
	EInventoryType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPoisoned;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetCantTransactMessage
struct UDH_InventoryManager_GetCantTransactMessage_Params
{
	struct FText                                       ObjectName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_InventoryManager.GetBestAvailableSlot
struct UDH_InventoryManager_GetBestAvailableSlot_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStackWithClean;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.GetAssociatedWidget
struct UDH_InventoryManager_GetAssociatedWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.FindInventory
struct UDH_InventoryManager_FindInventory_Params
{
	class UObject*                                     InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClosestToIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.EndTransaction
struct UDH_InventoryManager_EndTransaction_Params
{
};

// Function DreadHunger.DH_InventoryManager.DropInventory
struct UDH_InventoryManager_DropInventory_Params
{
	struct FInventorySelection                         InvToDrop;                                                // (ConstParm, Parm, ReferenceParm)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumToDrop;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bThrow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDropMethod                               DropMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.CopyAllInventory
struct UDH_InventoryManager_CopyAllInventory_Params
{
	class UDH_InventoryManager*                        Recipient;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.BeginTransaction
struct UDH_InventoryManager_BeginTransaction_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.AimInventory_Simulated
struct UDH_InventoryManager_AimInventory_Simulated_Params
{
	bool                                               bNewWantsToAim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.AimInventory
struct UDH_InventoryManager_AimInventory_Params
{
	bool                                               bNewWantsToAim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.AddRandomInventoryFromList
struct UDH_InventoryManager_AddRandomInventoryFromList_Params
{
	TMap<class ADH_Inventory*, int>                    InventoryList;                                            // (Parm, OutParm, ReferenceParm)
	bool                                               bSpawnAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryManager.AddInventoryFromTable
struct UDH_InventoryManager_AddInventoryFromTable_Params
{
	class UDH_DropTable*                               DropTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               TrinketToSpawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryType                                     IgnoredType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ADH_Inventory*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_InventoryManager.AddInventory
struct UDH_InventoryManager_AddInventory_Params
{
	class UObject*                                     ItemToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryItemState>                 ItemStates;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumItemsAdded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredSlotIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredSlotOnly;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExpandToFit;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGeneratedByproduct;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlushNetDormancy;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       CreatedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddWholeStack;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryTransactionComponent.ShowLootInterface
struct UDH_InventoryTransactionComponent_ShowLootInterface_Params
{
	class UDH_InventoryManager*                        LootManager;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryTransactionComponent.OnInventoryTransactionEnded
struct UDH_InventoryTransactionComponent_OnInventoryTransactionEnded_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryTransactionComponent.IsLootInterfaceOpen
struct UDH_InventoryTransactionComponent_IsLootInterfaceOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryTransactionComponent.HideLootInterface
struct UDH_InventoryTransactionComponent_HideLootInterface_Params
{
};

// Function DreadHunger.DH_InventoryTransactionComponent.HandleLootClosure
struct UDH_InventoryTransactionComponent_HandleLootClosure_Params
{
	struct FKey                                        InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDH_GameViewportClient*                      InViewportClient;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryTransactionComponent.Get
struct UDH_InventoryTransactionComponent_Get_Params
{
	class AController*                                 InController;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryTransactionComponent*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_InventoryTransactionComponent.EndInventoryTransaction
struct UDH_InventoryTransactionComponent_EndInventoryTransaction_Params
{
};

// Function DreadHunger.DH_InventoryTransactionComponent.CloseLootInterface
struct UDH_InventoryTransactionComponent_CloseLootInterface_Params
{
};

// Function DreadHunger.DH_InventoryTransactionComponent.BeginInventoryTransaction
struct UDH_InventoryTransactionComponent_BeginInventoryTransaction_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyGameMode.RemoveOrphanExemption
struct ADH_LobbyGameMode_RemoveOrphanExemption_Params
{
	class FString                                      InOrphanExemption;                                        // (ConstParm, Parm, ZeroConstructor)
};

// Function DreadHunger.DH_LobbyGameState.UpdateShipMPCs
struct ADH_LobbyGameState_UpdateShipMPCs_Params
{
};

// Function DreadHunger.DH_LobbyGameState.ReceivedReplayData
struct ADH_LobbyGameState_ReceivedReplayData_Params
{
	class FString                                      MatchID;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReplayBuffer;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_LobbyGameState.OnRep_CurrentSessionSettings
struct ADH_LobbyGameState_OnRep_CurrentSessionSettings_Params
{
};

// Function DreadHunger.DH_LobbyGameState.OnPlayerOnShipChanged
struct ADH_LobbyGameState_OnPlayerOnShipChanged_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyGameState.OnMerchantShopVisibilityChanged
struct ADH_LobbyGameState_OnMerchantShopVisibilityChanged_Params
{
	EDH_EntitlementsShopType                           ShopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.UpdateLookTarget
struct ADH_LobbyPawn_UpdateLookTarget_Params
{
	struct FVector                                     NewLookTarget;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.SimulatedPlayEmote
struct ADH_LobbyPawn_SimulatedPlayEmote_Params
{
	class UDH_LobbyEmote*                              Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.SetIsHoveringCards
struct ADH_LobbyPawn_SetIsHoveringCards_Params
{
	bool                                               bWantsToHover;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.SetFaceCaptureRT
struct ADH_LobbyPawn_SetFaceCaptureRT_Params
{
	class UTextureRenderTarget2D*                      InFaceCaptureRT;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.ServerPlayEmote
struct ADH_LobbyPawn_ServerPlayEmote_Params
{
	class UDH_LobbyEmote*                              Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.RequestRedraw
struct ADH_LobbyPawn_RequestRedraw_Params
{
	struct FPlayingCardProperties                      OldCard;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function DreadHunger.DH_LobbyPawn.OnRoleAssigned
struct ADH_LobbyPawn_OnRoleAssigned_Params
{
	class ADH_PlayerState*                             PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.MulticastPlayEmote
struct ADH_LobbyPawn_MulticastPlayEmote_Params
{
	class UDH_LobbyEmote*                              Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.GetSelectedCardIndex
struct ADH_LobbyPawn_GetSelectedCardIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.GetSelectedCard
struct ADH_LobbyPawn_GetSelectedCard_Params
{
	class ADH_PlayingCard*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.GetPostProcessInteractStackNum
struct ADH_LobbyPawn_GetPostProcessInteractStackNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.GetLobbyPawnAnimInst
struct ADH_LobbyPawn_GetLobbyPawnAnimInst_Params
{
	class UDH_LobbyPawnAnimInstance*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.GetFaceCaptureRT
struct ADH_LobbyPawn_GetFaceCaptureRT_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.GetFaceCaptureComponent
struct ADH_LobbyPawn_GetFaceCaptureComponent_Params
{
	class USceneCaptureComponent2D*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_LobbyPawn.ChooseSelectedRoleCard
struct ADH_LobbyPawn_ChooseSelectedRoleCard_Params
{
};

// Function DreadHunger.DH_LobbyPawn.BP_OnPostProcessInteractStackChanged
struct ADH_LobbyPawn_BP_OnPostProcessInteractStackChanged_Params
{
};

// Function DreadHunger.DH_LobbyPawn.BP_OnCaptureFace
struct ADH_LobbyPawn_BP_OnCaptureFace_Params
{
};

// Function DreadHunger.DH_LoginHandler.OnLoginFinished
struct UDH_LoginHandler_OnLoginFinished_Params
{
};

// Function DreadHunger.DH_LoginHandler.CanAcceptInvites
struct UDH_LoginHandler_CanAcceptInvites_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_LoginStepReconnect.OnDeclinedReconnect
struct UDH_LoginStepReconnect_OnDeclinedReconnect_Params
{
};

// Function DreadHunger.DH_LoginStepReconnect.OnAcceptedReconnect
struct UDH_LoginStepReconnect_OnAcceptedReconnect_Params
{
};

// Function DreadHunger.DH_LoginStepRestoreInvites.OnSessionUserInviteAcceptedFailed
struct UDH_LoginStepRestoreInvites_OnSessionUserInviteAcceptedFailed_Params
{
};

// Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineSessionJoinSessionComplete
struct UDH_LoginStepRestoreInvites_OnOnlineSessionJoinSessionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineSessionGameHasStarted
struct UDH_LoginStepRestoreInvites_OnOnlineSessionGameHasStarted_Params
{
};

// Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineRestoreInvitesComplete
struct UDH_LoginStepRestoreInvites_OnOnlineRestoreInvitesComplete_Params
{
	EDH_RestoreInvitesResult                           Result;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LoginStepRestoreInvites.OnLobbyInviteReceivedWidgetShown
struct UDH_LoginStepRestoreInvites_OnLobbyInviteReceivedWidgetShown_Params
{
};

// Function DreadHunger.DH_LoginStepSessionLogin.OnlineSessionCreateComplete
struct UDH_LoginStepSessionLogin_OnlineSessionCreateComplete_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_LoginStepUpdatePlayerCloudData.OnSaveConversionCompleteDelegate
struct UDH_LoginStepUpdatePlayerCloudData_OnSaveConversionCompleteDelegate_Params
{
};

// Function DreadHunger.DH_LoginStepUpdatePlayerCloudData.OnLoadedUserCloudSaveObject
struct UDH_LoginStepUpdatePlayerCloudData_OnLoadedUserCloudSaveObject_Params
{
	class UDH_UserCloudSaveObject*                     LoadedObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_LogStatics.LogUI
struct UDH_LogStatics_LogUI_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm)
	EDH_LogVerbosity                                   Verbosity;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_MapData.GetIndex
struct UDH_MapData_GetIndex_Params
{
	class FString                                      InCode;                                                   // (Parm, ZeroConstructor)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MapData.GetCurrent
struct UDH_MapData_GetCurrent_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_MapData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MapData.Find
struct UDH_MapData_Find_Params
{
	class FString                                      InCode;                                                   // (Parm, ZeroConstructor)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_MapData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MatchReplay.GetReplayFiles
struct UDH_MatchReplay_GetReplayFiles_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_MatchReplay.GetReplayDir
struct UDH_MatchReplay_GetReplayDir_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_MatchReplay.GetMapData
struct UDH_MatchReplay_GetMapData_Params
{
	class UDH_MapData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MatchReplay.GetCurrent
struct UDH_MatchReplay_GetCurrent_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_MatchReplay*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MatchReplay.Create
struct UDH_MatchReplay_Create_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_MatchReplay*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Merchant.OnShopUIVisibilityChanged
struct ADH_Merchant_OnShopUIVisibilityChanged_Params
{
	EDH_EntitlementsShopType                           InShopType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Merchant.OnReceivedDLCPrices
struct ADH_Merchant_OnReceivedDLCPrices_Params
{
	struct FDH_PriceDataWrapper                        PriceData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.TotemVictimCountChangedSignature__DelegateSignature
struct UDH_MessageBus_TotemVictimCountChangedSignature__DelegateSignature_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.TotemCountChangedSignature__DelegateSignature
struct UDH_MessageBus_TotemCountChangedSignature__DelegateSignature_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.ShowSaveConversionPopupSignature__DelegateSignature
struct UDH_MessageBus_ShowSaveConversionPopupSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.ShowLoadingScreenSignature__DelegateSignature
struct UDH_MessageBus_ShowLoadingScreenSignature__DelegateSignature_Params
{
	TScriptInterface<class UDH_LoadingScreenInterface> Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.ShowConnectToIPAddressWidgetSignature__DelegateSignature
struct UDH_MessageBus_ShowConnectToIPAddressWidgetSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.RemoveWidgetFromHUDSignature__DelegateSignature
struct UDH_MessageBus_RemoveWidgetFromHUDSignature__DelegateSignature_Params
{
	class UUserWidget*                                 WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnXPProgressUpdatedSignature__DelegateSignature
struct UDH_MessageBus_OnXPProgressUpdatedSignature__DelegateSignature_Params
{
	struct FDH_XPProgressData                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature
struct UDH_MessageBus_OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature_Params
{
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature
struct UDH_MessageBus_OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature_Params
{
	class UDH_WidgetAnimationHandler*                  AnimationHandler;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipSankSignature__DelegateSignature
struct UDH_MessageBus_OnWarshipSankSignature__DelegateSignature_Params
{
	class ADH_Warship*                                 Warship;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipHullIntegrityChangedSignature__DelegateSignature
struct UDH_MessageBus_OnWarshipHullIntegrityChangedSignature__DelegateSignature_Params
{
	class ADH_Warship*                                 Warship;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipChangedSignature__DelegateSignature
struct UDH_MessageBus_OnWarshipChangedSignature__DelegateSignature_Params
{
	class ADH_Warship*                                 Warship;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerSabotagedSignature__DelegateSignature
struct UDH_MessageBus_OnWarshipBoilerSabotagedSignature__DelegateSignature_Params
{
	int                                                SabotageUnits;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerFueledSignature__DelegateSignature
struct UDH_MessageBus_OnWarshipBoilerFueledSignature__DelegateSignature_Params
{
	int                                                PiecesAdded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerChangedSignature__DelegateSignature
struct UDH_MessageBus_OnWarshipBoilerChangedSignature__DelegateSignature_Params
{
	class ADH_WarshipBoiler*                           Boiler;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnWantsToTalkSignature__DelegateSignature
struct UDH_MessageBus_OnWantsToTalkSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToTalk;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVoiceChatParticipantChangedSignature__DelegateSignature
struct UDH_MessageBus_OnVoiceChatParticipantChangedSignature__DelegateSignature_Params
{
	class FString                                      AccountName;                                              // (Parm, ZeroConstructor)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxShowEchoTestSignature__DelegateSignature
struct UDH_MessageBus_OnVivoxShowEchoTestSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoginRetrySignature__DelegateSignature
struct UDH_MessageBus_OnVivoxLoginRetrySignature__DelegateSignature_Params
{
	float                                              RetryTimeSeconds;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoggedOutSignature__DelegateSignature
struct UDH_MessageBus_OnVivoxLoggedOutSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoggedInSignature__DelegateSignature
struct UDH_MessageBus_OnVivoxLoggedInSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxErrorsUpdatedSignature__DelegateSignature
struct UDH_MessageBus_OnVivoxErrorsUpdatedSignature__DelegateSignature_Params
{
	TArray<struct FDH_VivoxError>                      Errors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnVisibilityTagsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnVisibilityTagsChangedSignature__DelegateSignature_Params
{
	class UDH_UIVisibilityTagHandler*                  TagHandler;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnUpdateTotemTargetsChangedDelegate__DelegateSignature
struct UDH_MessageBus_OnUpdateTotemTargetsChangedDelegate__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnUIModeChanged__DelegateSignature
struct UDH_MessageBus_OnUIModeChanged__DelegateSignature_Params
{
	bool                                               bIsUIOnlyMode;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature_Params
{
	class ADH_TutorialTriggerVolume*                   Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialObjectiveCompletedSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialObjectiveCompletedSignature__DelegateSignature_Params
{
	class UDH_TutorialObjective*                       Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialObjectiveChangedSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialObjectiveChangedSignature__DelegateSignature_Params
{
	class UDH_TutorialObjective*                       Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialIntroScreenHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialIntroScreenHiddenSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialConceptClosedSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialConceptClosedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialConceptChangedSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialConceptChangedSignature__DelegateSignature_Params
{
	struct FName                                       Concept;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialChapterChangedSignature__DelegateSignature
struct UDH_MessageBus_OnTutorialChapterChangedSignature__DelegateSignature_Params
{
	class UDH_TutorialChapter*                         Chapter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTransactingInventoryChangedSignature__DelegateSignature
struct UDH_MessageBus_OnTransactingInventoryChangedSignature__DelegateSignature_Params
{
	class UDH_InventoryTransactionComponent*           InventoryTransactionComponent;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature
struct UDH_MessageBus_OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnTitleScreenHiddenSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenChoseTutorialSignature__DelegateSignature
struct UDH_MessageBus_OnTitleScreenChoseTutorialSignature__DelegateSignature_Params
{
	bool                                               bDesiresTutorial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTitlePlayerInputCapturedSignature__DelegateSignature
struct UDH_MessageBus_OnTitlePlayerInputCapturedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTitleDataLoadedSignature__DelegateSignature
struct UDH_MessageBus_OnTitleDataLoadedSignature__DelegateSignature_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	class UDH_TitleData*                               TitleData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnThrallSpellExpiredSignature__DelegateSignature
struct UDH_MessageBus_OnThrallSpellExpiredSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnThrallSpellCastSignature__DelegateSignature
struct UDH_MessageBus_OnThrallSpellCastSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTalismanDraggedWidgetEndSignature__DelegateSignature
struct UDH_MessageBus_OnTalismanDraggedWidgetEndSignature__DelegateSignature_Params
{
	class UDH_PlayerTalisman*                          Talisman;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnTalismanDraggedWidgetBeginSignature__DelegateSignature
struct UDH_MessageBus_OnTalismanDraggedWidgetBeginSignature__DelegateSignature_Params
{
	class UDH_PlayerTalisman*                          Talisman;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSuccessfulTransferSignature__DelegateSignature
struct UDH_MessageBus_OnSuccessfulTransferSignature__DelegateSignature_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 SourceInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSuccessfulQuickTransferDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnSuccessfulQuickTransferDelegateSignature__DelegateSignature_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 TargetInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// SparseDelegateFunction DreadHunger.DH_MessageBus.OnStreamerModeChangedSignature__DelegateSignature
struct UDH_MessageBus_OnStreamerModeChangedSignature__DelegateSignature_Params
{
	bool                                               bStreamerMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnStopOnlineVoiceSuccessSignature__DelegateSignature
struct UDH_MessageBus_OnStopOnlineVoiceSuccessSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpyingChangedSignature__DelegateSignature
struct UDH_MessageBus_OnSpyingChangedSignature__DelegateSignature_Params
{
	bool                                               bInSpying;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpiritWalkingChangedSignature__DelegateSignature
struct UDH_MessageBus_OnSpiritWalkingChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpiedTargetChangedSignature__DelegateSignature
struct UDH_MessageBus_OnSpiedTargetChangedSignature__DelegateSignature_Params
{
	class AActor*                                      SpiedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpellWidgetMouseLeaveSignature__DelegateSignature
struct UDH_MessageBus_OnSpellWidgetMouseLeaveSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpellWidgetMouseEnterSignature__DelegateSignature
struct UDH_MessageBus_OnSpellWidgetMouseEnterSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpellSelectionSignature__DelegateSignature
struct UDH_MessageBus_OnSpellSelectionSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpellDraggedWidgetEndSignature__DelegateSignature
struct UDH_MessageBus_OnSpellDraggedWidgetEndSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpellDraggedWidgetBeginSignature__DelegateSignature
struct UDH_MessageBus_OnSpellDraggedWidgetBeginSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSpellCooldownsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnSpellCooldownsChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShowScoreboardSignature__DelegateSignature
struct UDH_MessageBus_OnShowScoreboardSignature__DelegateSignature_Params
{
	bool                                               bShowScoreboard;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplayJustLoaded;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShowRoleCustomizationSignature__DelegateSignature
struct UDH_MessageBus_OnShowRoleCustomizationSignature__DelegateSignature_Params
{
	bool                                               bShow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShowPregameInstructionsSignature__DelegateSignature
struct UDH_MessageBus_OnShowPregameInstructionsSignature__DelegateSignature_Params
{
	int                                                ThrallCount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShowLobbyBrowserOverlaySignature__DelegateSignature
struct UDH_MessageBus_OnShowLobbyBrowserOverlaySignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShowHotbarChangedSignature__DelegateSignature
struct UDH_MessageBus_OnShowHotbarChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShipObstructionsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnShipObstructionsChangedSignature__DelegateSignature_Params
{
	class ADH_GameStateBase*                           GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature
struct UDH_MessageBus_OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature_Params
{
	EShipCustomizationRegion                           Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnShipCosmeticsAppliedSignature__DelegateSignature
struct UDH_MessageBus_OnShipCosmeticsAppliedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSetSelectedLanguageCodesSignature__DelegateSignature
struct UDH_MessageBus_OnSetSelectedLanguageCodesSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSetDesiredCastingSpellSignature__DelegateSignature
struct UDH_MessageBus_OnSetDesiredCastingSpellSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              DesiredSpell;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSessionUserInviteAcceptedFailedSignature__DelegateSignature
struct UDH_MessageBus_OnSessionUserInviteAcceptedFailedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSelectedInventoryViewChangedSignature__DelegateSignature
struct UDH_MessageBus_OnSelectedInventoryViewChangedSignature__DelegateSignature_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSearchForLobbiesCompleteSignature__DelegateSignature
struct UDH_MessageBus_OnSearchForLobbiesCompleteSignature__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDH_OnlineSearchResult>              SearchResults;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature
struct UDH_MessageBus_OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardSelectedIndicesChangedSignature__DelegateSignature
struct UDH_MessageBus_OnScoreboardSelectedIndicesChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardReceivedReplaySignature__DelegateSignature
struct UDH_MessageBus_OnScoreboardReceivedReplaySignature__DelegateSignature_Params
{
	class UDH_MatchReplay*                             Replay;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnScoreboardHiddenSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSaveConversionPopupAcceptSignature__DelegateSignature
struct UDH_MessageBus_OnSaveConversionPopupAcceptSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnSaveConversionCompleteSignature__DelegateSignature
struct UDH_MessageBus_OnSaveConversionCompleteSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRunLoginStepsBeginSignature__DelegateSignature
struct UDH_MessageBus_OnRunLoginStepsBeginSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectStationInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnRoleSelectStationInteractedWithSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectionWidgetShownSignature__DelegateSignature
struct UDH_MessageBus_OnRoleSelectionWidgetShownSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectionWidgetHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnRoleSelectionWidgetHiddenSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRoleConfirmedSignature__DelegateSignature
struct UDH_MessageBus_OnRoleConfirmedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRichTextHyperlinkClickedSignature__DelegateSignature
struct UDH_MessageBus_OnRichTextHyperlinkClickedSignature__DelegateSignature_Params
{
	class FString                                      LinkID;                                                   // (Parm, ZeroConstructor)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRetryingLoginStepSignature__DelegateSignature
struct UDH_MessageBus_OnRetryingLoginStepSignature__DelegateSignature_Params
{
	int                                                TimeRemaining;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnRestingChangedSignature__DelegateSignature
struct UDH_MessageBus_OnRestingChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnReplayViewerInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnReplayViewerInteractedWithSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnReconnectAvailableSignature__DelegateSignature
struct UDH_MessageBus_OnReconnectAvailableSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnReceivedDLCPricesSignature__DelegateSignature
struct UDH_MessageBus_OnReceivedDLCPricesSignature__DelegateSignature_Params
{
	struct FDH_PriceDataWrapper                        PriceData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPrisonerPawnControllerChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPrisonerPawnControllerChangedSignature__DelegateSignature_Params
{
	class ADH_PrisonerPawn*                            PrisonerPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPrisonerFreedSignature__DelegateSignature
struct UDH_MessageBus_OnPrisonerFreedSignature__DelegateSignature_Params
{
	class ADH_PrisonerPawn*                            PrisonerPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPreviewRoleSignature__DelegateSignature
struct UDH_MessageBus_OnPreviewRoleSignature__DelegateSignature_Params
{
	class UDH_PlayerRoleData*                          RoleData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPrestigeButtonClickedSignature__DelegateSignature
struct UDH_MessageBus_OnPrestigeButtonClickedSignature__DelegateSignature_Params
{
	class UDH_PlayerRoleData*                          InPreviewRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPowderkegFuseUpdate__DelegateSignature
struct UDH_MessageBus_OnPowderkegFuseUpdate__DelegateSignature_Params
{
	class ADH_InventoryPickup*                         Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DetonationTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPokerGameTimeStatsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPokerGameTimeStatsChangedSignature__DelegateSignature_Params
{
	TArray<struct FDH_PokerGameTimeStat>               TimeStats;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerUnregisteredWithSessionSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerUnregisteredWithSessionSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             UnregisteredPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallVisionFailedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerThrallVisionFailedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallVisionChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerThrallVisionChangedSignature__DelegateSignature_Params
{
	bool                                               bUsingVision;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallChangedDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerThrallChangedDelegateSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// SparseDelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateQuestChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerStateQuestChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_QuestState*                              QuestState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateFirstTimeCannibalSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerStateFirstTimeCannibalSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateDeadChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerStateDeadChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRoleChangedDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerRoleChangedDelegateSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRemovedFromGameSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerRemovedFromGameSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             RemovedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRegisteredWithSessionSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerRegisteredWithSessionSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             RegisteredPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerReconnectedToGameSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerReconnectedToGameSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             ReconnectingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerReceivedDialogueSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerReceivedDialogueSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          Speaker;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDialogueWave*                               Dialogue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerNameChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerNameChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerMuteStatusChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerMuteStatusChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             MutedPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerLogoutSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerLogoutSignature__DelegateSignature_Params
{
	class AController*                                 ControllerLoggingOut;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerDisconnectedFromGameSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerDisconnectedFromGameSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             DisconnectingPlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCosmeticItemPurchasedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerCosmeticItemPurchasedSignature__DelegateSignature_Params
{
	TArray<class FString>                              ItemCodes;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCosmeticItemDetachedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerCosmeticItemDetachedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerShowUIChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerControllerShowUIChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerPlayerStateChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerControllerPlayerStateChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerGameStateChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerControllerGameStateChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerControlledHumanChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerControllerControlledHumanChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            UserId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerContextMenuShownSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerContextMenuShownSignature__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature_Params
{
	TArray<class UDH_CosmeticItemBase*>                Items;                                                    // (ConstParm, Parm, ZeroConstructor)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCannibalismChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerCannibalismChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             ChangedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerAddedToGameSignature__DelegateSignature
struct UDH_MessageBus_OnPlayerAddedToGameSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             AddedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPhonographSongSelectionSignature__DelegateSignature
struct UDH_MessageBus_OnPhonographSongSelectionSignature__DelegateSignature_Params
{
	class ADH_Phonograph*                              Phonograph;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnPartyPublicStateChangedSignature__DelegateSignature
struct UDH_MessageBus_OnPartyPublicStateChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOverlayWidgetShownSignature__DelegateSignature
struct UDH_MessageBus_OnOverlayWidgetShownSignature__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOverlayWidgetHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnOverlayWidgetHiddenSignature__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionJoiningSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineSessionJoiningSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionInvitationSentSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineSessionInvitationSentSignature__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionCreateCompleteSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineSessionCreateCompleteSignature__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSearchForLobbiesStartedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineSearchForLobbiesStartedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyMembersChangedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyMembersChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyMemberPromotedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyMemberPromotedSignature__DelegateSignature_Params
{
	bool                                               bLocalIsHost;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyLeftSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyLeftSignature__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PartyId;                                                  // (Parm, ZeroConstructor)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyKickedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyKickedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyJoiningCancelledSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyJoiningCancelledSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyExitSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyExitSignature__DelegateSignature_Params
{
	class FString                                      PartyId;                                                  // (Parm, ZeroConstructor)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyDataReceivedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyDataReceivedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyCantFindLobbySignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyCantFindLobbySignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyAlreadyFullSignature__DelegateSignature
struct UDH_MessageBus_OnOnlinePartyAlreadyFullSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineJoinSessionBeginSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineJoinSessionBeginSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineInitedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineInitedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineErrorsUpdatedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineErrorsUpdatedSignature__DelegateSignature_Params
{
	TArray<struct FDH_OnlineError>                     Errors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineDestroySessionEndSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineDestroySessionEndSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineDestroySessionBeginSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineDestroySessionBeginSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineAutoSearchChangedSignature__DelegateSignature
struct UDH_MessageBus_OnOnlineAutoSearchChangedSignature__DelegateSignature_Params
{
	bool                                               bAutoSearching;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnNamedServerAddressesChangedSignature__DelegateSignature
struct UDH_MessageBus_OnNamedServerAddressesChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnMouseCursorVisibilityChangedSignature__DelegateSignature
struct UDH_MessageBus_OnMouseCursorVisibilityChangedSignature__DelegateSignature_Params
{
	bool                                               bCursorVisible;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnMerchantShopUIVisibilityChangedSignature__DelegateSignature
struct UDH_MessageBus_OnMerchantShopUIVisibilityChangedSignature__DelegateSignature_Params
{
	EDH_EntitlementsShopType                           ShopType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnMerchantInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnMerchantInteractedWithSignature__DelegateSignature_Params
{
	class ADH_Merchant*                                Merchant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnMatchReplayReceivedSignature__DelegateSignature
struct UDH_MessageBus_OnMatchReplayReceivedSignature__DelegateSignature_Params
{
	class FString                                      MatchID;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Replay;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnMapTableInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnMapTableInteractedWithSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLoginStepFinishedSignature__DelegateSignature
struct UDH_MessageBus_OnLoginStepFinishedSignature__DelegateSignature_Params
{
	int                                                StepsCompleted;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSteps;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbandonFurtherSteps;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLoginFinishedSignature__DelegateSignature
struct UDH_MessageBus_OnLoginFinishedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature
struct UDH_MessageBus_OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLobbyBrowserWidgetShowSignature__DelegateSignature
struct UDH_MessageBus_OnLobbyBrowserWidgetShowSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnListeningForToggleGroundCraftableSignature__DelegateSignature
struct UDH_MessageBus_OnListeningForToggleGroundCraftableSignature__DelegateSignature_Params
{
	class UDH_UseCraftingMenuHintWidget*               UseCraftingMenuHintWidget;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLaunchTutorialButtonClickedSignature__DelegateSignature
struct UDH_MessageBus_OnLaunchTutorialButtonClickedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLaunchExpeditionButtonClickedSignature__DelegateSignature
struct UDH_MessageBus_OnLaunchExpeditionButtonClickedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterDropDownHideSignature__DelegateSignature
struct UDH_MessageBus_OnLanguageFilterDropDownHideSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature
struct UDH_MessageBus_OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature_Params
{
	int                                                NumChecked;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterButtonClickedSignature__DelegateSignature
struct UDH_MessageBus_OnLanguageFilterButtonClickedSignature__DelegateSignature_Params
{
	bool                                               bToggleOn;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnJournalInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnJournalInteractedWithSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnItemPoisoned__DelegateSignature
struct UDH_MessageBus_OnItemPoisoned__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInventorySlotDragEndSignature__DelegateSignature
struct UDH_MessageBus_OnInventorySlotDragEndSignature__DelegateSignature_Params
{
	class UUserWidget*                                 InventorySlot;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInventorySlotDragBeginSignature__DelegateSignature
struct UDH_MessageBus_OnInventorySlotDragBeginSignature__DelegateSignature_Params
{
	class UUserWidget*                                 InventorySlot;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryManagerSlotCountModifiedSignature__DelegateSignature
struct UDH_MessageBus_OnInventoryManagerSlotCountModifiedSignature__DelegateSignature_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryManagerSlotContentsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnInventoryManagerSlotContentsChangedSignature__DelegateSignature_Params
{
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        ModifiedSlots;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryContainerSlotContentsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnInventoryContainerSlotContentsChangedSignature__DelegateSignature_Params
{
	class UUserWidget*                                 InventoryContainerWidget;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SlotIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryConsumedSignature__DelegateSignature
struct UDH_MessageBus_OnInventoryConsumedSignature__DelegateSignature_Params
{
	class ADH_Inventory_Consumable*                    Consumable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInteractFailedSignature__DelegateSignature
struct UDH_MessageBus_OnInteractFailedSignature__DelegateSignature_Params
{
	class UDH_InteractComponent*                       InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInputTypeChangedSignature__DelegateSignature
struct UDH_MessageBus_OnInputTypeChangedSignature__DelegateSignature_Params
{
	EDHInputType                                       InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInitOnlineVoiceSuccessSignature__DelegateSignature
struct UDH_MessageBus_OnInitOnlineVoiceSuccessSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnInitOnlineVoiceFailedSignature__DelegateSignature
struct UDH_MessageBus_OnInitOnlineVoiceFailedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnIncapacitatedChangedSignature__DelegateSignature
struct UDH_MessageBus_OnIncapacitatedChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// SparseDelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterPoisonAppliedSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterPoisonAppliedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             Creditor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterPlayerStateSetSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterPlayerStateSetSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterOnShipChangedSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterOnShipChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// SparseDelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             Creditor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterGainedInventorySignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterGainedInventorySignature__DelegateSignature_Params
{
	class ADH_Inventory*                               Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterDiedSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterDiedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterBeingCarriedSignature__DelegateSignature
struct UDH_MessageBus_OnHumanCharacterBeingCarriedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          CarriedPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          CarryingPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHotbarSelectedIndexChangedSignature__DelegateSignature
struct UDH_MessageBus_OnHotbarSelectedIndexChangedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnHandleSessionInviteAcceptSignature__DelegateSignature
struct UDH_MessageBus_OnHandleSessionInviteAcceptSignature__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewPartyInMatch;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKicked;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPartyFull;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCantFindLobby;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGroundCraftingBlueprintChangedSignature__DelegateSignature
struct UDH_MessageBus_OnGroundCraftingBlueprintChangedSignature__DelegateSignature_Params
{
	class ADH_GroundCraftingBlueprint*                 Blueprint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellSelectedDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnGrimoireSpellSelectedDelegateSignature__DelegateSignature_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnGrimoireSpellsChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnGrimoireInteractedWithSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGameVictoryWidgetHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnGameVictoryWidgetHiddenSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGameStateMatchStateChangedSignature__DelegateSignature
struct UDH_MessageBus_OnGameStateMatchStateChangedSignature__DelegateSignature_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature
struct UDH_MessageBus_OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature_Params
{
	class ADH_GameStateBase*                           GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnGameStateChangedSignature__DelegateSignature
struct UDH_MessageBus_OnGameStateChangedSignature__DelegateSignature_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnFinishedDroppingSignature__DelegateSignature
struct UDH_MessageBus_OnFinishedDroppingSignature__DelegateSignature_Params
{
	class UDH_DropZoneInventoryDropper*                Dropper;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnFailedToCraftSignature__DelegateSignature
struct UDH_MessageBus_OnFailedToCraftSignature__DelegateSignature_Params
{
	class UDH_CraftingComponent*                       CraftingComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingRecipe*                          CraftingProject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	ECraftingFailReason                                FailReason;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnFailedQuickTransferDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnFailedQuickTransferDelegateSignature__DelegateSignature_Params
{
	class UDH_InventoryManager*                        InInventoryManager;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SourceSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 TargetInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnExpeditionSettingsWidgetShownSignature__DelegateSignature
struct UDH_MessageBus_OnExpeditionSettingsWidgetShownSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature
struct UDH_MessageBus_OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature
struct UDH_MessageBus_OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnErrorsUpdatedSignature__DelegateSignature
struct UDH_MessageBus_OnErrorsUpdatedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnEquippedSpellsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnEquippedSpellsChangedSignature__DelegateSignature_Params
{
	class ADH_SpellManager*                            SpellManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDurabilityChangedSignature__DelegateSignature
struct UDH_MessageBus_OnDurabilityChangedSignature__DelegateSignature_Params
{
	class ADH_Inventory*                               Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDoppelgangerSpawnedSignatured__DelegateSignature
struct UDH_MessageBus_OnDoppelgangerSpawnedSignatured__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDestructibleActorHealthChangedSignature__DelegateSignature
struct UDH_MessageBus_OnDestructibleActorHealthChangedSignature__DelegateSignature_Params
{
	class ADH_DestructibleActor*                       DestructibleActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDestructibleActorDestroyedSignature__DelegateSignature
struct UDH_MessageBus_OnDestructibleActorDestroyedSignature__DelegateSignature_Params
{
	class ADH_DestructibleActor*                       DestructibleActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDesiredAutoSearchForLobbiesSignature__DelegateSignature
struct UDH_MessageBus_OnDesiredAutoSearchForLobbiesSignature__DelegateSignature_Params
{
	bool                                               bDesired;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDeclinedReconnectSignature__DelegateSignature
struct UDH_MessageBus_OnDeclinedReconnectSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature
struct UDH_MessageBus_OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature_Params
{
	int                                                NumOfPlayers;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDebugAdvertiseButtonClickedSignature__DelegateSignature
struct UDH_MessageBus_OnDebugAdvertiseButtonClickedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnDaysUntilBlizzardChangedSignature__DelegateSignature
struct UDH_MessageBus_OnDaysUntilBlizzardChangedSignature__DelegateSignature_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCurrentReplayChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCurrentReplayChangedSignature__DelegateSignature_Params
{
	class UDH_MatchReplay*                             InReplay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCurrentInteractTargetChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCurrentInteractTargetChangedSignature__DelegateSignature_Params
{
	class UDH_InteractComponent*                       InInteractComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCurrentHelmsmanChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCurrentHelmsmanChangedSignature__DelegateSignature_Params
{
	class ADH_WarshipHelm*                             WarshipHelm;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCultureChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCultureChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCrewBoardInteractedWithSignature__DelegateSignature
struct UDH_MessageBus_OnCrewBoardInteractedWithSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature
struct UDH_MessageBus_OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature_Params
{
	class FString                                      UniquePlayerId;                                           // (Parm, ZeroConstructor)
};

// SparseDelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectConsumedInventorySignature__DelegateSignature
struct UDH_MessageBus_OnCraftingProjectConsumedInventorySignature__DelegateSignature_Params
{
	class UDH_CraftingProject*                         CompletedProject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_PlayerState*                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectCompletedChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCraftingProjectCompletedChangedSignature__DelegateSignature_Params
{
	class UDH_CraftingProject*                         CraftingProject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectAbortedChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCraftingProjectAbortedChangedSignature__DelegateSignature_Params
{
	class UDH_CraftingProject*                         CraftingProject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature
struct UDH_MessageBus_OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature_Params
{
	class UDH_CraftingComponent*                       CraftingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature_Params
{
	class UDH_CraftingComponent*                       CraftingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemUnselectedDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemUnselectedDelegateSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemUnequippedSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemUnequippedSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemSelectedDelegateSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemSelectedDelegateSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemEquippedSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemEquippedSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppearanceIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature
struct UDH_MessageBus_OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature_Params
{
	class UDH_CosmeticItemBase*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnControlledShipChangedSignature__DelegateSignature
struct UDH_MessageBus_OnControlledShipChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          ShipController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCloudSaveCompleteSignature__DelegateSignature
struct UDH_MessageBus_OnCloudSaveCompleteSignature__DelegateSignature_Params
{
	class UDH_UserCloudSaveObject*                     SaveObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnClimbingChangedSignature__DelegateSignature
struct UDH_MessageBus_OnClimbingChangedSignature__DelegateSignature_Params
{
	class ADH_HumanCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_ClimbableActor*                          ClimbingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnClearVivoxErrorSignature__DelegateSignature
struct UDH_MessageBus_OnClearVivoxErrorSignature__DelegateSignature_Params
{
	struct FDH_VivoxError                              Error;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnClearOnlineErrorSignature__DelegateSignature
struct UDH_MessageBus_OnClearOnlineErrorSignature__DelegateSignature_Params
{
	struct FDH_OnlineError                             Error;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCinematicModeChangedSignature__DelegateSignature
struct UDH_MessageBus_OnCinematicModeChangedSignature__DelegateSignature_Params
{
	bool                                               bCinematicMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnChooseRoleSelectionSignature__DelegateSignature
struct UDH_MessageBus_OnChooseRoleSelectionSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnCharacterDiedSignature__DelegateSignature
struct UDH_MessageBus_OnCharacterDiedSignature__DelegateSignature_Params
{
	class ADH_Character*                               DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnBuriedActorDugUpSignature__DelegateSignature
struct UDH_MessageBus_OnBuriedActorDugUpSignature__DelegateSignature_Params
{
	class ADH_DigSite*                                 Digsite;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuriedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnBearTrapPlacedSignature__DelegateSignature
struct UDH_MessageBus_OnBearTrapPlacedSignature__DelegateSignature_Params
{
	class ADH_InventoryPickup*                         Trap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAvatarDraggedChangedSignature__DelegateSignature
struct UDH_MessageBus_OnAvatarDraggedChangedSignature__DelegateSignature_Params
{
	bool                                               bDragged;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAvatarCreatedSignature__DelegateSignature
struct UDH_MessageBus_OnAvatarCreatedSignature__DelegateSignature_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_CosmeticPreviewAvatar*                   Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAvailableAudioDevicesChangedSignature__DelegateSignature
struct UDH_MessageBus_OnAvailableAudioDevicesChangedSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAddVivoxErrorSignature__DelegateSignature
struct UDH_MessageBus_OnAddVivoxErrorSignature__DelegateSignature_Params
{
	struct FDH_VivoxError                              Error;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAddOnlineErrorSignature__DelegateSignature
struct UDH_MessageBus_OnAddOnlineErrorSignature__DelegateSignature_Params
{
	struct FDH_OnlineError                             Error;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAddDebugWidgetSignature__DelegateSignature
struct UDH_MessageBus_OnAddDebugWidgetSignature__DelegateSignature_Params
{
	class UUserWidget*                                 InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnActiveSpellsChangedSignature__DelegateSignature
struct UDH_MessageBus_OnActiveSpellsChangedSignature__DelegateSignature_Params
{
	class ADH_SpellManager*                            SpellManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.OnAcceptedReconnectSignature__DelegateSignature
struct UDH_MessageBus_OnAcceptedReconnectSignature__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.MessageBusOnNotifyHitSignature__DelegateSignature
struct UDH_MessageBus_MessageBusOnNotifyHitSignature__DelegateSignature_Params
{
	class ADH_PlayerState*                             InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.MatchStartedEvent__DelegateSignature
struct UDH_MessageBus_MatchStartedEvent__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.MatchEndedEvent__DelegateSignature
struct UDH_MessageBus_MatchEndedEvent__DelegateSignature_Params
{
};

// DelegateFunction DreadHunger.DH_MessageBus.HUDThrallMessageReceivedEvent__DelegateSignature
struct UDH_MessageBus_HUDThrallMessageReceivedEvent__DelegateSignature_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_MessageBus.GetInstance
struct UDH_MessageBus_GetInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_MessageBus*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.DisplayMatchEndMessageSignature__DelegateSignature
struct UDH_MessageBus_DisplayMatchEndMessageSignature__DelegateSignature_Params
{
	EPlayerTeam                                        WinningTeam;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWinner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DreadHunger.DH_MessageBus.AddWidgetToHUDSignature__DelegateSignature
struct UDH_MessageBus_AddWidgetToHUDSignature__DelegateSignature_Params
{
	class UUserWidget*                                 WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EDH_HUDLocationType                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_MOTDTitleData.GetType
struct UDH_MOTDTitleData_GetType_Params
{
	EDH_MOTDType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MOTDTitleData.GetMOTD
struct UDH_MOTDTitleData_GetMOTD_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_MOTDTitleData.GetBackgroundColorOverride
struct UDH_MOTDTitleData_GetBackgroundColorOverride_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_MouseCursorComponent.Reset
struct UDH_MouseCursorComponent_Reset_Params
{
};

// Function DreadHunger.DH_MouseCursorComponent.PushShowMouseCursor
struct UDH_MouseCursorComponent_PushShowMouseCursor_Params
{
	class UObject*                                     Shower;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_MouseCursorComponent.PopShowMouseCursor
struct UDH_MouseCursorComponent_PopShowMouseCursor_Params
{
	class UObject*                                     Shower;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_MouseDragModifiersComponent.GetSingleDropModifierKeyHeld
struct UDH_MouseDragModifiersComponent_GetSingleDropModifierKeyHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_NitroInventory.OnCarrierDamaged
struct ADH_NitroInventory_OnCarrierDamaged_Params
{
	class AActor*                                      InDamagedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 InDamageType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InInstigatedBy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_NitroPickup.OnRep_LastDamageReceived
struct ADH_NitroPickup_OnRep_LastDamageReceived_Params
{
};

// Function DreadHunger.DH_NitroPickup.OnRep_BreakFlash
struct ADH_NitroPickup_OnRep_BreakFlash_Params
{
};

// Function DreadHunger.DH_Online.OnRunLoginStepsBegin
struct UDH_Online_OnRunLoginStepsBegin_Params
{
};

// Function DreadHunger.DH_Online.GetLocalPlayerNickname
struct UDH_Online_GetLocalPlayerNickname_Params
{
	int                                                LocalUserNum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_OnlineSession.OnPostLoadMapWithWorld
struct UDH_OnlineSession_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      LoadedWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_OnlineSession.OnPlayerLogout
struct UDH_OnlineSession_OnPlayerLogout_Params
{
	class AController*                                 ControllerLoggingOut;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_OnlineSession.OnOnlineSessionUpdateComplete
struct UDH_OnlineSession_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHunger.DH_OnlineSession.OnMatchEnded
struct UDH_OnlineSession_OnMatchEnded_Params
{
};

// Function DreadHunger.DH_OnlineSettingsJsonSaveData.GetInstance
struct UDH_OnlineSettingsJsonSaveData_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_OnlineSettingsJsonSaveData*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_OnlineSettingsSaveGame.GetInstance
struct UDH_OnlineSettingsSaveGame_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_OnlineSettingsSaveGame*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_OnlineVoice.OnPlayerAddedToGame
struct UDH_OnlineVoice_OnPlayerAddedToGame_Params
{
	class ADH_PlayerState*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_OnlineVoice.OnOnlineVoiceInputDeviceNameChanged
struct UDH_OnlineVoice_OnOnlineVoiceInputDeviceNameChanged_Params
{
	class FString                                      NewValue;                                                 // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_OnlineVoice.OnOnlineSessionUpdateComplete
struct UDH_OnlineVoice_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHunger.DH_OnlineVoice.OnGameAudioVOIPVolumeChanged
struct UDH_OnlineVoice_OnGameAudioVOIPVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PackIce.RemoveClosestChunks
struct ADH_PackIce_RemoveClosestChunks_Params
{
	TArray<struct FVector>                             WorldPositions;                                           // (ConstParm, Parm, ZeroConstructor)
};

// Function DreadHunger.DH_PackIce.OnRep_RemovedChunks
struct ADH_PackIce_OnRep_RemovedChunks_Params
{
};

// Function DreadHunger.DH_Phonograph.GetSongIndex
struct ADH_Phonograph_GetSongIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Phonograph_Stationary.OnRep_SongIndex
struct ADH_Phonograph_Stationary_OnRep_SongIndex_Params
{
};

// Function DreadHunger.DH_Phonograph_Stationary.OnRep_DamageFlash
struct ADH_Phonograph_Stationary_OnRep_DamageFlash_Params
{
};

// Function DreadHunger.DH_PhysicsBuoy.OnRep_HitFlash
struct ADH_PhysicsBuoy_OnRep_HitFlash_Params
{
};

// Function DreadHunger.DH_PlayerCareerCloudSaveData.GetInstance
struct UDH_PlayerCareerCloudSaveData_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_PlayerCareerCloudSaveData*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerCareerSaveGame.GetInstance
struct UDH_PlayerCareerSaveGame_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_PlayerCareerSaveGame*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerControllerBase.PushUIInputMode
struct ADH_PlayerControllerBase_PushUIInputMode_Params
{
	class UWidget*                                     WidgetToFocus;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameAndUI;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerControllerBase.PushShowMouseCursor
struct ADH_PlayerControllerBase_PushShowMouseCursor_Params
{
	class UObject*                                     Shower;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerControllerBase.PopUIInputMode
struct ADH_PlayerControllerBase_PopUIInputMode_Params
{
	class UWidget*                                     WidgetToUnfocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerControllerBase.PopShowMouseCursor
struct ADH_PlayerControllerBase_PopShowMouseCursor_Params
{
	class UObject*                                     Shower;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerControllerBase.ClientPrintLog
struct ADH_PlayerControllerBase_ClientPrintLog_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_PlayerController.TakeHallucinationDamage
struct ADH_PlayerController_TakeHallucinationDamage_Params
{
	float                                              Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.ShowPreGameInstructions
struct ADH_PlayerController_ShowPreGameInstructions_Params
{
	int                                                ThrallCount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetSpellSelecting
struct ADH_PlayerController_SetSpellSelecting_Params
{
	bool                                               bNewSelectingSpell;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetSpellCasting
struct ADH_PlayerController_SetSpellCasting_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetShipThrust
struct ADH_PlayerController_SetShipThrust_Params
{
	float                                              NewIsThrottle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetShipBoosting
struct ADH_PlayerController_SetShipBoosting_Params
{
	bool                                               bNewIsBoosting;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetPrestigeLevel
struct ADH_PlayerController_SetPrestigeLevel_Params
{
	int                                                NewPrestigeLevel;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetPlayerRole_Simulated
struct ADH_PlayerController_SetPlayerRole_Simulated_Params
{
	class UDH_PlayerRoleData*                          NewRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetPlayerRole
struct ADH_PlayerController_SetPlayerRole_Params
{
	class UDH_PlayerRoleData*                          NewRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetEquippedTalismans
struct ADH_PlayerController_SetEquippedTalismans_Params
{
	TArray<class UDH_PlayerTalisman*>                  InTalismans;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.SetEquippedSpells
struct ADH_PlayerController_SetEquippedSpells_Params
{
	TArray<class UDH_TotemSpell*>                      InSpells;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.SetEquippedShipCosmetics
struct ADH_PlayerController_SetEquippedShipCosmetics_Params
{
	TArray<struct FEquippedShipCosmetics>              NewItems;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.SetEquippedCosmetics
struct ADH_PlayerController_SetEquippedCosmetics_Params
{
	TArray<struct FEquippedPlayerCosmetics>            NewItems;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.SetDesiresThrallVision
struct ADH_PlayerController_SetDesiresThrallVision_Params
{
	bool                                               bNewDesiresThrallVision;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetCraftingPreview
struct ADH_PlayerController_SetCraftingPreview_Params
{
	class UDH_CraftingRecipe*                          NewRecipe;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearPreview;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetAllPlayersRole_Simulated
struct ADH_PlayerController_SetAllPlayersRole_Simulated_Params
{
	class UDH_PlayerRoleData*                          NewRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.SetAllPlayersRole
struct ADH_PlayerController_SetAllPlayersRole_Params
{
	class UDH_PlayerRoleData*                          NewRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.ServerCheat
struct ADH_PlayerController_ServerCheat_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_PlayerController.SendThrallMessage_Simulated
struct ADH_PlayerController_SendThrallMessage_Simulated_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.SendThrallMessage
struct ADH_PlayerController_SendThrallMessage_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.SaveMapCompletion
struct ADH_PlayerController_SaveMapCompletion_Params
{
	class UDH_MapData*                                 MapData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.ResetAchievements
struct ADH_PlayerController_ResetAchievements_Params
{
};

// Function DreadHunger.DH_PlayerController.RemoveKickExemption
struct ADH_PlayerController_RemoveKickExemption_Params
{
};

// Function DreadHunger.DH_PlayerController.RecordVersionMismatch
struct ADH_PlayerController_RecordVersionMismatch_Params
{
	struct FDHCompleteVersion                          ClientVersion;                                            // (ConstParm, Parm, ReferenceParm)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_PlayerController.ReceiveWinningHand
struct ADH_PlayerController_ReceiveWinningHand_Params
{
	struct FPlayingCardHand                            WinningHand;                                              // (ConstParm, Parm, ReferenceParm)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.ReceiveThrallMessage
struct ADH_PlayerController_ReceiveThrallMessage_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.ReceiveGameplayMessage
struct ADH_PlayerController_ReceiveGameplayMessage_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function DreadHunger.DH_PlayerController.PushIgnoreLookInput
struct ADH_PlayerController_PushIgnoreLookInput_Params
{
	class UObject*                                     Suppressor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.PressedAttack_Simulated
struct ADH_PlayerController_PressedAttack_Simulated_Params
{
};

// Function DreadHunger.DH_PlayerController.PopIgnoreLookInput
struct ADH_PlayerController_PopIgnoreLookInput_Params
{
	class UObject*                                     Suppressor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.OnRep_UsingThrallVision
struct ADH_PlayerController_OnRep_UsingThrallVision_Params
{
};

// Function DreadHunger.DH_PlayerController.OnPlayerSpellsChanged
struct ADH_PlayerController_OnPlayerSpellsChanged_Params
{
	class ADH_SpellManager*                            InSpellManager;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.OnMatchStateChanged
struct ADH_PlayerController_OnMatchStateChanged_Params
{
	class ADH_GameState*                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.OnMatchEnded
struct ADH_PlayerController_OnMatchEnded_Params
{
};

// Function DreadHunger.DH_PlayerController.OnInvitationSent
struct ADH_PlayerController_OnInvitationSent_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.IsUsingThrallVision
struct ADH_PlayerController_IsUsingThrallVision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.IsSelectingSpell
struct ADH_PlayerController_IsSelectingSpell_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.IsLooting
struct ADH_PlayerController_IsLooting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GrantAchievement
struct ADH_PlayerController_GrantAchievement_Params
{
	struct FName                                       AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetWantsToTalk
struct ADH_PlayerController_GetWantsToTalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetSuicideComponent
struct ADH_PlayerController_GetSuicideComponent_Params
{
	class UDH_SuicideComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetShowUI
struct ADH_PlayerController_GetShowUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetShowHotbar
struct ADH_PlayerController_GetShowHotbar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetSelectedHotbarIndex
struct ADH_PlayerController_GetSelectedHotbarIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetPlayerViewPoint
struct ADH_PlayerController_GetPlayerViewPoint_Params
{
	struct FVector                                     out_Location;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    out_Rotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetMouseDragModifiersComponent
struct ADH_PlayerController_GetMouseDragModifiersComponent_Params
{
	class UDH_MouseDragModifiersComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetListenerPosition
struct ADH_PlayerController_GetListenerPosition_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutFrontDir;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutRightDir;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetInventory
struct ADH_PlayerController_GetInventory_Params
{
	class UDH_InventoryManager*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetGroundCraftingProjectComponent
struct ADH_PlayerController_GetGroundCraftingProjectComponent_Params
{
	class UDH_GroundCraftingProjectComponent*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetDHPlayerState
struct ADH_PlayerController_GetDHPlayerState_Params
{
	class ADH_PlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetDHGameState
struct ADH_PlayerController_GetDHGameState_Params
{
	class ADH_GameState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetCurrentSpellCasting
struct ADH_PlayerController_GetCurrentSpellCasting_Params
{
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.GetControlledDoppelganger
struct ADH_PlayerController_GetControlledDoppelganger_Params
{
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.DisplayMatchEndMessage
struct ADH_PlayerController_DisplayMatchEndMessage_Params
{
	EPlayerTeam                                        WinningTeam;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWinner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.DeclineBrigRelease
struct ADH_PlayerController_DeclineBrigRelease_Params
{
};

// Function DreadHunger.DH_PlayerController.Craft_Simulated
struct ADH_PlayerController_Craft_Simulated_Params
{
	class UDH_CraftingComponent*                       CraftingComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingRecipe*                          CraftingProject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.Craft
struct ADH_PlayerController_Craft_Params
{
	class UDH_CraftingComponent*                       CraftingComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingRecipe*                          CraftingProject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.ClientSetPlayerRole
struct ADH_PlayerController_ClientSetPlayerRole_Params
{
	class UDH_PlayerRoleData*                          NewRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.ChooseRoleSelection
struct ADH_PlayerController_ChooseRoleSelection_Params
{
};

// Function DreadHunger.DH_PlayerController.Cheat
struct ADH_PlayerController_Cheat_Params
{
	class FString                                      Msg;                                                      // (ConstParm, Parm, ZeroConstructor)
};

// Function DreadHunger.DH_PlayerController.ChangeShipYawDirection
struct ADH_PlayerController_ChangeShipYawDirection_Params
{
	int8_t                                             NewYawDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.CastTotemSpell
struct ADH_PlayerController_CastTotemSpell_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.AddShowOnlyActor
struct ADH_PlayerController_AddShowOnlyActor_Params
{
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.AddKickExemption
struct ADH_PlayerController_AddKickExemption_Params
{
};

// Function DreadHunger.DH_PlayerController.AbortProject_Simulated
struct ADH_PlayerController_AbortProject_Simulated_Params
{
	class UDH_CraftingComponent*                       CraftingComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingProject*                         AbortedProject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerController.AbortProject
struct ADH_PlayerController_AbortProject_Params
{
	class UDH_CraftingComponent*                       CraftingComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingProject*                         AbortedProject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerMatchStat.GetScoreModifiers
struct UDH_PlayerMatchStat_GetScoreModifiers_Params
{
	class ADH_PlayerState*                             ScoringPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerReviveStation.UpdateColorMaskFriendly
struct ADH_PlayerReviveStation_UpdateColorMaskFriendly_Params
{
	class ADH_HumanCharacter*                          LocalHuman;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerReviveStation.OnLocalHumanChanged
struct ADH_PlayerReviveStation_OnLocalHumanChanged_Params
{
	class ADH_PlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerRoleData.GetAllRoles
struct UDH_PlayerRoleData_GetAllRoles_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDH_PlayerRoleData*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_PlayerRoleData.FindByType
struct UDH_PlayerRoleData_FindByType_Params
{
	EPlayerTeamRole                                    InType;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_PlayerRoleData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerRoleData.FindByName
struct UDH_PlayerRoleData_FindByName_Params
{
	class FString                                      InName;                                                   // (Parm, ZeroConstructor)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_PlayerRoleData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerSession.GetInstance
struct UDH_PlayerSession_GetInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_PlayerSession*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerSettingsJsonSaveData.RemoveNamedServerAddress
struct UDH_PlayerSettingsJsonSaveData_RemoveNamedServerAddress_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function DreadHunger.DH_PlayerSettingsJsonSaveData.GetNamedServerAddress
struct UDH_PlayerSettingsJsonSaveData_GetNamedServerAddress_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Out_IPAddress;                                            // (Parm, OutParm, ZeroConstructor)
	int                                                Out_Port;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerSettingsJsonSaveData.GetInstance
struct UDH_PlayerSettingsJsonSaveData_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_PlayerSettingsJsonSaveData*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerSettingsJsonSaveData.AddNamedServerAddress
struct UDH_PlayerSettingsJsonSaveData_AddNamedServerAddress_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	TArray<unsigned char>                              IPAddress;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Port;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.SetPlayerRole
struct ADH_PlayerState_SetPlayerRole_Params
{
	class UDH_PlayerRoleData*                          NewStartingRole;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcastNotification;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.RollForTrinket
struct ADH_PlayerState_RollForTrinket_Params
{
	bool                                               bWildlifeTable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADH_Inventory*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.OnRep_SpellManager
struct ADH_PlayerState_OnRep_SpellManager_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_SelectedRole
struct ADH_PlayerState_OnRep_SelectedRole_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_QuestState
struct ADH_PlayerState_OnRep_QuestState_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_ProgressData
struct ADH_PlayerState_OnRep_ProgressData_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_PrestigeLevel
struct ADH_PlayerState_OnRep_PrestigeLevel_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_PoisonedItemUIDs
struct ADH_PlayerState_OnRep_PoisonedItemUIDs_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_OwnedTotems
struct ADH_PlayerState_OnRep_OwnedTotems_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_OtherThralls
struct ADH_PlayerState_OnRep_OtherThralls_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_KnownArmoryCodes
struct ADH_PlayerState_OnRep_KnownArmoryCodes_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_IsThrall
struct ADH_PlayerState_OnRep_IsThrall_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_IsDisconnected
struct ADH_PlayerState_OnRep_IsDisconnected_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_IsDead
struct ADH_PlayerState_OnRep_IsDead_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_GloballyMuted
struct ADH_PlayerState_OnRep_GloballyMuted_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_EquippedCosmeticItems
struct ADH_PlayerState_OnRep_EquippedCosmeticItems_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_DeathCount
struct ADH_PlayerState_OnRep_DeathCount_Params
{
};

// Function DreadHunger.DH_PlayerState.OnRep_CannibalLevel
struct ADH_PlayerState_OnRep_CannibalLevel_Params
{
};

// Function DreadHunger.DH_PlayerState.ModifySpellChargeLevel
struct ADH_PlayerState_ModifySpellChargeLevel_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.ModifyMatchStat
struct ADH_PlayerState_ModifyMatchStat_Params
{
	EPlayerMatchStatType                               Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScoreAfterShipEscaped;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.IsThrall
struct ADH_PlayerState_IsThrall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.IsRecipeExhausted
struct ADH_PlayerState_IsRecipeExhausted_Params
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.IsItemPoisoned
struct ADH_PlayerState_IsItemPoisoned_Params
{
	int                                                ItemUID;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.IsDead
struct ADH_PlayerState_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.IsCannibal
struct ADH_PlayerState_IsCannibal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetSpellCooldown
struct ADH_PlayerState_GetSpellCooldown_Params
{
	class UDH_TotemSpell*                              SpellType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetSpellChargeTier
struct ADH_PlayerState_GetSpellChargeTier_Params
{
	ETotemSpellTiers                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetSpellChargeLevel
struct ADH_PlayerState_GetSpellChargeLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetPlayerTeam
struct ADH_PlayerState_GetPlayerTeam_Params
{
	EPlayerTeam                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetPlayerRoleData
struct ADH_PlayerState_GetPlayerRoleData_Params
{
	class UDH_PlayerRoleData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetPlayerRole
struct ADH_PlayerState_GetPlayerRole_Params
{
	EPlayerTeamRole                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetOwnedTotemsOfType
struct ADH_PlayerState_GetOwnedTotemsOfType_Params
{
	class ADH_ThrallTotem*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ADH_ThrallTotem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_PlayerState.GetOwnedTotems
struct ADH_PlayerState_GetOwnedTotems_Params
{
	TArray<class ADH_ThrallTotem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_PlayerState.GetEquippedCosmeticItemsForRole
struct ADH_PlayerState_GetEquippedCosmeticItemsForRole_Params
{
	EPlayerTeamRole                                    InRole;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FEquippedPlayerCosmetics                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_PlayerState.GetDeathCount
struct ADH_PlayerState_GetDeathCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetControlledDoppelganger
struct ADH_PlayerState_GetControlledDoppelganger_Params
{
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetCannibalLevel
struct ADH_PlayerState_GetCannibalLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PlayerState.GetActiveSpellsOfType
struct ADH_PlayerState_GetActiveSpellsOfType_Params
{
	class UDH_TotemSpell*                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDH_TotemSpell*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_PlayingCard.SetProperties
struct ADH_PlayingCard_SetProperties_Params
{
	struct FPlayingCardProperties                      InProperties;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DreadHunger.DH_PlayingCard.OnSelected
struct ADH_PlayingCard_OnSelected_Params
{
};

// Function DreadHunger.DH_PlayingCard.OnPropertiesAssigned
struct ADH_PlayingCard_OnPropertiesAssigned_Params
{
};

// Function DreadHunger.DH_PlayingCard.OnDeselected
struct ADH_PlayingCard_OnDeselected_Params
{
};

// Function DreadHunger.DH_PlayingCard.GetProperties
struct ADH_PlayingCard_GetProperties_Params
{
	struct FPlayingCardProperties                      OutProperties;                                            // (Parm, OutParm)
};

// Function DreadHunger.DH_PlayingCard.GetFaceTexture
struct ADH_PlayingCard_GetFaceTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PreviousMatchSaveGame.GetInstance
struct UDH_PreviousMatchSaveGame_GetInstance_Params
{
	class UDH_PreviousMatchSaveGame*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.SimulatedPlayEmote
struct ADH_PrisonerPawn_SimulatedPlayEmote_Params
{
	class UDH_LobbyEmote*                              Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.ServerPlayEmote
struct ADH_PrisonerPawn_ServerPlayEmote_Params
{
	class UDH_LobbyEmote*                              Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.OnRep_LastDHPlayerState
struct ADH_PrisonerPawn_OnRep_LastDHPlayerState_Params
{
};

// Function DreadHunger.DH_PrisonerPawn.OnRep_IsDead
struct ADH_PrisonerPawn_OnRep_IsDead_Params
{
};

// Function DreadHunger.DH_PrisonerPawn.OnPlayerReconnected
struct ADH_PrisonerPawn_OnPlayerReconnected_Params
{
	class ADH_PlayerState*                             ReconnectingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.OnPlayerDisconnected
struct ADH_PrisonerPawn_OnPlayerDisconnected_Params
{
	class ADH_PlayerState*                             DisconnectingPlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.MulticastPlayEmote
struct ADH_PrisonerPawn_MulticastPlayEmote_Params
{
	class UDH_LobbyEmote*                              Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.IsBeingFreed
struct ADH_PrisonerPawn_IsBeingFreed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.GetStarvationPct
struct ADH_PrisonerPawn_GetStarvationPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.GetPrisonerPawnAnimInst
struct ADH_PrisonerPawn_GetPrisonerPawnAnimInst_Params
{
	class UDH_PrisonerPawnAnimInstance*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.GetPostProcessInteractStackNum
struct ADH_PrisonerPawn_GetPostProcessInteractStackNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.GetBrigDoorUnlockComponent
struct ADH_PrisonerPawn_GetBrigDoorUnlockComponent_Params
{
	class UDH_CraftingComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.GetBrig
struct ADH_PrisonerPawn_GetBrig_Params
{
	class ADH_BrigCell*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_PrisonerPawn.BP_OnPostProcessInteractStackChanged
struct ADH_PrisonerPawn_BP_OnPostProcessInteractStackChanged_Params
{
};

// Function DreadHunger.DH_Projectile.OnAttachParentDestroyed
struct ADH_Projectile_OnAttachParentDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_QuestState.OnRep_CurrentScore
struct ADH_QuestState_OnRep_CurrentScore_Params
{
};

// Function DreadHunger.DH_QuestState.OnRep_bCompleted
struct ADH_QuestState_OnRep_bCompleted_Params
{
};

// SparseDelegateFunction DreadHunger.DH_QuestState.OnQuestStateCurrentScoreChangedSignature__DelegateSignature
struct ADH_QuestState_OnQuestStateCurrentScoreChangedSignature__DelegateSignature_Params
{
	class ADH_QuestState*                              QuestState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentScore;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// SparseDelegateFunction DreadHunger.DH_QuestState.OnQuestStateCompletedChangedSignature__DelegateSignature
struct ADH_QuestState_OnQuestStateCompletedChangedSignature__DelegateSignature_Params
{
	class ADH_QuestState*                              QuestState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_QuestState.Increment
struct ADH_QuestState_Increment_Params
{
};

// Function DreadHunger.DH_RoleCustomizationAvatar.OnShowRoleCustomization
struct ADH_RoleCustomizationAvatar_OnShowRoleCustomization_Params
{
	bool                                               bShow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_RoleCustomizationAvatar.MeshToAvatar
struct ADH_RoleCustomizationAvatar_MeshToAvatar_Params
{
};

// Function DreadHunger.DH_RoleDealer.PlayerLeft
struct ADH_RoleDealer_PlayerLeft_Params
{
	class AActor*                                      LeavingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_RoleDealer.OnWarshipReplicated
struct ADH_RoleDealer_OnWarshipReplicated_Params
{
	class ADH_Warship*                                 Warship;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_RoleDealer.OnRep_WinningPlayer
struct ADH_RoleDealer_OnRep_WinningPlayer_Params
{
};

// Function DreadHunger.DH_RoleDealer.OnRep_TimeStats
struct ADH_RoleDealer_OnRep_TimeStats_Params
{
};

// Function DreadHunger.DH_RoleDealer.OnRep_PlayerHands
struct ADH_RoleDealer_OnRep_PlayerHands_Params
{
};

// Function DreadHunger.DH_RoleDealer.OnRep_GameEnded
struct ADH_RoleDealer_OnRep_GameEnded_Params
{
};

// Function DreadHunger.DH_RoleDealer.OnCardDestroyed
struct ADH_RoleDealer_OnCardDestroyed_Params
{
	class AActor*                                      Card;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_RoleDealer.GetTimeStats
struct ADH_RoleDealer_GetTimeStats_Params
{
	TArray<struct FDH_PokerGameTimeStat>               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DreadHunger.DH_RolePerkLevelCurve.GetNextRankExperience
struct UDH_RolePerkLevelCurve_GetNextRankExperience_Params
{
	int                                                Experience;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_RolePerkLevelCurve.GetCurrentRankExperience
struct UDH_RolePerkLevelCurve_GetCurrentRankExperience_Params
{
	int                                                Experience;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_RolePerkLevelCurve.ExperienceToRank
struct UDH_RolePerkLevelCurve_ExperienceToRank_Params
{
	float                                              InExperience;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_ShipCustomizationAvatar.OnCustomizationRegionChanged
struct ADH_ShipCustomizationAvatar_OnCustomizationRegionChanged_Params
{
	EShipCustomizationRegion                           InRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_ShipCustomizationAvatar.OnAvatarDraggedChanged
struct ADH_ShipCustomizationAvatar_OnAvatarDraggedChanged_Params
{
	bool                                               bDragged;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_SpawnVolume.GenerateSpawnPoints
struct ADH_SpawnVolume_GenerateSpawnPoints_Params
{
};

// Function DreadHunger.DH_SpellManager.OnRep_SpellCooldowns
struct ADH_SpellManager_OnRep_SpellCooldowns_Params
{
};

// Function DreadHunger.DH_SpellManager.OnRep_EquippedSpells
struct ADH_SpellManager_OnRep_EquippedSpells_Params
{
};

// Function DreadHunger.DH_SpellManager.OnRep_ActiveSpells
struct ADH_SpellManager_OnRep_ActiveSpells_Params
{
	TArray<class UDH_TotemSpell*>                      PreviousActiveSpells;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_SpellManager.CastSpell
struct ADH_SpellManager_CastSpell_Params
{
	class AActor*                                      WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              SpellType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CastingTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Stove.OnStoveLit
struct ADH_Stove_OnStoveLit_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Stove.OnStoveDied
struct ADH_Stove_OnStoveDied_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Stove.LightStove
struct ADH_Stove_LightStove_Params
{
	class UDH_CraftingProject*                         StartupProject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_SuicideComponent.Suicide
struct UDH_SuicideComponent_Suicide_Params
{
};

// Function DreadHunger.DH_SuicideComponent.GetTimerAlpha
struct UDH_SuicideComponent_GetTimerAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_SuicideComponent.GetCachedCanSuicide
struct UDH_SuicideComponent_GetCachedCanSuicide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_ThrallTotem.CacheOwner
struct ADH_ThrallTotem_CacheOwner_Params
{
};

// Function DreadHunger.DH_TotemSpell.Whiteout
struct UDH_TotemSpell_Whiteout_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.SpiritWalk
struct UDH_TotemSpell_SpiritWalk_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.OnRep_Caster
struct UDH_TotemSpell_OnRep_Caster_Params
{
};

// Function DreadHunger.DH_TotemSpell.OnExpired
struct UDH_TotemSpell_OnExpired_Params
{
	class AActor*                                      WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.OnCast
struct UDH_TotemSpell_OnCast_Params
{
	class AActor*                                      WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.Hush
struct UDH_TotemSpell_Hush_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.HasValidCastingTarget
struct UDH_TotemSpell_HasValidCastingTarget_Params
{
	class AActor*                                      InCaster;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.GetPlayerCaster
struct UDH_TotemSpell_GetPlayerCaster_Params
{
	class ADH_PlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.GetGlobalActiveSpellCount
struct UDH_TotemSpell_GetGlobalActiveSpellCount_Params
{
	class UDH_TotemSpell*                              SpellClass;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.GetDuration
struct UDH_TotemSpell_GetDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.GetCastTier
struct UDH_TotemSpell_GetCastTier_Params
{
	ETotemSpellTiers                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.Gale
struct UDH_TotemSpell_Gale_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.Expire
struct UDH_TotemSpell_Expire_Params
{
};

// Function DreadHunger.DH_TotemSpell.DoSpellEffects
struct UDH_TotemSpell_DoSpellEffects_Params
{
	class AActor*                                      SpellTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.Doppelganger
struct UDH_TotemSpell_Doppelganger_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.Cannibals
struct UDH_TotemSpell_Cannibals_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TotemSpell*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell.CanCast
struct UDH_TotemSpell_CanCast_Params
{
	class AActor*                                      InCaster;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell_Summoning.SummonAI
struct UDH_TotemSpell_Summoning_SummonAI_Params
{
	class ADH_Character*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell_Summoning.OnSummonedAIKilled
struct UDH_TotemSpell_Summoning_OnSummonedAIKilled_Params
{
	class ADH_Character*                               DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TotemSpell_Summoning.OnSummonedAIDestroyed
struct UDH_TotemSpell_Summoning_OnSummonedAIDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.SpawnAIGroup
struct UDH_TutorialChapter_SpawnAIGroup_Params
{
	struct FName                                       GroupName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.SetCurrentObjective
struct UDH_TutorialChapter_SetCurrentObjective_Params
{
	struct FName                                       ObjectiveName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.PlayCinematicSequence
struct UDH_TutorialChapter_PlayCinematicSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.OnWarshipSpawned
struct UDH_TutorialChapter_OnWarshipSpawned_Params
{
	class ADH_Warship*                                 Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.OnPlayerSpawned
struct UDH_TutorialChapter_OnPlayerSpawned_Params
{
	class ADH_HumanCharacter*                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.OnOutroSequenceComplete
struct UDH_TutorialChapter_OnOutroSequenceComplete_Params
{
};

// Function DreadHunger.DH_TutorialChapter.OnObjectiveCompleted
struct UDH_TutorialChapter_OnObjectiveCompleted_Params
{
	class UDH_TutorialObjective*                       CompletedObjective;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.OnIntroTitleScreenHidden
struct UDH_TutorialChapter_OnIntroTitleScreenHidden_Params
{
};

// Function DreadHunger.DH_TutorialChapter.OnIntroSequenceComplete
struct UDH_TutorialChapter_OnIntroSequenceComplete_Params
{
};

// Function DreadHunger.DH_TutorialChapter.OnEnd
struct UDH_TutorialChapter_OnEnd_Params
{
};

// Function DreadHunger.DH_TutorialChapter.OnCinematicSequenceFinished
struct UDH_TutorialChapter_OnCinematicSequenceFinished_Params
{
	class ULevelSequence*                              FinishedSequence;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.OnCinematicSequenceComplete
struct UDH_TutorialChapter_OnCinematicSequenceComplete_Params
{
};

// Function DreadHunger.DH_TutorialChapter.OnBegin
struct UDH_TutorialChapter_OnBegin_Params
{
};

// Function DreadHunger.DH_TutorialChapter.OnActorsInitialized
struct UDH_TutorialChapter_OnActorsInitialized_Params
{
};

// Function DreadHunger.DH_TutorialChapter.IncapacitationResultsInFailure
struct UDH_TutorialChapter_IncapacitationResultsInFailure_Params
{
	class ADH_Character*                               NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetTimeOfDayOverride
struct UDH_TutorialChapter_GetTimeOfDayOverride_Params
{
	float                                              DesiredTimeOfDay;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DesiredInterpSpeed;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetStartSpot
struct UDH_TutorialChapter_GetStartSpot_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetStartingObjective
struct UDH_TutorialChapter_GetStartingObjective_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetPlayerPawnClassOverride
struct UDH_TutorialChapter_GetPlayerPawnClassOverride_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetCurrentObjective
struct UDH_TutorialChapter_GetCurrentObjective_Params
{
	class UDH_TutorialObjective*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetCrewSpawnPoint
struct UDH_TutorialChapter_GetCrewSpawnPoint_Params
{
	EPlayerTeamRole                                    CrewRole;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetCrewNPC
struct UDH_TutorialChapter_GetCrewNPC_Params
{
	EPlayerTeamRole                                    Role;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.GetBlizzardIntensityOverride
struct UDH_TutorialChapter_GetBlizzardIntensityOverride_Params
{
	float                                              DesiredBlizzardIntensity;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.DespawnAI
struct UDH_TutorialChapter_DespawnAI_Params
{
};

// Function DreadHunger.DH_TutorialChapter.AllowItemSpawn
struct UDH_TutorialChapter_AllowItemSpawn_Params
{
	class AActor*                                      ItemOwner;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryType                                     ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.AllowInteraction
struct UDH_TutorialChapter_AllowInteraction_Params
{
	class AActor*                                      InteractTarget;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.AllowInput
struct UDH_TutorialChapter_AllowInput_Params
{
	struct FName                                       InputMapping;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.AllowCrewActivity
struct UDH_TutorialChapter_AllowCrewActivity_Params
{
	class UDH_CrewActivity*                            InActivity;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialChapter.AllowCrafting
struct UDH_TutorialChapter_AllowCrafting_Params
{
	class UDH_CraftingRecipe*                          InRecipe;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnWarshipSank
struct ADH_TutorialGameMode_OnWarshipSank_Params
{
	class ADH_Warship*                                 SunkShip;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnTransactingInventoryChanged
struct ADH_TutorialGameMode_OnTransactingInventoryChanged_Params
{
	class UDH_InventoryTransactionComponent*           InventoryTransactionComponent;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_InventoryManager*                        InventoryManager;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnThrallSpellCast
struct ADH_TutorialGameMode_OnThrallSpellCast_Params
{
	class UDH_TotemSpell*                              Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnPlayerGainedInventory
struct ADH_TutorialGameMode_OnPlayerGainedInventory_Params
{
	class ADH_Inventory*                               Inv;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnPlayerBecameCannibal
struct ADH_TutorialGameMode_OnPlayerBecameCannibal_Params
{
	class ADH_PlayerState*                             CannibalPlayerState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnObjectiveCompleted
struct ADH_TutorialGameMode_OnObjectiveCompleted_Params
{
	class UDH_TutorialObjective*                       CompletedObjective;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnObjectiveChanged
struct ADH_TutorialGameMode_OnObjectiveChanged_Params
{
	class UDH_TutorialObjective*                       NewObjective;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialGameMode.OnIncapacitationChanged
struct ADH_TutorialGameMode_OnIncapacitationChanged_Params
{
	class ADH_HumanCharacter*                          InHumanPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.ShowNextConcept
struct ADH_TutorialManager_ShowNextConcept_Params
{
};

// Function DreadHunger.DH_TutorialManager.SetCurrentObjective
struct ADH_TutorialManager_SetCurrentObjective_Params
{
	struct FName                                       ObjectiveName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.SetCurrentConcept
struct ADH_TutorialManager_SetCurrentConcept_Params
{
	struct FName                                       ConceptName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.SetCurrentChapter
struct ADH_TutorialManager_SetCurrentChapter_Params
{
	ETutorialChapters                                  InChapter;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.OnObjectiveCompleted
struct ADH_TutorialManager_OnObjectiveCompleted_Params
{
	class UDH_TutorialObjective*                       CompletedObjective;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.OnDestructibleDestroyed
struct ADH_TutorialManager_OnDestructibleDestroyed_Params
{
	class ADH_DestructibleActor*                       Destructible;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.OnConceptChanged
struct ADH_TutorialManager_OnConceptChanged_Params
{
	struct FName                                       NewConcept;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.ObjectiveCompleted
struct ADH_TutorialManager_ObjectiveCompleted_Params
{
	class UDH_TutorialObjective*                       CompletedObjective;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.GetCurrentObjective
struct ADH_TutorialManager_GetCurrentObjective_Params
{
	class UDH_TutorialObjective*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.GetCurrentConcept
struct ADH_TutorialManager_GetCurrentConcept_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.GetCurrentChapter
struct ADH_TutorialManager_GetCurrentChapter_Params
{
	class UDH_TutorialChapter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.Get
struct ADH_TutorialManager_Get_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_TutorialManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialManager.BeginNextChapter
struct ADH_TutorialManager_BeginNextChapter_Params
{
	class UDH_TutorialChapter*                         PreviousChapter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.ShouldRenderGoalMarker
struct UDH_TutorialObjective_ShouldRenderGoalMarker_Params
{
	class AActor*                                      GoalActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.OnInitialized
struct UDH_TutorialObjective_OnInitialized_Params
{
};

// Function DreadHunger.DH_TutorialObjective.OnDeactivated
struct UDH_TutorialObjective_OnDeactivated_Params
{
};

// Function DreadHunger.DH_TutorialObjective.OnCompleted
struct UDH_TutorialObjective_OnCompleted_Params
{
};

// Function DreadHunger.DH_TutorialObjective.OnActivated
struct UDH_TutorialObjective_OnActivated_Params
{
};

// Function DreadHunger.DH_TutorialObjective.GetTimeOfDayOverride
struct UDH_TutorialObjective_GetTimeOfDayOverride_Params
{
	float                                              DesiredTimeOfDay;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.GetChapter
struct UDH_TutorialObjective_GetChapter_Params
{
	class UDH_TutorialChapter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.GetBlizzardIntensityOverride
struct UDH_TutorialObjective_GetBlizzardIntensityOverride_Params
{
	float                                              DesiredBlizzardIntensity;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.GetAssociatedActors
struct UDH_TutorialObjective_GetAssociatedActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_TutorialObjective.CheckCompletion
struct UDH_TutorialObjective_CheckCompletion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.AllowItemSpawn
struct UDH_TutorialObjective_AllowItemSpawn_Params
{
	class AActor*                                      ItemOwner;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryType                                     ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.AllowInteraction
struct UDH_TutorialObjective_AllowInteraction_Params
{
	class AActor*                                      InteractTarget;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.AllowInput
struct UDH_TutorialObjective_AllowInput_Params
{
	struct FName                                       InputMapping;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.AllowCrewActivity
struct UDH_TutorialObjective_AllowCrewActivity_Params
{
	class UDH_CrewActivity*                            InActivity;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialObjective.AllowCrafting
struct UDH_TutorialObjective_AllowCrafting_Params
{
	class UDH_CraftingRecipe*                          InRecipe;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.SetObjective
struct UDH_TutorialStatics_SetObjective_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.SetCurrentChapter
struct UDH_TutorialStatics_SetCurrentChapter_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ETutorialChapters                                  InChapter;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.IsTestingBearFight
struct UDH_TutorialStatics_IsTestingBearFight_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.IsObjectiveComplete
struct UDH_TutorialStatics_IsObjectiveComplete_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.IsChapterUnlocked
struct UDH_TutorialStatics_IsChapterUnlocked_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ETutorialChapters                                  InChapter;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.GetTutorialGameMode
struct UDH_TutorialStatics_GetTutorialGameMode_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_TutorialGameMode*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.GetCurrentChapter
struct UDH_TutorialStatics_GetCurrentChapter_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_TutorialChapter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.ExplainConcept
struct UDH_TutorialStatics_ExplainConcept_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConceptName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.EndUITutorial
struct UDH_TutorialStatics_EndUITutorial_Params
{
	class UWidget*                                     TargetWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.CompleteCurrentObjective
struct UDH_TutorialStatics_CompleteCurrentObjective_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.CompleteCurrentChapter
struct UDH_TutorialStatics_CompleteCurrentChapter_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialStatics.BeginUITutorial
struct UDH_TutorialStatics_BeginUITutorial_Params
{
	class UWidget*                                     TargetWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_TutorialTriggerVolume.SetEnabled
struct ADH_TutorialTriggerVolume_SetEnabled_Params
{
	bool                                               bNewIsEnabled;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_UseCraftingMenuHintWidget.SetWarmthCritical
struct UDH_UseCraftingMenuHintWidget_SetWarmthCritical_Params
{
	bool                                               bInWarmthCritical;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_UseCraftingMenuHintWidget.OnIncapacitatedChanged
struct UDH_UseCraftingMenuHintWidget_OnIncapacitatedChanged_Params
{
	class ADH_HumanCharacter*                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.TrimName
struct UDH_UserWidgetBlueprintLibrary_TrimName_Params
{
	class FString                                      InName;                                                   // (Parm, ZeroConstructor)
	int                                                MaxLength;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.ResetMouseAndInput
struct UDH_UserWidgetBlueprintLibrary_ResetMouseAndInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.PushMouseAndInput
struct UDH_UserWidgetBlueprintLibrary_PushMouseAndInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetToFocus;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameAndUI;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.PopMouseAndInput
struct UDH_UserWidgetBlueprintLibrary_PopMouseAndInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetToFocus;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsShipping
struct UDH_UserWidgetBlueprintLibrary_IsShipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsDesignTime
struct UDH_UserWidgetBlueprintLibrary_IsDesignTime_Params
{
	class UWidget*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsControllerMode
struct UDH_UserWidgetBlueprintLibrary_IsControllerMode_Params
{
	class UObject*                                     WorldContextObject_;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetViewedPawn
struct UDH_UserWidgetBlueprintLibrary_GetViewedPawn_Params
{
	class UUserWidget*                                 Context;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetTextBlockStyle
struct UDH_UserWidgetBlueprintLibrary_GetTextBlockStyle_Params
{
	struct FRichTextStyleRow                           RichTextStyleRow;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTextBlockStyle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetPaletteColor
struct UDH_UserWidgetBlueprintLibrary_GetPaletteColor_Params
{
	struct FName                                       ColorName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetOwningUserWidget
struct UDH_UserWidgetBlueprintLibrary_GetOwningUserWidget_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetBrush
struct UDH_UserWidgetBlueprintLibrary_GetBrush_Params
{
	struct FRichImageRow                               ImageRow;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.ConstructWidgetAnimationHandler
struct UDH_UserWidgetBlueprintLibrary_ConstructWidgetAnimationHandler_Params
{
	class UDH_WidgetAnimationHandler*                  WidgetAnimationHandlerClass;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 WidgetOwner;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   VisibleVisibility;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   HiddenVisibility;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForwardPlaybackSpeed;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReversePlaybackSpeed;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            ReversibleAnimation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     WidgetAffectedByVisibility;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_WidgetAnimationHandler*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_UserWidgetBlueprintLibrary.ConstructWidget
struct UDH_UserWidgetBlueprintLibrary_ConstructWidget_Params
{
	class UUserWidget*                                 InOwner;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     InClassToCreate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_VoipSettingsJsonSaveData.GetInstance
struct UDH_VoipSettingsJsonSaveData_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_VoipSettingsJsonSaveData*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_VoipSettingsSaveGame.GetInstance
struct UDH_VoipSettingsSaveGame_GetInstance_Params
{
	class UObject*                                     Context;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_VoipSettingsSaveGame*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.SpawnBreaches
struct ADH_Warship_SpawnBreaches_Params
{
	class APawn*                                       BreachInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BreachCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.SetEquippedCosmeticItems
struct ADH_Warship_SetEquippedCosmeticItems_Params
{
	TArray<struct FEquippedShipCosmetics>              NewItems;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bOwnershipCheck;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.SetEnableAutoMove
struct ADH_Warship_SetEnableAutoMove_Params
{
	bool                                               bInAutoMove;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.OnShowPregameInstructions
struct ADH_Warship_OnShowPregameInstructions_Params
{
	int                                                InThrallCount;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.OnShipOverlappedActor
struct ADH_Warship_OnShipOverlappedActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.OnShipBeginOverlap
struct ADH_Warship_OnShipBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.OnRep_EquippedCosmeticItems
struct ADH_Warship_OnRep_EquippedCosmeticItems_Params
{
	TArray<struct FEquippedShipCosmetics>              PreviousCosmetics;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DreadHunger.DH_Warship.OnRep_CurrentHullIntegrity
struct ADH_Warship_OnRep_CurrentHullIntegrity_Params
{
};

// Function DreadHunger.DH_Warship.OnGangwaysDetached
struct ADH_Warship_OnGangwaysDetached_Params
{
};

// Function DreadHunger.DH_Warship.GetShipProgress
struct ADH_Warship_GetShipProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.GetPressureGauge
struct ADH_Warship_GetPressureGauge_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.GetHelm
struct ADH_Warship_GetHelm_Params
{
	class ADH_WarshipHelm*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.GetGangways
struct ADH_Warship_GetGangways_Params
{
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DreadHunger.DH_Warship.GetBoiler
struct ADH_Warship_GetBoiler_Params
{
	class ADH_WarshipBoiler*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.FuelBoiler
struct ADH_Warship_FuelBoiler_Params
{
	float                                              InFuelPct;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.BP_GetSkipperLocation
struct ADH_Warship_BP_GetSkipperLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Warship.AddLights
struct ADH_Warship_AddLights_Params
{
	TArray<class ULightComponent*>                     Lights;                                                   // (Parm, ZeroConstructor)
	EShipSpacePartition                                Section;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.Sabotage
struct ADH_WarshipBoiler_Sabotage_Params
{
};

// Function DreadHunger.DH_WarshipBoiler.OnRep_SabotageCount
struct ADH_WarshipBoiler_OnRep_SabotageCount_Params
{
};

// Function DreadHunger.DH_WarshipBoiler.OnRep_PendingSabotageUnits
struct ADH_WarshipBoiler_OnRep_PendingSabotageUnits_Params
{
};

// Function DreadHunger.DH_WarshipBoiler.OnPlayerLeftGame
struct ADH_WarshipBoiler_OnPlayerLeftGame_Params
{
	class ADH_PlayerState*                             RemovedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.OnOnlineSessionUpdateComplete
struct ADH_WarshipBoiler_OnOnlineSessionUpdateComplete_Params
{
};

// Function DreadHunger.DH_WarshipBoiler.OnLobbyPlayerOnShipChanged
struct ADH_WarshipBoiler_OnLobbyPlayerOnShipChanged_Params
{
	class ADH_HumanCharacter*                          HumanCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.OnBoilerLit
struct ADH_WarshipBoiler_OnBoilerLit_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.OnBoilerDied
struct ADH_WarshipBoiler_OnBoilerDied_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.LightBoiler
struct ADH_WarshipBoiler_LightBoiler_Params
{
	class UDH_CraftingProject*                         StartupProject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.ConvertToFuel
struct ADH_WarshipBoiler_ConvertToFuel_Params
{
	class ADH_Inventory*                               Fuel;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler.AddSaboteur
struct ADH_WarshipBoiler_AddSaboteur_Params
{
	class ADH_PlayerState*                             InSaboteur;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSabotageStacks;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InOverBoostStack;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipBoiler_Vent.OnRep_ReceivedInventoryCounter
struct ADH_WarshipBoiler_Vent_OnRep_ReceivedInventoryCounter_Params
{
};

// Function DreadHunger.DH_WarshipBoiler_Vent.OnInventoryReceived
struct ADH_WarshipBoiler_Vent_OnInventoryReceived_Params
{
	class ADH_Inventory*                               Fuel;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDH_InventoryManager*                        Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipHelm.TakeHelm
struct ADH_WarshipHelm_TakeHelm_Params
{
	class AController*                                 NewHelmsman;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipHelm.OnRep_CurrentHelmsman
struct ADH_WarshipHelm_OnRep_CurrentHelmsman_Params
{
};

// Function DreadHunger.DH_WarshipHelm.OnMatchEnded
struct ADH_WarshipHelm_OnMatchEnded_Params
{
};

// Function DreadHunger.DH_WarshipHelm.OnHelmsmanMovementModeChanged
struct ADH_WarshipHelm_OnHelmsmanMovementModeChanged_Params
{
	class ACharacter*                                  AffectedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipHelm.OnHelmsmanDied
struct ADH_WarshipHelm_OnHelmsmanDied_Params
{
	class ADH_Character*                               DeadPawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipHelm.OnHelmsmanDestroyed
struct ADH_WarshipHelm_OnHelmsmanDestroyed_Params
{
	class AActor*                                      DestroyedHelmsman;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipHelm.GetCurrentHelmsman
struct ADH_WarshipHelm_GetCurrentHelmsman_Params
{
	class ADH_HumanCharacter*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipHelm.CanReleaseHelm
struct ADH_WarshipHelm_CanReleaseHelm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipPathSpline.OnPathingShipDestroyed
struct ADH_WarshipPathSpline_OnPathingShipDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipPathSpline.Init
struct ADH_WarshipPathSpline_Init_Params
{
	class ADH_Warship*                                 InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WarshipSpawnPoint.SpawnShip
struct ADH_WarshipSpawnPoint_SpawnShip_Params
{
	class ADH_Warship*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Ranged.ReloadingConsumesAmmo
struct ADH_Weapon_Ranged_ReloadingConsumesAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Ranged.OnProjectileSpawned
struct ADH_Weapon_Ranged_OnProjectileSpawned_Params
{
	class ADH_Projectile*                              NewProjectile;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Ranged.OnProjectileHitActor
struct ADH_Weapon_Ranged_OnProjectileHitActor_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Ranged.HitActor
struct ADH_Weapon_Ranged_HitActor_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function DreadHunger.DH_Weapon_Ranged.GetFireSpread
struct ADH_Weapon_Ranged_GetFireSpread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetAnimationHandler.Show
struct UDH_WidgetAnimationHandler_Show_Params
{
};

// Function DreadHunger.DH_WidgetAnimationHandler.SetVisibleVisibility
struct UDH_WidgetAnimationHandler_SetVisibleVisibility_Params
{
	ESlateVisibility                                   NewVisibleVisibility;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetAnimationHandler.SetReversibleAnimation
struct UDH_WidgetAnimationHandler_SetReversibleAnimation_Params
{
	class UWidgetAnimation*                            NewReversibleAnimation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetAnimationHandler.SetReversePlaybackSpeed
struct UDH_WidgetAnimationHandler_SetReversePlaybackSpeed_Params
{
	float                                              NewReversePlaybackSpeed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetAnimationHandler.SetHiddenVisibility
struct UDH_WidgetAnimationHandler_SetHiddenVisibility_Params
{
	ESlateVisibility                                   NewHiddenVisibility;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetAnimationHandler.SetForwardPlaybackSpeed
struct UDH_WidgetAnimationHandler_SetForwardPlaybackSpeed_Params
{
	float                                              NewForwardPlaybackSpeed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetAnimationHandler.Hide
struct UDH_WidgetAnimationHandler_Hide_Params
{
};

// Function DreadHunger.DH_WidgetAnimationHandler.GetIsHiding
struct UDH_WidgetAnimationHandler_GetIsHiding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetsToInstanceStore.RemoveWidget
struct UDH_WidgetsToInstanceStore_RemoveWidget_Params
{
	class UUserWidget*                                 WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WidgetsToInstanceStore.AddWidget
struct UDH_WidgetsToInstanceStore_AddWidget_Params
{
	class UUserWidget*                                 WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EDH_HUDLocationType                                Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WinningHandWidget.SortHand
struct UDH_WinningHandWidget_SortHand_Params
{
	struct FPlayingCardHand                            UnsortedHand;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPlayingCardHand                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DreadHunger.DH_Workbench.RepairItems
struct ADH_Workbench_RepairItems_Params
{
	class UDH_CraftingProject*                         RepairProject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DreadHunger.DH_WorldSettings.UpdateOverheadImage
struct ADH_WorldSettings_UpdateOverheadImage_Params
{
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
