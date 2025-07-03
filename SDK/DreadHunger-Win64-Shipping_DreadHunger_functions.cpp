                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DreadHunger_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DreadHunger.DH_ActiveDebugControls.SetTOD
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Hour                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDH_ActiveDebugControls::SetTOD(float Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ActiveDebugControls.SetTOD");

	UDH_ActiveDebugControls_SetTOD_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_AIController.TargetCharacterDied
// (Native, Protected)
// Parameters:
// class ADH_Character*           Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIController::TargetCharacterDied(class ADH_Character* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIController.TargetCharacterDied");

	ADH_AIController_TargetCharacterDied_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIController.OnTakeDamage
// (Native, Protected)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIController::OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIController.OnTakeDamage");

	ADH_AIController_OnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIController.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bCinematicMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIController::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIController.OnCinematicModeChanged");

	ADH_AIController_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIController.ControlledCharacterDied
// (Native, Protected)
// Parameters:
// class ADH_Character*           DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIController::ControlledCharacterDied(class ADH_Character* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIController.ControlledCharacterDied");

	ADH_AIController_ControlledCharacterDied_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIController.AddTargetToThreatTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExtraThreat                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIController::AddTargetToThreatTable(class AActor* NewTarget, float ExtraThreat)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIController.AddTargetToThreatTable");

	ADH_AIController_AddTargetToThreatTable_Params params;
	params.NewTarget = NewTarget;
	params.ExtraThreat = ExtraThreat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIControllerWildlife.SensedActor
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (Parm)

void ADH_AIControllerWildlife::SensedActor(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIControllerWildlife.SensedActor");

	ADH_AIControllerWildlife_SensedActor_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.SpawnAI
// (Final, Native, Public, BlueprintCallable)

void ADH_AIPathSpline::SpawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.SpawnAI");

	ADH_AIPathSpline_SpawnAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.OnStartedPathing
// (Event, Public, BlueprintEvent)

void ADH_AIPathSpline::OnStartedPathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.OnStartedPathing");

	ADH_AIPathSpline_OnStartedPathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.OnPointReached
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PointIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIPathSpline::OnPointReached(int PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.OnPointReached");

	ADH_AIPathSpline_OnPointReached_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.OnPathingCharacterDied
// (Final, Native, Private)
// Parameters:
// class ADH_Character*           DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIPathSpline::OnPathingCharacterDied(class ADH_Character* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.OnPathingCharacterDied");

	ADH_AIPathSpline_OnPathingCharacterDied_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.OnPathingCharacterDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIPathSpline::OnPathingCharacterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.OnPathingCharacterDestroyed");

	ADH_AIPathSpline_OnPathingCharacterDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.OnMoveComplete
// (Final, Native, Private)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIPathSpline::OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.OnMoveComplete");

	ADH_AIPathSpline_OnMoveComplete_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.OnAISpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Character*           SpawnedAI                      (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIPathSpline::OnAISpawned(class ADH_Character* SpawnedAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.OnAISpawned");

	ADH_AIPathSpline_OnAISpawned_Params params;
	params.SpawnedAI = SpawnedAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.MoveToPoint
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// int                            TargetPathIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AIPathSpline::MoveToPoint(int TargetPathIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.MoveToPoint");

	ADH_AIPathSpline_MoveToPoint_Params params;
	params.TargetPathIndex = TargetPathIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.MoveToNextPoint
// (Final, Native, Private, BlueprintCallable)

void ADH_AIPathSpline::MoveToNextPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.MoveToNextPoint");

	ADH_AIPathSpline_MoveToNextPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AIPathSpline.GetProximityRadius
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            InPathIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_AIPathSpline::GetProximityRadius(int InPathIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.GetProximityRadius");

	ADH_AIPathSpline_GetProximityRadius_Params params;
	params.InPathIndex = InPathIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_AIPathSpline.BeginPathing
// (Final, Native, Public, BlueprintCallable)

void ADH_AIPathSpline::BeginPathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AIPathSpline.BeginPathing");

	ADH_AIPathSpline_BeginPathing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AISpawnManager.RemoveSpawnedCharacter
// (Final, Native, Protected)
// Parameters:
// class ADH_Character*           CharacterToRemove              (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AISpawnManager::RemoveSpawnedCharacter(class ADH_Character* CharacterToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AISpawnManager.RemoveSpawnedCharacter");

	ADH_AISpawnManager_RemoveSpawnedCharacter_Params params;
	params.CharacterToRemove = CharacterToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AISpawnManager.QuerySpawnLocation
// (Final, Native, Private, BlueprintCallable)

void ADH_AISpawnManager::QuerySpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AISpawnManager.QuerySpawnLocation");

	ADH_AISpawnManager_QuerySpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AISpawnManager.OnSpellExpired
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AISpawnManager::OnSpellExpired(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AISpawnManager.OnSpellExpired");

	ADH_AISpawnManager_OnSpellExpired_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AISpawnManager.OnSpellCast
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AISpawnManager::OnSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AISpawnManager.OnSpellCast");

	ADH_AISpawnManager_OnSpellCast_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AISpawnManager.OnDaysUntilBlizzardChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameState*           InGameState                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_AISpawnManager::OnDaysUntilBlizzardChanged(class ADH_GameState* InGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AISpawnManager.OnDaysUntilBlizzardChanged");

	ADH_AISpawnManager_OnDaysUntilBlizzardChanged_Params params;
	params.InGameState = InGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AITarget.IsAITargetable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_AITarget::IsAITargetable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AITarget.IsAITargetable");

	UDH_AITarget_IsAITargetable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_AITarget.GetThreatOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          CurrentThreat                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_AITarget::GetThreatOverride(float CurrentThreat)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AITarget.GetThreatOverride");

	UDH_AITarget_GetThreatOverride_Params params;
	params.CurrentThreat = CurrentThreat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_AITarget.GetInitialThreat
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_AITarget::GetInitialThreat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AITarget.GetInitialThreat");

	UDH_AITarget_GetInitialThreat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.TransferInventory_Simulated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventoryManager*    SourceInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    TargetInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TargetSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoFindTargetSlot            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bQuickLoot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::TransferInventory_Simulated(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot, int Quantity, bool bAutoFindTargetSlot, bool bQuickLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.TransferInventory_Simulated");

	ADH_Character_TransferInventory_Simulated_Params params;
	params.SourceInventory = SourceInventory;
	params.SourceSlot = SourceSlot;
	params.TargetInventory = TargetInventory;
	params.TargetSlot = TargetSlot;
	params.Quantity = Quantity;
	params.bAutoFindTargetSlot = bAutoFindTargetSlot;
	params.bQuickLoot = bQuickLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.TransferInventory
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UDH_InventoryManager*    SourceManager                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    TargetManager                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TargetSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoFindTargetSlot            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bQuickLoot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::TransferInventory(class UDH_InventoryManager* SourceManager, int SourceSlot, class UDH_InventoryManager* TargetManager, int TargetSlot, int Quantity, bool bAutoFindTargetSlot, bool bQuickLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.TransferInventory");

	ADH_Character_TransferInventory_Params params;
	params.SourceManager = SourceManager;
	params.SourceSlot = SourceSlot;
	params.TargetManager = TargetManager;
	params.TargetSlot = TargetSlot;
	params.Quantity = Quantity;
	params.bAutoFindTargetSlot = bAutoFindTargetSlot;
	params.bQuickLoot = bQuickLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.SetShouldRun
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewShouldRun                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::SetShouldRun(bool bNewShouldRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.SetShouldRun");

	ADH_Character_SetShouldRun_Params params;
	params.bNewShouldRun = bNewShouldRun;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.SetGenericTeamId
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGenericTeamId          NewTeamID                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_Character::SetGenericTeamId(const struct FGenericTeamId& NewTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.SetGenericTeamId");

	ADH_Character_SetGenericTeamId_Params params;
	params.NewTeamID = NewTeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_TargetCharacter
// (Final, Native, Private)

void ADH_Character::OnRep_TargetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_TargetCharacter");

	ADH_Character_OnRep_TargetCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_Snare
// (Native, Protected)

void ADH_Character::OnRep_Snare()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_Snare");

	ADH_Character_OnRep_Snare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_LastLanding
// (Final, Native, Private)

void ADH_Character::OnRep_LastLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_LastLanding");

	ADH_Character_OnRep_LastLanding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_LastDamageReceived
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDamageInstance         PreviousDamageInstance         (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_Character::OnRep_LastDamageReceived(const struct FDamageInstance& PreviousDamageInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_LastDamageReceived");

	ADH_Character_OnRep_LastDamageReceived_Params params;
	params.PreviousDamageInstance = PreviousDamageInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_DeathState
// (Final, Native, Private)

void ADH_Character::OnRep_DeathState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_DeathState");

	ADH_Character_OnRep_DeathState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_CurrentReservedHealth
// (Final, Native, Private)

void ADH_Character::OnRep_CurrentReservedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_CurrentReservedHealth");

	ADH_Character_OnRep_CurrentReservedHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_CurrentHealth
// (Final, Native, Private)

void ADH_Character::OnRep_CurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_CurrentHealth");

	ADH_Character_OnRep_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnRep_CurrentClimbingActor
// (Final, Native, Private)

void ADH_Character::OnRep_CurrentClimbingActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnRep_CurrentClimbingActor");

	ADH_Character_OnRep_CurrentClimbingActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnInventoryEmptied
// (Final, Native, Private)

void ADH_Character::OnInventoryEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnInventoryEmptied");

	ADH_Character_OnInventoryEmptied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnHarvestedCorpse
// (Final, Native, Private)

void ADH_Character::OnHarvestedCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnHarvestedCorpse");

	ADH_Character_OnHarvestedCorpse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnEnsnared
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADH_BearTrapPickup*      InSnare                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::OnEnsnared(class ADH_BearTrapPickup* InSnare)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnEnsnared");

	ADH_Character_OnEnsnared_Params params;
	params.InSnare = InSnare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnDied
// (Event, Protected, BlueprintEvent)

void ADH_Character::OnDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnDied");

	ADH_Character_OnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.OnCinematicModeChanged
// (Native, Protected)
// Parameters:
// bool                           bCinematicMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.OnCinematicModeChanged");

	ADH_Character_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.ModifyHealth
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::ModifyHealth(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.ModifyHealth");

	ADH_Character_ModifyHealth_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.IsSwimming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Character::IsSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.IsSwimming");

	ADH_Character_IsSwimming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.IsEnsnared
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Character::IsEnsnared()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.IsEnsnared");

	ADH_Character_IsEnsnared_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.IsClimbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Character::IsClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.IsClimbing");

	ADH_Character_IsClimbing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Character::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.IsAlive");

	ADH_Character_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.InventoryTransferSucceeded
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UDH_InventoryManager*    SourceInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    TargetInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::InventoryTransferSucceeded(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.InventoryTransferSucceeded");

	ADH_Character_InventoryTransferSucceeded_Params params;
	params.SourceInventory = SourceInventory;
	params.SourceSlot = SourceSlot;
	params.TargetInventory = TargetInventory;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.InventoryTransferFailed
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UDH_InventoryManager*    SourceInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    TargetInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TargetSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::InventoryTransferFailed(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.InventoryTransferFailed");

	ADH_Character_InventoryTransferFailed_Params params;
	params.SourceInventory = SourceInventory;
	params.SourceSlot = SourceSlot;
	params.TargetInventory = TargetInventory;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.InventoryQuickTransferSucceeded
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UDH_InventoryManager*    SourceInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    TargetInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TargetSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::InventoryQuickTransferSucceeded(class UDH_InventoryManager* SourceInventory, int SourceSlot, class UDH_InventoryManager* TargetInventory, int TargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.InventoryQuickTransferSucceeded");

	ADH_Character_InventoryQuickTransferSucceeded_Params params;
	params.SourceInventory = SourceInventory;
	params.SourceSlot = SourceSlot;
	params.TargetInventory = TargetInventory;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.HallucinationExpired
// (Final, Native, Public)

void ADH_Character::HallucinationExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.HallucinationExpired");

	ADH_Character_HallucinationExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.GetSnareDurationModifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Character::GetSnareDurationModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetSnareDurationModifier");

	ADH_Character_GetSnareDurationModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetMaximumHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Character::GetMaximumHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetMaximumHealth");

	ADH_Character_GetMaximumHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetInventoryComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryManager*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryManager* ADH_Character::GetInventoryComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetInventoryComponent");

	ADH_Character_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryManager*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryManager* ADH_Character::GetInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetInventory");

	ADH_Character_GetInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetGenericTeamId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGenericTeamId          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGenericTeamId ADH_Character::GetGenericTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetGenericTeamId");

	ADH_Character_GetGenericTeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetDeathState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECharacterDeathState           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECharacterDeathState ADH_Character::GetDeathState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetDeathState");

	ADH_Character_GetDeathState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetCurrentReservedHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Character::GetCurrentReservedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetCurrentReservedHealth");

	ADH_Character_GetCurrentReservedHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetCurrentHealthState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECharacterHealthState          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECharacterHealthState ADH_Character::GetCurrentHealthState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetCurrentHealthState");

	ADH_Character_GetCurrentHealthState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetCurrentHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Character::GetCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetCurrentHealth");

	ADH_Character_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetCorpseCraftingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CraftingComponent* ADH_Character::GetCorpseCraftingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetCorpseCraftingComponent");

	ADH_Character_GetCorpseCraftingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetCharacterAnimInst
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CharacterAnimInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CharacterAnimInstance* ADH_Character::GetCharacterAnimInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetCharacterAnimInst");

	ADH_Character_GetCharacterAnimInst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetBodyPartBoneList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ADH_Character::GetBodyPartBoneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetBodyPartBoneList");

	ADH_Character_GetBodyPartBoneList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.GetAttitudeTowards
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> ADH_Character::GetAttitudeTowards(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.GetAttitudeTowards");

	ADH_Character_GetAttitudeTowards_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.Ensnare
// (Native, Public, BlueprintCallable)
// Parameters:
// class ADH_BearTrapPickup*      InSnare                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSnareDuration                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::Ensnare(class ADH_BearTrapPickup* InSnare, float InSnareDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.Ensnare");

	ADH_Character_Ensnare_Params params;
	params.InSnare = InSnare;
	params.InSnareDuration = InSnareDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.DropInventory_Simulated
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InventoryIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bThrown                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDropMethod           DropMethod                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetVariation                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotationVariation              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            DropCount                      (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::DropInventory_Simulated(int InventoryIndex, bool bThrown, EInventoryDropMethod DropMethod, const struct FVector& OffsetVariation, const struct FRotator& RotationVariation, int DropCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.DropInventory_Simulated");

	ADH_Character_DropInventory_Simulated_Params params;
	params.InventoryIndex = InventoryIndex;
	params.bThrown = bThrown;
	params.DropMethod = DropMethod;
	params.OffsetVariation = OffsetVariation;
	params.RotationVariation = RotationVariation;
	params.DropCount = DropCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.Died
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             KillingDamageType              (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverkillDamage                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::Died(class AController* Killer, class UDamageType* KillingDamageType, float OverkillDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.Died");

	ADH_Character_Died_Params params;
	params.Killer = Killer;
	params.KillingDamageType = KillingDamageType;
	params.OverkillDamage = OverkillDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Character.CanBeEnsnared
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Character::CanBeEnsnared()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.CanBeEnsnared");

	ADH_Character_CanBeEnsnared_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.Attack
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Character::Attack(class AActor* Target, int InAttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.Attack");

	ADH_Character_Attack_Params params;
	params.Target = Target;
	params.InAttackIndex = InAttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Character.AdjustDamage
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::AdjustDamage(float* Damage, const struct FDamageEvent& DamageEvent, class AController* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.AdjustDamage");

	ADH_Character_AdjustDamage_Params params;
	params.DamageEvent = DamageEvent;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function DreadHunger.DH_Character.AddDeathInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_Inventory*           Type                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Character::AddDeathInventory(class ADH_Inventory* Type, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Character.AddDeathInventory");

	ADH_Character_AddDeathInventory_Params params;
	params.Type = Type;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AnimalCharacter.PlayCallForHelp
// (Final, Native, Private)

void ADH_AnimalCharacter::PlayCallForHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AnimalCharacter.PlayCallForHelp");

	ADH_AnimalCharacter_PlayCallForHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AnimalCharacter.OnSpellExpired
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AnimalCharacter::OnSpellExpired(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AnimalCharacter.OnSpellExpired");

	ADH_AnimalCharacter_OnSpellExpired_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AnimalCharacter.OnSpellCast
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_AnimalCharacter::OnSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AnimalCharacter.OnSpellCast");

	ADH_AnimalCharacter_OnSpellCast_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AnimalCharacter.OnRep_AttackFlash
// (Final, Native, Private)

void ADH_AnimalCharacter::OnRep_AttackFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AnimalCharacter.OnRep_AttackFlash");

	ADH_AnimalCharacter_OnRep_AttackFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_AnimalCharacter.IsAttackingTeammate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_PlayerState*         OtherPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_AnimalCharacter::IsAttackingTeammate(class ADH_PlayerState* OtherPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AnimalCharacter.IsAttackingTeammate");

	ADH_AnimalCharacter_IsAttackingTeammate_Params params;
	params.OtherPlayer = OtherPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_AnimalCharacter.GetPackIceCollider
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* ADH_AnimalCharacter::GetPackIceCollider()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_AnimalCharacter.GetPackIceCollider");

	ADH_AnimalCharacter_GetPackIceCollider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.UseStateBlocksInteracts
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  State                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::UseStateBlocksInteracts(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.UseStateBlocksInteracts");

	ADH_Inventory_UseStateBlocksInteracts_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.Use
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              UseTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::Use(const struct FTransform& UseTransform, unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.Use");

	ADH_Inventory_Use_Params params;
	params.UseTransform = UseTransform;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.Upgrade
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::Upgrade(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.Upgrade");

	ADH_Inventory_Upgrade_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.StateConsumesUse
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  State                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::StateConsumesUse(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.StateConsumesUse");

	ADH_Inventory_StateConsumesUse_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.SetUsesRemaining
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewUsesRemaining               (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::SetUsesRemaining(float NewUsesRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.SetUsesRemaining");

	ADH_Inventory_SetUsesRemaining_Params params;
	params.NewUsesRemaining = NewUsesRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.SetPublicFlags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EInventoryStateFlags           FlagsToSet                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSet                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::SetPublicFlags(EInventoryStateFlags FlagsToSet, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.SetPublicFlags");

	ADH_Inventory_SetPublicFlags_Params params;
	params.FlagsToSet = FlagsToSet;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.SetDurability
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDurability                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::SetDurability(float NewDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.SetDurability");

	ADH_Inventory_SetDurability_Params params;
	params.NewDurability = NewDurability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnWantsToAimChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewWantsToAim                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::OnWantsToAimChanged(bool bNewWantsToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnWantsToAimChanged");

	ADH_Inventory_OnWantsToAimChanged_Params params;
	params.bNewWantsToAim = bNewWantsToAim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnUseFailed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADH_Inventory::OnUseFailed(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnUseFailed");

	ADH_Inventory_OnUseFailed_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnUsed
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              UseTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADH_Inventory::OnUsed(const struct FTransform& UseTransform, unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnUsed");

	ADH_Inventory_OnUsed_Params params;
	params.UseTransform = UseTransform;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnTopStateChanged
// (Native, Event, Public, BlueprintEvent)

void ADH_Inventory::OnTopStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnTopStateChanged");

	ADH_Inventory_OnTopStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnSpawnedPickup
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     Pickup                         (Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDropMethod           SpawnMethod                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnSpawnedPickup");

	ADH_Inventory_OnSpawnedPickup_Params params;
	params.Pickup = Pickup;
	params.SpawnMethod = SpawnMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnRep_TopItemState
// (Final, Native, Protected)

void ADH_Inventory::OnRep_TopItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnRep_TopItemState");

	ADH_Inventory_OnRep_TopItemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnRep_NumberOfItems
// (Final, Native, Protected)

void ADH_Inventory::OnRep_NumberOfItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnRep_NumberOfItems");

	ADH_Inventory_OnRep_NumberOfItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnRep_InventorySlotIndex
// (Final, Native, Protected)

void ADH_Inventory::OnRep_InventorySlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnRep_InventorySlotIndex");

	ADH_Inventory_OnRep_InventorySlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnRep_InventoryManager
// (Final, Native, Protected)

void ADH_Inventory::OnRep_InventoryManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnRep_InventoryManager");

	ADH_Inventory_OnRep_InventoryManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnReloaded
// (Event, Public, BlueprintEvent)

void ADH_Inventory::OnReloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnReloaded");

	ADH_Inventory_OnReloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnPutDown
// (Event, Public, BlueprintEvent)

void ADH_Inventory::OnPutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnPutDown");

	ADH_Inventory_OnPutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnEquipped
// (Event, Public, BlueprintEvent)

void ADH_Inventory::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnEquipped");

	ADH_Inventory_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnAppliedTo
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADH_Inventory*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumApplied                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         ApplyingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::OnAppliedTo(class ADH_Inventory* Target, int NumApplied, class ADH_PlayerState* ApplyingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnAppliedTo");

	ADH_Inventory_OnAppliedTo_Params params;
	params.Target = Target;
	params.NumApplied = NumApplied;
	params.ApplyingPlayer = ApplyingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.OnAimed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsAiming                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::OnAimed(bool bNewIsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.OnAimed");

	ADH_Inventory_OnAimed_Params params;
	params.bNewIsAiming = bNewIsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.ModifyDurability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::ModifyDurability(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.ModifyDurability");

	ADH_Inventory_ModifyDurability_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.LoadFromPickup
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADH_InventoryPickup*     FromPickup                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::LoadFromPickup(class ADH_InventoryPickup* FromPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.LoadFromPickup");

	ADH_Inventory_LoadFromPickup_Params params;
	params.FromPickup = FromPickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.LoadFromInventory
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Inventory*           FromInventory                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::LoadFromInventory(class ADH_Inventory* FromInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.LoadFromInventory");

	ADH_Inventory_LoadFromInventory_Params params;
	params.FromInventory = FromInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.IsReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.IsReloading");

	ADH_Inventory_IsReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.IsPoisoned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::IsPoisoned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.IsPoisoned");

	ADH_Inventory_IsPoisoned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.IncreaseItemStack
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInventoryItemState> ItemStatesToAdd                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bFlushNetDormancy              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::IncreaseItemStack(TArray<struct FInventoryItemState> ItemStatesToAdd, bool bFlushNetDormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.IncreaseItemStack");

	ADH_Inventory_IncreaseItemStack_Params params;
	params.ItemStatesToAdd = ItemStatesToAdd;
	params.bFlushNetDormancy = bFlushNetDormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.HasAnyPublicFlags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryStateFlags           TestFlags                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::HasAnyPublicFlags(EInventoryStateFlags TestFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.HasAnyPublicFlags");

	ADH_Inventory_HasAnyPublicFlags_Params params;
	params.TestFlags = TestFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetUseTransform
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              UseTransform                   (Parm, OutParm, IsPlainOldData)

void ADH_Inventory::GetUseTransform(struct FTransform* UseTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetUseTransform");

	ADH_Inventory_GetUseTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseTransform != nullptr)
		*UseTransform = params.UseTransform;
}


// Function DreadHunger.DH_Inventory.GetUseState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ADH_Inventory::GetUseState(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetUseState");

	ADH_Inventory_GetUseState_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetUsesRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ADH_Inventory::GetUsesRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetUsesRemaining");

	ADH_Inventory_GetUsesRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetUseCooldown
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Inventory::GetUseCooldown(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetUseCooldown");

	ADH_Inventory_GetUseCooldown_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetReplicatedTopItemState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInventoryItemState     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FInventoryItemState ADH_Inventory::GetReplicatedTopItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetReplicatedTopItemState");

	ADH_Inventory_GetReplicatedTopItemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetInventorySlotIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_Inventory::GetInventorySlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetInventorySlotIndex");

	ADH_Inventory_GetInventorySlotIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetFuelValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Inventory::GetFuelValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetFuelValue");

	ADH_Inventory_GetFuelValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetDurability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Inventory::GetDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetDurability");

	ADH_Inventory_GetDurability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetCurrentStackStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryItemState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FInventoryItemState> ADH_Inventory::GetCurrentStackStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetCurrentStackStates");

	ADH_Inventory_GetCurrentStackStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetCurrentStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bDecrementReservedItems        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_Inventory::GetCurrentStackCount(bool bDecrementReservedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetCurrentStackCount");

	ADH_Inventory_GetCurrentStackCount_Params params;
	params.bDecrementReservedItems = bDecrementReservedItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetCrosshairScale
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Inventory::GetCrosshairScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetCrosshairScale");

	ADH_Inventory_GetCrosshairScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetCooldownPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Inventory::GetCooldownPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetCooldownPct");

	ADH_Inventory_GetCooldownPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetAllItemStateUIDs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> ADH_Inventory::GetAllItemStateUIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetAllItemStateUIDs");

	ADH_Inventory_GetAllItemStateUIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.GetAimPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Inventory::GetAimPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.GetAimPct");

	ADH_Inventory_GetAimPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.DecreaseItemStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ToRemove                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlushNetDormancy              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScoreItemConsumption          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Inventory::DecreaseItemStack(int ToRemove, bool bFlushNetDormancy, bool bScoreItemConsumption)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.DecreaseItemStack");

	ADH_Inventory_DecreaseItemStack_Params params;
	params.ToRemove = ToRemove;
	params.bFlushNetDormancy = bFlushNetDormancy;
	params.bScoreItemConsumption = bScoreItemConsumption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.ClearAllPublicFlags
// (Final, Native, Public, BlueprintCallable)

void ADH_Inventory::ClearAllPublicFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.ClearAllPublicFlags");

	ADH_Inventory_ClearAllPublicFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory.CanUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::CanUse(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.CanUse");

	ADH_Inventory_CanUse_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.CanReload
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::CanReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.CanReload");

	ADH_Inventory_CanReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.CanExitAim
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::CanExitAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.CanExitAim");

	ADH_Inventory_CanExitAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.CanBeAppliedTo
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADH_Inventory*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventorySlotContents  TargetSlot                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::CanBeAppliedTo(class ADH_Inventory* Target, const struct FInventorySlotContents& TargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.CanBeAppliedTo");

	ADH_Inventory_CanBeAppliedTo_Params params;
	params.Target = Target;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.CanAim
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Inventory::CanAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.CanAim");

	ADH_Inventory_CanAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Inventory.AutoReload
// (Final, Native, Private, BlueprintCallable, Const)

void ADH_Inventory::AutoReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory.AutoReload");

	ADH_Inventory_AutoReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Inventory_Consumable.GetConsumableStatValues
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ADH_PlayerState*         ConsumingPlayer                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FConsumableItemStatValues StatValues                     (Parm, OutParm)

void ADH_Inventory_Consumable::GetConsumableStatValues(class ADH_PlayerState* ConsumingPlayer, struct FConsumableItemStatValues* StatValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Inventory_Consumable.GetConsumableStatValues");

	ADH_Inventory_Consumable_GetConsumableStatValues_Params params;
	params.ConsumingPlayer = ConsumingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatValues != nullptr)
		*StatValues = params.StatValues;
}


// Function DreadHunger.DH_DoorActor.SetOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIsOpen                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OpenInstigator                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_DoorActor::SetOpen(bool bNewIsOpen, class AActor* OpenInstigator, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorActor.SetOpen");

	ADH_DoorActor_SetOpen_Params params;
	params.bNewIsOpen = bNewIsOpen;
	params.OpenInstigator = OpenInstigator;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DoorActor.OnRep_State
// (Final, Native, Private)

void ADH_DoorActor::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorActor.OnRep_State");

	ADH_DoorActor_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DoorActor.OnRep_LastDamageReceived
// (Final, Native, Private, Const)

void ADH_DoorActor::OnRep_LastDamageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorActor.OnRep_LastDamageReceived");

	ADH_DoorActor_OnRep_LastDamageReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DoorActor.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_DoorActor::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorActor.IsLocked");

	ADH_DoorActor_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DoorLockComponent.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLocked                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DoorLockComponent::SetIsLocked(bool bNewLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorLockComponent.SetIsLocked");

	UDH_DoorLockComponent_SetIsLocked_Params params;
	params.bNewLocked = bNewLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DoorLockComponent.OnRep_Locked
// (Final, Native, Protected)

void UDH_DoorLockComponent::OnRep_Locked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorLockComponent.OnRep_Locked");

	UDH_DoorLockComponent_OnRep_Locked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DoorLockComponent.OnRep_Broken
// (Final, Native, Protected)

void UDH_DoorLockComponent::OnRep_Broken()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorLockComponent.OnRep_Broken");

	UDH_DoorLockComponent_OnRep_Broken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DoorLockComponent.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_DoorLockComponent::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DoorLockComponent.IsLocked");

	UDH_DoorLockComponent_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ArmoryLockComponent.OnWheelPositionChanged
// (Final, Native, Private)

void UDH_ArmoryLockComponent::OnWheelPositionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ArmoryLockComponent.OnWheelPositionChanged");

	UDH_ArmoryLockComponent_OnWheelPositionChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ArmoryLockComponent.OnRep_Wheels
// (Final, Native, Private)

void UDH_ArmoryLockComponent::OnRep_Wheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ArmoryLockComponent.OnRep_Wheels");

	UDH_ArmoryLockComponent_OnRep_Wheels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ArmoryLockWheel.OnRep_TargetPosition
// (Final, Native, Private)

void UDH_ArmoryLockWheel::OnRep_TargetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ArmoryLockWheel.OnRep_TargetPosition");

	UDH_ArmoryLockWheel_OnRep_TargetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BearTrapAnimInstance.SetTrapOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIsOpen                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayCloseAnimation            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_BearTrapAnimInstance::SetTrapOpen(bool bNewIsOpen, bool bPlayCloseAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BearTrapAnimInstance.SetTrapOpen");

	UDH_BearTrapAnimInstance_SetTrapOpen_Params params;
	params.bNewIsOpen = bNewIsOpen;
	params.bPlayCloseAnimation = bPlayCloseAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon.GetDamageType
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDamageType* ADH_Weapon::GetDamageType(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon.GetDamageType");

	ADH_Weapon_GetDamageType_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Weapon.GetDamage
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Weapon::GetDamage(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon.GetDamage");

	ADH_Weapon_GetDamage_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryPickup.WasThrown
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_InventoryPickup::WasThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.WasThrown");

	ADH_InventoryPickup_WasThrown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryPickup.SetDurability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDurability                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_InventoryPickup::SetDurability(float NewDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.SetDurability");

	ADH_InventoryPickup_SetDurability_Params params;
	params.NewDurability = NewDurability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.Pickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             InteractInstigator             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* ADH_InventoryPickup::Pickup(class AController* InteractInstigator, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.Pickup");

	ADH_InventoryPickup_Pickup_Params params;
	params.InteractInstigator = InteractInstigator;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryPickup.OnRep_ThrowState
// (Final, Native, Protected, Const)

void ADH_InventoryPickup::OnRep_ThrowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.OnRep_ThrowState");

	ADH_InventoryPickup_OnRep_ThrowState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.OnRep_AttachTarget
// (Final, Native, Protected)

void ADH_InventoryPickup::OnRep_AttachTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.OnRep_AttachTarget");

	ADH_InventoryPickup_OnRep_AttachTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.OnPickupThrownInWater
// (Event, Public, BlueprintEvent)

void ADH_InventoryPickup::OnPickupThrownInWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.OnPickupThrownInWater");

	ADH_InventoryPickup_OnPickupThrownInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.OnPickupMovementStopped
// (Native, Protected, HasOutParms)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADH_InventoryPickup::OnPickupMovementStopped(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.OnPickupMovementStopped");

	ADH_InventoryPickup_OnPickupMovementStopped_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.OnGrabbed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADH_HumanCharacter*      GrabbingPawn                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEmptyHandedGrab               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_InventoryPickup::OnGrabbed(class ADH_HumanCharacter* GrabbingPawn, bool bEmptyHandedGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.OnGrabbed");

	ADH_InventoryPickup_OnGrabbed_Params params;
	params.GrabbingPawn = GrabbingPawn;
	params.bEmptyHandedGrab = bEmptyHandedGrab;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.Launch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bThrown                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_InventoryPickup::Launch(bool bThrown)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.Launch");

	ADH_InventoryPickup_Launch_Params params;
	params.bThrown = bThrown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryPickup.GetMaximumHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_InventoryPickup::GetMaximumHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.GetMaximumHealth");

	ADH_InventoryPickup_GetMaximumHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryPickup.GetLastCarrierControlledPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ADH_InventoryPickup::GetLastCarrierControlledPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.GetLastCarrierControlledPawn");

	ADH_InventoryPickup_GetLastCarrierControlledPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryPickup.GetDurability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_InventoryPickup::GetDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.GetDurability");

	ADH_InventoryPickup_GetDurability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryPickup.BP_OnRep_AttachTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  InAttachTarget                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_InventoryPickup::BP_OnRep_AttachTarget(class AActor* InAttachTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryPickup.BP_OnRep_AttachTarget");

	ADH_InventoryPickup_BP_OnRep_AttachTarget_Params params;
	params.InAttachTarget = InAttachTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BearTrapPickup.OnRep_TrapState
// (Final, Native, Private)

void ADH_BearTrapPickup::OnRep_TrapState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BearTrapPickup.OnRep_TrapState");

	ADH_BearTrapPickup_OnRep_TrapState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryView.PlayUsedEffects
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ADH_InventoryView::PlayUsedEffects(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayUsedEffects");

	ADH_InventoryView_PlayUsedEffects_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.PlayReloadEffects
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ADH_InventoryView::PlayReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayReloadEffects");

	ADH_InventoryView_PlayReloadEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.PlayPickupEffects
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADH_HumanCharacter*      HumanPawn                      (Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDominantHand         Hand                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryEffectFilter         Filter                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ADH_InventoryView::PlayPickupEffects(class ADH_HumanCharacter* HumanPawn, EInventoryDominantHand Hand, EInventoryEffectFilter Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayPickupEffects");

	ADH_InventoryView_PlayPickupEffects_Params params;
	params.HumanPawn = HumanPawn;
	params.Hand = Hand;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.PlayHitEffects
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  AttackState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHit                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADH_InventoryView::PlayHitEffects(unsigned char AttackState, const struct FHitResult& InHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayHitEffects");

	ADH_InventoryView_PlayHitEffects_Params params;
	params.AttackState = AttackState;
	params.InHit = InHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryView.PlayEquipEffects
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EInventoryEffectFilter         Filter                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ADH_InventoryView::PlayEquipEffects(unsigned char State, EInventoryEffectFilter Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayEquipEffects");

	ADH_InventoryView_PlayEquipEffects_Params params;
	params.State = State;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.PlayDroppedEffects
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWasThrown                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDominantHand         DropHand                       (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      HumanPawn                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ADH_InventoryView::PlayDroppedEffects(bool bWasThrown, EInventoryDominantHand DropHand, class ADH_HumanCharacter* HumanPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayDroppedEffects");

	ADH_InventoryView_PlayDroppedEffects_Params params;
	params.bWasThrown = bWasThrown;
	params.DropHand = DropHand;
	params.HumanPawn = HumanPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.PlayAimEffects
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsAiming                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryEventEffectInstance ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FInventoryEventEffectInstance ADH_InventoryView::PlayAimEffects(bool bIsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.PlayAimEffects");

	ADH_InventoryView_PlayAimEffects_Params params;
	params.bIsAiming = bIsAiming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.GetMesh
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ADH_InventoryView::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.GetMesh");

	ADH_InventoryView_GetMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryView.GetInventoryState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInventoryItemState     State                          (Parm, OutParm)

void ADH_InventoryView::GetInventoryState(struct FInventoryItemState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryView.GetInventoryState");

	ADH_InventoryView_GetInventoryState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function DreadHunger.DH_BearTrapView.BP_OnArmed
// (Event, Public, BlueprintEvent)

void ADH_BearTrapView::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BearTrapView.BP_OnArmed");

	ADH_BearTrapView_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon_Melee.OnTraceStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADH_Weapon_Melee::OnTraceStart(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.OnTraceStart");

	ADH_Weapon_Melee_OnTraceStart_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon_Melee.OnMeleeWeaponHit
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  AttackState                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADH_Weapon_Melee::OnMeleeWeaponHit(const struct FHitResult& Hit, unsigned char AttackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.OnMeleeWeaponHit");

	ADH_Weapon_Melee_OnMeleeWeaponHit_Params params;
	params.Hit = Hit;
	params.AttackState = AttackState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon_Melee.IsHoldToAttack
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  AttackState                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Weapon_Melee::IsHoldToAttack(unsigned char AttackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.IsHoldToAttack");

	ADH_Weapon_Melee_IsHoldToAttack_Params params;
	params.AttackState = AttackState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Weapon_Melee.HasMeleeTrace
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Weapon_Melee::HasMeleeTrace(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.HasMeleeTrace");

	ADH_Weapon_Melee_HasMeleeTrace_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Weapon_Melee.GetTraceStartTime
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Weapon_Melee::GetTraceStartTime(unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.GetTraceStartTime");

	ADH_Weapon_Melee_GetTraceStartTime_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Weapon_Melee.GetOverrideTraceHits
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  UseState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FHitResult>      OverrideHits                   (Parm, OutParm, ZeroConstructor)

void ADH_Weapon_Melee::GetOverrideTraceHits(unsigned char UseState, TArray<struct FHitResult>* OverrideHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.GetOverrideTraceHits");

	ADH_Weapon_Melee_GetOverrideTraceHits_Params params;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverrideHits != nullptr)
		*OverrideHits = params.OverrideHits;
}


// Function DreadHunger.DH_Weapon_Melee.ApplyMeleeDamage
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<struct FHitResult>      Hits                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// unsigned char                  AttackState                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADH_Weapon_Melee::ApplyMeleeDamage(TArray<struct FHitResult> Hits, unsigned char AttackState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Melee.ApplyMeleeDamage");

	ADH_Weapon_Melee_ApplyMeleeDamage_Params params;
	params.Hits = Hits;
	params.AttackState = AttackState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BodyPartPickup.OnRep_SpawnVelocity
// (Final, Native, Private)

void ADH_BodyPartPickup::OnRep_SpawnVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BodyPartPickup.OnRep_SpawnVelocity");

	ADH_BodyPartPickup_OnRep_SpawnVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BodyPartView.OnBloodImpact
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_BodyPartView::OnBloodImpact(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BodyPartView.OnBloodImpact");

	ADH_BodyPartView_OnBloodImpact_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerStart.OnRep_AttachedPawn
// (Final, Native, Protected)

void ADH_PlayerStart::OnRep_AttachedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerStart.OnRep_AttachedPawn");

	ADH_PlayerStart_OnRep_AttachedPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigCell.SetCellNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InCellNumber                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_BrigCell::SetCellNumber(int InCellNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigCell.SetCellNumber");

	ADH_BrigCell_SetCellNumber_Params params;
	params.InCellNumber = InCellNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigCell.OnRep_Prisoner
// (Final, Native, Private)

void ADH_BrigCell::OnRep_Prisoner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigCell.OnRep_Prisoner");

	ADH_BrigCell_OnRep_Prisoner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigCell.OnPrisonerRemoved
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_BrigCell::OnPrisonerRemoved(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigCell.OnPrisonerRemoved");

	ADH_BrigCell_OnPrisonerRemoved_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigCell.OnPrisonerDied
// (Final, Native, Private)
// Parameters:
// class ADH_PrisonerPawn*        DeadPrisoner                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_BrigCell::OnPrisonerDied(class ADH_PrisonerPawn* DeadPrisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigCell.OnPrisonerDied");

	ADH_BrigCell_OnPrisonerDied_Params params;
	params.DeadPrisoner = DeadPrisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigCell.FreePrisoner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         FreeingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_BrigCell::FreePrisoner(class ADH_PlayerState* FreeingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigCell.FreePrisoner");

	ADH_BrigCell_FreePrisoner_Params params;
	params.FreeingPlayer = FreeingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_BrigCell.AddPrisoner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         NewPrisoner                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_BrigCell::AddPrisoner(class ADH_PlayerState* NewPrisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigCell.AddPrisoner");

	ADH_BrigCell_AddPrisoner_Params params;
	params.NewPrisoner = NewPrisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_BrigDoor.OnUnlockCraftStarted
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     Project                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_BrigDoor::OnUnlockCraftStarted(class UDH_CraftingProject* Project)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigDoor.OnUnlockCraftStarted");

	ADH_BrigDoor_OnUnlockCraftStarted_Params params;
	params.Project = Project;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigDoor.OnUnlockCraftComplete
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     Project                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Results                        (Parm, ZeroConstructor)

void ADH_BrigDoor::OnUnlockCraftComplete(class UDH_CraftingProject* Project, TArray<class AActor*> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigDoor.OnUnlockCraftComplete");

	ADH_BrigDoor_OnUnlockCraftComplete_Params params;
	params.Project = Project;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BrigDoor.OnRep_CellNumber
// (Final, Native, Private)

void ADH_BrigDoor::OnRep_CellNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BrigDoor.OnRep_CellNumber");

	ADH_BrigDoor_OnRep_CellNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BufferTransferComponent.SendBufferToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            BufferSize                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_BufferTransferComponent::SendBufferToClient(int BufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BufferTransferComponent.SendBufferToClient");

	UDH_BufferTransferComponent_SendBufferToClient_Params params;
	params.BufferSize = BufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BufferTransferComponent.SendBufferChunkToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// TArray<unsigned char>          BufferChunk                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UDH_BufferTransferComponent::SendBufferChunkToClient(TArray<unsigned char> BufferChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BufferTransferComponent.SendBufferChunkToClient");

	UDH_BufferTransferComponent_SendBufferChunkToClient_Params params;
	params.BufferChunk = BufferChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_BufferTransferComponent.RequestNextBufferChunk
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            ReceivedBufferSize             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_BufferTransferComponent::RequestNextBufferChunk(int ReceivedBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_BufferTransferComponent.RequestNextBufferChunk");

	UDH_BufferTransferComponent_RequestNextBufferChunk_Params params;
	params.ReceivedBufferSize = ReceivedBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Campfire.ReLitFire
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     FuelProject                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Campfire::ReLitFire(class UDH_CraftingProject* FuelProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Campfire.ReLitFire");

	ADH_Campfire_ReLitFire_Params params;
	params.FuelProject = FuelProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Campfire.OnFireLit
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Campfire::OnFireLit(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Campfire.OnFireLit");

	ADH_Campfire_OnFireLit_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Campfire.OnFireDied
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_Campfire::OnFireDied(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Campfire.OnFireDied");

	ADH_Campfire_OnFireDied_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Campfire.AddFuel
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     FuelProject                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Campfire::AddFuel(class UDH_CraftingProject* FuelProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Campfire.AddFuel");

	ADH_Campfire_AddFuel_Params params;
	params.FuelProject = FuelProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CannibalCharacter.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CannibalCharacter::OnSetActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CannibalCharacter.OnSetActive");

	ADH_CannibalCharacter_OnSetActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CannibalCharacter.OnRep_Active
// (Final, Native, Private)

void ADH_CannibalCharacter::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CannibalCharacter.OnRep_Active");

	ADH_CannibalCharacter_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CensorshipComponent.OnStreamerModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bStreamerMode                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CensorshipComponent::OnStreamerModeChanged(bool bStreamerMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CensorshipComponent.OnStreamerModeChanged");

	UDH_CensorshipComponent_OnStreamerModeChanged_Params params;
	params.bStreamerMode = bStreamerMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CharacterAnimInstance.GetLimbIK
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FCharacterIKData        OutIK                          (Parm, OutParm)

void UDH_CharacterAnimInstance::GetLimbIK(const struct FName& BoneName, struct FCharacterIKData* OutIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CharacterAnimInstance.GetLimbIK");

	UDH_CharacterAnimInstance_GetLimbIK_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIK != nullptr)
		*OutIK = params.OutIK;
}


// Function DreadHunger.DH_CheatManager.UseCheatDetection
// (Final, Exec, Native, Private)
// Parameters:
// bool                           bYes                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::UseCheatDetection(bool bYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.UseCheatDetection");

	UDH_CheatManager_UseCheatDetection_Params params;
	params.bYes = bYes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.UnlockArmory
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::UnlockArmory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.UnlockArmory");

	UDH_CheatManager_UnlockArmory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.TakeDamage
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::TakeDamage(float Damage, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.TakeDamage");

	UDH_CheatManager_TakeDamage_Params params;
	params.Damage = Damage;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.StopUpdateLobbyFilterRules
// (Final, Exec, Native, Private)

void UDH_CheatManager::StopUpdateLobbyFilterRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.StopUpdateLobbyFilterRules");

	UDH_CheatManager_StopUpdateLobbyFilterRules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.StartUpdateLobbyFilterRules
// (Final, Exec, Native, Private)

void UDH_CheatManager::StartUpdateLobbyFilterRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.StartUpdateLobbyFilterRules");

	UDH_CheatManager_StartUpdateLobbyFilterRules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.Spectate
// (Final, Exec, Native, Private, BlueprintCallable, Const)

void UDH_CheatManager::Spectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.Spectate");

	UDH_CheatManager_Spectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SpawnCannibalsOnMe
// (Final, Exec, Native, Private, BlueprintCallable)

void UDH_CheatManager::SpawnCannibalsOnMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SpawnCannibalsOnMe");

	UDH_CheatManager_SpawnCannibalsOnMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SimulateLostServerConnection
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::SimulateLostServerConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SimulateLostServerConnection");

	UDH_CheatManager_SimulateLostServerConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SimulateDifferentServerVersion
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::SimulateDifferentServerVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SimulateDifferentServerVersion");

	UDH_CheatManager_SimulateDifferentServerVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ShowPreGameInstructions
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::ShowPreGameInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ShowPreGameInstructions");

	UDH_CheatManager_ShowPreGameInstructions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ShowConnectToIP
// (Final, Exec, Native, Private)

void UDH_CheatManager::ShowConnectToIP()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ShowConnectToIP");

	UDH_CheatManager_ShowConnectToIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ShipEscaped
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::ShipEscaped()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ShipEscaped");

	UDH_CheatManager_ShipEscaped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetWarmth
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          NewWarmth                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetWarmth(float NewWarmth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetWarmth");

	UDH_CheatManager_SetWarmth_Params params;
	params.NewWarmth = NewWarmth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetTutorialChapter
// (Final, Exec, Native, Private, Const)
// Parameters:
// ETutorialChapters              Chapter                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetTutorialChapter(ETutorialChapters Chapter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetTutorialChapter");

	UDH_CheatManager_SetTutorialChapter_Params params;
	params.Chapter = Chapter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetTOD
// (Final, Exec, Native, Private, BlueprintCallable)
// Parameters:
// float                          Hour                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetTOD(float Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetTOD");

	UDH_CheatManager_SetTOD_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetStorageLimit
// (Final, Exec, Native, Private, BlueprintCallable)
// Parameters:
// int                            NewLimit                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetStorageLimit(int NewLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetStorageLimit");

	UDH_CheatManager_SetStorageLimit_Params params;
	params.NewLimit = NewLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetSpellCharge
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          NewSpellCharge                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetSpellCharge(float NewSpellCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetSpellCharge");

	UDH_CheatManager_SetSpellCharge_Params params;
	params.NewSpellCharge = NewSpellCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetShipHealth
// (Final, Exec, Native, Private, Const)
// Parameters:
// float                          InHealthPct                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetShipHealth(float InHealthPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetShipHealth");

	UDH_CheatManager_SetShipHealth_Params params;
	params.InHealthPct = InHealthPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetSanity
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          NewSanity                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetSanity(float NewSanity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetSanity");

	UDH_CheatManager_SetSanity_Params params;
	params.NewSanity = NewSanity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetNumberOfThralls
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetNumberOfThralls(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetNumberOfThralls");

	UDH_CheatManager_SetNumberOfThralls_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetMaxPlayers
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// int                            NewMaxPlayers                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetMaxPlayers(int NewMaxPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetMaxPlayers");

	UDH_CheatManager_SetMaxPlayers_Params params;
	params.NewMaxPlayers = NewMaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetIsThrall
// (Final, Exec, Native, Private)
// Parameters:
// bool                           bThrall                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetIsThrall(bool bThrall)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetIsThrall");

	UDH_CheatManager_SetIsThrall_Params params;
	params.bThrall = bThrall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetIsSpiritWalking
// (Final, Exec, Native, Private, Const)
// Parameters:
// bool                           bNewIsSpiritWalking            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetIsSpiritWalking(bool bNewIsSpiritWalking, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetIsSpiritWalking");

	UDH_CheatManager_SetIsSpiritWalking_Params params;
	params.bNewIsSpiritWalking = bNewIsSpiritWalking;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetIsCannibal
// (Final, Exec, Native, Private)
// Parameters:
// float                          InCannibalLevel                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetIsCannibal(float InCannibalLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetIsCannibal");

	UDH_CheatManager_SetIsCannibal_Params params;
	params.InCannibalLevel = InCannibalLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetHunger
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          NewHunger                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetHunger(float NewHunger)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetHunger");

	UDH_CheatManager_SetHunger_Params params;
	params.NewHunger = NewHunger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetBlizzardIntensity
// (Final, Exec, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          NewBlizzardIntensity           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetBlizzardIntensity(float NewBlizzardIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetBlizzardIntensity");

	UDH_CheatManager_SetBlizzardIntensity_Params params;
	params.NewBlizzardIntensity = NewBlizzardIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetAllowAllCosmetics
// (Final, Exec, Native, Private)
// Parameters:
// bool                           bAllowAllCosmetics             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetAllowAllCosmetics(bool bAllowAllCosmetics)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetAllowAllCosmetics");

	UDH_CheatManager_SetAllowAllCosmetics_Params params;
	params.bAllowAllCosmetics = bAllowAllCosmetics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.SetAllowAchievements
// (Final, Exec, Native, Private)
// Parameters:
// bool                           AllowAchievements              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::SetAllowAchievements(bool AllowAchievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.SetAllowAchievements");

	UDH_CheatManager_SetAllowAchievements_Params params;
	params.AllowAchievements = AllowAchievements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.Scumbag
// (Final, Exec, Native, Private)
// Parameters:
// bool                           bYes                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::Scumbag(bool bYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.Scumbag");

	UDH_CheatManager_Scumbag_Params params;
	params.bYes = bYes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ResetSpellCooldowns
// (Final, Exec, Native, Private, BlueprintCallable, Const)

void UDH_CheatManager::ResetSpellCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ResetSpellCooldowns");

	UDH_CheatManager_ResetSpellCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ResetCosmeticUnlocks
// (Final, Exec, Native, Private)

void UDH_CheatManager::ResetCosmeticUnlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ResetCosmeticUnlocks");

	UDH_CheatManager_ResetCosmeticUnlocks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ResetAchivements
// (Final, Exec, Native, Private)

void UDH_CheatManager::ResetAchivements()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ResetAchivements");

	UDH_CheatManager_ResetAchivements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.RemoveShipCosmetic
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  InItemCode                     (Parm, ZeroConstructor)

void UDH_CheatManager::RemoveShipCosmetic(const class FString& InItemCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.RemoveShipCosmetic");

	UDH_CheatManager_RemoveShipCosmetic_Params params;
	params.InItemCode = InItemCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.RemoveCosmetic
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  InItemCode                     (Parm, ZeroConstructor)

void UDH_CheatManager::RemoveCosmetic(const class FString& InItemCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.RemoveCosmetic");

	UDH_CheatManager_RemoveCosmetic_Params params;
	params.InItemCode = InItemCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.RandomizeThralls
// (Final, Exec, Native, Private)

void UDH_CheatManager::RandomizeThralls()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.RandomizeThralls");

	UDH_CheatManager_RandomizeThralls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.LoadReplay
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  Filename                       (Parm, ZeroConstructor)

void UDH_CheatManager::LoadReplay(const class FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.LoadReplay");

	UDH_CheatManager_LoadReplay_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.IgnoreAnyExplorersAliveCheck
// (Final, Exec, Native, Private)
// Parameters:
// bool                           bIgnore                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::IgnoreAnyExplorersAliveCheck(bool bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.IgnoreAnyExplorersAliveCheck");

	UDH_CheatManager_IgnoreAnyExplorersAliveCheck_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.HasEntitlement
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  InId                           (Parm, ZeroConstructor)
// class FString                  InType                         (Parm, ZeroConstructor)

void UDH_CheatManager::HasEntitlement(const class FString& InId, const class FString& InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.HasEntitlement");

	UDH_CheatManager_HasEntitlement_Params params;
	params.InId = InId;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.GiveRandomQuest
// (Final, Exec, Native, Private)

void UDH_CheatManager::GiveRandomQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.GiveRandomQuest");

	UDH_CheatManager_GiveRandomQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.GiveQuest
// (Final, Exec, Native, Private)
// Parameters:
// struct FName                   QuestName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::GiveQuest(const struct FName& QuestName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.GiveQuest");

	UDH_CheatManager_GiveQuest_Params params;
	params.QuestName = QuestName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.GiveInventory
// (Final, Exec, Native, Private, BlueprintCallable)
// Parameters:
// class FString                  InventoryName                  (ConstParm, Parm, ZeroConstructor)
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UDH_CheatManager::GiveInventory(const class FString& InventoryName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.GiveInventory");

	UDH_CheatManager_GiveInventory_Params params;
	params.InventoryName = InventoryName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CheatManager.GiveBackpack
// (Final, Exec, Native, Private, BlueprintCallable)

void UDH_CheatManager::GiveBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.GiveBackpack");

	UDH_CheatManager_GiveBackpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.GetIPCountry
// (Final, Exec, Native, Private)

void UDH_CheatManager::GetIPCountry()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.GetIPCountry");

	UDH_CheatManager_GetIPCountry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ForceThrall
// (Final, Exec, Native, Private, BlueprintCallable)

void UDH_CheatManager::ForceThrall()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ForceThrall");

	UDH_CheatManager_ForceThrall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ForceSurvivor
// (Final, Exec, Native, Private, BlueprintCallable)

void UDH_CheatManager::ForceSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ForceSurvivor");

	UDH_CheatManager_ForceSurvivor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ExportTitleData
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  Filename                       (Parm, ZeroConstructor)

void UDH_CheatManager::ExportTitleData(const class FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ExportTitleData");

	UDH_CheatManager_ExportTitleData_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ExportMatchStats
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::ExportMatchStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ExportMatchStats");

	UDH_CheatManager_ExportMatchStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.EquipShipCosmetic
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  InItemCode                     (Parm, ZeroConstructor)

void UDH_CheatManager::EquipShipCosmetic(const class FString& InItemCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.EquipShipCosmetic");

	UDH_CheatManager_EquipShipCosmetic_Params params;
	params.InItemCode = InItemCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.EquipCosmetic
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  InItemCode                     (Parm, ZeroConstructor)

void UDH_CheatManager::EquipCosmetic(const class FString& InItemCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.EquipCosmetic");

	UDH_CheatManager_EquipCosmetic_Params params;
	params.InItemCode = InItemCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.EndMatch
// (Final, Exec, Native, Private, Const)
// Parameters:
// bool                           bExplorersWin                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::EndMatch(bool bExplorersWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.EndMatch");

	UDH_CheatManager_EndMatch_Params params;
	params.bExplorersWin = bExplorersWin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.DumpEntitlementStates
// (Final, Exec, Native, Private)

void UDH_CheatManager::DumpEntitlementStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.DumpEntitlementStates");

	UDH_CheatManager_DumpEntitlementStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.DownloadReplay
// (Final, Exec, Native, Private, Const)
// Parameters:
// class FString                  MatchUUID                      (Parm, ZeroConstructor)

void UDH_CheatManager::DownloadReplay(const class FString& MatchUUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.DownloadReplay");

	UDH_CheatManager_DownloadReplay_Params params;
	params.MatchUUID = MatchUUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.DisplayMatchEndMessage
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::DisplayMatchEndMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.DisplayMatchEndMessage");

	UDH_CheatManager_DisplayMatchEndMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.Crash
// (Final, Exec, Native, Private, BlueprintCallable)

void UDH_CheatManager::Crash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.Crash");

	UDH_CheatManager_Crash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.ConvertReplay
// (Final, Exec, Native, Private, Const)
// Parameters:
// class FString                  Filename                       (Parm, ZeroConstructor)

void UDH_CheatManager::ConvertReplay(const class FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.ConvertReplay");

	UDH_CheatManager_ConvertReplay_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.CompleteCurrentChapter
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::CompleteCurrentChapter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.CompleteCurrentChapter");

	UDH_CheatManager_CompleteCurrentChapter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.CheckWarshipCosmeticOwnership
// (Final, Exec, Native, Private)

void UDH_CheatManager::CheckWarshipCosmeticOwnership()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.CheckWarshipCosmeticOwnership");

	UDH_CheatManager_CheckWarshipCosmeticOwnership_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.CheckAvatarCosmeticOwnership
// (Final, Exec, Native, Private)

void UDH_CheatManager::CheckAvatarCosmeticOwnership()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.CheckAvatarCosmeticOwnership");

	UDH_CheatManager_CheckAvatarCosmeticOwnership_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.BearFight
// (Final, Exec, Native, Private, Const)

void UDH_CheatManager::BearFight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.BearFight");

	UDH_CheatManager_BearFight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.AllowLobbyStart
// (Final, Exec, Native, Private, BlueprintCallable, Const)

void UDH_CheatManager::AllowLobbyStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.AllowLobbyStart");

	UDH_CheatManager_AllowLobbyStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.AIIgnoreMe
// (Final, Exec, Native, Private, BlueprintCallable)
// Parameters:
// bool                           bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::AIIgnoreMe(bool bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.AIIgnoreMe");

	UDH_CheatManager_AIIgnoreMe_Params params;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.AdvanceDate
// (Final, Exec, Native, Private, BlueprintCallable)

void UDH_CheatManager::AdvanceDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.AdvanceDate");

	UDH_CheatManager_AdvanceDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.AddSteamWebAPICheckAppOwnershipRequest
// (Final, Exec, Native, Private)
// Parameters:
// class FString                  SteamId                        (Parm, ZeroConstructor)
// int                            AppId                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::AddSteamWebAPICheckAppOwnershipRequest(const class FString& SteamId, int AppId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.AddSteamWebAPICheckAppOwnershipRequest");

	UDH_CheatManager_AddSteamWebAPICheckAppOwnershipRequest_Params params;
	params.SteamId = SteamId;
	params.AppId = AppId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.AddSteamWebAPICheckAppDetailsRequest
// (Final, Exec, Native, Private)
// Parameters:
// int                            AppId                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CheatManager::AddSteamWebAPICheckAppDetailsRequest(int AppId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.AddSteamWebAPICheckAppDetailsRequest");

	UDH_CheatManager_AddSteamWebAPICheckAppDetailsRequest_Params params;
	params.AppId = AppId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CheatManager.AddFuel
// (Final, Exec, Native, Private, BlueprintCallable)
// Parameters:
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InventoryName                  (ConstParm, Parm, ZeroConstructor)

void UDH_CheatManager::AddFuel(int Amount, const class FString& InventoryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CheatManager.AddFuel");

	UDH_CheatManager_AddFuel_Params params;
	params.Amount = Amount;
	params.InventoryName = InventoryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ClimbableActor.GetClimbableMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ADH_ClimbableActor::GetClimbableMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ClimbableActor.GetClimbableMesh");

	ADH_ClimbableActor_GetClimbableMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ClimbableActor.AddClimber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_Character*           NewClimber                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_ClimbableActor::AddClimber(class ADH_Character* NewClimber)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ClimbableActor.AddClimber");

	ADH_ClimbableActor_AddClimber_Params params;
	params.NewClimber = NewClimber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskComponent.SetTask
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInTask                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ColorMaskComponent::SetTask(bool bInTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskComponent.SetTask");

	UDH_ColorMaskComponent_SetTask_Params params;
	params.bInTask = bInTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskComponent.SetTarget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInTarget                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ColorMaskComponent::SetTarget(bool bInTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskComponent.SetTarget");

	UDH_ColorMaskComponent_SetTarget_Params params;
	params.bInTarget = bInTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskComponent.SetInteract
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInInteract                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ColorMaskComponent::SetInteract(bool bInInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskComponent.SetInteract");

	UDH_ColorMaskComponent_SetInteract_Params params;
	params.bInInteract = bInInteract;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskComponent.SetFriendly
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFriendly                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ColorMaskComponent::SetFriendly(bool bInFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskComponent.SetFriendly");

	UDH_ColorMaskComponent_SetFriendly_Params params;
	params.bInFriendly = bInFriendly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskComponent.SetEnemy
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInEnemy                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_ColorMaskComponent::SetEnemy(bool bInEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskComponent.SetEnemy");

	UDH_ColorMaskComponent_SetEnemy_Params params;
	params.bInEnemy = bInEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskComponent.AddPrimitiveComponent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_ColorMaskComponent::AddPrimitiveComponent(class UPrimitiveComponent* PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskComponent.AddPrimitiveComponent");

	UDH_ColorMaskComponent_AddPrimitiveComponent_Params params;
	params.PrimitiveComponent = PrimitiveComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ColorMaskInterface.GetLinearColorDelta
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// float                          Distance                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PrimaryLinearColorDelta        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SecondaryLinearColorData       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDH_ColorMaskInterface::GetLinearColorDelta(float Distance, struct FLinearColor* PrimaryLinearColorDelta, struct FLinearColor* SecondaryLinearColorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskInterface.GetLinearColorDelta");

	UDH_ColorMaskInterface_GetLinearColorDelta_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryLinearColorDelta != nullptr)
		*PrimaryLinearColorDelta = params.PrimaryLinearColorDelta;
	if (SecondaryLinearColorData != nullptr)
		*SecondaryLinearColorData = params.SecondaryLinearColorData;
}


// Function DreadHunger.DH_ColorMaskInterface.GetColorMaskComponents
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UDH_ColorMaskComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDH_ColorMaskComponent*> UDH_ColorMaskInterface::GetColorMaskComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskInterface.GetColorMaskComponents");

	UDH_ColorMaskInterface_GetColorMaskComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ColorMaskInterface.GetColorMaskComponent
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UActorComponent*         TargetActorComponent           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_ColorMaskComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_ColorMaskComponent* UDH_ColorMaskInterface::GetColorMaskComponent(class UActorComponent* TargetActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ColorMaskInterface.GetColorMaskComponent");

	UDH_ColorMaskInterface_GetColorMaskComponent_Params params;
	params.TargetActorComponent = TargetActorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameMode.ShipHasArrived
// (Final, Native, Public, BlueprintCallable)

void ADH_GameMode::ShipHasArrived()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.ShipHasArrived");

	ADH_GameMode_ShipHasArrived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameMode.SendThrallMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// class ADH_PlayerController*    Sender                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameMode::SendThrallMessage(const struct FText& Message, class ADH_PlayerController* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.SendThrallMessage");

	ADH_GameMode_SendThrallMessage_Params params;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameMode.RemoveCoalPickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_InventoryPickup*     CoalToRemove                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameMode::RemoveCoalPickup(class ADH_InventoryPickup* CoalToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.RemoveCoalPickup");

	ADH_GameMode_RemoveCoalPickup_Params params;
	params.CoalToRemove = CoalToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameMode.OnPokerRoundEnded
// (Final, Native, Private)
// Parameters:
// class ADH_RoleDealer*          InRoleDealer                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameMode::OnPokerRoundEnded(class ADH_RoleDealer* InRoleDealer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.OnPokerRoundEnded");

	ADH_GameMode_OnPokerRoundEnded_Params params;
	params.InRoleDealer = InRoleDealer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameMode.GiveNextCodeToPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameMode::GiveNextCodeToPlayer(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.GiveNextCodeToPlayer");

	ADH_GameMode_GiveNextCodeToPlayer_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameMode.ExportMatchStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bMatchGivesExperience          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_GameMode::ExportMatchStats(bool bMatchGivesExperience)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.ExportMatchStats");

	ADH_GameMode_ExportMatchStats_Params params;
	params.bMatchGivesExperience = bMatchGivesExperience;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameMode.AddCoalPickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_InventoryPickup*     CoalToAdd                      (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameMode::AddCoalPickup(class ADH_InventoryPickup* CoalToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameMode.AddCoalPickup");

	ADH_GameMode_AddCoalPickup_Params params;
	params.CoalToAdd = CoalToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticItemBase.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ItemCode                       (Parm, ZeroConstructor)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CosmeticItemBase*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_CosmeticItemBase* UDH_CosmeticItemBase::Get(const class FString& ItemCode, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticItemBase.Get");

	UDH_CosmeticItemBase_Get_Params params;
	params.ItemCode = ItemCode;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.RemoveItem
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    RemovedItem                    (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_CosmeticPreviewAvatar::RemoveItem(class UDH_CosmeticItemBase* RemovedItem, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.RemoveItem");

	ADH_CosmeticPreviewAvatar_RemoveItem_Params params;
	params.RemovedItem = RemovedItem;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.OnDragEndTimerExpired
// (Final, Native, Private)

void ADH_CosmeticPreviewAvatar::OnDragEndTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.OnDragEndTimerExpired");

	ADH_CosmeticPreviewAvatar_OnDragEndTimerExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemWidgetMouseLeave
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CosmeticPreviewAvatar::OnCosmeticItemWidgetMouseLeave(class UDH_CosmeticItemBase* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemWidgetMouseLeave");

	ADH_CosmeticPreviewAvatar_OnCosmeticItemWidgetMouseLeave_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemWidgetMouseEnter
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CosmeticPreviewAvatar::OnCosmeticItemWidgetMouseEnter(class UDH_CosmeticItemBase* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemWidgetMouseEnter");

	ADH_CosmeticPreviewAvatar_OnCosmeticItemWidgetMouseEnter_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemDraggedWidgetEnd
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CosmeticPreviewAvatar::OnCosmeticItemDraggedWidgetEnd(class UDH_CosmeticItemBase* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemDraggedWidgetEnd");

	ADH_CosmeticPreviewAvatar_OnCosmeticItemDraggedWidgetEnd_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemDraggedWidgetBegin
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CosmeticPreviewAvatar::OnCosmeticItemDraggedWidgetBegin(class UDH_CosmeticItemBase* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.OnCosmeticItemDraggedWidgetBegin");

	ADH_CosmeticPreviewAvatar_OnCosmeticItemDraggedWidgetBegin_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.GetAvatarMesh
// (Final, Native, Public, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ADH_CosmeticPreviewAvatar::GetAvatarMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.GetAvatarMesh");

	ADH_CosmeticPreviewAvatar_GetAvatarMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CosmeticPreviewAvatar.EquipItem
// (Final, Native, Private)
// Parameters:
// class UDH_CosmeticItemBase*    SelectedItem                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_CosmeticPreviewAvatar::EquipItem(class UDH_CosmeticItemBase* SelectedItem, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CosmeticPreviewAvatar.EquipItem");

	ADH_CosmeticPreviewAvatar_EquipItem_Params params;
	params.SelectedItem = SelectedItem;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftableInterface.OnCrafted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADH_PlayerState*         CraftingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftableInterface::OnCrafted(class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftableInterface.OnCrafted");

	UDH_CraftableInterface_OnCrafted_Params params;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.StartNewProject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          GroundIngredientsToUse         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ADH_PlayerState*         CraftingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingProject*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CraftingProject* UDH_CraftingComponent::StartNewProject(class UDH_CraftingRecipe* Recipe, TArray<class AActor*> GroundIngredientsToUse, class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.StartNewProject");

	UDH_CraftingComponent_StartNewProject_Params params;
	params.Recipe = Recipe;
	params.GroundIngredientsToUse = GroundIngredientsToUse;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.OnRep_CurrentProjects
// (Final, Native, Private)

void UDH_CraftingComponent::OnRep_CurrentProjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnRep_CurrentProjects");

	UDH_CraftingComponent_OnRep_CurrentProjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnRep_CraftedRecipes
// (Final, Native, Private)

void UDH_CraftingComponent::OnRep_CraftedRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnRep_CraftedRecipes");

	UDH_CraftingComponent_OnRep_CraftedRecipes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnRep_CraftableRecipes
// (Final, Native, Private, Const)

void UDH_CraftingComponent::OnRep_CraftableRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnRep_CraftableRecipes");

	UDH_CraftingComponent_OnRep_CraftableRecipes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnOwnerDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingComponent::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnOwnerDestroyed");

	UDH_CraftingComponent_OnOwnerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnMatchEnded
// (Final, Native, Public)

void UDH_CraftingComponent::OnMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnMatchEnded");

	UDH_CraftingComponent_OnMatchEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryRemoved
// (Final, Native, Private)

void UDH_CraftingComponent::OnCraftingInventoryRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryRemoved");

	UDH_CraftingComponent_OnCraftingInventoryRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryClosed
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_CraftingComponent::OnCraftingInventoryClosed(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryClosed");

	UDH_CraftingComponent_OnCraftingInventoryClosed_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryAdded
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           AddedType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedAmount                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingComponent::OnCraftingInventoryAdded(class ADH_Inventory* AddedType, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnCraftingInventoryAdded");

	UDH_CraftingComponent_OnCraftingInventoryAdded_Params params;
	params.AddedType = AddedType;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.OnCraftingIngredientDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingComponent::OnCraftingIngredientDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.OnCraftingIngredientDestroyed");

	UDH_CraftingComponent_OnCraftingIngredientDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.GetQuantityOfGroundIngredients
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryType                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         CraftingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_CraftingComponent::GetQuantityOfGroundIngredients(EInventoryType Type, class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetQuantityOfGroundIngredients");

	UDH_CraftingComponent_GetQuantityOfGroundIngredients_Params params;
	params.Type = Type;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// EInventoryType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInventoryType UDH_CraftingComponent::GetCraftingType(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftingType");

	UDH_CraftingComponent_GetCraftingType_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftingProjectByRecipe
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingProject*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CraftingProject* UDH_CraftingComponent::GetCraftingProjectByRecipe(class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftingProjectByRecipe");

	UDH_CraftingComponent_GetCraftingProjectByRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftingProjectByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingProject*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CraftingProject* UDH_CraftingComponent::GetCraftingProjectByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftingProjectByIndex");

	UDH_CraftingComponent_GetCraftingProjectByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftingProgressType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECraftingProgressMethod        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECraftingProgressMethod UDH_CraftingComponent::GetCraftingProgressType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftingProgressType");

	UDH_CraftingComponent_GetCraftingProgressType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftingLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_CraftingComponent::GetCraftingLimit(class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftingLimit");

	UDH_CraftingComponent_GetCraftingLimit_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_CraftingComponent::GetCraftCount(class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftCount");

	UDH_CraftingComponent_GetCraftCount_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.GetCraftableRecipes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UDH_CraftingRecipe*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDH_CraftingRecipe*> UDH_CraftingComponent::GetCraftableRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.GetCraftableRecipes");

	UDH_CraftingComponent_GetCraftableRecipes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.EmptyCraftableRecipes
// (Final, Native, Public, BlueprintCallable)

void UDH_CraftingComponent::EmptyCraftableRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.EmptyCraftableRecipes");

	UDH_CraftingComponent_EmptyCraftableRecipes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.Craft
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         CraftingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingProject*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_CraftingProject* UDH_CraftingComponent::Craft(class UDH_CraftingRecipe* Recipe, class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.Craft");

	UDH_CraftingComponent_Craft_Params params;
	params.Recipe = Recipe;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.CompleteProject
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UDH_CraftingProject*     CompletedProject               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingComponent::CompleteProject(class UDH_CraftingProject* CompletedProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.CompleteProject");

	UDH_CraftingComponent_CompleteProject_Params params;
	params.CompletedProject = CompletedProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.CompleteAllProjects
// (Final, Native, Private, BlueprintCallable)

void UDH_CraftingComponent::CompleteAllProjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.CompleteAllProjects");

	UDH_CraftingComponent_CompleteAllProjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.CanCraft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         CraftingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_CraftingComponent::CanCraft(class UDH_CraftingRecipe* Recipe, class ADH_PlayerState* CraftingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.CanCraft");

	UDH_CraftingComponent_CanCraft_Params params;
	params.Recipe = Recipe;
	params.CraftingPlayer = CraftingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingComponent.AbortProject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UDH_CraftingProject*     AbortedProject                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingComponent::AbortProject(class UDH_CraftingProject* AbortedProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.AbortProject");

	UDH_CraftingComponent_AbortProject_Params params;
	params.AbortedProject = AbortedProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingComponent.AbortAllProjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         OnlyInstigatedBy               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_CraftingComponent::AbortAllProjects(class ADH_PlayerState* OnlyInstigatedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingComponent.AbortAllProjects");

	UDH_CraftingComponent_AbortAllProjects_Params params;
	params.OnlyInstigatedBy = OnlyInstigatedBy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingProject.OnRep_Recipe
// (Final, Native, Private)

void UDH_CraftingProject::OnRep_Recipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingProject.OnRep_Recipe");

	UDH_CraftingProject_OnRep_Recipe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingProject.OnRep_Completed
// (Final, Native, Private)

void UDH_CraftingProject::OnRep_Completed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingProject.OnRep_Completed");

	UDH_CraftingProject_OnRep_Completed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingProject.OnRep_Aborted
// (Final, Native, Private)

void UDH_CraftingProject::OnRep_Aborted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingProject.OnRep_Aborted");

	UDH_CraftingProject_OnRep_Aborted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CraftingProject.GetCompleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_CraftingProject::GetCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingProject.GetCompleted");

	UDH_CraftingProject_GetCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CraftingProject.GetAborted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_CraftingProject::GetAborted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CraftingProject.GetAborted");

	UDH_CraftingProject_GetAborted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_CrewController.StopActivity
// (Final, Native, Public, BlueprintCallable)

void ADH_CrewController::StopActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CrewController.StopActivity");

	ADH_CrewController_StopActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CrewController.OnPawnStareTargetChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      StareTarget                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CrewController::OnPawnStareTargetChanged(class ADH_HumanCharacter* StareTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CrewController.OnPawnStareTargetChanged");

	ADH_CrewController_OnPawnStareTargetChanged_Params params;
	params.StareTarget = StareTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CrewController.OnPawnHitObject
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADH_CrewController::OnPawnHitObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CrewController.OnPawnHitObject");

	ADH_CrewController_OnPawnHitObject_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CrewController.OnPawnDamaged
// (Final, Native, Private)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_CrewController::OnPawnDamaged(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CrewController.OnPawnDamaged");

	ADH_CrewController_OnPawnDamaged_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CrewController.OnCinematicModeChanged
// (Final, Native, Private)
// Parameters:
// bool                           bCinematicMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_CrewController::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CrewController.OnCinematicModeChanged");

	ADH_CrewController_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_CustomGameSettings.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CustomGameSettings*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_CustomGameSettings* UDH_CustomGameSettings::Get(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_CustomGameSettings.Get");

	UDH_CustomGameSettings_Get_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Suicide
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Suicide(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Suicide");

	UDH_DamageType_Suicide_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Starvation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Starvation(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Starvation");

	UDH_DamageType_Starvation_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Poison
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Poison(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Poison");

	UDH_DamageType_Poison_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Nitro
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Nitro(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Nitro");

	UDH_DamageType_Nitro_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Falling
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Falling(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Falling");

	UDH_DamageType_Falling_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Drowning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Drowning(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Drowning");

	UDH_DamageType_Drowning_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DamageType.Cold
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDamageType* UDH_DamageType::Cold(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DamageType.Cold");

	UDH_DamageType_Cold_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DebugControls.OnCheatManagerChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_DebugControls::OnCheatManagerChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DebugControls.OnCheatManagerChanged");

	UDH_DebugControls_OnCheatManagerChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStep.UpdateRetryTime
// (Final, Native, Protected)

void UDH_LoginStep::UpdateRetryTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStep.UpdateRetryTime");

	UDH_LoginStep_UpdateRetryTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStep.Run
// (Native, Public)

void UDH_LoginStep::Run()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStep.Run");

	UDH_LoginStep_Run_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStep.RetryStep
// (Native, Protected)

void UDH_LoginStep::RetryStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStep.RetryStep");

	UDH_LoginStep_RetryStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStep.OnTimeout
// (Native, Protected)

void UDH_LoginStep::OnTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStep.OnTimeout");

	UDH_LoginStep_OnTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Defines.GetVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_Defines::GetVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Defines.GetVersion");

	UDH_Defines_GetVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Defines.GetEnvironment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_Defines::GetEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Defines.GetEnvironment");

	UDH_Defines_GetEnvironment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Defines.GetChangelist
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_Defines::GetChangelist()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Defines.GetChangelist");

	UDH_Defines_GetChangelist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_DestructibleActor.OnRep_LastDamageReceived
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDamageInstance         PreviousDamageInstance         (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_DestructibleActor::OnRep_LastDamageReceived(const struct FDamageInstance& PreviousDamageInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DestructibleActor.OnRep_LastDamageReceived");

	ADH_DestructibleActor_OnRep_LastDamageReceived_Params params;
	params.PreviousDamageInstance = PreviousDamageInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DestructibleActor.OnRep_IsDestroyed
// (Final, Native, Private)

void ADH_DestructibleActor::OnRep_IsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DestructibleActor.OnRep_IsDestroyed");

	ADH_DestructibleActor_OnRep_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DestructibleActor.OnRep_DormantFragments
// (Final, Native, Private)

void ADH_DestructibleActor::OnRep_DormantFragments()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DestructibleActor.OnRep_DormantFragments");

	ADH_DestructibleActor_OnRep_DormantFragments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DestructibleActor.OnBasedPickupDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Act                            (Parm, ZeroConstructor, IsPlainOldData)

void ADH_DestructibleActor::OnBasedPickupDestroyed(class AActor* Act)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DestructibleActor.OnBasedPickupDestroyed");

	ADH_DestructibleActor_OnBasedPickupDestroyed_Params params;
	params.Act = Act;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DestructibleActor.BreakApart
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bSpawnBonusFragments           (Parm, ZeroConstructor, IsPlainOldData)

void ADH_DestructibleActor::BreakApart(bool bSpawnBonusFragments)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DestructibleActor.BreakApart");

	ADH_DestructibleActor_BreakApart_Params params;
	params.bSpawnBonusFragments = bSpawnBonusFragments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DigSite.OnRep_DugUp
// (Final, Native, Private)

void ADH_DigSite::OnRep_DugUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DigSite.OnRep_DugUp");

	ADH_DigSite_OnRep_DugUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DigSite.OnRep_CurrentDiggingHealth
// (Final, Native, Private)

void ADH_DigSite::OnRep_CurrentDiggingHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DigSite.OnRep_CurrentDiggingHealth");

	ADH_DigSite_OnRep_CurrentDiggingHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DigSite.OnRep_BuriedActor
// (Final, Native, Private)

void ADH_DigSite::OnRep_BuriedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DigSite.OnRep_BuriedActor");

	ADH_DigSite_OnRep_BuriedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_DraggedInventoryInterface.ShowDropResultNotification
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InDropResultIcon               (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_DraggedInventoryInterface::ShowDropResultNotification(class UObject* InDropResultIcon, const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_DraggedInventoryInterface.ShowDropResultNotification");

	UDH_DraggedInventoryInterface_ShowDropResultNotification_Params params;
	params.InDropResultIcon = InDropResultIcon;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnClearVivoxError
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_VivoxError          InError                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ErrorStore::OnClearVivoxError(const struct FDH_VivoxError& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnClearVivoxError");

	UDH_ErrorStore_OnClearVivoxError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnClearOnlineError
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_OnlineError         InError                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ErrorStore::OnClearOnlineError(const struct FDH_OnlineError& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnClearOnlineError");

	UDH_ErrorStore_OnClearOnlineError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnClearAllErrors
// (Final, Native, Private)

void UDH_ErrorStore::OnClearAllErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnClearAllErrors");

	UDH_ErrorStore_OnClearAllErrors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnAddVivoxError_Internal
// (Final, Native, Private)
// Parameters:
// struct FDH_VivoxError          InError                        (Parm)

void UDH_ErrorStore::OnAddVivoxError_Internal(const struct FDH_VivoxError& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnAddVivoxError_Internal");

	UDH_ErrorStore_OnAddVivoxError_Internal_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnAddVivoxError
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_VivoxError          InError                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ErrorStore::OnAddVivoxError(const struct FDH_VivoxError& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnAddVivoxError");

	UDH_ErrorStore_OnAddVivoxError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnAddOnlineError_Internal
// (Final, Native, Private)
// Parameters:
// struct FDH_OnlineError         InError                        (Parm)

void UDH_ErrorStore::OnAddOnlineError_Internal(const struct FDH_OnlineError& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnAddOnlineError_Internal");

	UDH_ErrorStore_OnAddOnlineError_Internal_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.OnAddOnlineError
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_OnlineError         InError                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_ErrorStore::OnAddOnlineError(const struct FDH_OnlineError& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.OnAddOnlineError");

	UDH_ErrorStore_OnAddOnlineError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.LogVivoxErrors
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_VivoxError>  Codes                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_ErrorStore::LogVivoxErrors(TArray<struct FDH_VivoxError> Codes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.LogVivoxErrors");

	UDH_ErrorStore_LogVivoxErrors_Params params;
	params.Codes = Codes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ErrorStore.LogOnlineErrors
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FDH_OnlineError> Codes                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_ErrorStore::LogOnlineErrors(TArray<struct FDH_OnlineError> Codes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ErrorStore.LogOnlineErrors");

	UDH_ErrorStore_LogOnlineErrors_Params params;
	params.Codes = Codes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ExplosionActor.DealDamage
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OriginOffset                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_ExplosionActor::DealDamage(float Amount, class AActor* SourceActor, const struct FVector& OriginOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ExplosionActor.DealDamage");

	ADH_ExplosionActor_DealDamage_Params params;
	params.Amount = Amount;
	params.SourceActor = SourceActor;
	params.OriginOffset = OriginOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_FirstTimeHintWidget.OnWidgetAnimationHandlerBeginShow
// (Final, Native, Private)
// Parameters:
// class UDH_WidgetAnimationHandler* InAnimationHandler             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_FirstTimeHintWidget::OnWidgetAnimationHandlerBeginShow(class UDH_WidgetAnimationHandler* InAnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_FirstTimeHintWidget.OnWidgetAnimationHandlerBeginShow");

	UDH_FirstTimeHintWidget_OnWidgetAnimationHandlerBeginShow_Params params;
	params.InAnimationHandler = InAnimationHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_FirstTimeHintWidget.OnMappingsChangedEvent
// (Final, Native, Private)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_FirstTimeHintWidget::OnMappingsChangedEvent(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_FirstTimeHintWidget.OnMappingsChangedEvent");

	UDH_FirstTimeHintWidget_OnMappingsChangedEvent_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_FirstTimeHintWidget.OnHumanCharacterPlayerStateSet
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_FirstTimeHintWidget::OnHumanCharacterPlayerStateSet(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_FirstTimeHintWidget.OnHumanCharacterPlayerStateSet");

	UDH_FirstTimeHintWidget_OnHumanCharacterPlayerStateSet_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_FirstTimeHintWidget.BP_SetInteractionMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FDH_KeybindInteractionMessage InteractionMessage             (Parm)

void UDH_FirstTimeHintWidget::BP_SetInteractionMessage(const struct FDH_KeybindInteractionMessage& InteractionMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_FirstTimeHintWidget.BP_SetInteractionMessage");

	UDH_FirstTimeHintWidget_BP_SetInteractionMessage_Params params;
	params.InteractionMessage = InteractionMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_FirstTimeHintWidget.BP_CreateAnimationHandler
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_WidgetAnimationHandler* UDH_FirstTimeHintWidget::BP_CreateAnimationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_FirstTimeHintWidget.BP_CreateAnimationHandler");

	UDH_FirstTimeHintWidget_BP_CreateAnimationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_FluidSurfaceComponent.CreateDisturbance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFluidDisturbance       Disturbance                    (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_FluidSurfaceComponent::CreateDisturbance(const struct FFluidDisturbance& Disturbance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_FluidSurfaceComponent.CreateDisturbance");

	UDH_FluidSurfaceComponent_CreateDisturbance_Params params;
	params.Disturbance = Disturbance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameInstance.OnSetCurrentReplay
// (Final, Native, Protected)
// Parameters:
// class UDH_MatchReplay*         InReplay                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_GameInstance::OnSetCurrentReplay(class UDH_MatchReplay* InReplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameInstance.OnSetCurrentReplay");

	UDH_GameInstance_OnSetCurrentReplay_Params params;
	params.InReplay = InReplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameInstance.IsLowGore
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameInstance::IsLowGore(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameInstance.IsLowGore");

	UDH_GameInstance_IsLowGore_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameInstance.ConvertSaveGameDataToJsonSaveData
// (Final, Native, Public)

void UDH_GameInstance::ConvertSaveGameDataToJsonSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameInstance.ConvertSaveGameDataToJsonSaveData");

	UDH_GameInstance_ConvertSaveGameDataToJsonSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayMessageWidget.Init
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Messsage                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_GameplayMessageWidget::Init(const struct FText& Messsage, class UTexture2D* Image, const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayMessageWidget.Init");

	UDH_GameplayMessageWidget_Init_Params params;
	params.Messsage = Messsage;
	params.Image = Image;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.WorldPosToRefPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldPos                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitBone                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RefPose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::WorldPosToRefPose(class USkeletalMeshComponent* Mesh, const struct FVector& WorldPos, const struct FName& HitBone, struct FVector* RefPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.WorldPosToRefPose");

	UDH_GameplayStatics_WorldPosToRefPose_Params params;
	params.Mesh = Mesh;
	params.WorldPos = WorldPos;
	params.HitBone = HitBone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RefPose != nullptr)
		*RefPose = params.RefPose;
}


// Function DreadHunger.DH_GameplayStatics.UpdateComponentOverlaps
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void UDH_GameplayStatics::UpdateComponentOverlaps(class USceneComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.UpdateComponentOverlaps");

	UDH_GameplayStatics_UpdateComponentOverlaps_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.SetViewportClientDrawBlackOutScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawBlackOutScreen            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::SetViewportClientDrawBlackOutScreen(class UObject* Context, bool bDrawBlackOutScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.SetViewportClientDrawBlackOutScreen");

	UDH_GameplayStatics_SetViewportClientDrawBlackOutScreen_Params params;
	params.Context = Context;
	params.bDrawBlackOutScreen = bDrawBlackOutScreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.SetMeshToAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_PlayerRoleData*      Avatar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDH_CosmeticItemBase*> Cosmetics                      (Parm, ZeroConstructor)
// bool                           bReinitPose                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::SetMeshToAvatar(class USkeletalMeshComponent* Mesh, class UDH_PlayerRoleData* Avatar, TArray<class UDH_CosmeticItemBase*> Cosmetics, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.SetMeshToAvatar");

	UDH_GameplayStatics_SetMeshToAvatar_Params params;
	params.Mesh = Mesh;
	params.Avatar = Avatar;
	params.Cosmetics = Cosmetics;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.PlayVoice
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         AttachComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachBone                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachRules                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              LocalSound                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckParentInstigator         (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UAudioComponent* UDH_GameplayStatics::PlayVoice(class USoundBase* Sound, class AActor* Instigator, const struct FVector& Location, class USceneComponent* AttachComp, const struct FName& AttachBone, TEnumAsByte<EAttachLocation> AttachRules, class USoundBase* LocalSound, bool bCheckParentInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.PlayVoice");

	UDH_GameplayStatics_PlayVoice_Params params;
	params.Sound = Sound;
	params.Instigator = Instigator;
	params.Location = Location;
	params.AttachComp = AttachComp;
	params.AttachBone = AttachBone;
	params.AttachRules = AttachRules;
	params.LocalSound = LocalSound;
	params.bCheckParentInstigator = bCheckParentInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.PlayUISound
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::PlayUISound(class UObject* Context, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.PlayUISound");

	UDH_GameplayStatics_PlayUISound_Params params;
	params.Context = Context;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.PlaySoundViewAligned
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         AttachComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachBone                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachRules                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              LocalSound                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckParentInstigator         (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UAudioComponent* UDH_GameplayStatics::PlaySoundViewAligned(class USoundBase* Sound, class AActor* Instigator, const struct FVector& Location, class USceneComponent* AttachComp, const struct FName& AttachBone, TEnumAsByte<EAttachLocation> AttachRules, class USoundBase* LocalSound, bool bCheckParentInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.PlaySoundViewAligned");

	UDH_GameplayStatics_PlaySoundViewAligned_Params params;
	params.Sound = Sound;
	params.Instigator = Instigator;
	params.Location = Location;
	params.AttachComp = AttachComp;
	params.AttachBone = AttachBone;
	params.AttachRules = AttachRules;
	params.LocalSound = LocalSound;
	params.bCheckParentInstigator = bCheckParentInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.PlaySound3D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         AttachComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachBone                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachRules                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UAudioComponent* UDH_GameplayStatics::PlaySound3D(class USoundBase* SoundToPlay, class AActor* Instigator, const struct FVector& Location, class USceneComponent* AttachComp, const struct FName& AttachBone, TEnumAsByte<EAttachLocation> AttachRules)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.PlaySound3D");

	UDH_GameplayStatics_PlaySound3D_Params params;
	params.SoundToPlay = SoundToPlay;
	params.Instigator = Instigator;
	params.Location = Location;
	params.AttachComp = AttachComp;
	params.AttachBone = AttachBone;
	params.AttachRules = AttachRules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.ModifyBrightness
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          InScale                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FLinearColor UDH_GameplayStatics::ModifyBrightness(const struct FLinearColor& InColor, float InScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.ModifyBrightness");

	UDH_GameplayStatics_ModifyBrightness_Params params;
	params.InColor = InColor;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.LobbyHasRequiredPlayerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::LobbyHasRequiredPlayerCount(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.LobbyHasRequiredPlayerCount");

	UDH_GameplayStatics_LobbyHasRequiredPlayerCount_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsWorldTearingDown
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsWorldTearingDown(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsWorldTearingDown");

	UDH_GameplayStatics_IsWorldTearingDown_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsVivoxLoggedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsVivoxLoggedIn(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsVivoxLoggedIn");

	UDH_GameplayStatics_IsVivoxLoggedIn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsTutorialMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsTutorialMap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsTutorialMap");

	UDH_GameplayStatics_IsTutorialMap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsTitleMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsTitleMap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsTitleMap");

	UDH_GameplayStatics_IsTitleMap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsTestMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsTestMap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsTestMap");

	UDH_GameplayStatics_IsTestMap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsSpecialEventActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ESpecialEventType              Event                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsSpecialEventActive(ESpecialEventType Event, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsSpecialEventActive");

	UDH_GameplayStatics_IsSpecialEventActive_Params params;
	params.Event = Event;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsOnlineVoiceLoggedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsOnlineVoiceLoggedIn(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsOnlineVoiceLoggedIn");

	UDH_GameplayStatics_IsOnlineVoiceLoggedIn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsMissionSelected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsMissionSelected(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsMissionSelected");

	UDH_GameplayStatics_IsMissionSelected_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsLocalPlayerThrall
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsLocalPlayerThrall(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsLocalPlayerThrall");

	UDH_GameplayStatics_IsLocalPlayerThrall_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsLobbyOrTitleMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsLobbyOrTitleMap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsLobbyOrTitleMap");

	UDH_GameplayStatics_IsLobbyOrTitleMap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsLobbyMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsLobbyMap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsLobbyMap");

	UDH_GameplayStatics_IsLobbyMap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsLobbyLanguageDisabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   InCode                         (ConstParm, Parm)
// class UDH_LanguageCodeDataAsset* LanguageCodeDataAsset          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsLobbyLanguageDisabled(const struct FText& InCode, class UDH_LanguageCodeDataAsset* LanguageCodeDataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsLobbyLanguageDisabled");

	UDH_GameplayStatics_IsLobbyLanguageDisabled_Params params;
	params.InCode = InCode;
	params.LanguageCodeDataAsset = LanguageCodeDataAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsLive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  EnvironmentStr                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsLive(const class FString& EnvironmentStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsLive");

	UDH_GameplayStatics_IsLive_Params params;
	params.EnvironmentStr = EnvironmentStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsInteractTarget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsInteractTarget(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsInteractTarget");

	UDH_GameplayStatics_IsInteractTarget_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsInsideShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   TestPawn                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsInsideShip(class APawn* TestPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsInsideShip");

	UDH_GameplayStatics_IsInsideShip_Params params;
	params.TestPawn = TestPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsCraftingAllowed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingRecipe*      Recipe                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsCraftingAllowed(class UObject* Context, class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsCraftingAllowed");

	UDH_GameplayStatics_IsCraftingAllowed_Params params;
	params.Context = Context;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsConsolePlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsConsolePlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsConsolePlatform");

	UDH_GameplayStatics_IsConsolePlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsAxisKeyDown
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AxisName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsAxisKeyDown(class APlayerController* PlayerController, const struct FName& AxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsAxisKeyDown");

	UDH_GameplayStatics_IsAxisKeyDown_Params params;
	params.PlayerController = PlayerController;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.IsActionKeyDown
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::IsActionKeyDown(class APlayerController* PlayerController, const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.IsActionKeyDown");

	UDH_GameplayStatics_IsActionKeyDown_Params params;
	params.PlayerController = PlayerController;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.HasOpenLobbySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::HasOpenLobbySlot(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.HasOpenLobbySlot");

	UDH_GameplayStatics_HasOpenLobbySlot_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetWaterDepthAtLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetWaterDepthAtLocation(class UObject* Context, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetWaterDepthAtLocation");

	UDH_GameplayStatics_GetWaterDepthAtLocation_Params params;
	params.Context = Context;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetWarship
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Warship*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_Warship* UDH_GameplayStatics::GetWarship(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetWarship");

	UDH_GameplayStatics_GetWarship_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetTimeOfDay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetTimeOfDay(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetTimeOfDay");

	UDH_GameplayStatics_GetTimeOfDay_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetSyncedServerTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetSyncedServerTime(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetSyncedServerTime");

	UDH_GameplayStatics_GetSyncedServerTime_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetStartDate
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static struct FDateTime UDH_GameplayStatics::GetStartDate(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetStartDate");

	UDH_GameplayStatics_GetStartDate_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetSeaLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetSeaLevel(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetSeaLevel");

	UDH_GameplayStatics_GetSeaLevel_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetRefPoseTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  InMesh                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

static struct FTransform UDH_GameplayStatics::GetRefPoseTransform(const struct FName& BoneName, class USkeletalMeshComponent* InMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetRefPoseTransform");

	UDH_GameplayStatics_GetRefPoseTransform_Params params;
	params.BoneName = BoneName;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetPreskinnedRefposeTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  InMesh                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

static struct FTransform UDH_GameplayStatics::GetPreskinnedRefposeTransform(const struct FName& BoneName, class USkeletalMeshComponent* InMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetPreskinnedRefposeTransform");

	UDH_GameplayStatics_GetPreskinnedRefposeTransform_Params params;
	params.BoneName = BoneName;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetPlayerDefaultAvatar
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDH_PlayerCosmeticItem*> EquippedCosmetics              (Parm, OutParm, ZeroConstructor)
// class UDH_PlayerRoleData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerRoleData* UDH_GameplayStatics::GetPlayerDefaultAvatar(class UObject* Context, TArray<class UDH_PlayerCosmeticItem*>* EquippedCosmetics)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetPlayerDefaultAvatar");

	UDH_GameplayStatics_GetPlayerDefaultAvatar_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquippedCosmetics != nullptr)
		*EquippedCosmetics = params.EquippedCosmetics;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetParticipantPositionalAudioEnergy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetParticipantPositionalAudioEnergy(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetParticipantPositionalAudioEnergy");

	UDH_GameplayStatics_GetParticipantPositionalAudioEnergy_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetOceanVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PhysicsVolume*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_PhysicsVolume* UDH_GameplayStatics::GetOceanVolume(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetOceanVolume");

	UDH_GameplayStatics_GetOceanVolume_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetObstructionRemainingStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::GetObstructionRemainingStatus(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetObstructionRemainingStatus");

	UDH_GameplayStatics_GetObstructionRemainingStatus_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetMissionData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  MissionCode                    (Parm, ZeroConstructor)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_MapData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_MapData* UDH_GameplayStatics::GetMissionData(const class FString& MissionCode, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetMissionData");

	UDH_GameplayStatics_GetMissionData_Params params;
	params.MissionCode = MissionCode;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLocalViewPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FVector UDH_GameplayStatics::GetLocalViewPosition(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLocalViewPosition");

	UDH_GameplayStatics_GetLocalViewPosition_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLocalPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class APawn* UDH_GameplayStatics::GetLocalPawn(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLocalPawn");

	UDH_GameplayStatics_GetLocalPawn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLocalHuman
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_HumanCharacter* UDH_GameplayStatics::GetLocalHuman(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLocalHuman");

	UDH_GameplayStatics_GetLocalHuman_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLocalDHPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_PlayerState* UDH_GameplayStatics::GetLocalDHPlayerState(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLocalDHPlayerState");

	UDH_GameplayStatics_GetLocalDHPlayerState_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLocalDHPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_PlayerController* UDH_GameplayStatics::GetLocalDHPlayerController(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLocalDHPlayerController");

	UDH_GameplayStatics_GetLocalDHPlayerController_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLobbyPlayerCounts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Desired                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::GetLobbyPlayerCounts(class UObject* Context, int* Current, int* Desired)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLobbyPlayerCounts");

	UDH_GameplayStatics_GetLobbyPlayerCounts_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current != nullptr)
		*Current = params.Current;
	if (Desired != nullptr)
		*Desired = params.Desired;
}


// Function DreadHunger.DH_GameplayStatics.GetLobbyDestinationMission
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_GameplayStatics::GetLobbyDestinationMission(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLobbyDestinationMission");

	UDH_GameplayStatics_GetLobbyDestinationMission_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetLastServerReceivePacketTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetLastServerReceivePacketTime(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetLastServerReceivePacketTime");

	UDH_GameplayStatics_GetLastServerReceivePacketTime_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetKeyName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FName UDH_GameplayStatics::GetKeyName(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetKeyName");

	UDH_GameplayStatics_GetKeyName_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetGlobalTemperature
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ETemperatureScale              Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetGlobalTemperature(class UObject* Context, ETemperatureScale Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetGlobalTemperature");

	UDH_GameplayStatics_GetGlobalTemperature_Params params;
	params.Context = Context;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetGameCompletionPct
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetGameCompletionPct(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetGameCompletionPct");

	UDH_GameplayStatics_GetGameCompletionPct_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDistFromIcebergSq
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TestActor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetDistFromIcebergSq(class AActor* TestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDistFromIcebergSq");

	UDH_GameplayStatics_GetDistFromIcebergSq_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHWorldSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_WorldSettings*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_WorldSettings* UDH_GameplayStatics::GetDHWorldSettings(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHWorldSettings");

	UDH_GameplayStatics_GetDHWorldSettings_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHPlayerStateFromUniqueNetId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_PlayerState* UDH_GameplayStatics::GetDHPlayerStateFromUniqueNetId(const struct FUniqueNetIdRepl& InPlayerId, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHPlayerStateFromUniqueNetId");

	UDH_GameplayStatics_GetDHPlayerStateFromUniqueNetId_Params params;
	params.InPlayerId = InPlayerId;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_PlayerState* UDH_GameplayStatics::GetDHPlayerState(class UObject* Context, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHPlayerState");

	UDH_GameplayStatics_GetDHPlayerState_Params params;
	params.Context = Context;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_PlayerController* UDH_GameplayStatics::GetDHPlayerController(class UObject* Context, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHPlayerController");

	UDH_GameplayStatics_GetDHPlayerController_Params params;
	params.Context = Context;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHPlayerCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_HumanCharacter* UDH_GameplayStatics::GetDHPlayerCharacter(class UObject* Context, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHPlayerCharacter");

	UDH_GameplayStatics_GetDHPlayerCharacter_Params params;
	params.Context = Context;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHLobbyGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_LobbyGameState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_LobbyGameState* UDH_GameplayStatics::GetDHLobbyGameState(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHLobbyGameState");

	UDH_GameplayStatics_GetDHLobbyGameState_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHLobbyGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_LobbyGameMode*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_LobbyGameMode* UDH_GameplayStatics::GetDHLobbyGameMode(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHLobbyGameMode");

	UDH_GameplayStatics_GetDHLobbyGameMode_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHHUD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HUD*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_HUD* UDH_GameplayStatics::GetDHHUD(class APawn* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHHUD");

	UDH_GameplayStatics_GetDHHUD_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHGameStateBase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_GameStateBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_GameStateBase* UDH_GameplayStatics::GetDHGameStateBase(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHGameStateBase");

	UDH_GameplayStatics_GetDHGameStateBase_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_GameState*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_GameState* UDH_GameplayStatics::GetDHGameState(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHGameState");

	UDH_GameplayStatics_GetDHGameState_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHGameModeBase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_GameModeBase*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_GameModeBase* UDH_GameplayStatics::GetDHGameModeBase(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHGameModeBase");

	UDH_GameplayStatics_GetDHGameModeBase_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetDHGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_GameMode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_GameMode* UDH_GameplayStatics::GetDHGameMode(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetDHGameMode");

	UDH_GameplayStatics_GetDHGameMode_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetCraftingData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_CraftingData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_CraftingData* UDH_GameplayStatics::GetCraftingData(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetCraftingData");

	UDH_GameplayStatics_GetCraftingData_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetCollectionVectorParameterDefaultValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialParameterCollection* MPC                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultValue                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::GetCollectionVectorParameterDefaultValue(class UMaterialParameterCollection* MPC, const struct FName& Name, struct FLinearColor* DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetCollectionVectorParameterDefaultValue");

	UDH_GameplayStatics_GetCollectionVectorParameterDefaultValue_Params params;
	params.MPC = MPC;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultValue != nullptr)
		*DefaultValue = params.DefaultValue;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetClassDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UObject* UDH_GameplayStatics::GetClassDefaultObject(class UObject* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetClassDefaultObject");

	UDH_GameplayStatics_GetClassDefaultObject_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetBoneClosestToHit
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyVisibleBones              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FName UDH_GameplayStatics::GetBoneClosestToHit(class USkeletalMeshComponent* Mesh, const struct FVector& HitLocation, bool bOnlyVisibleBones)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetBoneClosestToHit");

	UDH_GameplayStatics_GetBoneClosestToHit_Params params;
	params.Mesh = Mesh;
	params.HitLocation = HitLocation;
	params.bOnlyVisibleBones = bOnlyVisibleBones;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetBlizzardIntensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetBlizzardIntensity(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetBlizzardIntensity");

	UDH_GameplayStatics_GetBlizzardIntensity_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetArmoryCombination
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<unsigned char> UDH_GameplayStatics::GetArmoryCombination(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetArmoryCombination");

	UDH_GameplayStatics_GetArmoryCombination_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.GetActorPctDistanceFromMapEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static float UDH_GameplayStatics::GetActorPctDistanceFromMapEnd(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.GetActorPctDistanceFromMapEnd");

	UDH_GameplayStatics_GetActorPctDistanceFromMapEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.FindSlopeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 FloorNormal                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CurrentRotation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FRotator UDH_GameplayStatics::FindSlopeRotation(const struct FVector& FloorNormal, const struct FRotator& CurrentRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.FindSlopeRotation");

	UDH_GameplayStatics_FindSlopeRotation_Params params;
	params.FloorNormal = FloorNormal;
	params.CurrentRotation = CurrentRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.ConstructCompleteVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDHCompleteVersion      ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FDHCompleteVersion UDH_GameplayStatics::ConstructCompleteVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.ConstructCompleteVersion");

	UDH_GameplayStatics_ConstructCompleteVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.CompleteVersionToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDHCompleteVersion      CompleteVersion                (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_GameplayStatics::CompleteVersionToString(const struct FDHCompleteVersion& CompleteVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.CompleteVersionToString");

	UDH_GameplayStatics_CompleteVersionToString_Params params;
	params.CompleteVersion = CompleteVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.ClearMPCOverrides
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialParameterCollection* MPC                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Params                         (ConstParm, Parm, ZeroConstructor)

static void UDH_GameplayStatics::ClearMPCOverrides(class UObject* Context, class UMaterialParameterCollection* MPC, TArray<struct FName> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.ClearMPCOverrides");

	UDH_GameplayStatics_ClearMPCOverrides_Params params;
	params.Context = Context;
	params.MPC = MPC;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.CanReceiveOnlineInvites
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::CanReceiveOnlineInvites(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.CanReceiveOnlineInvites");

	UDH_GameplayStatics_CanReceiveOnlineInvites_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.BroadcastGameplayMessage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::BroadcastGameplayMessage(class UObject* Context, const struct FText& Message, class USoundBase* Sound, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.BroadcastGameplayMessage");

	UDH_GameplayStatics_BroadcastGameplayMessage_Params params;
	params.Context = Context;
	params.Message = Message;
	params.Sound = Sound;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.AttachToFloor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

static void UDH_GameplayStatics::AttachToFloor(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.AttachToFloor");

	UDH_GameplayStatics_AttachToFloor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameplayStatics.AreVersionsCompatible
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDHCompleteVersion      A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDHCompleteVersion      B                              (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ComponentsToTest               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::AreVersionsCompatible(const struct FDHCompleteVersion& A, const struct FDHCompleteVersion& B, int ComponentsToTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.AreVersionsCompatible");

	UDH_GameplayStatics_AreVersionsCompatible_Params params;
	params.A = A;
	params.B = B;
	params.ComponentsToTest = ComponentsToTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.AreAnyThrallsBrigged
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::AreAnyThrallsBrigged(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.AreAnyThrallsBrigged");

	UDH_GameplayStatics_AreAnyThrallsBrigged_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameplayStatics.AllowDropTableSpawns
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_GameplayStatics::AllowDropTableSpawns(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameplayStatics.AllowDropTableSpawns");

	UDH_GameplayStatics_AllowDropTableSpawns_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameStateBase.SetWindVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWindVector                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameStateBase::SetWindVector(const struct FVector& InWindVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.SetWindVector");

	ADH_GameStateBase_SetWindVector_Params params;
	params.InWindVector = InWindVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.SetTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InHour                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediateUpdate               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameStateBase::SetTimeOfDay(float InHour, bool bImmediateUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.SetTimeOfDay");

	ADH_GameStateBase_SetTimeOfDay_Params params;
	params.InHour = InHour;
	params.bImmediateUpdate = bImmediateUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.SetHushOnPlayers
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           bPlayersHushed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameStateBase::SetHushOnPlayers(bool bPlayersHushed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.SetHushOnPlayers");

	ADH_GameStateBase_SetHushOnPlayers_Params params;
	params.bPlayersHushed = bPlayersHushed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.SetBlizzardIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBlizzardIntensity            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameStateBase::SetBlizzardIntensity(float InBlizzardIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.SetBlizzardIntensity");

	ADH_GameStateBase_SetBlizzardIntensity_Params params;
	params.InBlizzardIntensity = InBlizzardIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.OnSpellExpired
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameStateBase::OnSpellExpired(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.OnSpellExpired");

	ADH_GameStateBase_OnSpellExpired_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.OnSpellCast
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameStateBase::OnSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.OnSpellCast");

	ADH_GameStateBase_OnSpellCast_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.OnRep_Warship
// (Final, Native, Protected)

void ADH_GameStateBase::OnRep_Warship()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.OnRep_Warship");

	ADH_GameStateBase_OnRep_Warship_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.OnRep_ShipObstructions
// (Final, Native, Private)

void ADH_GameStateBase::OnRep_ShipObstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.OnRep_ShipObstructions");

	ADH_GameStateBase_OnRep_ShipObstructions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.OnRep_ActiveSpells
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FSpellInstance>  PreviouslyActiveSpells         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADH_GameStateBase::OnRep_ActiveSpells(TArray<struct FSpellInstance> PreviouslyActiveSpells)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.OnRep_ActiveSpells");

	ADH_GameStateBase_OnRep_ActiveSpells_Params params;
	params.PreviouslyActiveSpells = PreviouslyActiveSpells;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameStateBase.GetTimeOfDay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_GameStateBase::GetTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.GetTimeOfDay");

	ADH_GameStateBase_GetTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameStateBase.GetNumActiveSpellsOfType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TotemSpell*          Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_GameStateBase::GetNumActiveSpellsOfType(class UDH_TotemSpell* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.GetNumActiveSpellsOfType");

	ADH_GameStateBase_GetNumActiveSpellsOfType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameStateBase.GetGlobalTemperature
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_GameStateBase::GetGlobalTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.GetGlobalTemperature");

	ADH_GameStateBase_GetGlobalTemperature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameStateBase.GetDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime ADH_GameStateBase::GetDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.GetDate");

	ADH_GameStateBase_GetDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameStateBase.GetBlizzardIntensity
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_GameStateBase::GetBlizzardIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameStateBase.GetBlizzardIntensity");

	ADH_GameStateBase_GetBlizzardIntensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameState.OnTotemDrainTargetsChanged
// (Final, Native, Private)
// Parameters:
// int                            Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameState::OnTotemDrainTargetsChanged(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnTotemDrainTargetsChanged");

	ADH_GameState_OnTotemDrainTargetsChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_WinningTeam
// (Final, Native, Private)

void ADH_GameState::OnRep_WinningTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_WinningTeam");

	ADH_GameState_OnRep_WinningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_TotemDrainCount
// (Final, Native, Private)

void ADH_GameState::OnRep_TotemDrainCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_TotemDrainCount");

	ADH_GameState_OnRep_TotemDrainCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_ServerVersion
// (Final, Native, Private)

void ADH_GameState::OnRep_ServerVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_ServerVersion");

	ADH_GameState_OnRep_ServerVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_PlayerVersionMismatches
// (Final, Native, Private)

void ADH_GameState::OnRep_PlayerVersionMismatches()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_PlayerVersionMismatches");

	ADH_GameState_OnRep_PlayerVersionMismatches_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_GameUniqueID
// (Final, Native, Private)

void ADH_GameState::OnRep_GameUniqueID()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_GameUniqueID");

	ADH_GameState_OnRep_GameUniqueID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_ExpectedPlayerIDs
// (Final, Native, Private, Const)

void ADH_GameState::OnRep_ExpectedPlayerIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_ExpectedPlayerIDs");

	ADH_GameState_OnRep_ExpectedPlayerIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_DaysUntilBlizzard
// (Final, Native, Private)

void ADH_GameState::OnRep_DaysUntilBlizzard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_DaysUntilBlizzard");

	ADH_GameState_OnRep_DaysUntilBlizzard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.OnRep_AllTotems
// (Final, Native, Private)

void ADH_GameState::OnRep_AllTotems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.OnRep_AllTotems");

	ADH_GameState_OnRep_AllTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.GiveQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GameState::GiveQuest(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GiveQuest");

	ADH_GameState_GiveQuest_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameState.GetWinningTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerTeam                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerTeam ADH_GameState::GetWinningTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GetWinningTeam");

	ADH_GameState_GetWinningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameState.GetTotemDrainCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_GameState::GetTotemDrainCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GetTotemDrainCount");

	ADH_GameState_GetTotemDrainCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameState.GetTotalTotemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_GameState::GetTotalTotemCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GetTotalTotemCount");

	ADH_GameState_GetTotalTotemCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameState.GetServerVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDHCompleteVersion      ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FDHCompleteVersion ADH_GameState::GetServerVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GetServerVersion");

	ADH_GameState_GetServerVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameState.GetPlayerVersionMismatches
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FDHPlayerVersionMismatch> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FDHPlayerVersionMismatch> ADH_GameState::GetPlayerVersionMismatches()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GetPlayerVersionMismatches");

	ADH_GameState_GetPlayerVersionMismatches_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameState.GetAllTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ADH_ThrallTotem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ADH_ThrallTotem*> ADH_GameState::GetAllTotems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameState.GetAllTotems");

	ADH_GameState_GetAllTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameViewportClient.SetUIOnlyMode
// (Final, Native, Private)
// Parameters:
// bool                           bNewUIOnlyMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_GameViewportClient::SetUIOnlyMode(bool bNewUIOnlyMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameViewportClient.SetUIOnlyMode");

	UDH_GameViewportClient_SetUIOnlyMode_Params params;
	params.bNewUIOnlyMode = bNewUIOnlyMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GameViewportClient.GetRelevantActionMappingKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePlayerKeyGroup             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FKey UDH_GameViewportClient::GetRelevantActionMappingKey(const struct FName& Name, class UObject* WorldContextObject, bool bUsePlayerKeyGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameViewportClient.GetRelevantActionMappingKey");

	UDH_GameViewportClient_GetRelevantActionMappingKey_Params params;
	params.Name = Name;
	params.WorldContextObject = WorldContextObject;
	params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GameViewportClient.GetInputType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EDHInputType                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EDHInputType UDH_GameViewportClient::GetInputType(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GameViewportClient.GetInputType");

	UDH_GameViewportClient_GetInputType_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GiveInventoryDebugControl.GiveInventory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class ADH_Inventory*           InventoryClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDH_GiveInventoryDebugControl::GiveInventory(class ADH_Inventory* InventoryClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GiveInventoryDebugControl.GiveInventory");

	UDH_GiveInventoryDebugControl_GiveInventory_Params params;
	params.InventoryClass = InventoryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GoreStatics.SeverLimb
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ADH_Character*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneToSever                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impulse                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_GoreStatics::SeverLimb(class ADH_Character* Character, const struct FName& BoneToSever, const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GoreStatics.SeverLimb");

	UDH_GoreStatics_SeverLimb_Params params;
	params.Character = Character;
	params.BoneToSever = BoneToSever;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingBlueprint.OnRep_AssociatedRecipe
// (Final, Native, Private)

void ADH_GroundCraftingBlueprint::OnRep_AssociatedRecipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingBlueprint.OnRep_AssociatedRecipe");

	ADH_GroundCraftingBlueprint_OnRep_AssociatedRecipe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingBlueprint.OnProjectComplete
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     Project                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GroundCraftingBlueprint::OnProjectComplete(class UDH_CraftingProject* Project)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingBlueprint.OnProjectComplete");

	ADH_GroundCraftingBlueprint_OnProjectComplete_Params params;
	params.Project = Project;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingBlueprint.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_GroundCraftingBlueprint::Init(class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingBlueprint.Init");

	ADH_GroundCraftingBlueprint_Init_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.SpawnCraftingProject
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FPotentialCraftingProject CraftingProject                (ConstParm, Parm, ReferenceParm)

void UDH_GroundCraftingProjectComponent::SpawnCraftingProject(const struct FPotentialCraftingProject& CraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.SpawnCraftingProject");

	UDH_GroundCraftingProjectComponent_SpawnCraftingProject_Params params;
	params.CraftingProject = CraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.SetCraftingPreviewRecipe
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UDH_CraftingRecipe*      NewRecipe                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_GroundCraftingProjectComponent::SetCraftingPreviewRecipe(class UDH_CraftingRecipe* NewRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.SetCraftingPreviewRecipe");

	UDH_GroundCraftingProjectComponent_SetCraftingPreviewRecipe_Params params;
	params.NewRecipe = NewRecipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.SetCraftingPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingRecipe*      NewRecipe                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearPreview                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_GroundCraftingProjectComponent::SetCraftingPreview(class UDH_CraftingRecipe* NewRecipe, bool bClearPreview)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.SetCraftingPreview");

	UDH_GroundCraftingProjectComponent_SetCraftingPreview_Params params;
	params.NewRecipe = NewRecipe;
	params.bClearPreview = bClearPreview;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.GetCraftingPreview
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPotentialCraftingProject ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FPotentialCraftingProject UDH_GroundCraftingProjectComponent::GetCraftingPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.GetCraftingPreview");

	UDH_GroundCraftingProjectComponent_GetCraftingPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_GroundCraftingProjectComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UDH_GroundCraftingProjectComponent* UDH_GroundCraftingProjectComponent::Get(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.Get");

	UDH_GroundCraftingProjectComponent_Get_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.DestroyActiveCraftingProject_Simulated
// (Final, Native, Public, BlueprintCallable)

void UDH_GroundCraftingProjectComponent::DestroyActiveCraftingProject_Simulated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.DestroyActiveCraftingProject_Simulated");

	UDH_GroundCraftingProjectComponent_DestroyActiveCraftingProject_Simulated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_GroundCraftingProjectComponent.DestroyActiveCraftingProject
// (Net, NetReliable, Native, Event, Public, NetServer)

void UDH_GroundCraftingProjectComponent::DestroyActiveCraftingProject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_GroundCraftingProjectComponent.DestroyActiveCraftingProject");

	UDH_GroundCraftingProjectComponent_DestroyActiveCraftingProject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HeatSourceComponent.SetFuelPct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFuelPct                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HeatSourceComponent::SetFuelPct(float NewFuelPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.SetFuelPct");

	UDH_HeatSourceComponent_SetFuelPct_Params params;
	params.NewFuelPct = NewFuelPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HeatSourceComponent.OnRep_FuelAddedCount
// (Final, Native, Private)

void UDH_HeatSourceComponent::OnRep_FuelAddedCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.OnRep_FuelAddedCount");

	UDH_HeatSourceComponent_OnRep_FuelAddedCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HeatSourceComponent.OnFuelContributionExpired
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ExpiredContributor             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_HeatSourceComponent::OnFuelContributionExpired(class ADH_PlayerState* ExpiredContributor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.OnFuelContributionExpired");

	UDH_HeatSourceComponent_OnFuelContributionExpired_Params params;
	params.ExpiredContributor = ExpiredContributor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HeatSourceComponent.InitFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_HeatSourceComponent* Other                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_HeatSourceComponent::InitFrom(class UDH_HeatSourceComponent* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.InitFrom");

	UDH_HeatSourceComponent_InitFrom_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HeatSourceComponent.HasFuel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_HeatSourceComponent::HasFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.HasFuel");

	UDH_HeatSourceComponent_HasFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HeatSourceComponent.GetFuelPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_HeatSourceComponent::GetFuelPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.GetFuelPct");

	UDH_HeatSourceComponent_GetFuelPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HeatSourceComponent.AddFuel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Fuel                           (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         FuelContributor                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConsumeNonFuelItems           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConsumeFuel                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackLimit                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScoreConsumption              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_HeatSourceComponent::AddFuel(class AActor* Fuel, class ADH_PlayerState* FuelContributor, bool bConsumeNonFuelItems, bool bConsumeFuel, int StackLimit, bool bScoreConsumption)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HeatSourceComponent.AddFuel");

	UDH_HeatSourceComponent_AddFuel_Params params;
	params.Fuel = Fuel;
	params.FuelContributor = FuelContributor;
	params.bConsumeNonFuelItems = bConsumeNonFuelItems;
	params.bConsumeFuel = bConsumeFuel;
	params.StackLimit = StackLimit;
	params.bScoreConsumption = bScoreConsumption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsJsonSaveData.WasSpellMenuUsed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsJsonSaveData::WasSpellMenuUsed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsJsonSaveData.WasSpellMenuUsed");

	UDH_HintsJsonSaveData_WasSpellMenuUsed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsJsonSaveData.WasSpellMenuOpened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsJsonSaveData::WasSpellMenuOpened(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsJsonSaveData.WasSpellMenuOpened");

	UDH_HintsJsonSaveData_WasSpellMenuOpened_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsJsonSaveData.WasJournalOpened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsJsonSaveData::WasJournalOpened(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsJsonSaveData.WasJournalOpened");

	UDH_HintsJsonSaveData_WasJournalOpened_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsJsonSaveData.WasCraftingMenuUsed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsJsonSaveData::WasCraftingMenuUsed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsJsonSaveData.WasCraftingMenuUsed");

	UDH_HintsJsonSaveData_WasCraftingMenuUsed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsJsonSaveData.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_HintsJsonSaveData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_HintsJsonSaveData* UDH_HintsJsonSaveData::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsJsonSaveData.GetInstance");

	UDH_HintsJsonSaveData_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsSaveGame.WasSpellMenuUsed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsSaveGame::WasSpellMenuUsed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsSaveGame.WasSpellMenuUsed");

	UDH_HintsSaveGame_WasSpellMenuUsed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsSaveGame.WasSpellMenuOpened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsSaveGame::WasSpellMenuOpened(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsSaveGame.WasSpellMenuOpened");

	UDH_HintsSaveGame_WasSpellMenuOpened_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsSaveGame.WasJournalOpened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsSaveGame::WasJournalOpened(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsSaveGame.WasJournalOpened");

	UDH_HintsSaveGame_WasJournalOpened_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HintsSaveGame.WasCraftingMenuUsed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_HintsSaveGame::WasCraftingMenuUsed(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HintsSaveGame.WasCraftingMenuUsed");

	UDH_HintsSaveGame_WasCraftingMenuUsed_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HitMarkersWidget.Log
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

static void UDH_HitMarkersWidget::Log(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HitMarkersWidget.Log");

	UDH_HitMarkersWidget_Log_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HUD.OnXPProgressUpdated
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_XPProgressData      InData                         (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_HUD::OnXPProgressUpdated(const struct FDH_XPProgressData& InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HUD.OnXPProgressUpdated");

	ADH_HUD_OnXPProgressUpdated_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HUD.OnGameVictoryWidgetHidden
// (Final, Native, Private)

void ADH_HUD::OnGameVictoryWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HUD.OnGameVictoryWidgetHidden");

	ADH_HUD_OnGameVictoryWidgetHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HUD.GetGameMessageVisibility
// (Final, Native, Private, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HUD::GetGameMessageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HUD.GetGameMessageVisibility");

	ADH_HUD_GetGameMessageVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HUD.CreateMatchEndMessage
// (Final, Native, Private)
// Parameters:
// EPlayerTeam                    WinningTeam                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_HUD::CreateMatchEndMessage(EPlayerTeam WinningTeam, bool bWinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HUD.CreateMatchEndMessage");

	ADH_HUD_CreateMatchEndMessage_Params params;
	params.WinningTeam = WinningTeam;
	params.bWinner = bWinner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HullBreach.OnRepaired
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     Project                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Results                        (Parm, ZeroConstructor)

void ADH_HullBreach::OnRepaired(class UDH_CraftingProject* Project, TArray<class AActor*> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HullBreach.OnRepaired");

	ADH_HullBreach_OnRepaired_Params params;
	params.Project = Project;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanAnimInstance.GetLastInventoryAnimState
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryAnimMontageState     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInventoryAnimMontageState UDH_HumanAnimInstance::GetLastInventoryAnimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanAnimInstance.GetLastInventoryAnimState");

	UDH_HumanAnimInstance_GetLastInventoryAnimState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanAnimInstance.GetCurrentInventoryAnimState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryAnimMontageState     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInventoryAnimMontageState UDH_HumanAnimInstance::GetCurrentInventoryAnimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanAnimInstance.GetCurrentInventoryAnimState");

	UDH_HumanAnimInstance_GetCurrentInventoryAnimState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.ShouldSpawnAsGhost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::ShouldSpawnAsGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.ShouldSpawnAsGhost");

	ADH_HumanCharacter_ShouldSpawnAsGhost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.SetNameOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  NewName                        (ConstParm, Parm, ZeroConstructor)

void ADH_HumanCharacter::SetNameOverride(const class FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.SetNameOverride");

	ADH_HumanCharacter_SetNameOverride_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.SetIsSpiritWalking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIsSpiritWalking            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::SetIsSpiritWalking(bool bNewIsSpiritWalking, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.SetIsSpiritWalking");

	ADH_HumanCharacter_SetIsSpiritWalking_Params params;
	params.bNewIsSpiritWalking = bNewIsSpiritWalking;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.SetIncapacitated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIncapacitated              (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::SetIncapacitated(bool bNewIncapacitated)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.SetIncapacitated");

	ADH_HumanCharacter_SetIncapacitated_Params params;
	params.bNewIncapacitated = bNewIncapacitated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.SetCurrentWarmth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewWarmth                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::SetCurrentWarmth(float NewWarmth)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.SetCurrentWarmth");

	ADH_HumanCharacter_SetCurrentWarmth_Params params;
	params.NewWarmth = NewWarmth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.SetCurrentHunger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewHunger                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::SetCurrentHunger(float NewHunger)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.SetCurrentHunger");

	ADH_HumanCharacter_SetCurrentHunger_Params params;
	params.NewHunger = NewHunger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.SetAvatarOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         NewAvatar                      (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::SetAvatarOverride(class ADH_PlayerState* NewAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.SetAvatarOverride");

	ADH_HumanCharacter_SetAvatarOverride_Params params;
	params.NewAvatar = NewAvatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.PlayVomitEffects
// (Final, Native, Private)

void ADH_HumanCharacter::PlayVomitEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.PlayVomitEffects");

	ADH_HumanCharacter_PlayVomitEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.PlayDialogue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDialogueWave*           InDialogueWave                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::PlayDialogue(class UDialogueWave* InDialogueWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.PlayDialogue");

	ADH_HumanCharacter_PlayDialogue_Params params;
	params.InDialogueWave = InDialogueWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.OnVomitParticleImpact
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::OnVomitParticleImpact(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnVomitParticleImpact");

	ADH_HumanCharacter_OnVomitParticleImpact_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRoleAssigned
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         PS                             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::OnRoleAssigned(class ADH_PlayerState* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRoleAssigned");

	ADH_HumanCharacter_OnRoleAssigned_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_WarmthBoostRemaining
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_WarmthBoostRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_WarmthBoostRemaining");

	ADH_HumanCharacter_OnRep_WarmthBoostRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_SpiritWalking
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_SpiritWalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_SpiritWalking");

	ADH_HumanCharacter_OnRep_SpiritWalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_MeleeHitFlash
// (Final, Native, Protected)

void ADH_HumanCharacter::OnRep_MeleeHitFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_MeleeHitFlash");

	ADH_HumanCharacter_OnRep_MeleeHitFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_MarkedForWendigoAttack
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_MarkedForWendigoAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_MarkedForWendigoAttack");

	ADH_HumanCharacter_OnRep_MarkedForWendigoAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_LastDHPlayerState
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_LastDHPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_LastDHPlayerState");

	ADH_HumanCharacter_OnRep_LastDHPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_JumpCount
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_JumpCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_JumpCount");

	ADH_HumanCharacter_OnRep_JumpCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_IsSprinting
// (Final, Native, Private, Const)

void ADH_HumanCharacter::OnRep_IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_IsSprinting");

	ADH_HumanCharacter_OnRep_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_IsIncapacitated
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_IsIncapacitated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_IsIncapacitated");

	ADH_HumanCharacter_OnRep_IsIncapacitated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_IsAiming
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_IsAiming");

	ADH_HumanCharacter_OnRep_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_InteractTarget
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_InteractTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_InteractTarget");

	ADH_HumanCharacter_OnRep_InteractTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_HungerIncreasing
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_HungerIncreasing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_HungerIncreasing");

	ADH_HumanCharacter_OnRep_HungerIncreasing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_GrabbedPickup
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_GrabbedPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_GrabbedPickup");

	ADH_HumanCharacter_OnRep_GrabbedPickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentWarmth
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_CurrentWarmth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_CurrentWarmth");

	ADH_HumanCharacter_OnRep_CurrentWarmth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentTemperature
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_CurrentTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_CurrentTemperature");

	ADH_HumanCharacter_OnRep_CurrentTemperature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentReviver
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_CurrentReviver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_CurrentReviver");

	ADH_HumanCharacter_OnRep_CurrentReviver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_CurrentHunger
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_CurrentHunger()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_CurrentHunger");

	ADH_HumanCharacter_OnRep_CurrentHunger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_ControlledShip
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_ControlledShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_ControlledShip");

	ADH_HumanCharacter_OnRep_ControlledShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_CarryingPawn
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_CarryingPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_CarryingPawn");

	ADH_HumanCharacter_OnRep_CarryingPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnRep_AvatarOverride
// (Final, Native, Private)

void ADH_HumanCharacter::OnRep_AvatarOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnRep_AvatarOverride");

	ADH_HumanCharacter_OnRep_AvatarOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnProjectileSpawnFlashReplicated
// (Final, Native, Protected)

void ADH_HumanCharacter::OnProjectileSpawnFlashReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnProjectileSpawnFlashReplicated");

	ADH_HumanCharacter_OnProjectileSpawnFlashReplicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnHallucinationDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedHallucination         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::OnHallucinationDestroyed(class AActor* DestroyedHallucination)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnHallucinationDestroyed");

	ADH_HumanCharacter_OnHallucinationDestroyed_Params params;
	params.DestroyedHallucination = DestroyedHallucination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnCarriedPawnInvRemoved
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::OnCarriedPawnInvRemoved(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnCarriedPawnInvRemoved");

	ADH_HumanCharacter_OnCarriedPawnInvRemoved_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.OnCarriedPawnDied
// (Final, Native, Public)
// Parameters:
// class ADH_Character*           DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::OnCarriedPawnDied(class ADH_Character* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.OnCarriedPawnDied");

	ADH_HumanCharacter_OnCarriedPawnDied_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.ModifyStamina
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::ModifyStamina(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.ModifyStamina");

	ADH_HumanCharacter_ModifyStamina_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.ModifyHealthBoostRemaining
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         Creditor                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::ModifyHealthBoostRemaining(float Delta, class ADH_PlayerState* Creditor, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.ModifyHealthBoostRemaining");

	ADH_HumanCharacter_ModifyHealthBoostRemaining_Params params;
	params.Delta = Delta;
	params.Creditor = Creditor;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.IsUsingInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsUsingInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsUsingInventory");

	ADH_HumanCharacter_IsUsingInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsThrall
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsThrall()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsThrall");

	ADH_HumanCharacter_IsThrall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsSpiritWalking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsSpiritWalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsSpiritWalking");

	ADH_HumanCharacter_IsSpiritWalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsResting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsResting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsResting");

	ADH_HumanCharacter_IsResting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsReloadingInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsReloadingInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsReloadingInventory");

	ADH_HumanCharacter_IsReloadingInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsOnShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsOnShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsOnShip");

	ADH_HumanCharacter_IsOnShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsIncapacitated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsIncapacitated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsIncapacitated");

	ADH_HumanCharacter_IsIncapacitated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsDrivingShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsDrivingShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsDrivingShip");

	ADH_HumanCharacter_IsDrivingShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsDoppelganger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsDoppelganger()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsDoppelganger");

	ADH_HumanCharacter_IsDoppelganger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsCarryingPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsCarryingPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsCarryingPawn");

	ADH_HumanCharacter_IsCarryingPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsBeingCarried
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsBeingCarried()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsBeingCarried");

	ADH_HumanCharacter_IsBeingCarried_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.IsAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.IsAiming");

	ADH_HumanCharacter_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.InventoryChanged
// (Final, Native, Public)
// Parameters:
// class ADH_Inventory*           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::InventoryChanged(class ADH_Inventory* Item, int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.InventoryChanged");

	ADH_HumanCharacter_InventoryChanged_Params params;
	params.Item = Item;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.GetWarmthRateOfChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetWarmthRateOfChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetWarmthRateOfChange");

	ADH_HumanCharacter_GetWarmthRateOfChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetWarmthBoostRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetWarmthBoostRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetWarmthBoostRemaining");

	ADH_HumanCharacter_GetWarmthBoostRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetTeamRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerTeamRole                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerTeamRole ADH_HumanCharacter::GetTeamRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetTeamRole");

	ADH_HumanCharacter_GetTeamRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetShadowAnimInst
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_HumanAnimInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_HumanAnimInstance* ADH_HumanCharacter::GetShadowAnimInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetShadowAnimInst");

	ADH_HumanCharacter_GetShadowAnimInst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetSelectedInventoryView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_InventoryView*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_InventoryView* ADH_HumanCharacter::GetSelectedInventoryView()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetSelectedInventoryView");

	ADH_HumanCharacter_GetSelectedInventoryView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetSelectedInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* ADH_HumanCharacter::GetSelectedInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetSelectedInventory");

	ADH_HumanCharacter_GetSelectedInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetSanityBoostRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetSanityBoostRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetSanityBoostRemaining");

	ADH_HumanCharacter_GetSanityBoostRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetPoisoned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::GetPoisoned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetPoisoned");

	ADH_HumanCharacter_GetPoisoned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetPendingInventorySelection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* ADH_HumanCharacter::GetPendingInventorySelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetPendingInventorySelection");

	ADH_HumanCharacter_GetPendingInventorySelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetNameOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ADH_HumanCharacter::GetNameOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetNameOverride");

	ADH_HumanCharacter_GetNameOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetMaximumStamina
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetMaximumStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetMaximumStamina");

	ADH_HumanCharacter_GetMaximumStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetLastSpiritWalkStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetLastSpiritWalkStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetLastSpiritWalkStartTime");

	ADH_HumanCharacter_GetLastSpiritWalkStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetHungerIncreasing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::GetHungerIncreasing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetHungerIncreasing");

	ADH_HumanCharacter_GetHungerIncreasing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetHungerBoostRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetHungerBoostRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetHungerBoostRemaining");

	ADH_HumanCharacter_GetHungerBoostRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetHumanMovement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_HumanMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_HumanMovementComponent* ADH_HumanCharacter::GetHumanMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetHumanMovement");

	ADH_HumanCharacter_GetHumanMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetHumanAnimInst
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_HumanAnimInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_HumanAnimInstance* ADH_HumanCharacter::GetHumanAnimInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetHumanAnimInst");

	ADH_HumanCharacter_GetHumanAnimInst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetHealthBoostRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetHealthBoostRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetHealthBoostRemaining");

	ADH_HumanCharacter_GetHealthBoostRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetGroundCraftingRecipes
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UDH_CraftingRecipe*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDH_CraftingRecipe*> ADH_HumanCharacter::GetGroundCraftingRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetGroundCraftingRecipes");

	ADH_HumanCharacter_GetGroundCraftingRecipes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCurrentWarmth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetCurrentWarmth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCurrentWarmth");

	ADH_HumanCharacter_GetCurrentWarmth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCurrentTemperature
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetCurrentTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCurrentTemperature");

	ADH_HumanCharacter_GetCurrentTemperature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCurrentSanity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetCurrentSanity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCurrentSanity");

	ADH_HumanCharacter_GetCurrentSanity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCurrentName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ADH_HumanCharacter::GetCurrentName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCurrentName");

	ADH_HumanCharacter_GetCurrentName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCurrentHunger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_HumanCharacter::GetCurrentHunger()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCurrentHunger");

	ADH_HumanCharacter_GetCurrentHunger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCurrentAvatar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_PlayerRoleData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_PlayerRoleData* ADH_HumanCharacter::GetCurrentAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCurrentAvatar");

	ADH_HumanCharacter_GetCurrentAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCraftingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CraftingComponent* ADH_HumanCharacter::GetCraftingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCraftingComponent");

	ADH_HumanCharacter_GetCraftingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCarryingPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* ADH_HumanCharacter::GetCarryingPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCarryingPawn");

	ADH_HumanCharacter_GetCarryingPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCarriedPawnInv
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* ADH_HumanCharacter::GetCarriedPawnInv()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCarriedPawnInv");

	ADH_HumanCharacter_GetCarriedPawnInv_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetCarriedPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* ADH_HumanCharacter::GetCarriedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetCarriedPawn");

	ADH_HumanCharacter_GetCarriedPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.GetAvatarOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_PlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_PlayerState* ADH_HumanCharacter::GetAvatarOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.GetAvatarOverride");

	ADH_HumanCharacter_GetAvatarOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.DropCarriedPawn
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults)
// Parameters:
// struct FVector                 DropVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFindDropLocation              (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::DropCarriedPawn(const struct FVector& DropVelocity, bool bFindDropLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.DropCarriedPawn");

	ADH_HumanCharacter_DropCarriedPawn_Params params;
	params.DropVelocity = DropVelocity;
	params.bFindDropLocation = bFindDropLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.CreateDoppelganger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerController*    InstigatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* ADH_HumanCharacter::CreateDoppelganger(class ADH_PlayerController* InstigatingPlayer, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.CreateDoppelganger");

	ADH_HumanCharacter_CreateDoppelganger_Params params;
	params.InstigatingPlayer = InstigatingPlayer;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.ClearAvatarOverride
// (Final, Native, Public, BlueprintCallable)

void ADH_HumanCharacter::ClearAvatarOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.ClearAvatarOverride");

	ADH_HumanCharacter_ClearAvatarOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_HumanCharacter.CanUseGroundCraftingRadial
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_HumanCharacter::CanUseGroundCraftingRadial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.CanUseGroundCraftingRadial");

	ADH_HumanCharacter_CanUseGroundCraftingRadial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_HumanCharacter.ApplyPendingPoison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         Creditor                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_HumanCharacter::ApplyPendingPoison(class ADH_PlayerState* Creditor, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_HumanCharacter.ApplyPendingPoison");

	ADH_HumanCharacter_ApplyPendingPoison_Params params;
	params.Creditor = Creditor;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Iceberg_Large.OnRep_RemovedChunks
// (Final, Native, Protected)

void ADH_Iceberg_Large::OnRep_RemovedChunks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Iceberg_Large.OnRep_RemovedChunks");

	ADH_Iceberg_Large_OnRep_RemovedChunks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Iceberg_Small.CrumbleChunks
// (Final, Native, Protected)

void ADH_Iceberg_Small::CrumbleChunks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Iceberg_Small.CrumbleChunks");

	ADH_Iceberg_Small_CrumbleChunks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ImpactEffect.PlayImpact
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_ImpactEffect::PlayImpact(class AActor* Instigator, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ImpactEffect.PlayImpact");

	UDH_ImpactEffect_PlayImpact_Params params;
	params.Instigator = Instigator;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ImpactEffect.GetImpactEffects
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  ImpactedSurface                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasScrape                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FImpactEffect           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImpactEffect UDH_ImpactEffect::GetImpactEffects(TEnumAsByte<EPhysicalSurface> ImpactedSurface, bool bWasScrape)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ImpactEffect.GetImpactEffects");

	UDH_ImpactEffect_GetImpactEffects_Params params;
	params.ImpactedSurface = ImpactedSurface;
	params.bWasScrape = bWasScrape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ImpactEffect.GetFromPM
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Bone                           (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_ImpactEffect*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_ImpactEffect* UDH_ImpactEffect::GetFromPM(class UPrimitiveComponent* PrimComp, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ImpactEffect.GetFromPM");

	UDH_ImpactEffect_GetFromPM_Params params;
	params.PrimComp = PrimComp;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ImpactEffect.GetFromDT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_ImpactEffect*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_ImpactEffect* UDH_ImpactEffect::GetFromDT(class UDamageType* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ImpactEffect.GetFromDT");

	UDH_ImpactEffect_GetFromDT_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ImpactEffectManager.OnImpactInstigatorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_ImpactEffectManager::OnImpactInstigatorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ImpactEffectManager.OnImpactInstigatorDestroyed");

	ADH_ImpactEffectManager_OnImpactInstigatorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InputModeComponent.Reset
// (Final, Native, Public, BlueprintCallable)

void UDH_InputModeComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InputModeComponent.Reset");

	UDH_InputModeComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InputModeComponent.PushUIInputMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 WidgetToFocus                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bGameAndUI                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InputModeComponent::PushUIInputMode(class UWidget* WidgetToFocus, bool bGameAndUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InputModeComponent.PushUIInputMode");

	UDH_InputModeComponent_PushUIInputMode_Params params;
	params.WidgetToFocus = WidgetToFocus;
	params.bGameAndUI = bGameAndUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InputModeComponent.PopUIInputMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 WidgetToUnfocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InputModeComponent::PopUIInputMode(class UWidget* WidgetToUnfocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InputModeComponent.PopUIInputMode");

	UDH_InputModeComponent_PopUIInputMode_Params params;
	params.WidgetToUnfocus = WidgetToUnfocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InteractComponent.StopInteracting
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDH_InteractComponent::StopInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.StopInteracting");

	UDH_InteractComponent_StopInteracting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InteractComponent.OnRep_LockedInteractTarget
// (Final, Native, Private)

void UDH_InteractComponent::OnRep_LockedInteractTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.OnRep_LockedInteractTarget");

	UDH_InteractComponent_OnRep_LockedInteractTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InteractComponent.OnRep_InteractionCounter
// (Final, Native, Private)

void UDH_InteractComponent::OnRep_InteractionCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.OnRep_InteractionCounter");

	UDH_InteractComponent_OnRep_InteractionCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InteractComponent.NotEqual_InteractPermissionsInteractPermissions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDH_InteractPermissions A                              (Parm)
// struct FDH_InteractPermissions B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_InteractComponent::NotEqual_InteractPermissionsInteractPermissions(const struct FDH_InteractPermissions& A, const struct FDH_InteractPermissions& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.NotEqual_InteractPermissionsInteractPermissions");

	UDH_InteractComponent_NotEqual_InteractPermissionsInteractPermissions_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractComponent.InteractPermissions_NoPermission
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FDH_InteractPermissions UDH_InteractComponent::InteractPermissions_NoPermission()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.InteractPermissions_NoPermission");

	UDH_InteractComponent_InteractPermissions_NoPermission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractComponent.InteractPermissions_FullPermission
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FDH_InteractPermissions UDH_InteractComponent::InteractPermissions_FullPermission()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.InteractPermissions_FullPermission");

	UDH_InteractComponent_InteractPermissions_FullPermission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractComponent.InteractPermissions_CanOnlyLook
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FDH_InteractPermissions UDH_InteractComponent::InteractPermissions_CanOnlyLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.InteractPermissions_CanOnlyLook");

	UDH_InteractComponent_InteractPermissions_CanOnlyLook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractComponent.Interact
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPrimitiveComponent*     InteractTarget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_InteractComponent::Interact(class UPrimitiveComponent* InteractTarget, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.Interact");

	UDH_InteractComponent_Interact_Params params;
	params.InteractTarget = InteractTarget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InteractComponent.GetCurrentInteractTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UDH_InteractComponent::GetCurrentInteractTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.GetCurrentInteractTarget");

	UDH_InteractComponent_GetCurrentInteractTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractComponent.EqualEqual_InteractPermissionsInteractPermissions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDH_InteractPermissions A                              (Parm)
// struct FDH_InteractPermissions B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_InteractComponent::EqualEqual_InteractPermissionsInteractPermissions(const struct FDH_InteractPermissions& A, const struct FDH_InteractPermissions& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractComponent.EqualEqual_InteractPermissionsInteractPermissions");

	UDH_InteractComponent_EqualEqual_InteractPermissionsInteractPermissions_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.UsePreciseInteractions
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*     TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InteractionInterface::UsePreciseInteractions(class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.UsePreciseInteractions");

	UDH_InteractionInterface_UsePreciseInteractions_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.OnInteract
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AController*             InteractInstigator             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InteractionInterface::OnInteract(class AController* InteractInstigator, int SlotIndex, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.OnInteract");

	UDH_InteractionInterface_OnInteract_Params params;
	params.InteractInstigator = InteractInstigator;
	params.SlotIndex = SlotIndex;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.GetKeybindInteractText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FDH_KeybindInteractionMessage ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_KeybindInteractionMessage UDH_InteractionInterface::GetKeybindInteractText(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.GetKeybindInteractText");

	UDH_InteractionInterface_GetKeybindInteractText_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.GetInteractTime
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_InteractionInterface::GetInteractTime(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.GetInteractTime");

	UDH_InteractionInterface_GetInteractTime_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.GetInteractPriority
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UDH_InteractionInterface::GetInteractPriority(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.GetInteractPriority");

	UDH_InteractionInterface_GetInteractPriority_Params params;
	params.InteractInstigator = InteractInstigator;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.GetInteractFailedMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDH_InteractionInterface::GetInteractFailedMessage(class AController* InteractInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.GetInteractFailedMessage");

	UDH_InteractionInterface_GetInteractFailedMessage_Params params;
	params.InteractInstigator = InteractInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.GetFriendlyName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDH_InteractionInterface::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.GetFriendlyName");

	UDH_InteractionInterface_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.CanBeInteractedWithThroughWalls
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InteractionInterface::CanBeInteractedWithThroughWalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.CanBeInteractedWithThroughWalls");

	UDH_InteractionInterface_CanBeInteractedWithThroughWalls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InteractionInterface.CanBeInteractedWith
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AController*             InteractInstigator             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FDH_InteractPermissions ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDH_InteractPermissions UDH_InteractionInterface::CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InteractionInterface.CanBeInteractedWith");

	UDH_InteractionInterface_CanBeInteractedWith_Params params;
	params.InteractInstigator = InteractInstigator;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.UseInventory
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              UseTransform                   (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// unsigned char                  UseState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_InventoryManager::UseInventory(const struct FTransform& UseTransform, unsigned char UseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.UseInventory");

	UDH_InventoryManager_UseInventory_Params params;
	params.UseTransform = UseTransform;
	params.UseState = UseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.UpdateInventoryUsedCounter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  State                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::UpdateInventoryUsedCounter(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.UpdateInventoryUsedCounter");

	UDH_InventoryManager_UpdateInventoryUsedCounter_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.ThrowSelectedInventory
// (Final, Native, Private, Const)

void UDH_InventoryManager::ThrowSelectedInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.ThrowSelectedInventory");

	UDH_InventoryManager_ThrowSelectedInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.SetTransactionRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EInventoryTransactionRules     NewRules                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::SetTransactionRules(EInventoryTransactionRules NewRules)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.SetTransactionRules");

	UDH_InventoryManager_SetTransactionRules_Params params;
	params.NewRules = NewRules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.SetStorageLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewLimit                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::SetStorageLimit(int NewLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.SetStorageLimit");

	UDH_InventoryManager_SetStorageLimit_Params params;
	params.NewLimit = NewLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.SelectInventory_Simulated
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventorySelection     InvToSelect                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::SelectInventory_Simulated(const struct FInventorySelection& InvToSelect, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.SelectInventory_Simulated");

	UDH_InventoryManager_SelectInventory_Simulated_Params params;
	params.InvToSelect = InvToSelect;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.SelectInventory
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FInventorySelection     InvToSelect                    (ConstParm, Parm, ReferenceParm)

void UDH_InventoryManager::SelectInventory(const struct FInventorySelection& InvToSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.SelectInventory");

	UDH_InventoryManager_SelectInventory_Params params;
	params.InvToSelect = InvToSelect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.ReloadInventory
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDH_InventoryManager::ReloadInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.ReloadInventory");

	UDH_InventoryManager_ReloadInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OwnerDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::OwnerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OwnerDestroyed");

	UDH_InventoryManager_OwnerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_UsedInventoryCount
// (Final, Native, Private, Const)

void UDH_InventoryManager::OnRep_UsedInventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_UsedInventoryCount");

	UDH_InventoryManager_OnRep_UsedInventoryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_TransactingInventory
// (Final, Native, Private)

void UDH_InventoryManager::OnRep_TransactingInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_TransactingInventory");

	UDH_InventoryManager_OnRep_TransactingInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_StoredInventory
// (Final, Native, Private)

void UDH_InventoryManager::OnRep_StoredInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_StoredInventory");

	UDH_InventoryManager_OnRep_StoredInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_StorageLimit
// (Final, Native, Private, HasOutParms)
// Parameters:
// int                            PreviousLimit                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDH_InventoryManager::OnRep_StorageLimit(int PreviousLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_StorageLimit");

	UDH_InventoryManager_OnRep_StorageLimit_Params params;
	params.PreviousLimit = PreviousLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_SelectedInventoryViewClass
// (Final, Native, Private)

void UDH_InventoryManager::OnRep_SelectedInventoryViewClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_SelectedInventoryViewClass");

	UDH_InventoryManager_OnRep_SelectedInventoryViewClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_SelectedInventoryCount
// (Final, Native, Private, Const)

void UDH_InventoryManager::OnRep_SelectedInventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_SelectedInventoryCount");

	UDH_InventoryManager_OnRep_SelectedInventoryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_ReloadInventoryCount
// (Final, Native, Private, Const)

void UDH_InventoryManager::OnRep_ReloadInventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_ReloadInventoryCount");

	UDH_InventoryManager_OnRep_ReloadInventoryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_LastAppliedInventory
// (Final, Native, Private)

void UDH_InventoryManager::OnRep_LastAppliedInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_LastAppliedInventory");

	UDH_InventoryManager_OnRep_LastAppliedInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_InventoryContents
// (Final, Native, Public)

void UDH_InventoryManager::OnRep_InventoryContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_InventoryContents");

	UDH_InventoryManager_OnRep_InventoryContents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnRep_DroppedInventoryCount
// (Final, Native, Private, Const)

void UDH_InventoryManager::OnRep_DroppedInventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnRep_DroppedInventoryCount");

	UDH_InventoryManager_OnRep_DroppedInventoryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.OnInventoryDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  DestroyedInventory             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::OnInventoryDestroyed(class AActor* DestroyedInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.OnInventoryDestroyed");

	UDH_InventoryManager_OnInventoryDestroyed_Params params;
	params.DestroyedInventory = DestroyedInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.IsTransacting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryManager::IsTransacting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.IsTransacting");

	UDH_InventoryManager_IsTransacting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.IsFullyLooted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryManager::IsFullyLooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.IsFullyLooted");

	UDH_InventoryManager_IsFullyLooted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.IsControllerTheSameAsTransactingController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             InController                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryManager::IsControllerTheSameAsTransactingController(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.IsControllerTheSameAsTransactingController");

	UDH_InventoryManager_IsControllerTheSameAsTransactingController_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.HolsterInventory
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                           bHolster                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::HolsterInventory(bool bHolster)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.HolsterInventory");

	UDH_InventoryManager_HolsterInventory_Params params;
	params.bHolster = bHolster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.GetTransactionRules
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryTransactionRules     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInventoryTransactionRules UDH_InventoryManager::GetTransactionRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetTransactionRules");

	UDH_InventoryManager_GetTransactionRules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetStoredInventoryUpToAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryType                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredAmount                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ADH_Inventory*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ADH_Inventory*> UDH_InventoryManager::GetStoredInventoryUpToAmount(EInventoryType Type, int DesiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetStoredInventoryUpToAmount");

	UDH_InventoryManager_GetStoredInventoryUpToAmount_Params params;
	params.Type = Type;
	params.DesiredAmount = DesiredAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetStoredInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* UDH_InventoryManager::GetStoredInventory(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetStoredInventory");

	UDH_InventoryManager_GetStoredInventory_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetStorageLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventoryManager::GetStorageLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetStorageLimit");

	UDH_InventoryManager_GetStorageLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetSelectedInventoryView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_InventoryView*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_InventoryView* UDH_InventoryManager::GetSelectedInventoryView()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetSelectedInventoryView");

	UDH_InventoryManager_GetSelectedInventoryView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetQuantityOfInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInventoryType                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowPoisoned                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventoryManager::GetQuantityOfInventory(EInventoryType Type, bool bAllowPoisoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetQuantityOfInventory");

	UDH_InventoryManager_GetQuantityOfInventory_Params params;
	params.Type = Type;
	params.bAllowPoisoned = bAllowPoisoned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetCantTransactMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ObjectName                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDH_InventoryManager::GetCantTransactMessage(const struct FText& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetCantTransactMessage");

	UDH_InventoryManager_GetCantTransactMessage_Params params;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetBestAvailableSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowStackWithClean           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_InventoryManager::GetBestAvailableSlot(class UObject* Item, int StartIndex, bool bAllowStackWithClean)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetBestAvailableSlot");

	UDH_InventoryManager_GetBestAvailableSlot_Params params;
	params.Item = Item;
	params.StartIndex = StartIndex;
	params.bAllowStackWithClean = bAllowStackWithClean;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.GetAssociatedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UDH_InventoryManager::GetAssociatedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.GetAssociatedWidget");

	UDH_InventoryManager_GetAssociatedWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.FindInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ClosestToIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* UDH_InventoryManager::FindInventory(class UObject* InClass, int ClosestToIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.FindInventory");

	UDH_InventoryManager_FindInventory_Params params;
	params.InClass = InClass;
	params.ClosestToIndex = ClosestToIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.EndTransaction
// (Final, Native, Public, BlueprintCallable)

void UDH_InventoryManager::EndTransaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.EndTransaction");

	UDH_InventoryManager_EndTransaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.DropInventory
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults)
// Parameters:
// struct FInventorySelection     InvToDrop                      (ConstParm, Parm, ReferenceParm)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumToDrop                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bThrow                         (Parm, ZeroConstructor, IsPlainOldData)
// EInventoryDropMethod           DropMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::DropInventory(const struct FInventorySelection& InvToDrop, const struct FVector& Offset, const struct FRotator& Rotation, int NumToDrop, bool bThrow, EInventoryDropMethod DropMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.DropInventory");

	UDH_InventoryManager_DropInventory_Params params;
	params.InvToDrop = InvToDrop;
	params.Offset = Offset;
	params.Rotation = Rotation;
	params.NumToDrop = NumToDrop;
	params.bThrow = bThrow;
	params.DropMethod = DropMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.CopyAllInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventoryManager*    Recipient                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryManager::CopyAllInventory(class UDH_InventoryManager* Recipient)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.CopyAllInventory");

	UDH_InventoryManager_CopyAllInventory_Params params;
	params.Recipient = Recipient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.BeginTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryManager::BeginTransaction(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.BeginTransaction");

	UDH_InventoryManager_BeginTransaction_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.AimInventory_Simulated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewWantsToAim                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::AimInventory_Simulated(bool bNewWantsToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.AimInventory_Simulated");

	UDH_InventoryManager_AimInventory_Simulated_Params params;
	params.bNewWantsToAim = bNewWantsToAim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.AimInventory
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// bool                           bNewWantsToAim                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::AimInventory(bool bNewWantsToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.AimInventory");

	UDH_InventoryManager_AimInventory_Params params;
	params.bNewWantsToAim = bNewWantsToAim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryManager.AddRandomInventoryFromList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<class ADH_Inventory*, int> InventoryList                  (Parm, OutParm, ReferenceParm)
// bool                           bSpawnAll                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_InventoryManager::AddRandomInventoryFromList(TMap<class ADH_Inventory*, int>* InventoryList, bool bSpawnAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.AddRandomInventoryFromList");

	UDH_InventoryManager_AddRandomInventoryFromList_Params params;
	params.bSpawnAll = bSpawnAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryList != nullptr)
		*InventoryList = params.InventoryList;
}


// Function DreadHunger.DH_InventoryManager.AddInventoryFromTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_DropTable*           DropTable                      (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           TrinketToSpawn                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryType                 IgnoredType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ADH_Inventory*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ADH_Inventory*> UDH_InventoryManager::AddInventoryFromTable(class UDH_DropTable* DropTable, class ADH_Inventory* TrinketToSpawn, EInventoryType IgnoredType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.AddInventoryFromTable");

	UDH_InventoryManager_AddInventoryFromTable_Params params;
	params.DropTable = DropTable;
	params.TrinketToSpawn = TrinketToSpawn;
	params.IgnoredType = IgnoredType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryManager.AddInventory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ItemToAdd                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInventoryItemState> ItemStates                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumItemsAdded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DesiredSlotIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDesiredSlotOnly               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExpandToFit                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsGeneratedByproduct          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlushNetDormancy              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   CreatedBy                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddWholeStack                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* UDH_InventoryManager::AddInventory(class UObject* ItemToAdd, TArray<struct FInventoryItemState> ItemStates, int* NumItemsAdded, int* ItemSlotIndex, int DesiredSlotIndex, bool bDesiredSlotOnly, bool bExpandToFit, bool bIsGeneratedByproduct, bool bFlushNetDormancy, class APawn* CreatedBy, bool bAddWholeStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryManager.AddInventory");

	UDH_InventoryManager_AddInventory_Params params;
	params.ItemToAdd = ItemToAdd;
	params.ItemStates = ItemStates;
	params.DesiredSlotIndex = DesiredSlotIndex;
	params.bDesiredSlotOnly = bDesiredSlotOnly;
	params.bExpandToFit = bExpandToFit;
	params.bIsGeneratedByproduct = bIsGeneratedByproduct;
	params.bFlushNetDormancy = bFlushNetDormancy;
	params.CreatedBy = CreatedBy;
	params.bAddWholeStack = bAddWholeStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumItemsAdded != nullptr)
		*NumItemsAdded = params.NumItemsAdded;
	if (ItemSlotIndex != nullptr)
		*ItemSlotIndex = params.ItemSlotIndex;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryTransactionComponent.ShowLootInterface
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UDH_InventoryManager*    LootManager                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryTransactionComponent::ShowLootInterface(class UDH_InventoryManager* LootManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.ShowLootInterface");

	UDH_InventoryTransactionComponent_ShowLootInterface_Params params;
	params.LootManager = LootManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryTransactionComponent.OnInventoryTransactionEnded
// (Final, Native, Public)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryTransactionComponent::OnInventoryTransactionEnded(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.OnInventoryTransactionEnded");

	UDH_InventoryTransactionComponent_OnInventoryTransactionEnded_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryTransactionComponent.IsLootInterfaceOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryTransactionComponent::IsLootInterfaceOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.IsLootInterfaceOpen");

	UDH_InventoryTransactionComponent_IsLootInterfaceOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryTransactionComponent.HideLootInterface
// (Net, NetReliable, Native, Event, Public, NetClient)

void UDH_InventoryTransactionComponent::HideLootInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.HideLootInterface");

	UDH_InventoryTransactionComponent_HideLootInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryTransactionComponent.HandleLootClosure
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FKey                    InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UDH_GameViewportClient*  InViewportClient               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_InventoryTransactionComponent::HandleLootClosure(const struct FKey& InKey, class UDH_GameViewportClient* InViewportClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.HandleLootClosure");

	UDH_InventoryTransactionComponent_HandleLootClosure_Params params;
	params.InKey = InKey;
	params.InViewportClient = InViewportClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryTransactionComponent.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*             InController                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryTransactionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UDH_InventoryTransactionComponent* UDH_InventoryTransactionComponent::Get(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.Get");

	UDH_InventoryTransactionComponent_Get_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_InventoryTransactionComponent.EndInventoryTransaction
// (Net, NetReliable, Native, Event, Public, NetServer)

void UDH_InventoryTransactionComponent::EndInventoryTransaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.EndInventoryTransaction");

	UDH_InventoryTransactionComponent_EndInventoryTransaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryTransactionComponent.CloseLootInterface
// (Final, Native, Public, BlueprintCallable)

void UDH_InventoryTransactionComponent::CloseLootInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.CloseLootInterface");

	UDH_InventoryTransactionComponent_CloseLootInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_InventoryTransactionComponent.BeginInventoryTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_InventoryManager*    OtherInventory                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_InventoryTransactionComponent::BeginInventoryTransaction(class UDH_InventoryManager* OtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_InventoryTransactionComponent.BeginInventoryTransaction");

	UDH_InventoryTransactionComponent_BeginInventoryTransaction_Params params;
	params.OtherInventory = OtherInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyGameMode.RemoveOrphanExemption
// (Final, Native, Public)
// Parameters:
// class FString                  InOrphanExemption              (ConstParm, Parm, ZeroConstructor)

void ADH_LobbyGameMode::RemoveOrphanExemption(const class FString& InOrphanExemption)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyGameMode.RemoveOrphanExemption");

	ADH_LobbyGameMode_RemoveOrphanExemption_Params params;
	params.InOrphanExemption = InOrphanExemption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyGameState.UpdateShipMPCs
// (Final, Native, Private)

void ADH_LobbyGameState::UpdateShipMPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyGameState.UpdateShipMPCs");

	ADH_LobbyGameState_UpdateShipMPCs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyGameState.ReceivedReplayData
// (Final, Native, Private, HasOutParms)
// Parameters:
// class FString                  MatchID                        (Parm, ZeroConstructor)
// TArray<unsigned char>          ReplayBuffer                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADH_LobbyGameState::ReceivedReplayData(const class FString& MatchID, TArray<unsigned char> ReplayBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyGameState.ReceivedReplayData");

	ADH_LobbyGameState_ReceivedReplayData_Params params;
	params.MatchID = MatchID;
	params.ReplayBuffer = ReplayBuffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyGameState.OnRep_CurrentSessionSettings
// (Final, Native, Private)

void ADH_LobbyGameState::OnRep_CurrentSessionSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyGameState.OnRep_CurrentSessionSettings");

	ADH_LobbyGameState_OnRep_CurrentSessionSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyGameState.OnPlayerOnShipChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyGameState::OnPlayerOnShipChanged(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyGameState.OnPlayerOnShipChanged");

	ADH_LobbyGameState_OnPlayerOnShipChanged_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyGameState.OnMerchantShopVisibilityChanged
// (Final, Native, Private)
// Parameters:
// EDH_EntitlementsShopType       ShopType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyGameState::OnMerchantShopVisibilityChanged(EDH_EntitlementsShopType ShopType, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyGameState.OnMerchantShopVisibilityChanged");

	ADH_LobbyGameState_OnMerchantShopVisibilityChanged_Params params;
	params.ShopType = ShopType;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.UpdateLookTarget
// (Final, Net, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FVector                 NewLookTarget                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADH_LobbyPawn::UpdateLookTarget(const struct FVector& NewLookTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.UpdateLookTarget");

	ADH_LobbyPawn_UpdateLookTarget_Params params;
	params.NewLookTarget = NewLookTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.SimulatedPlayEmote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_LobbyEmote*          Emote                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyPawn::SimulatedPlayEmote(class UDH_LobbyEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.SimulatedPlayEmote");

	ADH_LobbyPawn_SimulatedPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.SetIsHoveringCards
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// bool                           bWantsToHover                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyPawn::SetIsHoveringCards(bool bWantsToHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.SetIsHoveringCards");

	ADH_LobbyPawn_SetIsHoveringCards_Params params;
	params.bWantsToHover = bWantsToHover;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.SetFaceCaptureRT
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  InFaceCaptureRT                (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyPawn::SetFaceCaptureRT(class UTextureRenderTarget2D* InFaceCaptureRT)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.SetFaceCaptureRT");

	ADH_LobbyPawn_SetFaceCaptureRT_Params params;
	params.InFaceCaptureRT = InFaceCaptureRT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.ServerPlayEmote
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class UDH_LobbyEmote*          Emote                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyPawn::ServerPlayEmote(class UDH_LobbyEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.ServerPlayEmote");

	ADH_LobbyPawn_ServerPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.RequestRedraw
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FPlayingCardProperties  OldCard                        (ConstParm, Parm, ReferenceParm)

void ADH_LobbyPawn::RequestRedraw(const struct FPlayingCardProperties& OldCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.RequestRedraw");

	ADH_LobbyPawn_RequestRedraw_Params params;
	params.OldCard = OldCard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.OnRoleAssigned
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         PS                             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyPawn::OnRoleAssigned(class ADH_PlayerState* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.OnRoleAssigned");

	ADH_LobbyPawn_OnRoleAssigned_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.MulticastPlayEmote
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// class UDH_LobbyEmote*          Emote                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_LobbyPawn::MulticastPlayEmote(class UDH_LobbyEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.MulticastPlayEmote");

	ADH_LobbyPawn_MulticastPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.GetSelectedCardIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_LobbyPawn::GetSelectedCardIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.GetSelectedCardIndex");

	ADH_LobbyPawn_GetSelectedCardIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LobbyPawn.GetSelectedCard
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_PlayingCard*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_PlayingCard* ADH_LobbyPawn::GetSelectedCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.GetSelectedCard");

	ADH_LobbyPawn_GetSelectedCard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LobbyPawn.GetPostProcessInteractStackNum
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_LobbyPawn::GetPostProcessInteractStackNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.GetPostProcessInteractStackNum");

	ADH_LobbyPawn_GetPostProcessInteractStackNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LobbyPawn.GetLobbyPawnAnimInst
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_LobbyPawnAnimInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_LobbyPawnAnimInstance* ADH_LobbyPawn::GetLobbyPawnAnimInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.GetLobbyPawnAnimInst");

	ADH_LobbyPawn_GetLobbyPawnAnimInst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LobbyPawn.GetFaceCaptureRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* ADH_LobbyPawn::GetFaceCaptureRT()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.GetFaceCaptureRT");

	ADH_LobbyPawn_GetFaceCaptureRT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LobbyPawn.GetFaceCaptureComponent
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneCaptureComponent2D* ADH_LobbyPawn::GetFaceCaptureComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.GetFaceCaptureComponent");

	ADH_LobbyPawn_GetFaceCaptureComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LobbyPawn.ChooseSelectedRoleCard
// (Net, NetReliable, Native, Event, Public, NetClient)

void ADH_LobbyPawn::ChooseSelectedRoleCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.ChooseSelectedRoleCard");

	ADH_LobbyPawn_ChooseSelectedRoleCard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.BP_OnPostProcessInteractStackChanged
// (Event, Protected, BlueprintEvent)

void ADH_LobbyPawn::BP_OnPostProcessInteractStackChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.BP_OnPostProcessInteractStackChanged");

	ADH_LobbyPawn_BP_OnPostProcessInteractStackChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LobbyPawn.BP_OnCaptureFace
// (Event, Protected, BlueprintEvent)

void ADH_LobbyPawn::BP_OnCaptureFace()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LobbyPawn.BP_OnCaptureFace");

	ADH_LobbyPawn_BP_OnCaptureFace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginHandler.OnLoginFinished
// (Final, Native, Private)

void UDH_LoginHandler::OnLoginFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginHandler.OnLoginFinished");

	UDH_LoginHandler_OnLoginFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginHandler.CanAcceptInvites
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_LoginHandler::CanAcceptInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginHandler.CanAcceptInvites");

	UDH_LoginHandler_CanAcceptInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_LoginStepReconnect.OnDeclinedReconnect
// (Final, Native, Private)

void UDH_LoginStepReconnect::OnDeclinedReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepReconnect.OnDeclinedReconnect");

	UDH_LoginStepReconnect_OnDeclinedReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepReconnect.OnAcceptedReconnect
// (Final, Native, Private)

void UDH_LoginStepReconnect::OnAcceptedReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepReconnect.OnAcceptedReconnect");

	UDH_LoginStepReconnect_OnAcceptedReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepRestoreInvites.OnSessionUserInviteAcceptedFailed
// (Final, Native, Private)

void UDH_LoginStepRestoreInvites::OnSessionUserInviteAcceptedFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepRestoreInvites.OnSessionUserInviteAcceptedFailed");

	UDH_LoginStepRestoreInvites_OnSessionUserInviteAcceptedFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineSessionJoinSessionComplete
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoginStepRestoreInvites::OnOnlineSessionJoinSessionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineSessionJoinSessionComplete");

	UDH_LoginStepRestoreInvites_OnOnlineSessionJoinSessionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineSessionGameHasStarted
// (Final, Native, Private)

void UDH_LoginStepRestoreInvites::OnOnlineSessionGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineSessionGameHasStarted");

	UDH_LoginStepRestoreInvites_OnOnlineSessionGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineRestoreInvitesComplete
// (Final, Native, Private)
// Parameters:
// EDH_RestoreInvitesResult       Result                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoginStepRestoreInvites::OnOnlineRestoreInvitesComplete(EDH_RestoreInvitesResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepRestoreInvites.OnOnlineRestoreInvitesComplete");

	UDH_LoginStepRestoreInvites_OnOnlineRestoreInvitesComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepRestoreInvites.OnLobbyInviteReceivedWidgetShown
// (Final, Native, Private)

void UDH_LoginStepRestoreInvites::OnLobbyInviteReceivedWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepRestoreInvites.OnLobbyInviteReceivedWidgetShown");

	UDH_LoginStepRestoreInvites_OnLobbyInviteReceivedWidgetShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepSessionLogin.OnlineSessionCreateComplete
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorText                      (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_LoginStepSessionLogin::OnlineSessionCreateComplete(bool bWasSuccessful, const struct FText& ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepSessionLogin.OnlineSessionCreateComplete");

	UDH_LoginStepSessionLogin_OnlineSessionCreateComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorText = ErrorText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepUpdatePlayerCloudData.OnSaveConversionCompleteDelegate
// (Final, Native, Private)

void UDH_LoginStepUpdatePlayerCloudData::OnSaveConversionCompleteDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepUpdatePlayerCloudData.OnSaveConversionCompleteDelegate");

	UDH_LoginStepUpdatePlayerCloudData_OnSaveConversionCompleteDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LoginStepUpdatePlayerCloudData.OnLoadedUserCloudSaveObject
// (Final, Native, Private)
// Parameters:
// class UDH_UserCloudSaveObject* LoadedObject                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_LoginStepUpdatePlayerCloudData::OnLoadedUserCloudSaveObject(class UDH_UserCloudSaveObject* LoadedObject, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LoginStepUpdatePlayerCloudData.OnLoadedUserCloudSaveObject");

	UDH_LoginStepUpdatePlayerCloudData_OnLoadedUserCloudSaveObject_Params params;
	params.LoadedObject = LoadedObject;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_LogStatics.LogUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm)
// EDH_LogVerbosity               Verbosity                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_LogStatics::LogUI(class UObject* WorldContextObject, const struct FText& Message, EDH_LogVerbosity Verbosity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_LogStatics.LogUI");

	UDH_LogStatics_LogUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Message = Message;
	params.Verbosity = Verbosity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_MapData.GetIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InCode                         (Parm, ZeroConstructor)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UDH_MapData::GetIndex(const class FString& InCode, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MapData.GetIndex");

	UDH_MapData_GetIndex_Params params;
	params.InCode = InCode;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MapData.GetCurrent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_MapData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_MapData* UDH_MapData::GetCurrent(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MapData.GetCurrent");

	UDH_MapData_GetCurrent_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MapData.Find
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InCode                         (Parm, ZeroConstructor)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_MapData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_MapData* UDH_MapData::Find(const class FString& InCode, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MapData.Find");

	UDH_MapData_Find_Params params;
	params.InCode = InCode;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MatchReplay.GetReplayFiles
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<class FString> UDH_MatchReplay::GetReplayFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MatchReplay.GetReplayFiles");

	UDH_MatchReplay_GetReplayFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MatchReplay.GetReplayDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_MatchReplay::GetReplayDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MatchReplay.GetReplayDir");

	UDH_MatchReplay_GetReplayDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MatchReplay.GetMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_MapData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_MapData* UDH_MatchReplay::GetMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MatchReplay.GetMapData");

	UDH_MatchReplay_GetMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MatchReplay.GetCurrent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_MatchReplay*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_MatchReplay* UDH_MatchReplay::GetCurrent(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MatchReplay.GetCurrent");

	UDH_MatchReplay_GetCurrent_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MatchReplay.Create
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_MatchReplay*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_MatchReplay* UDH_MatchReplay::Create(class UObject* Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MatchReplay.Create");

	UDH_MatchReplay_Create_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Merchant.OnShopUIVisibilityChanged
// (Final, Native, Private)
// Parameters:
// EDH_EntitlementsShopType       InShopType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Merchant::OnShopUIVisibilityChanged(EDH_EntitlementsShopType InShopType, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Merchant.OnShopUIVisibilityChanged");

	ADH_Merchant_OnShopUIVisibilityChanged_Params params;
	params.InShopType = InShopType;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Merchant.OnReceivedDLCPrices
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDH_PriceDataWrapper    PriceData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_Merchant::OnReceivedDLCPrices(const struct FDH_PriceDataWrapper& PriceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Merchant.OnReceivedDLCPrices");

	ADH_Merchant_OnReceivedDLCPrices_Params params;
	params.PriceData = PriceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.TotemVictimCountChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::TotemVictimCountChangedSignature__DelegateSignature(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.TotemVictimCountChangedSignature__DelegateSignature");

	UDH_MessageBus_TotemVictimCountChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.TotemCountChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::TotemCountChangedSignature__DelegateSignature(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.TotemCountChangedSignature__DelegateSignature");

	UDH_MessageBus_TotemCountChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.ShowSaveConversionPopupSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::ShowSaveConversionPopupSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.ShowSaveConversionPopupSignature__DelegateSignature");

	UDH_MessageBus_ShowSaveConversionPopupSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.ShowLoadingScreenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// TScriptInterface<class UDH_LoadingScreenInterface> Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::ShowLoadingScreenSignature__DelegateSignature(const TScriptInterface<class UDH_LoadingScreenInterface>& Caller)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.ShowLoadingScreenSignature__DelegateSignature");

	UDH_MessageBus_ShowLoadingScreenSignature__DelegateSignature_Params params;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.ShowConnectToIPAddressWidgetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::ShowConnectToIPAddressWidgetSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.ShowConnectToIPAddressWidgetSignature__DelegateSignature");

	UDH_MessageBus_ShowConnectToIPAddressWidgetSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.RemoveWidgetFromHUDSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*             WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::RemoveWidgetFromHUDSignature__DelegateSignature(class UUserWidget* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.RemoveWidgetFromHUDSignature__DelegateSignature");

	UDH_MessageBus_RemoveWidgetFromHUDSignature__DelegateSignature_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnXPProgressUpdatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDH_XPProgressData      Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnXPProgressUpdatedSignature__DelegateSignature(const struct FDH_XPProgressData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnXPProgressUpdatedSignature__DelegateSignature");

	UDH_MessageBus_OnXPProgressUpdatedSignature__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_WidgetAnimationHandler* AnimationHandler               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature(class UDH_WidgetAnimationHandler* AnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature");

	UDH_MessageBus_OnWidgetAnimationHandlerFinishedHideSignature__DelegateSignature_Params params;
	params.AnimationHandler = AnimationHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_WidgetAnimationHandler* AnimationHandler               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature(class UDH_WidgetAnimationHandler* AnimationHandler)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature");

	UDH_MessageBus_OnWidgetAnimationHandlerBeginShowSignature__DelegateSignature_Params params;
	params.AnimationHandler = AnimationHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipSankSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Warship*             Warship                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWarshipSankSignature__DelegateSignature(class ADH_Warship* Warship)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWarshipSankSignature__DelegateSignature");

	UDH_MessageBus_OnWarshipSankSignature__DelegateSignature_Params params;
	params.Warship = Warship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipHullIntegrityChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Warship*             Warship                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWarshipHullIntegrityChangedSignature__DelegateSignature(class ADH_Warship* Warship, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWarshipHullIntegrityChangedSignature__DelegateSignature");

	UDH_MessageBus_OnWarshipHullIntegrityChangedSignature__DelegateSignature_Params params;
	params.Warship = Warship;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Warship*             Warship                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWarshipChangedSignature__DelegateSignature(class ADH_Warship* Warship)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWarshipChangedSignature__DelegateSignature");

	UDH_MessageBus_OnWarshipChangedSignature__DelegateSignature_Params params;
	params.Warship = Warship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerSabotagedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            SabotageUnits                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWarshipBoilerSabotagedSignature__DelegateSignature(int SabotageUnits)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerSabotagedSignature__DelegateSignature");

	UDH_MessageBus_OnWarshipBoilerSabotagedSignature__DelegateSignature_Params params;
	params.SabotageUnits = SabotageUnits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerFueledSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            PiecesAdded                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWarshipBoilerFueledSignature__DelegateSignature(int PiecesAdded)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerFueledSignature__DelegateSignature");

	UDH_MessageBus_OnWarshipBoilerFueledSignature__DelegateSignature_Params params;
	params.PiecesAdded = PiecesAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_WarshipBoiler*       Boiler                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWarshipBoilerChangedSignature__DelegateSignature(class ADH_WarshipBoiler* Boiler)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWarshipBoilerChangedSignature__DelegateSignature");

	UDH_MessageBus_OnWarshipBoilerChangedSignature__DelegateSignature_Params params;
	params.Boiler = Boiler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnWantsToTalkSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantsToTalk                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnWantsToTalkSignature__DelegateSignature(class ADH_PlayerController* PlayerController, bool bWantsToTalk)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnWantsToTalkSignature__DelegateSignature");

	UDH_MessageBus_OnWantsToTalkSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;
	params.bWantsToTalk = bWantsToTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVoiceChatParticipantChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                  AccountName                    (Parm, ZeroConstructor)

void UDH_MessageBus::OnVoiceChatParticipantChangedSignature__DelegateSignature(const class FString& AccountName)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVoiceChatParticipantChangedSignature__DelegateSignature");

	UDH_MessageBus_OnVoiceChatParticipantChangedSignature__DelegateSignature_Params params;
	params.AccountName = AccountName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxShowEchoTestSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnVivoxShowEchoTestSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVivoxShowEchoTestSignature__DelegateSignature");

	UDH_MessageBus_OnVivoxShowEchoTestSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoginRetrySignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                          RetryTimeSeconds               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnVivoxLoginRetrySignature__DelegateSignature(float RetryTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoginRetrySignature__DelegateSignature");

	UDH_MessageBus_OnVivoxLoginRetrySignature__DelegateSignature_Params params;
	params.RetryTimeSeconds = RetryTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoggedOutSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnVivoxLoggedOutSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoggedOutSignature__DelegateSignature");

	UDH_MessageBus_OnVivoxLoggedOutSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoggedInSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnVivoxLoggedInSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVivoxLoggedInSignature__DelegateSignature");

	UDH_MessageBus_OnVivoxLoggedInSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVivoxErrorsUpdatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FDH_VivoxError>  Errors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnVivoxErrorsUpdatedSignature__DelegateSignature(TArray<struct FDH_VivoxError> Errors)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVivoxErrorsUpdatedSignature__DelegateSignature");

	UDH_MessageBus_OnVivoxErrorsUpdatedSignature__DelegateSignature_Params params;
	params.Errors = Errors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnVisibilityTagsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_UIVisibilityTagHandler* TagHandler                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnVisibilityTagsChangedSignature__DelegateSignature(class UDH_UIVisibilityTagHandler* TagHandler)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnVisibilityTagsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnVisibilityTagsChangedSignature__DelegateSignature_Params params;
	params.TagHandler = TagHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnUpdateTotemTargetsChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnUpdateTotemTargetsChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnUpdateTotemTargetsChangedDelegate__DelegateSignature");

	UDH_MessageBus_OnUpdateTotemTargetsChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnUIModeChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bIsUIOnlyMode                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnUIModeChanged__DelegateSignature(bool bIsUIOnlyMode)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnUIModeChanged__DelegateSignature");

	UDH_MessageBus_OnUIModeChanged__DelegateSignature_Params params;
	params.bIsUIOnlyMode = bIsUIOnlyMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_TutorialTriggerVolume* Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature(class ADH_TutorialTriggerVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialTriggerVolumeTriggeredSignature__DelegateSignature_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialObjectiveCompletedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TutorialObjective*   Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTutorialObjectiveCompletedSignature__DelegateSignature(class UDH_TutorialObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialObjectiveCompletedSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialObjectiveCompletedSignature__DelegateSignature_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialObjectiveChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TutorialObjective*   Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTutorialObjectiveChangedSignature__DelegateSignature(class UDH_TutorialObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialObjectiveChangedSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialObjectiveChangedSignature__DelegateSignature_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialIntroScreenHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnTutorialIntroScreenHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialIntroScreenHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialIntroScreenHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialConceptClosedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnTutorialConceptClosedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialConceptClosedSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialConceptClosedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialConceptChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   Concept                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTutorialConceptChangedSignature__DelegateSignature(const struct FName& Concept)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialConceptChangedSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialConceptChangedSignature__DelegateSignature_Params params;
	params.Concept = Concept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTutorialChapterChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TutorialChapter*     Chapter                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTutorialChapterChangedSignature__DelegateSignature(class UDH_TutorialChapter* Chapter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTutorialChapterChangedSignature__DelegateSignature");

	UDH_MessageBus_OnTutorialChapterChangedSignature__DelegateSignature_Params params;
	params.Chapter = Chapter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTransactingInventoryChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InventoryTransactionComponent* InventoryTransactionComponent  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnTransactingInventoryChangedSignature__DelegateSignature(class UDH_InventoryTransactionComponent* InventoryTransactionComponent, class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTransactingInventoryChangedSignature__DelegateSignature");

	UDH_MessageBus_OnTransactingInventoryChangedSignature__DelegateSignature_Params params;
	params.InventoryTransactionComponent = InventoryTransactionComponent;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature");

	UDH_MessageBus_OnTitleScreenLoginStatusWidgetShownSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnTitleScreenHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnTitleScreenHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenChoseTutorialSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bDesiresTutorial               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTitleScreenChoseTutorialSignature__DelegateSignature(bool bDesiresTutorial)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTitleScreenChoseTutorialSignature__DelegateSignature");

	UDH_MessageBus_OnTitleScreenChoseTutorialSignature__DelegateSignature_Params params;
	params.bDesiresTutorial = bDesiresTutorial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTitlePlayerInputCapturedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnTitlePlayerInputCapturedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTitlePlayerInputCapturedSignature__DelegateSignature");

	UDH_MessageBus_OnTitlePlayerInputCapturedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTitleDataLoadedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                  Filename                       (Parm, ZeroConstructor)
// class UDH_TitleData*           TitleData                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTitleDataLoadedSignature__DelegateSignature(const class FString& Filename, class UDH_TitleData* TitleData)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTitleDataLoadedSignature__DelegateSignature");

	UDH_MessageBus_OnTitleDataLoadedSignature__DelegateSignature_Params params;
	params.Filename = Filename;
	params.TitleData = TitleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnThrallSpellExpiredSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnThrallSpellExpiredSignature__DelegateSignature(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnThrallSpellExpiredSignature__DelegateSignature");

	UDH_MessageBus_OnThrallSpellExpiredSignature__DelegateSignature_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnThrallSpellCastSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnThrallSpellCastSignature__DelegateSignature(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnThrallSpellCastSignature__DelegateSignature");

	UDH_MessageBus_OnThrallSpellCastSignature__DelegateSignature_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTalismanDraggedWidgetEndSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_PlayerTalisman*      Talisman                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTalismanDraggedWidgetEndSignature__DelegateSignature(class UDH_PlayerTalisman* Talisman)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTalismanDraggedWidgetEndSignature__DelegateSignature");

	UDH_MessageBus_OnTalismanDraggedWidgetEndSignature__DelegateSignature_Params params;
	params.Talisman = Talisman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnTalismanDraggedWidgetBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_PlayerTalisman*      Talisman                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnTalismanDraggedWidgetBeginSignature__DelegateSignature(class UDH_PlayerTalisman* Talisman)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnTalismanDraggedWidgetBeginSignature__DelegateSignature");

	UDH_MessageBus_OnTalismanDraggedWidgetBeginSignature__DelegateSignature_Params params;
	params.Talisman = Talisman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSuccessfulTransferSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             SourceInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnSuccessfulTransferSignature__DelegateSignature(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* SourceInventory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSuccessfulTransferSignature__DelegateSignature");

	UDH_MessageBus_OnSuccessfulTransferSignature__DelegateSignature_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.SourceInventory = SourceInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSuccessfulQuickTransferDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             TargetInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnSuccessfulQuickTransferDelegateSignature__DelegateSignature(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* TargetInventory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSuccessfulQuickTransferDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnSuccessfulQuickTransferDelegateSignature__DelegateSignature_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.TargetInventory = TargetInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_MessageBus.OnStreamerModeChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bStreamerMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnStreamerModeChangedSignature__DelegateSignature(bool bStreamerMode)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_MessageBus.OnStreamerModeChangedSignature__DelegateSignature");

	UDH_MessageBus_OnStreamerModeChangedSignature__DelegateSignature_Params params;
	params.bStreamerMode = bStreamerMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnStopOnlineVoiceSuccessSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnStopOnlineVoiceSuccessSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnStopOnlineVoiceSuccessSignature__DelegateSignature");

	UDH_MessageBus_OnStopOnlineVoiceSuccessSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpyingChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bInSpying                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpyingChangedSignature__DelegateSignature(bool bInSpying)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpyingChangedSignature__DelegateSignature");

	UDH_MessageBus_OnSpyingChangedSignature__DelegateSignature_Params params;
	params.bInSpying = bInSpying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpiritWalkingChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpiritWalkingChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpiritWalkingChangedSignature__DelegateSignature");

	UDH_MessageBus_OnSpiritWalkingChangedSignature__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpiedTargetChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                  SpiedActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpiedTargetChangedSignature__DelegateSignature(class AActor* SpiedActor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpiedTargetChangedSignature__DelegateSignature");

	UDH_MessageBus_OnSpiedTargetChangedSignature__DelegateSignature_Params params;
	params.SpiedActor = SpiedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpellWidgetMouseLeaveSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpellWidgetMouseLeaveSignature__DelegateSignature(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpellWidgetMouseLeaveSignature__DelegateSignature");

	UDH_MessageBus_OnSpellWidgetMouseLeaveSignature__DelegateSignature_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpellWidgetMouseEnterSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpellWidgetMouseEnterSignature__DelegateSignature(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpellWidgetMouseEnterSignature__DelegateSignature");

	UDH_MessageBus_OnSpellWidgetMouseEnterSignature__DelegateSignature_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpellSelectionSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpellSelectionSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpellSelectionSignature__DelegateSignature");

	UDH_MessageBus_OnSpellSelectionSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpellDraggedWidgetEndSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpellDraggedWidgetEndSignature__DelegateSignature(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpellDraggedWidgetEndSignature__DelegateSignature");

	UDH_MessageBus_OnSpellDraggedWidgetEndSignature__DelegateSignature_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpellDraggedWidgetBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSpellDraggedWidgetBeginSignature__DelegateSignature(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpellDraggedWidgetBeginSignature__DelegateSignature");

	UDH_MessageBus_OnSpellDraggedWidgetBeginSignature__DelegateSignature_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSpellCooldownsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnSpellCooldownsChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSpellCooldownsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnSpellCooldownsChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShowScoreboardSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bShowScoreboard                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplayJustLoaded              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnShowScoreboardSignature__DelegateSignature(bool bShowScoreboard, bool bReplayJustLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShowScoreboardSignature__DelegateSignature");

	UDH_MessageBus_OnShowScoreboardSignature__DelegateSignature_Params params;
	params.bShowScoreboard = bShowScoreboard;
	params.bReplayJustLoaded = bReplayJustLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShowRoleCustomizationSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bShow                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnShowRoleCustomizationSignature__DelegateSignature(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShowRoleCustomizationSignature__DelegateSignature");

	UDH_MessageBus_OnShowRoleCustomizationSignature__DelegateSignature_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShowPregameInstructionsSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            ThrallCount                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnShowPregameInstructionsSignature__DelegateSignature(int ThrallCount)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShowPregameInstructionsSignature__DelegateSignature");

	UDH_MessageBus_OnShowPregameInstructionsSignature__DelegateSignature_Params params;
	params.ThrallCount = ThrallCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShowLobbyBrowserOverlaySignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnShowLobbyBrowserOverlaySignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShowLobbyBrowserOverlaySignature__DelegateSignature");

	UDH_MessageBus_OnShowLobbyBrowserOverlaySignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShowHotbarChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnShowHotbarChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShowHotbarChangedSignature__DelegateSignature");

	UDH_MessageBus_OnShowHotbarChangedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShipObstructionsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameStateBase*       GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnShipObstructionsChangedSignature__DelegateSignature(class ADH_GameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShipObstructionsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnShipObstructionsChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EShipCustomizationRegion       Region                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature(EShipCustomizationRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature");

	UDH_MessageBus_OnShipCosmeticsPreviewRegionChangedSignature__DelegateSignature_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnShipCosmeticsAppliedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnShipCosmeticsAppliedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnShipCosmeticsAppliedSignature__DelegateSignature");

	UDH_MessageBus_OnShipCosmeticsAppliedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSetSelectedLanguageCodesSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnSetSelectedLanguageCodesSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSetSelectedLanguageCodesSignature__DelegateSignature");

	UDH_MessageBus_OnSetSelectedLanguageCodesSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSetDesiredCastingSpellSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          DesiredSpell                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnSetDesiredCastingSpellSignature__DelegateSignature(class UDH_TotemSpell* DesiredSpell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSetDesiredCastingSpellSignature__DelegateSignature");

	UDH_MessageBus_OnSetDesiredCastingSpellSignature__DelegateSignature_Params params;
	params.DesiredSpell = DesiredSpell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSessionUserInviteAcceptedFailedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnSessionUserInviteAcceptedFailedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSessionUserInviteAcceptedFailedSignature__DelegateSignature");

	UDH_MessageBus_OnSessionUserInviteAcceptedFailedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSelectedInventoryViewChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnSelectedInventoryViewChangedSignature__DelegateSignature(class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSelectedInventoryViewChangedSignature__DelegateSignature");

	UDH_MessageBus_OnSelectedInventoryViewChangedSignature__DelegateSignature_Params params;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSearchForLobbiesCompleteSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDH_OnlineSearchResult> SearchResults                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnSearchForLobbiesCompleteSignature__DelegateSignature(bool bWasSuccessful, TArray<struct FDH_OnlineSearchResult> SearchResults)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSearchForLobbiesCompleteSignature__DelegateSignature");

	UDH_MessageBus_OnSearchForLobbiesCompleteSignature__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.SearchResults = SearchResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature");

	UDH_MessageBus_OnScoreboardTimelineViewedFrameChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardSelectedIndicesChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)

void UDH_MessageBus::OnScoreboardSelectedIndicesChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardSelectedIndicesChangedSignature__DelegateSignature");

	UDH_MessageBus_OnScoreboardSelectedIndicesChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardReceivedReplaySignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_MatchReplay*         Replay                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnScoreboardReceivedReplaySignature__DelegateSignature(class UDH_MatchReplay* Replay)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardReceivedReplaySignature__DelegateSignature");

	UDH_MessageBus_OnScoreboardReceivedReplaySignature__DelegateSignature_Params params;
	params.Replay = Replay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnScoreboardHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnScoreboardHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnScoreboardHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSaveConversionPopupAcceptSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnSaveConversionPopupAcceptSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSaveConversionPopupAcceptSignature__DelegateSignature");

	UDH_MessageBus_OnSaveConversionPopupAcceptSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnSaveConversionCompleteSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnSaveConversionCompleteSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnSaveConversionCompleteSignature__DelegateSignature");

	UDH_MessageBus_OnSaveConversionCompleteSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRunLoginStepsBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnRunLoginStepsBeginSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRunLoginStepsBeginSignature__DelegateSignature");

	UDH_MessageBus_OnRunLoginStepsBeginSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectStationInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnRoleSelectStationInteractedWithSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectStationInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnRoleSelectStationInteractedWithSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectionWidgetShownSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnRoleSelectionWidgetShownSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectionWidgetShownSignature__DelegateSignature");

	UDH_MessageBus_OnRoleSelectionWidgetShownSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectionWidgetHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnRoleSelectionWidgetHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRoleSelectionWidgetHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnRoleSelectionWidgetHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRoleConfirmedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnRoleConfirmedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRoleConfirmedSignature__DelegateSignature");

	UDH_MessageBus_OnRoleConfirmedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRichTextHyperlinkClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                  LinkID                         (Parm, ZeroConstructor)

void UDH_MessageBus::OnRichTextHyperlinkClickedSignature__DelegateSignature(const class FString& LinkID)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRichTextHyperlinkClickedSignature__DelegateSignature");

	UDH_MessageBus_OnRichTextHyperlinkClickedSignature__DelegateSignature_Params params;
	params.LinkID = LinkID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRetryingLoginStepSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            TimeRemaining                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnRetryingLoginStepSignature__DelegateSignature(int TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRetryingLoginStepSignature__DelegateSignature");

	UDH_MessageBus_OnRetryingLoginStepSignature__DelegateSignature_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnRestingChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnRestingChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnRestingChangedSignature__DelegateSignature");

	UDH_MessageBus_OnRestingChangedSignature__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnReplayViewerInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnReplayViewerInteractedWithSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnReplayViewerInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnReplayViewerInteractedWithSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnReconnectAvailableSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnReconnectAvailableSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnReconnectAvailableSignature__DelegateSignature");

	UDH_MessageBus_OnReconnectAvailableSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnReceivedDLCPricesSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDH_PriceDataWrapper    PriceData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnReceivedDLCPricesSignature__DelegateSignature(const struct FDH_PriceDataWrapper& PriceData)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnReceivedDLCPricesSignature__DelegateSignature");

	UDH_MessageBus_OnReceivedDLCPricesSignature__DelegateSignature_Params params;
	params.PriceData = PriceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPrisonerPawnControllerChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PrisonerPawn*        PrisonerPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPrisonerPawnControllerChangedSignature__DelegateSignature(class ADH_PrisonerPawn* PrisonerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPrisonerPawnControllerChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPrisonerPawnControllerChangedSignature__DelegateSignature_Params params;
	params.PrisonerPawn = PrisonerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPrisonerFreedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PrisonerPawn*        PrisonerPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPrisonerFreedSignature__DelegateSignature(class ADH_PrisonerPawn* PrisonerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPrisonerFreedSignature__DelegateSignature");

	UDH_MessageBus_OnPrisonerFreedSignature__DelegateSignature_Params params;
	params.PrisonerPawn = PrisonerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPreviewRoleSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_PlayerRoleData*      RoleData                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPreviewRoleSignature__DelegateSignature(class UDH_PlayerRoleData* RoleData)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPreviewRoleSignature__DelegateSignature");

	UDH_MessageBus_OnPreviewRoleSignature__DelegateSignature_Params params;
	params.RoleData = RoleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPrestigeButtonClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_PlayerRoleData*      InPreviewRole                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPrestigeButtonClickedSignature__DelegateSignature(class UDH_PlayerRoleData* InPreviewRole)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPrestigeButtonClickedSignature__DelegateSignature");

	UDH_MessageBus_OnPrestigeButtonClickedSignature__DelegateSignature_Params params;
	params.InPreviewRole = InPreviewRole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPowderkegFuseUpdate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_InventoryPickup*     Pickup                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DetonationTime                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPowderkegFuseUpdate__DelegateSignature(class ADH_InventoryPickup* Pickup, float DetonationTime)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPowderkegFuseUpdate__DelegateSignature");

	UDH_MessageBus_OnPowderkegFuseUpdate__DelegateSignature_Params params;
	params.Pickup = Pickup;
	params.DetonationTime = DetonationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPokerGameTimeStatsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FDH_PokerGameTimeStat> TimeStats                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnPokerGameTimeStatsChangedSignature__DelegateSignature(TArray<struct FDH_PokerGameTimeStat> TimeStats)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPokerGameTimeStatsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPokerGameTimeStatsChangedSignature__DelegateSignature_Params params;
	params.TimeStats = TimeStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerUnregisteredWithSessionSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         UnregisteredPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerUnregisteredWithSessionSignature__DelegateSignature(class ADH_PlayerState* UnregisteredPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerUnregisteredWithSessionSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerUnregisteredWithSessionSignature__DelegateSignature_Params params;
	params.UnregisteredPlayer = UnregisteredPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallVisionFailedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnPlayerThrallVisionFailedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallVisionFailedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerThrallVisionFailedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallVisionChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bUsingVision                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerThrallVisionChangedSignature__DelegateSignature(bool bUsingVision)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallVisionChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerThrallVisionChangedSignature__DelegateSignature_Params params;
	params.bUsingVision = bUsingVision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallChangedDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerThrallChangedDelegateSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerThrallChangedDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerThrallChangedDelegateSignature__DelegateSignature_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateQuestChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_QuestState*          QuestState                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerStateQuestChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState, class ADH_QuestState* QuestState)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateQuestChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerStateQuestChangedSignature__DelegateSignature_Params params;
	params.PlayerState = PlayerState;
	params.QuestState = QuestState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerStatePrestigeLevelChangedSignature__DelegateSignature_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerStateOwnedTotemsChangedSignature__DelegateSignature_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateFirstTimeCannibalSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerStateFirstTimeCannibalSignature__DelegateSignature(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateFirstTimeCannibalSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerStateFirstTimeCannibalSignature__DelegateSignature_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateDeadChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerStateDeadChangedSignature__DelegateSignature(class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerStateDeadChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerStateDeadChangedSignature__DelegateSignature_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRoleChangedDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerRoleChangedDelegateSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRoleChangedDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerRoleChangedDelegateSignature__DelegateSignature_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRemovedFromGameSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         RemovedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerRemovedFromGameSignature__DelegateSignature(class ADH_PlayerState* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRemovedFromGameSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerRemovedFromGameSignature__DelegateSignature_Params params;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRegisteredWithSessionSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         RegisteredPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerRegisteredWithSessionSignature__DelegateSignature(class ADH_PlayerState* RegisteredPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerRegisteredWithSessionSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerRegisteredWithSessionSignature__DelegateSignature_Params params;
	params.RegisteredPlayer = RegisteredPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerReconnectedToGameSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         ReconnectingPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerReconnectedToGameSignature__DelegateSignature(class ADH_PlayerState* ReconnectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerReconnectedToGameSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerReconnectedToGameSignature__DelegateSignature_Params params;
	params.ReconnectingPlayer = ReconnectingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerReceivedDialogueSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      Speaker                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDialogueWave*           Dialogue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerReceivedDialogueSignature__DelegateSignature(class ADH_HumanCharacter* Speaker, class UDialogueWave* Dialogue)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerReceivedDialogueSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerReceivedDialogueSignature__DelegateSignature_Params params;
	params.Speaker = Speaker;
	params.Dialogue = Dialogue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerNameChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerNameChangedSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerNameChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerNameChangedSignature__DelegateSignature_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerMuteStatusChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         MutedPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerMuteStatusChangedSignature__DelegateSignature(class ADH_PlayerState* MutedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerMuteStatusChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerMuteStatusChangedSignature__DelegateSignature_Params params;
	params.MutedPlayer = MutedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerLogoutSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AController*             ControllerLoggingOut           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerLogoutSignature__DelegateSignature(class AController* ControllerLoggingOut)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerLogoutSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerLogoutSignature__DelegateSignature_Params params;
	params.ControllerLoggingOut = ControllerLoggingOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerDisconnectedFromGameSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         DisconnectingPlayer            (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerDisconnectedFromGameSignature__DelegateSignature(class ADH_PlayerState* DisconnectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerDisconnectedFromGameSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerDisconnectedFromGameSignature__DelegateSignature_Params params;
	params.DisconnectingPlayer = DisconnectingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCosmeticItemPurchasedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<class FString>          ItemCodes                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnPlayerCosmeticItemPurchasedSignature__DelegateSignature(TArray<class FString> ItemCodes)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCosmeticItemPurchasedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerCosmeticItemPurchasedSignature__DelegateSignature_Params params;
	params.ItemCodes = ItemCodes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCosmeticItemDetachedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UPrimitiveComponent*     Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnPlayerCosmeticItemDetachedSignature__DelegateSignature(class UPrimitiveComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCosmeticItemDetachedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerCosmeticItemDetachedSignature__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerShowUIChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerControllerShowUIChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerShowUIChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerControllerShowUIChangedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerPlayerStateChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerControllerPlayerStateChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerPlayerStateChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerControllerPlayerStateChangedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerGameStateChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerControllerGameStateChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerGameStateChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerControllerGameStateChangedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerControlledHumanChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerControllerControlledHumanChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerControllerControlledHumanChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerControllerControlledHumanChangedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FUniqueNetIdRepl        UserId                         (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature(const struct FUniqueNetIdRepl& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerContextMenuVolumeSliderChangedSignature__DelegateSignature_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerContextMenuShownSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnPlayerContextMenuShownSignature__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerContextMenuShownSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerContextMenuShownSignature__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// TArray<class UDH_CosmeticItemBase*> Items                          (ConstParm, Parm, ZeroConstructor)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature(TArray<class UDH_CosmeticItemBase*> Items, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerCareerSaveGameCosmeticItemsChangedSignature__DelegateSignature_Params params;
	params.Items = Items;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCannibalismChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         ChangedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerCannibalismChangedSignature__DelegateSignature(class ADH_PlayerState* ChangedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerCannibalismChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerCannibalismChangedSignature__DelegateSignature_Params params;
	params.ChangedPlayer = ChangedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPlayerAddedToGameSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         AddedPlayer                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPlayerAddedToGameSignature__DelegateSignature(class ADH_PlayerState* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPlayerAddedToGameSignature__DelegateSignature");

	UDH_MessageBus_OnPlayerAddedToGameSignature__DelegateSignature_Params params;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPhonographSongSelectionSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Phonograph*          Phonograph                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnPhonographSongSelectionSignature__DelegateSignature(class ADH_Phonograph* Phonograph)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPhonographSongSelectionSignature__DelegateSignature");

	UDH_MessageBus_OnPhonographSongSelectionSignature__DelegateSignature_Params params;
	params.Phonograph = Phonograph;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnPartyPublicStateChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnPartyPublicStateChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnPartyPublicStateChangedSignature__DelegateSignature");

	UDH_MessageBus_OnPartyPublicStateChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOverlayWidgetShownSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnOverlayWidgetShownSignature__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOverlayWidgetShownSignature__DelegateSignature");

	UDH_MessageBus_OnOverlayWidgetShownSignature__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOverlayWidgetHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnOverlayWidgetHiddenSignature__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOverlayWidgetHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnOverlayWidgetHiddenSignature__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineSessionJoinSessionCompleteSignature__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionJoiningSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineSessionJoiningSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionJoiningSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineSessionJoiningSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionInvitationSentSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnOnlineSessionInvitationSentSignature__DelegateSignature(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionInvitationSentSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineSessionInvitationSentSignature__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineSessionGameAlreadyStartedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionCreateCompleteSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorText                      (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnOnlineSessionCreateCompleteSignature__DelegateSignature(bool bWasSuccessful, const struct FText& ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSessionCreateCompleteSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineSessionCreateCompleteSignature__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorText = ErrorText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSearchForLobbiesStartedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineSearchForLobbiesStartedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineSearchForLobbiesStartedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineSearchForLobbiesStartedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyMembersChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlinePartyMembersChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyMembersChangedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyMembersChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyMemberPromotedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bLocalIsHost                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnOnlinePartyMemberPromotedSignature__DelegateSignature(bool bLocalIsHost)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyMemberPromotedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyMemberPromotedSignature__DelegateSignature_Params params;
	params.bLocalIsHost = bLocalIsHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyLeftSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PartyId                        (Parm, ZeroConstructor)

void UDH_MessageBus::OnOnlinePartyLeftSignature__DelegateSignature(bool bWasSuccessful, const class FString& PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyLeftSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyLeftSignature__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyKickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlinePartyKickedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyKickedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyKickedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyJoiningCancelledSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlinePartyJoiningCancelledSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyJoiningCancelledSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyJoiningCancelledSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyExitSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                  PartyId                        (Parm, ZeroConstructor)

void UDH_MessageBus::OnOnlinePartyExitSignature__DelegateSignature(const class FString& PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyExitSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyExitSignature__DelegateSignature_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyDataReceivedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlinePartyDataReceivedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyDataReceivedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyDataReceivedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyCantFindLobbySignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlinePartyCantFindLobbySignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyCantFindLobbySignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyCantFindLobbySignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyAlreadyFullSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlinePartyAlreadyFullSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlinePartyAlreadyFullSignature__DelegateSignature");

	UDH_MessageBus_OnOnlinePartyAlreadyFullSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineJoinSessionBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineJoinSessionBeginSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineJoinSessionBeginSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineJoinSessionBeginSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineInitedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineInitedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineInitedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineInitedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineFoundSessionByIdFinishedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineFailedToBeginToSearchForLobbiesSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineErrorsUpdatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FDH_OnlineError> Errors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnOnlineErrorsUpdatedSignature__DelegateSignature(TArray<struct FDH_OnlineError> Errors)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineErrorsUpdatedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineErrorsUpdatedSignature__DelegateSignature_Params params;
	params.Errors = Errors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineDestroySessionEndSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineDestroySessionEndSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineDestroySessionEndSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineDestroySessionEndSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineDestroySessionBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnOnlineDestroySessionBeginSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineDestroySessionBeginSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineDestroySessionBeginSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnOnlineAutoSearchChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bAutoSearching                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnOnlineAutoSearchChangedSignature__DelegateSignature(bool bAutoSearching)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnOnlineAutoSearchChangedSignature__DelegateSignature");

	UDH_MessageBus_OnOnlineAutoSearchChangedSignature__DelegateSignature_Params params;
	params.bAutoSearching = bAutoSearching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnNamedServerAddressesChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnNamedServerAddressesChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnNamedServerAddressesChangedSignature__DelegateSignature");

	UDH_MessageBus_OnNamedServerAddressesChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnMouseCursorVisibilityChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bCursorVisible                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnMouseCursorVisibilityChangedSignature__DelegateSignature(bool bCursorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnMouseCursorVisibilityChangedSignature__DelegateSignature");

	UDH_MessageBus_OnMouseCursorVisibilityChangedSignature__DelegateSignature_Params params;
	params.bCursorVisible = bCursorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnMerchantShopUIVisibilityChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EDH_EntitlementsShopType       ShopType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnMerchantShopUIVisibilityChangedSignature__DelegateSignature(EDH_EntitlementsShopType ShopType, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnMerchantShopUIVisibilityChangedSignature__DelegateSignature");

	UDH_MessageBus_OnMerchantShopUIVisibilityChangedSignature__DelegateSignature_Params params;
	params.ShopType = ShopType;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnMerchantInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Merchant*            Merchant                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnMerchantInteractedWithSignature__DelegateSignature(class ADH_Merchant* Merchant)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnMerchantInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnMerchantInteractedWithSignature__DelegateSignature_Params params;
	params.Merchant = Merchant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnMatchReplayReceivedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// class FString                  MatchID                        (Parm, ZeroConstructor)
// TArray<unsigned char>          Replay                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnMatchReplayReceivedSignature__DelegateSignature(const class FString& MatchID, TArray<unsigned char> Replay)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnMatchReplayReceivedSignature__DelegateSignature");

	UDH_MessageBus_OnMatchReplayReceivedSignature__DelegateSignature_Params params;
	params.MatchID = MatchID;
	params.Replay = Replay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnMapTableInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnMapTableInteractedWithSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnMapTableInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnMapTableInteractedWithSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLoginStepFinishedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            StepsCompleted                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxSteps                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbandonFurtherSteps           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnLoginStepFinishedSignature__DelegateSignature(int StepsCompleted, int MaxSteps, bool bAbandonFurtherSteps)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLoginStepFinishedSignature__DelegateSignature");

	UDH_MessageBus_OnLoginStepFinishedSignature__DelegateSignature_Params params;
	params.StepsCompleted = StepsCompleted;
	params.MaxSteps = MaxSteps;
	params.bAbandonFurtherSteps = bAbandonFurtherSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLoginFinishedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnLoginFinishedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLoginFinishedSignature__DelegateSignature");

	UDH_MessageBus_OnLoginFinishedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature");

	UDH_MessageBus_OnLobbyInviteReceivedWidgetShownSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLobbyBrowserWidgetShowSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnLobbyBrowserWidgetShowSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLobbyBrowserWidgetShowSignature__DelegateSignature");

	UDH_MessageBus_OnLobbyBrowserWidgetShowSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnListeningForToggleGroundCraftableSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_UseCraftingMenuHintWidget* UseCraftingMenuHintWidget      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnListeningForToggleGroundCraftableSignature__DelegateSignature(class UDH_UseCraftingMenuHintWidget* UseCraftingMenuHintWidget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnListeningForToggleGroundCraftableSignature__DelegateSignature");

	UDH_MessageBus_OnListeningForToggleGroundCraftableSignature__DelegateSignature_Params params;
	params.UseCraftingMenuHintWidget = UseCraftingMenuHintWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLaunchTutorialButtonClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnLaunchTutorialButtonClickedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLaunchTutorialButtonClickedSignature__DelegateSignature");

	UDH_MessageBus_OnLaunchTutorialButtonClickedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLaunchExpeditionButtonClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnLaunchExpeditionButtonClickedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLaunchExpeditionButtonClickedSignature__DelegateSignature");

	UDH_MessageBus_OnLaunchExpeditionButtonClickedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterDropDownHideSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnLanguageFilterDropDownHideSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterDropDownHideSignature__DelegateSignature");

	UDH_MessageBus_OnLanguageFilterDropDownHideSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            NumChecked                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature(int NumChecked)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature");

	UDH_MessageBus_OnLanguageFilterCheckBoxesChangedSignature__DelegateSignature_Params params;
	params.NumChecked = NumChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterButtonClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bToggleOn                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnLanguageFilterButtonClickedSignature__DelegateSignature(bool bToggleOn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnLanguageFilterButtonClickedSignature__DelegateSignature");

	UDH_MessageBus_OnLanguageFilterButtonClickedSignature__DelegateSignature_Params params;
	params.bToggleOn = bToggleOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnJournalInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnJournalInteractedWithSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnJournalInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnJournalInteractedWithSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnItemPoisoned__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnItemPoisoned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnItemPoisoned__DelegateSignature");

	UDH_MessageBus_OnItemPoisoned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInventorySlotDragEndSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*             InventorySlot                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnInventorySlotDragEndSignature__DelegateSignature(class UUserWidget* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInventorySlotDragEndSignature__DelegateSignature");

	UDH_MessageBus_OnInventorySlotDragEndSignature__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInventorySlotDragBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*             InventorySlot                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnInventorySlotDragBeginSignature__DelegateSignature(class UUserWidget* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInventorySlotDragBeginSignature__DelegateSignature");

	UDH_MessageBus_OnInventorySlotDragBeginSignature__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryManagerSlotCountModifiedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnInventoryManagerSlotCountModifiedSignature__DelegateSignature(class UDH_InventoryManager* InventoryManager, int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInventoryManagerSlotCountModifiedSignature__DelegateSignature");

	UDH_MessageBus_OnInventoryManagerSlotCountModifiedSignature__DelegateSignature_Params params;
	params.InventoryManager = InventoryManager;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryManagerSlotContentsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<int>                    ModifiedSlots                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDH_MessageBus::OnInventoryManagerSlotContentsChangedSignature__DelegateSignature(class UDH_InventoryManager* InventoryManager, TArray<int> ModifiedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInventoryManagerSlotContentsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnInventoryManagerSlotContentsChangedSignature__DelegateSignature_Params params;
	params.InventoryManager = InventoryManager;
	params.ModifiedSlots = ModifiedSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryContainerSlotContentsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*             InventoryContainerWidget       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnInventoryContainerSlotContentsChangedSignature__DelegateSignature(class UUserWidget* InventoryContainerWidget, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInventoryContainerSlotContentsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnInventoryContainerSlotContentsChangedSignature__DelegateSignature_Params params;
	params.InventoryContainerWidget = InventoryContainerWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInventoryConsumedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Inventory_Consumable* Consumable                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnInventoryConsumedSignature__DelegateSignature(class ADH_Inventory_Consumable* Consumable)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInventoryConsumedSignature__DelegateSignature");

	UDH_MessageBus_OnInventoryConsumedSignature__DelegateSignature_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInteractFailedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InteractComponent*   InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnInteractFailedSignature__DelegateSignature(class UDH_InteractComponent* InteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInteractFailedSignature__DelegateSignature");

	UDH_MessageBus_OnInteractFailedSignature__DelegateSignature_Params params;
	params.InteractComponent = InteractComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInputTypeChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EDHInputType                   InputType                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnInputTypeChangedSignature__DelegateSignature(EDHInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInputTypeChangedSignature__DelegateSignature");

	UDH_MessageBus_OnInputTypeChangedSignature__DelegateSignature_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInitOnlineVoiceSuccessSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnInitOnlineVoiceSuccessSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInitOnlineVoiceSuccessSignature__DelegateSignature");

	UDH_MessageBus_OnInitOnlineVoiceSuccessSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnInitOnlineVoiceFailedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnInitOnlineVoiceFailedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnInitOnlineVoiceFailedSignature__DelegateSignature");

	UDH_MessageBus_OnInitOnlineVoiceFailedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnIncapacitatedChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnIncapacitatedChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnIncapacitatedChangedSignature__DelegateSignature");

	UDH_MessageBus_OnIncapacitatedChangedSignature__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterPoisonAppliedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         Creditor                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterPoisonAppliedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter, class ADH_PlayerState* Creditor, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterPoisonAppliedSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterPoisonAppliedSignature__DelegateSignature_Params params;
	params.HumanCharacter = HumanCharacter;
	params.Creditor = Creditor;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterPlayerStateSetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterPlayerStateSetSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterPlayerStateSetSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterPlayerStateSetSignature__DelegateSignature_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterOnShipChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterOnShipChangedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterOnShipChangedSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterOnShipChangedSignature__DelegateSignature_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterHungerIncreasingChangedSignature__DelegateSignature_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         Creditor                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature(class ADH_HumanCharacter* HumanCharacter, class ADH_PlayerState* Creditor, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterHealthBoostRemainingModifiedSignature__DelegateSignature_Params params;
	params.HumanCharacter = HumanCharacter;
	params.Creditor = Creditor;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterGainedInventorySignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Inventory*           Inventory                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterGainedInventorySignature__DelegateSignature(class ADH_Inventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterGainedInventorySignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterGainedInventorySignature__DelegateSignature_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterDiedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterDiedSignature__DelegateSignature(class ADH_HumanCharacter* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterDiedSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterDiedSignature__DelegateSignature_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterBeingCarriedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      CarriedPawn                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      CarryingPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHumanCharacterBeingCarriedSignature__DelegateSignature(class ADH_HumanCharacter* CarriedPawn, class ADH_HumanCharacter* CarryingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHumanCharacterBeingCarriedSignature__DelegateSignature");

	UDH_MessageBus_OnHumanCharacterBeingCarriedSignature__DelegateSignature_Params params;
	params.CarriedPawn = CarriedPawn;
	params.CarryingPawn = CarryingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHotbarSelectedIndexChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHotbarSelectedIndexChangedSignature__DelegateSignature(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHotbarSelectedIndexChangedSignature__DelegateSignature");

	UDH_MessageBus_OnHotbarSelectedIndexChangedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnHandleSessionInviteAcceptSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bSuccess                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewPartyInMatch               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bKicked                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPartyFull                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCantFindLobby                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnHandleSessionInviteAcceptSignature__DelegateSignature(bool bSuccess, bool bNewPartyInMatch, bool bKicked, bool bPartyFull, bool bCantFindLobby)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnHandleSessionInviteAcceptSignature__DelegateSignature");

	UDH_MessageBus_OnHandleSessionInviteAcceptSignature__DelegateSignature_Params params;
	params.bSuccess = bSuccess;
	params.bNewPartyInMatch = bNewPartyInMatch;
	params.bKicked = bKicked;
	params.bPartyFull = bPartyFull;
	params.bCantFindLobby = bCantFindLobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGroundCraftingBlueprintChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GroundCraftingBlueprint* Blueprint                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnGroundCraftingBlueprintChangedSignature__DelegateSignature(class ADH_GroundCraftingBlueprint* Blueprint)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGroundCraftingBlueprintChangedSignature__DelegateSignature");

	UDH_MessageBus_OnGroundCraftingBlueprintChangedSignature__DelegateSignature_Params params;
	params.Blueprint = Blueprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnGrimoireSpellUnselectedDelegateSignature__DelegateSignature_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellSelectedDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnGrimoireSpellSelectedDelegateSignature__DelegateSignature(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellSelectedDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnGrimoireSpellSelectedDelegateSignature__DelegateSignature_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnGrimoireSpellsChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireSpellsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnGrimoireSpellsChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnGrimoireInteractedWithSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGrimoireInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnGrimoireInteractedWithSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGameVictoryWidgetHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnGameVictoryWidgetHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGameVictoryWidgetHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnGameVictoryWidgetHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGameStateMatchStateChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnGameStateMatchStateChangedSignature__DelegateSignature(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGameStateMatchStateChangedSignature__DelegateSignature");

	UDH_MessageBus_OnGameStateMatchStateChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameStateBase*       GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature(class ADH_GameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature");

	UDH_MessageBus_OnGameStateDistanceFromStartToEndChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnGameStateChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnGameStateChangedSignature__DelegateSignature(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnGameStateChangedSignature__DelegateSignature");

	UDH_MessageBus_OnGameStateChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnFinishedDroppingSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_DropZoneInventoryDropper* Dropper                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnFinishedDroppingSignature__DelegateSignature(class UDH_DropZoneInventoryDropper* Dropper)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnFinishedDroppingSignature__DelegateSignature");

	UDH_MessageBus_OnFinishedDroppingSignature__DelegateSignature_Params params;
	params.Dropper = Dropper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnFailedToCraftSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CraftingComponent*   CraftingComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_CraftingRecipe*      CraftingProject                (Parm, ZeroConstructor, IsPlainOldData)
// ECraftingFailReason            FailReason                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnFailedToCraftSignature__DelegateSignature(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingRecipe* CraftingProject, ECraftingFailReason FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnFailedToCraftSignature__DelegateSignature");

	UDH_MessageBus_OnFailedToCraftSignature__DelegateSignature_Params params;
	params.CraftingComp = CraftingComp;
	params.CraftingProject = CraftingProject;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnFailedQuickTransferDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InventoryManager*    InInventoryManager             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SourceSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetSlot                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             TargetInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnFailedQuickTransferDelegateSignature__DelegateSignature(class UDH_InventoryManager* InInventoryManager, int SourceSlot, int TargetSlot, class UUserWidget* TargetInventory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnFailedQuickTransferDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnFailedQuickTransferDelegateSignature__DelegateSignature_Params params;
	params.InInventoryManager = InInventoryManager;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.TargetInventory = TargetInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnExpeditionSettingsWidgetShownSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnExpeditionSettingsWidgetShownSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnExpeditionSettingsWidgetShownSignature__DelegateSignature");

	UDH_MessageBus_OnExpeditionSettingsWidgetShownSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature");

	UDH_MessageBus_OnExpeditionSettingsWidgetHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature");

	UDH_MessageBus_OnExpectedUniqueNetIdsUpdatedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnErrorsUpdatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnErrorsUpdatedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnErrorsUpdatedSignature__DelegateSignature");

	UDH_MessageBus_OnErrorsUpdatedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnEquippedSpellsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_SpellManager*        SpellManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnEquippedSpellsChangedSignature__DelegateSignature(class ADH_SpellManager* SpellManager)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnEquippedSpellsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnEquippedSpellsChangedSignature__DelegateSignature_Params params;
	params.SpellManager = SpellManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDurabilityChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Inventory*           Inventory                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnDurabilityChangedSignature__DelegateSignature(class ADH_Inventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDurabilityChangedSignature__DelegateSignature");

	UDH_MessageBus_OnDurabilityChangedSignature__DelegateSignature_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDoppelgangerSpawnedSignatured__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnDoppelgangerSpawnedSignatured__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDoppelgangerSpawnedSignatured__DelegateSignature");

	UDH_MessageBus_OnDoppelgangerSpawnedSignatured__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDestructibleActorHealthChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_DestructibleActor*   DestructibleActor              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnDestructibleActorHealthChangedSignature__DelegateSignature(class ADH_DestructibleActor* DestructibleActor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDestructibleActorHealthChangedSignature__DelegateSignature");

	UDH_MessageBus_OnDestructibleActorHealthChangedSignature__DelegateSignature_Params params;
	params.DestructibleActor = DestructibleActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDestructibleActorDestroyedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_DestructibleActor*   DestructibleActor              (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnDestructibleActorDestroyedSignature__DelegateSignature(class ADH_DestructibleActor* DestructibleActor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDestructibleActorDestroyedSignature__DelegateSignature");

	UDH_MessageBus_OnDestructibleActorDestroyedSignature__DelegateSignature_Params params;
	params.DestructibleActor = DestructibleActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDesiredAutoSearchForLobbiesSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bDesired                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnDesiredAutoSearchForLobbiesSignature__DelegateSignature(bool bDesired)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDesiredAutoSearchForLobbiesSignature__DelegateSignature");

	UDH_MessageBus_OnDesiredAutoSearchForLobbiesSignature__DelegateSignature_Params params;
	params.bDesired = bDesired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDeclinedReconnectSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnDeclinedReconnectSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDeclinedReconnectSignature__DelegateSignature");

	UDH_MessageBus_OnDeclinedReconnectSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            NumOfPlayers                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature(int NumOfPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature");

	UDH_MessageBus_OnDebugSetDesiredNumOfPlayersSignature__DelegateSignature_Params params;
	params.NumOfPlayers = NumOfPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDebugAdvertiseButtonClickedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnDebugAdvertiseButtonClickedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDebugAdvertiseButtonClickedSignature__DelegateSignature");

	UDH_MessageBus_OnDebugAdvertiseButtonClickedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnDaysUntilBlizzardChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnDaysUntilBlizzardChangedSignature__DelegateSignature(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnDaysUntilBlizzardChangedSignature__DelegateSignature");

	UDH_MessageBus_OnDaysUntilBlizzardChangedSignature__DelegateSignature_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCurrentReplayChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_MatchReplay*         InReplay                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCurrentReplayChangedSignature__DelegateSignature(class UDH_MatchReplay* InReplay)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCurrentReplayChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCurrentReplayChangedSignature__DelegateSignature_Params params;
	params.InReplay = InReplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCurrentInteractTargetChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_InteractComponent*   InInteractComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnCurrentInteractTargetChangedSignature__DelegateSignature(class UDH_InteractComponent* InInteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCurrentInteractTargetChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCurrentInteractTargetChangedSignature__DelegateSignature_Params params;
	params.InInteractComponent = InInteractComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCurrentHelmsmanChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_WarshipHelm*         WarshipHelm                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCurrentHelmsmanChangedSignature__DelegateSignature(class ADH_WarshipHelm* WarshipHelm)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCurrentHelmsmanChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCurrentHelmsmanChangedSignature__DelegateSignature_Params params;
	params.WarshipHelm = WarshipHelm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCultureChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnCultureChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCultureChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCultureChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCrewBoardInteractedWithSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnCrewBoardInteractedWithSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCrewBoardInteractedWithSignature__DelegateSignature");

	UDH_MessageBus_OnCrewBoardInteractedWithSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                  UniquePlayerId                 (Parm, ZeroConstructor)

void UDH_MessageBus::OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature(const class FString& UniquePlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature");

	UDH_MessageBus_OnCreateVoiceAudioComponentCompleteSignature__DelegateSignature_Params params;
	params.UniquePlayerId = UniquePlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectConsumedInventorySignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CraftingProject*     CompletedProject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_PlayerState*         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCraftingProjectConsumedInventorySignature__DelegateSignature(class UDH_CraftingProject* CompletedProject, class ADH_Inventory* Item, class ADH_PlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectConsumedInventorySignature__DelegateSignature");

	UDH_MessageBus_OnCraftingProjectConsumedInventorySignature__DelegateSignature_Params params;
	params.CompletedProject = CompletedProject;
	params.Item = Item;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectCompletedChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CraftingProject*     CraftingProject                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCraftingProjectCompletedChangedSignature__DelegateSignature(class UDH_CraftingProject* CraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectCompletedChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCraftingProjectCompletedChangedSignature__DelegateSignature_Params params;
	params.CraftingProject = CraftingProject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectAbortedChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CraftingProject*     CraftingProject                (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCraftingProjectAbortedChangedSignature__DelegateSignature(class UDH_CraftingProject* CraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCraftingProjectAbortedChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCraftingProjectAbortedChangedSignature__DelegateSignature_Params params;
	params.CraftingProject = CraftingProject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CraftingComponent*   CraftingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature(class UDH_CraftingComponent* CraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature");

	UDH_MessageBus_OnCraftingComponentLimitedRecipeCraftedSignature__DelegateSignature_Params params;
	params.CraftingComponent = CraftingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CraftingComponent*   CraftingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDH_MessageBus::OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature(class UDH_CraftingComponent* CraftingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCraftingComponentCurrentProjectsChangedSignature__DelegateSignature_Params params;
	params.CraftingComponent = CraftingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemWidgetMouseLeaveSignature__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemWidgetMouseEnterSignature__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemUnselectedDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemUnselectedDelegateSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemUnselectedDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemUnselectedDelegateSignature__DelegateSignature_Params params;
	params.Item = Item;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemUnequippedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemUnequippedSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemUnequippedSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemUnequippedSignature__DelegateSignature_Params params;
	params.Item = Item;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemSelectedDelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemSelectedDelegateSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemSelectedDelegateSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemSelectedDelegateSignature__DelegateSignature_Params params;
	params.Item = Item;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemEquippedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  AppearanceIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemEquippedSignature__DelegateSignature(class UDH_CosmeticItemBase* Item, unsigned char AppearanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemEquippedSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemEquippedSignature__DelegateSignature_Params params;
	params.Item = Item;
	params.AppearanceIndex = AppearanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemDraggedWidgetEndSignature__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_CosmeticItemBase*    Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature(class UDH_CosmeticItemBase* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature");

	UDH_MessageBus_OnCosmeticItemDraggedWidgetBeginSignature__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnControlledShipChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      ShipController                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnControlledShipChangedSignature__DelegateSignature(class ADH_HumanCharacter* ShipController)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnControlledShipChangedSignature__DelegateSignature");

	UDH_MessageBus_OnControlledShipChangedSignature__DelegateSignature_Params params;
	params.ShipController = ShipController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCloudSaveCompleteSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDH_UserCloudSaveObject* SaveObject                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCloudSaveCompleteSignature__DelegateSignature(class UDH_UserCloudSaveObject* SaveObject)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCloudSaveCompleteSignature__DelegateSignature");

	UDH_MessageBus_OnCloudSaveCompleteSignature__DelegateSignature_Params params;
	params.SaveObject = SaveObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnClimbingChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_HumanCharacter*      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_ClimbableActor*      ClimbingActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnClimbingChangedSignature__DelegateSignature(class ADH_HumanCharacter* Character, class ADH_ClimbableActor* ClimbingActor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnClimbingChangedSignature__DelegateSignature");

	UDH_MessageBus_OnClimbingChangedSignature__DelegateSignature_Params params;
	params.Character = Character;
	params.ClimbingActor = ClimbingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnClearVivoxErrorSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDH_VivoxError          Error                          (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnClearVivoxErrorSignature__DelegateSignature(const struct FDH_VivoxError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnClearVivoxErrorSignature__DelegateSignature");

	UDH_MessageBus_OnClearVivoxErrorSignature__DelegateSignature_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnClearOnlineErrorSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDH_OnlineError         Error                          (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnClearOnlineErrorSignature__DelegateSignature(const struct FDH_OnlineError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnClearOnlineErrorSignature__DelegateSignature");

	UDH_MessageBus_OnClearOnlineErrorSignature__DelegateSignature_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCinematicModeChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bCinematicMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCinematicModeChangedSignature__DelegateSignature(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCinematicModeChangedSignature__DelegateSignature");

	UDH_MessageBus_OnCinematicModeChangedSignature__DelegateSignature_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnChooseRoleSelectionSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnChooseRoleSelectionSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnChooseRoleSelectionSignature__DelegateSignature");

	UDH_MessageBus_OnChooseRoleSelectionSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnCharacterDiedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_Character*           DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnCharacterDiedSignature__DelegateSignature(class ADH_Character* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnCharacterDiedSignature__DelegateSignature");

	UDH_MessageBus_OnCharacterDiedSignature__DelegateSignature_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnBuriedActorDugUpSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_DigSite*             Digsite                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuriedActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnBuriedActorDugUpSignature__DelegateSignature(class ADH_DigSite* Digsite, class AActor* BuriedActor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnBuriedActorDugUpSignature__DelegateSignature");

	UDH_MessageBus_OnBuriedActorDugUpSignature__DelegateSignature_Params params;
	params.Digsite = Digsite;
	params.BuriedActor = BuriedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnBearTrapPlacedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_InventoryPickup*     Trap                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnBearTrapPlacedSignature__DelegateSignature(class ADH_InventoryPickup* Trap)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnBearTrapPlacedSignature__DelegateSignature");

	UDH_MessageBus_OnBearTrapPlacedSignature__DelegateSignature_Params params;
	params.Trap = Trap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAvatarDraggedChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bDragged                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnAvatarDraggedChangedSignature__DelegateSignature(bool bDragged)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAvatarDraggedChangedSignature__DelegateSignature");

	UDH_MessageBus_OnAvatarDraggedChangedSignature__DelegateSignature_Params params;
	params.bDragged = bDragged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAvatarCreatedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_CosmeticPreviewAvatar* Avatar                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnAvatarCreatedSignature__DelegateSignature(class ADH_PlayerController* PlayerController, class ADH_CosmeticPreviewAvatar* Avatar)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAvatarCreatedSignature__DelegateSignature");

	UDH_MessageBus_OnAvatarCreatedSignature__DelegateSignature_Params params;
	params.PlayerController = PlayerController;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAvailableAudioDevicesChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnAvailableAudioDevicesChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAvailableAudioDevicesChangedSignature__DelegateSignature");

	UDH_MessageBus_OnAvailableAudioDevicesChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAddVivoxErrorSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDH_VivoxError          Error                          (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnAddVivoxErrorSignature__DelegateSignature(const struct FDH_VivoxError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAddVivoxErrorSignature__DelegateSignature");

	UDH_MessageBus_OnAddVivoxErrorSignature__DelegateSignature_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAddOnlineErrorSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FDH_OnlineError         Error                          (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::OnAddOnlineErrorSignature__DelegateSignature(const struct FDH_OnlineError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAddOnlineErrorSignature__DelegateSignature");

	UDH_MessageBus_OnAddOnlineErrorSignature__DelegateSignature_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAddDebugWidgetSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*             InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnAddDebugWidgetSignature__DelegateSignature(class UUserWidget* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAddDebugWidgetSignature__DelegateSignature");

	UDH_MessageBus_OnAddDebugWidgetSignature__DelegateSignature_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnActiveSpellsChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_SpellManager*        SpellManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::OnActiveSpellsChangedSignature__DelegateSignature(class ADH_SpellManager* SpellManager)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnActiveSpellsChangedSignature__DelegateSignature");

	UDH_MessageBus_OnActiveSpellsChangedSignature__DelegateSignature_Params params;
	params.SpellManager = SpellManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.OnAcceptedReconnectSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::OnAcceptedReconnectSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.OnAcceptedReconnectSignature__DelegateSignature");

	UDH_MessageBus_OnAcceptedReconnectSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.MessageBusOnNotifyHitSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_PlayerState*         InstigatorPlayerState          (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::MessageBusOnNotifyHitSignature__DelegateSignature(class ADH_PlayerState* InstigatorPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.MessageBusOnNotifyHitSignature__DelegateSignature");

	UDH_MessageBus_MessageBusOnNotifyHitSignature__DelegateSignature_Params params;
	params.InstigatorPlayerState = InstigatorPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.MatchStartedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::MatchStartedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.MatchStartedEvent__DelegateSignature");

	UDH_MessageBus_MatchStartedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.MatchEndedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UDH_MessageBus::MatchEndedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.MatchEndedEvent__DelegateSignature");

	UDH_MessageBus_MatchEndedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.HUDThrallMessageReceivedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDH_MessageBus::HUDThrallMessageReceivedEvent__DelegateSignature(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.HUDThrallMessageReceivedEvent__DelegateSignature");

	UDH_MessageBus_HUDThrallMessageReceivedEvent__DelegateSignature_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_MessageBus.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_MessageBus*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_MessageBus* UDH_MessageBus::GetInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MessageBus.GetInstance");

	UDH_MessageBus_GetInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction DreadHunger.DH_MessageBus.DisplayMatchEndMessageSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EPlayerTeam                    WinningTeam                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::DisplayMatchEndMessageSignature__DelegateSignature(EPlayerTeam WinningTeam, bool bWinner)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.DisplayMatchEndMessageSignature__DelegateSignature");

	UDH_MessageBus_DisplayMatchEndMessageSignature__DelegateSignature_Params params;
	params.WinningTeam = WinningTeam;
	params.bWinner = bWinner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DreadHunger.DH_MessageBus.AddWidgetToHUDSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*             WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// EDH_HUDLocationType            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_MessageBus::AddWidgetToHUDSignature__DelegateSignature(class UUserWidget* WidgetClass, EDH_HUDLocationType Location)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction DreadHunger.DH_MessageBus.AddWidgetToHUDSignature__DelegateSignature");

	UDH_MessageBus_AddWidgetToHUDSignature__DelegateSignature_Params params;
	params.WidgetClass = WidgetClass;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_MOTDTitleData.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EDH_MOTDType                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDH_MOTDType UDH_MOTDTitleData::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MOTDTitleData.GetType");

	UDH_MOTDTitleData_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MOTDTitleData.GetMOTD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDH_MOTDTitleData::GetMOTD()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MOTDTitleData.GetMOTD");

	UDH_MOTDTitleData_GetMOTD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MOTDTitleData.GetBackgroundColorOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UDH_MOTDTitleData::GetBackgroundColorOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MOTDTitleData.GetBackgroundColorOverride");

	UDH_MOTDTitleData_GetBackgroundColorOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_MouseCursorComponent.Reset
// (Final, Native, Public, BlueprintCallable)

void UDH_MouseCursorComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MouseCursorComponent.Reset");

	UDH_MouseCursorComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_MouseCursorComponent.PushShowMouseCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Shower                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MouseCursorComponent::PushShowMouseCursor(class UObject* Shower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MouseCursorComponent.PushShowMouseCursor");

	UDH_MouseCursorComponent_PushShowMouseCursor_Params params;
	params.Shower = Shower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_MouseCursorComponent.PopShowMouseCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Shower                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_MouseCursorComponent::PopShowMouseCursor(class UObject* Shower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MouseCursorComponent.PopShowMouseCursor");

	UDH_MouseCursorComponent_PopShowMouseCursor_Params params;
	params.Shower = Shower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_MouseDragModifiersComponent.GetSingleDropModifierKeyHeld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_MouseDragModifiersComponent::GetSingleDropModifierKeyHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_MouseDragModifiersComponent.GetSingleDropModifierKeyHeld");

	UDH_MouseDragModifiersComponent_GetSingleDropModifierKeyHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_NitroInventory.OnCarrierDamaged
// (Final, Native, Private)
// Parameters:
// class AActor*                  InDamagedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             InDamageType                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InInstigatedBy                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDamageCauser                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_NitroInventory::OnCarrierDamaged(class AActor* InDamagedActor, float InDamage, class UDamageType* InDamageType, class AController* InInstigatedBy, class AActor* InDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_NitroInventory.OnCarrierDamaged");

	ADH_NitroInventory_OnCarrierDamaged_Params params;
	params.InDamagedActor = InDamagedActor;
	params.InDamage = InDamage;
	params.InDamageType = InDamageType;
	params.InInstigatedBy = InInstigatedBy;
	params.InDamageCauser = InDamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_NitroPickup.OnRep_LastDamageReceived
// (Final, Native, Private)

void ADH_NitroPickup::OnRep_LastDamageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_NitroPickup.OnRep_LastDamageReceived");

	ADH_NitroPickup_OnRep_LastDamageReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_NitroPickup.OnRep_BreakFlash
// (Final, Native, Private)

void ADH_NitroPickup::OnRep_BreakFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_NitroPickup.OnRep_BreakFlash");

	ADH_NitroPickup_OnRep_BreakFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Online.OnRunLoginStepsBegin
// (Final, Native, Private)

void UDH_Online::OnRunLoginStepsBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Online.OnRunLoginStepsBegin");

	UDH_Online_OnRunLoginStepsBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Online.GetLocalPlayerNickname
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_Online::GetLocalPlayerNickname(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Online.GetLocalPlayerNickname");

	UDH_Online_GetLocalPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_OnlineSession.OnPostLoadMapWithWorld
// (Final, Native, Private)
// Parameters:
// class UWorld*                  LoadedWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_OnlineSession::OnPostLoadMapWithWorld(class UWorld* LoadedWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineSession.OnPostLoadMapWithWorld");

	UDH_OnlineSession_OnPostLoadMapWithWorld_Params params;
	params.LoadedWorld = LoadedWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineSession.OnPlayerLogout
// (Final, Native, Private)
// Parameters:
// class AController*             ControllerLoggingOut           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_OnlineSession::OnPlayerLogout(class AController* ControllerLoggingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineSession.OnPlayerLogout");

	UDH_OnlineSession_OnPlayerLogout_Params params;
	params.ControllerLoggingOut = ControllerLoggingOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineSession.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_OnlineSession::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineSession.OnOnlineSessionUpdateComplete");

	UDH_OnlineSession_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineSession.OnMatchEnded
// (Final, Native, Private)

void UDH_OnlineSession::OnMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineSession.OnMatchEnded");

	UDH_OnlineSession_OnMatchEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineSettingsJsonSaveData.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_OnlineSettingsJsonSaveData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_OnlineSettingsJsonSaveData* UDH_OnlineSettingsJsonSaveData::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineSettingsJsonSaveData.GetInstance");

	UDH_OnlineSettingsJsonSaveData_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_OnlineSettingsSaveGame.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_OnlineSettingsSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_OnlineSettingsSaveGame* UDH_OnlineSettingsSaveGame::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineSettingsSaveGame.GetInstance");

	UDH_OnlineSettingsSaveGame_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_OnlineVoice.OnPlayerAddedToGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_OnlineVoice::OnPlayerAddedToGame(class ADH_PlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineVoice.OnPlayerAddedToGame");

	UDH_OnlineVoice_OnPlayerAddedToGame_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineVoice.OnOnlineVoiceInputDeviceNameChanged
// (Final, Native, Protected)
// Parameters:
// class FString                  NewValue                       (Parm, ZeroConstructor)

void UDH_OnlineVoice::OnOnlineVoiceInputDeviceNameChanged(const class FString& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineVoice.OnOnlineVoiceInputDeviceNameChanged");

	UDH_OnlineVoice_OnOnlineVoiceInputDeviceNameChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineVoice.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void UDH_OnlineVoice::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineVoice.OnOnlineSessionUpdateComplete");

	UDH_OnlineVoice_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_OnlineVoice.OnGameAudioVOIPVolumeChanged
// (Final, Native, Protected, Const)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_OnlineVoice::OnGameAudioVOIPVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_OnlineVoice.OnGameAudioVOIPVolumeChanged");

	UDH_OnlineVoice_OnGameAudioVOIPVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PackIce.RemoveClosestChunks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         WorldPositions                 (ConstParm, Parm, ZeroConstructor)

void ADH_PackIce::RemoveClosestChunks(TArray<struct FVector> WorldPositions)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PackIce.RemoveClosestChunks");

	ADH_PackIce_RemoveClosestChunks_Params params;
	params.WorldPositions = WorldPositions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PackIce.OnRep_RemovedChunks
// (Final, Native, Private)

void ADH_PackIce::OnRep_RemovedChunks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PackIce.OnRep_RemovedChunks");

	ADH_PackIce_OnRep_RemovedChunks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Phonograph.GetSongIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ADH_Phonograph::GetSongIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Phonograph.GetSongIndex");

	ADH_Phonograph_GetSongIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Phonograph_Stationary.OnRep_SongIndex
// (Final, Native, Private)

void ADH_Phonograph_Stationary::OnRep_SongIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Phonograph_Stationary.OnRep_SongIndex");

	ADH_Phonograph_Stationary_OnRep_SongIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Phonograph_Stationary.OnRep_DamageFlash
// (Final, Native, Private)

void ADH_Phonograph_Stationary::OnRep_DamageFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Phonograph_Stationary.OnRep_DamageFlash");

	ADH_Phonograph_Stationary_OnRep_DamageFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PhysicsBuoy.OnRep_HitFlash
// (Final, Native, Private)

void ADH_PhysicsBuoy::OnRep_HitFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PhysicsBuoy.OnRep_HitFlash");

	ADH_PhysicsBuoy_OnRep_HitFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerCareerCloudSaveData.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_PlayerCareerCloudSaveData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerCareerCloudSaveData* UDH_PlayerCareerCloudSaveData::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerCareerCloudSaveData.GetInstance");

	UDH_PlayerCareerCloudSaveData_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerCareerSaveGame.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_PlayerCareerSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerCareerSaveGame* UDH_PlayerCareerSaveGame::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerCareerSaveGame.GetInstance");

	UDH_PlayerCareerSaveGame_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerControllerBase.PushUIInputMode
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UWidget*                 WidgetToFocus                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bGameAndUI                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerControllerBase::PushUIInputMode(class UWidget* WidgetToFocus, bool bGameAndUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerControllerBase.PushUIInputMode");

	ADH_PlayerControllerBase_PushUIInputMode_Params params;
	params.WidgetToFocus = WidgetToFocus;
	params.bGameAndUI = bGameAndUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerControllerBase.PushShowMouseCursor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                 Shower                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerControllerBase::PushShowMouseCursor(class UObject* Shower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerControllerBase.PushShowMouseCursor");

	ADH_PlayerControllerBase_PushShowMouseCursor_Params params;
	params.Shower = Shower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerControllerBase.PopUIInputMode
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UWidget*                 WidgetToUnfocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_PlayerControllerBase::PopUIInputMode(class UWidget* WidgetToUnfocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerControllerBase.PopUIInputMode");

	ADH_PlayerControllerBase_PopUIInputMode_Params params;
	params.WidgetToUnfocus = WidgetToUnfocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerControllerBase.PopShowMouseCursor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                 Shower                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerControllerBase::PopShowMouseCursor(class UObject* Shower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerControllerBase.PopShowMouseCursor");

	ADH_PlayerControllerBase_PopShowMouseCursor_Params params;
	params.Shower = Shower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerControllerBase.ClientPrintLog
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class FString                  Text                           (Parm, ZeroConstructor)

void ADH_PlayerControllerBase::ClientPrintLog(const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerControllerBase.ClientPrintLog");

	ADH_PlayerControllerBase_ClientPrintLog_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.TakeHallucinationDamage
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// float                          Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::TakeHallucinationDamage(float Amount, class UDamageType* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.TakeHallucinationDamage");

	ADH_PlayerController_TakeHallucinationDamage_Params params;
	params.Amount = Amount;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ShowPreGameInstructions
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ThrallCount                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::ShowPreGameInstructions(int ThrallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ShowPreGameInstructions");

	ADH_PlayerController_ShowPreGameInstructions_Params params;
	params.ThrallCount = ThrallCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetSpellSelecting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewSelectingSpell             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetSpellSelecting(bool bNewSelectingSpell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetSpellSelecting");

	ADH_PlayerController_SetSpellSelecting_Params params;
	params.bNewSelectingSpell = bNewSelectingSpell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetSpellCasting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_TotemSpell*          Spell                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetSpellCasting(class UDH_TotemSpell* Spell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetSpellCasting");

	ADH_PlayerController_SetSpellCasting_Params params;
	params.Spell = Spell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetShipThrust
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// float                          NewIsThrottle                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetShipThrust(float NewIsThrottle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetShipThrust");

	ADH_PlayerController_SetShipThrust_Params params;
	params.NewIsThrottle = NewIsThrottle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetShipBoosting
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// bool                           bNewIsBoosting                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetShipBoosting(bool bNewIsBoosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetShipBoosting");

	ADH_PlayerController_SetShipBoosting_Params params;
	params.bNewIsBoosting = bNewIsBoosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetPrestigeLevel
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// int                            NewPrestigeLevel               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetPrestigeLevel(int NewPrestigeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetPrestigeLevel");

	ADH_PlayerController_SetPrestigeLevel_Params params;
	params.NewPrestigeLevel = NewPrestigeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetPlayerRole_Simulated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_PlayerRoleData*      NewRole                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetPlayerRole_Simulated(class UDH_PlayerRoleData* NewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetPlayerRole_Simulated");

	ADH_PlayerController_SetPlayerRole_Simulated_Params params;
	params.NewRole = NewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetPlayerRole
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UDH_PlayerRoleData*      NewRole                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetPlayerRole(class UDH_PlayerRoleData* NewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetPlayerRole");

	ADH_PlayerController_SetPlayerRole_Params params;
	params.NewRole = NewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetEquippedTalismans
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<class UDH_PlayerTalisman*> InTalismans                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADH_PlayerController::SetEquippedTalismans(TArray<class UDH_PlayerTalisman*> InTalismans)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetEquippedTalismans");

	ADH_PlayerController_SetEquippedTalismans_Params params;
	params.InTalismans = InTalismans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetEquippedSpells
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<class UDH_TotemSpell*>  InSpells                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADH_PlayerController::SetEquippedSpells(TArray<class UDH_TotemSpell*> InSpells)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetEquippedSpells");

	ADH_PlayerController_SetEquippedSpells_Params params;
	params.InSpells = InSpells;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetEquippedShipCosmetics
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<struct FEquippedShipCosmetics> NewItems                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADH_PlayerController::SetEquippedShipCosmetics(TArray<struct FEquippedShipCosmetics> NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetEquippedShipCosmetics");

	ADH_PlayerController_SetEquippedShipCosmetics_Params params;
	params.NewItems = NewItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetEquippedCosmetics
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<struct FEquippedPlayerCosmetics> NewItems                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADH_PlayerController::SetEquippedCosmetics(TArray<struct FEquippedPlayerCosmetics> NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetEquippedCosmetics");

	ADH_PlayerController_SetEquippedCosmetics_Params params;
	params.NewItems = NewItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetDesiresThrallVision
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                           bNewDesiresThrallVision        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetDesiresThrallVision(bool bNewDesiresThrallVision)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetDesiresThrallVision");

	ADH_PlayerController_SetDesiresThrallVision_Params params;
	params.bNewDesiresThrallVision = bNewDesiresThrallVision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetCraftingPreview
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UDH_CraftingRecipe*      NewRecipe                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearPreview                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetCraftingPreview(class UDH_CraftingRecipe* NewRecipe, bool bClearPreview)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetCraftingPreview");

	ADH_PlayerController_SetCraftingPreview_Params params;
	params.NewRecipe = NewRecipe;
	params.bClearPreview = bClearPreview;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetAllPlayersRole_Simulated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_PlayerRoleData*      NewRole                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetAllPlayersRole_Simulated(class UDH_PlayerRoleData* NewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetAllPlayersRole_Simulated");

	ADH_PlayerController_SetAllPlayersRole_Simulated_Params params;
	params.NewRole = NewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SetAllPlayersRole
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UDH_PlayerRoleData*      NewRole                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SetAllPlayersRole(class UDH_PlayerRoleData* NewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SetAllPlayersRole");

	ADH_PlayerController_SetAllPlayersRole_Params params;
	params.NewRole = NewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ServerCheat
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void ADH_PlayerController::ServerCheat(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ServerCheat");

	ADH_PlayerController_ServerCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SendThrallMessage_Simulated
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_PlayerController::SendThrallMessage_Simulated(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SendThrallMessage_Simulated");

	ADH_PlayerController_SendThrallMessage_Simulated_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SendThrallMessage
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, ReferenceParm)

void ADH_PlayerController::SendThrallMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SendThrallMessage");

	ADH_PlayerController_SendThrallMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.SaveMapCompletion
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UDH_MapData*             MapData                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::SaveMapCompletion(class UDH_MapData* MapData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.SaveMapCompletion");

	ADH_PlayerController_SaveMapCompletion_Params params;
	params.MapData = MapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ResetAchievements
// (Final, Exec, Native, Public)

void ADH_PlayerController::ResetAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ResetAchievements");

	ADH_PlayerController_ResetAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.RemoveKickExemption
// (Net, NetReliable, Native, Event, Public, NetServer)

void ADH_PlayerController::RemoveKickExemption()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.RemoveKickExemption");

	ADH_PlayerController_RemoveKickExemption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.RecordVersionMismatch
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FDHCompleteVersion      ClientVersion                  (ConstParm, Parm, ReferenceParm)
// class FString                  PlayerName                     (Parm, ZeroConstructor)

void ADH_PlayerController::RecordVersionMismatch(const struct FDHCompleteVersion& ClientVersion, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.RecordVersionMismatch");

	ADH_PlayerController_RecordVersionMismatch_Params params;
	params.ClientVersion = ClientVersion;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ReceiveWinningHand
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FPlayingCardHand        WinningHand                    (ConstParm, Parm, ReferenceParm)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm, ReferenceParm)

void ADH_PlayerController::ReceiveWinningHand(const struct FPlayingCardHand& WinningHand, class USoundBase* Sound, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ReceiveWinningHand");

	ADH_PlayerController_ReceiveWinningHand_Params params;
	params.WinningHand = WinningHand;
	params.Sound = Sound;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ReceiveThrallMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, ReferenceParm)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::ReceiveThrallMessage(const struct FText& Message, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ReceiveThrallMessage");

	ADH_PlayerController_ReceiveThrallMessage_Params params;
	params.Message = Message;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ReceiveGameplayMessage
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, ReferenceParm)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (ConstParm, Parm, ReferenceParm)

void ADH_PlayerController::ReceiveGameplayMessage(const struct FText& Message, class USoundBase* Sound, class UTexture2D* Image, const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ReceiveGameplayMessage");

	ADH_PlayerController_ReceiveGameplayMessage_Params params;
	params.Message = Message;
	params.Sound = Sound;
	params.Image = Image;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.PushIgnoreLookInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Suppressor                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::PushIgnoreLookInput(class UObject* Suppressor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.PushIgnoreLookInput");

	ADH_PlayerController_PushIgnoreLookInput_Params params;
	params.Suppressor = Suppressor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.PressedAttack_Simulated
// (Final, Native, Public, BlueprintCallable)

void ADH_PlayerController::PressedAttack_Simulated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.PressedAttack_Simulated");

	ADH_PlayerController_PressedAttack_Simulated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.PopIgnoreLookInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Suppressor                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::PopIgnoreLookInput(class UObject* Suppressor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.PopIgnoreLookInput");

	ADH_PlayerController_PopIgnoreLookInput_Params params;
	params.Suppressor = Suppressor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.OnRep_UsingThrallVision
// (Final, Native, Private)

void ADH_PlayerController::OnRep_UsingThrallVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.OnRep_UsingThrallVision");

	ADH_PlayerController_OnRep_UsingThrallVision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.OnPlayerSpellsChanged
// (Final, Native, Public)
// Parameters:
// class ADH_SpellManager*        InSpellManager                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::OnPlayerSpellsChanged(class ADH_SpellManager* InSpellManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.OnPlayerSpellsChanged");

	ADH_PlayerController_OnPlayerSpellsChanged_Params params;
	params.InSpellManager = InSpellManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.OnMatchStateChanged
// (Final, Native, Private)
// Parameters:
// class ADH_GameState*           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::OnMatchStateChanged(class ADH_GameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.OnMatchStateChanged");

	ADH_PlayerController_OnMatchStateChanged_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.OnMatchEnded
// (Final, Native, Public)

void ADH_PlayerController::OnMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.OnMatchEnded");

	ADH_PlayerController_OnMatchEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.OnInvitationSent
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::OnInvitationSent(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.OnInvitationSent");

	ADH_PlayerController_OnInvitationSent_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.IsUsingThrallVision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::IsUsingThrallVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.IsUsingThrallVision");

	ADH_PlayerController_IsUsingThrallVision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.IsSelectingSpell
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::IsSelectingSpell()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.IsSelectingSpell");

	ADH_PlayerController_IsSelectingSpell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.IsLooting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::IsLooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.IsLooting");

	ADH_PlayerController_IsLooting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GrantAchievement
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// struct FName                   AchievementName                (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::GrantAchievement(const struct FName& AchievementName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GrantAchievement");

	ADH_PlayerController_GrantAchievement_Params params;
	params.AchievementName = AchievementName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.GetWantsToTalk
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::GetWantsToTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetWantsToTalk");

	ADH_PlayerController_GetWantsToTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetSuicideComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_SuicideComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_SuicideComponent* ADH_PlayerController::GetSuicideComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetSuicideComponent");

	ADH_PlayerController_GetSuicideComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetShowUI
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::GetShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetShowUI");

	ADH_PlayerController_GetShowUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetShowHotbar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::GetShowHotbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetShowHotbar");

	ADH_PlayerController_GetShowHotbar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetSelectedHotbarIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_PlayerController::GetSelectedHotbarIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetSelectedHotbarIndex");

	ADH_PlayerController_GetSelectedHotbarIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetPlayerViewPoint
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 out_Location                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                out_Rotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetPlayerViewPoint");

	ADH_PlayerController_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;
}


// Function DreadHunger.DH_PlayerController.GetMouseDragModifiersComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_MouseDragModifiersComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_MouseDragModifiersComponent* ADH_PlayerController::GetMouseDragModifiersComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetMouseDragModifiersComponent");

	ADH_PlayerController_GetMouseDragModifiersComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetListenerPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutFrontDir                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutRightDir                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::GetListenerPosition(struct FVector* OutLocation, struct FVector* OutFrontDir, struct FVector* OutRightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetListenerPosition");

	ADH_PlayerController_GetListenerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutFrontDir != nullptr)
		*OutFrontDir = params.OutFrontDir;
	if (OutRightDir != nullptr)
		*OutRightDir = params.OutRightDir;
}


// Function DreadHunger.DH_PlayerController.GetInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_InventoryManager*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_InventoryManager* ADH_PlayerController::GetInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetInventory");

	ADH_PlayerController_GetInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetGroundCraftingProjectComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_GroundCraftingProjectComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_GroundCraftingProjectComponent* ADH_PlayerController::GetGroundCraftingProjectComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetGroundCraftingProjectComponent");

	ADH_PlayerController_GetGroundCraftingProjectComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetDHPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_PlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_PlayerState* ADH_PlayerController::GetDHPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetDHPlayerState");

	ADH_PlayerController_GetDHPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetDHGameState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_GameState*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_GameState* ADH_PlayerController::GetDHGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetDHGameState");

	ADH_PlayerController_GetDHGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetCurrentSpellCasting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_TotemSpell* ADH_PlayerController::GetCurrentSpellCasting()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetCurrentSpellCasting");

	ADH_PlayerController_GetCurrentSpellCasting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.GetControlledDoppelganger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* ADH_PlayerController::GetControlledDoppelganger()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.GetControlledDoppelganger");

	ADH_PlayerController_GetControlledDoppelganger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.DisplayMatchEndMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// EPlayerTeam                    WinningTeam                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinner                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::DisplayMatchEndMessage(EPlayerTeam WinningTeam, bool bWinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.DisplayMatchEndMessage");

	ADH_PlayerController_DisplayMatchEndMessage_Params params;
	params.WinningTeam = WinningTeam;
	params.bWinner = bWinner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.DeclineBrigRelease
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void ADH_PlayerController::DeclineBrigRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.DeclineBrigRelease");

	ADH_PlayerController_DeclineBrigRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.Craft_Simulated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingComponent*   CraftingComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_CraftingRecipe*      CraftingProject                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerController::Craft_Simulated(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingRecipe* CraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.Craft_Simulated");

	ADH_PlayerController_Craft_Simulated_Params params;
	params.CraftingComp = CraftingComp;
	params.CraftingProject = CraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerController.Craft
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UDH_CraftingComponent*   CraftingComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_CraftingRecipe*      CraftingProject                (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::Craft(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingRecipe* CraftingProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.Craft");

	ADH_PlayerController_Craft_Params params;
	params.CraftingComp = CraftingComp;
	params.CraftingProject = CraftingProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ClientSetPlayerRole
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UDH_PlayerRoleData*      NewRole                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::ClientSetPlayerRole(class UDH_PlayerRoleData* NewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ClientSetPlayerRole");

	ADH_PlayerController_ClientSetPlayerRole_Params params;
	params.NewRole = NewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ChooseRoleSelection
// (Net, NetReliable, Native, Event, Public, NetClient)

void ADH_PlayerController::ChooseRoleSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ChooseRoleSelection");

	ADH_PlayerController_ChooseRoleSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.Cheat
// (Final, Exec, Native, Protected)
// Parameters:
// class FString                  Msg                            (ConstParm, Parm, ZeroConstructor)

void ADH_PlayerController::Cheat(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.Cheat");

	ADH_PlayerController_Cheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.ChangeShipYawDirection
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// int8_t                         NewYawDirection                (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::ChangeShipYawDirection(int8_t NewYawDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.ChangeShipYawDirection");

	ADH_PlayerController_ChangeShipYawDirection_Params params;
	params.NewYawDirection = NewYawDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.CastTotemSpell
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::CastTotemSpell(class UDH_TotemSpell* Spell, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.CastTotemSpell");

	ADH_PlayerController_CastTotemSpell_Params params;
	params.Spell = Spell;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.AddShowOnlyActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::AddShowOnlyActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.AddShowOnlyActor");

	ADH_PlayerController_AddShowOnlyActor_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.AddKickExemption
// (Net, NetReliable, Native, Event, Public, NetServer)

void ADH_PlayerController::AddKickExemption()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.AddKickExemption");

	ADH_PlayerController_AddKickExemption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.AbortProject_Simulated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_CraftingComponent*   CraftingComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_CraftingProject*     AbortedProject                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::AbortProject_Simulated(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingProject* AbortedProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.AbortProject_Simulated");

	ADH_PlayerController_AbortProject_Simulated_Params params;
	params.CraftingComp = CraftingComp;
	params.AbortedProject = AbortedProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerController.AbortProject
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UDH_CraftingComponent*   CraftingComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_CraftingProject*     AbortedProject                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerController::AbortProject(class UDH_CraftingComponent* CraftingComp, class UDH_CraftingProject* AbortedProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerController.AbortProject");

	ADH_PlayerController_AbortProject_Params params;
	params.CraftingComp = CraftingComp;
	params.AbortedProject = AbortedProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerMatchStat.GetScoreModifiers
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADH_PlayerState*         ScoringPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_PlayerMatchStat::GetScoreModifiers(class ADH_PlayerState* ScoringPlayer, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerMatchStat.GetScoreModifiers");

	UDH_PlayerMatchStat_GetScoreModifiers_Params params;
	params.ScoringPlayer = ScoringPlayer;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerReviveStation.UpdateColorMaskFriendly
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      LocalHuman                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerReviveStation::UpdateColorMaskFriendly(class ADH_HumanCharacter* LocalHuman)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerReviveStation.UpdateColorMaskFriendly");

	ADH_PlayerReviveStation_UpdateColorMaskFriendly_Params params;
	params.LocalHuman = LocalHuman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerReviveStation.OnLocalHumanChanged
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerReviveStation::OnLocalHumanChanged(class ADH_PlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerReviveStation.OnLocalHumanChanged");

	ADH_PlayerReviveStation_OnLocalHumanChanged_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerRoleData.GetAllRoles
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDH_PlayerRoleData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static TArray<class UDH_PlayerRoleData*> UDH_PlayerRoleData::GetAllRoles(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerRoleData.GetAllRoles");

	UDH_PlayerRoleData_GetAllRoles_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerRoleData.FindByType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerTeamRole                InType                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_PlayerRoleData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerRoleData* UDH_PlayerRoleData::FindByType(EPlayerTeamRole InType, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerRoleData.FindByType");

	UDH_PlayerRoleData_FindByType_Params params;
	params.InType = InType;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerRoleData.FindByName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InName                         (Parm, ZeroConstructor)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_PlayerRoleData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerRoleData* UDH_PlayerRoleData::FindByName(const class FString& InName, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerRoleData.FindByName");

	UDH_PlayerRoleData_FindByName_Params params;
	params.InName = InName;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerSession.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_PlayerSession*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerSession* UDH_PlayerSession::GetInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerSession.GetInstance");

	UDH_PlayerSession_GetInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerSettingsJsonSaveData.RemoveNamedServerAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void UDH_PlayerSettingsJsonSaveData::RemoveNamedServerAddress(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerSettingsJsonSaveData.RemoveNamedServerAddress");

	UDH_PlayerSettingsJsonSaveData_RemoveNamedServerAddress_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerSettingsJsonSaveData.GetNamedServerAddress
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// TArray<unsigned char>          Out_IPAddress                  (Parm, OutParm, ZeroConstructor)
// int                            Out_Port                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_PlayerSettingsJsonSaveData::GetNamedServerAddress(const class FString& Name, TArray<unsigned char>* Out_IPAddress, int* Out_Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerSettingsJsonSaveData.GetNamedServerAddress");

	UDH_PlayerSettingsJsonSaveData_GetNamedServerAddress_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_IPAddress != nullptr)
		*Out_IPAddress = params.Out_IPAddress;
	if (Out_Port != nullptr)
		*Out_Port = params.Out_Port;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerSettingsJsonSaveData.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_PlayerSettingsJsonSaveData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PlayerSettingsJsonSaveData* UDH_PlayerSettingsJsonSaveData::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerSettingsJsonSaveData.GetInstance");

	UDH_PlayerSettingsJsonSaveData_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerSettingsJsonSaveData.AddNamedServerAddress
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// TArray<unsigned char>          IPAddress                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Port                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_PlayerSettingsJsonSaveData::AddNamedServerAddress(const class FString& Name, TArray<unsigned char> IPAddress, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerSettingsJsonSaveData.AddNamedServerAddress");

	UDH_PlayerSettingsJsonSaveData_AddNamedServerAddress_Params params;
	params.Name = Name;
	params.IPAddress = IPAddress;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.SetPlayerRole
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_PlayerRoleData*      NewStartingRole                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBroadcastNotification         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerState::SetPlayerRole(class UDH_PlayerRoleData* NewStartingRole, bool bBroadcastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.SetPlayerRole");

	ADH_PlayerState_SetPlayerRole_Params params;
	params.NewStartingRole = NewStartingRole;
	params.bBroadcastNotification = bBroadcastNotification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.RollForTrinket
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bWildlifeTable                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADH_Inventory*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Inventory* ADH_PlayerState::RollForTrinket(bool bWildlifeTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.RollForTrinket");

	ADH_PlayerState_RollForTrinket_Params params;
	params.bWildlifeTable = bWildlifeTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.OnRep_SpellManager
// (Final, Native, Private)

void ADH_PlayerState::OnRep_SpellManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_SpellManager");

	ADH_PlayerState_OnRep_SpellManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_SelectedRole
// (Native, Event, Public, BlueprintEvent)

void ADH_PlayerState::OnRep_SelectedRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_SelectedRole");

	ADH_PlayerState_OnRep_SelectedRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_QuestState
// (Final, Native, Private)

void ADH_PlayerState::OnRep_QuestState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_QuestState");

	ADH_PlayerState_OnRep_QuestState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_ProgressData
// (Final, Native, Private, Const)

void ADH_PlayerState::OnRep_ProgressData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_ProgressData");

	ADH_PlayerState_OnRep_ProgressData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_PrestigeLevel
// (Final, Native, Public)

void ADH_PlayerState::OnRep_PrestigeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_PrestigeLevel");

	ADH_PlayerState_OnRep_PrestigeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_PoisonedItemUIDs
// (Final, Native, Private, Const)

void ADH_PlayerState::OnRep_PoisonedItemUIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_PoisonedItemUIDs");

	ADH_PlayerState_OnRep_PoisonedItemUIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_OwnedTotems
// (Final, Native, Private)

void ADH_PlayerState::OnRep_OwnedTotems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_OwnedTotems");

	ADH_PlayerState_OnRep_OwnedTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_OtherThralls
// (Final, Native, Private)

void ADH_PlayerState::OnRep_OtherThralls()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_OtherThralls");

	ADH_PlayerState_OnRep_OtherThralls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_KnownArmoryCodes
// (Final, Native, Private)

void ADH_PlayerState::OnRep_KnownArmoryCodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_KnownArmoryCodes");

	ADH_PlayerState_OnRep_KnownArmoryCodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_IsThrall
// (Final, Native, Private)

void ADH_PlayerState::OnRep_IsThrall()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_IsThrall");

	ADH_PlayerState_OnRep_IsThrall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_IsDisconnected
// (Final, Native, Private)

void ADH_PlayerState::OnRep_IsDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_IsDisconnected");

	ADH_PlayerState_OnRep_IsDisconnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_IsDead
// (Final, Native, Private)

void ADH_PlayerState::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_IsDead");

	ADH_PlayerState_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_GloballyMuted
// (Final, Native, Private)

void ADH_PlayerState::OnRep_GloballyMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_GloballyMuted");

	ADH_PlayerState_OnRep_GloballyMuted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_EquippedCosmeticItems
// (Final, Native, Private)

void ADH_PlayerState::OnRep_EquippedCosmeticItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_EquippedCosmeticItems");

	ADH_PlayerState_OnRep_EquippedCosmeticItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_DeathCount
// (Final, Native, Private)

void ADH_PlayerState::OnRep_DeathCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_DeathCount");

	ADH_PlayerState_OnRep_DeathCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.OnRep_CannibalLevel
// (Final, Native, Private)

void ADH_PlayerState::OnRep_CannibalLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.OnRep_CannibalLevel");

	ADH_PlayerState_OnRep_CannibalLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.ModifySpellChargeLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerState::ModifySpellChargeLevel(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.ModifySpellChargeLevel");

	ADH_PlayerState_ModifySpellChargeLevel_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.ModifyMatchStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerMatchStatType           Stat                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScoreAfterShipEscaped         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_PlayerState::ModifyMatchStat(EPlayerMatchStatType Stat, int Delta, class AActor* Target, bool bScoreAfterShipEscaped)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.ModifyMatchStat");

	ADH_PlayerState_ModifyMatchStat_Params params;
	params.Stat = Stat;
	params.Delta = Delta;
	params.Target = Target;
	params.bScoreAfterShipEscaped = bScoreAfterShipEscaped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayerState.IsThrall
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerState::IsThrall()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.IsThrall");

	ADH_PlayerState_IsThrall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.IsRecipeExhausted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDH_CraftingRecipe*      Recipe                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerState::IsRecipeExhausted(class UDH_CraftingRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.IsRecipeExhausted");

	ADH_PlayerState_IsRecipeExhausted_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.IsItemPoisoned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemUID                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerState::IsItemPoisoned(int ItemUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.IsItemPoisoned");

	ADH_PlayerState_IsItemPoisoned_Params params;
	params.ItemUID = ItemUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerState::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.IsDead");

	ADH_PlayerState_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.IsCannibal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PlayerState::IsCannibal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.IsCannibal");

	ADH_PlayerState_IsCannibal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetSpellCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TotemSpell*          SpellType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_PlayerState::GetSpellCooldown(class UDH_TotemSpell* SpellType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetSpellCooldown");

	ADH_PlayerState_GetSpellCooldown_Params params;
	params.SpellType = SpellType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetSpellChargeTier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ETotemSpellTiers               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETotemSpellTiers ADH_PlayerState::GetSpellChargeTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetSpellChargeTier");

	ADH_PlayerState_GetSpellChargeTier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetSpellChargeLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_PlayerState::GetSpellChargeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetSpellChargeLevel");

	ADH_PlayerState_GetSpellChargeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetPlayerTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerTeam                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerTeam ADH_PlayerState::GetPlayerTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetPlayerTeam");

	ADH_PlayerState_GetPlayerTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetPlayerRoleData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_PlayerRoleData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_PlayerRoleData* ADH_PlayerState::GetPlayerRoleData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetPlayerRoleData");

	ADH_PlayerState_GetPlayerRoleData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetPlayerRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerTeamRole                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerTeamRole ADH_PlayerState::GetPlayerRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetPlayerRole");

	ADH_PlayerState_GetPlayerRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetOwnedTotemsOfType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ADH_ThrallTotem*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ADH_ThrallTotem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ADH_ThrallTotem*> ADH_PlayerState::GetOwnedTotemsOfType(class ADH_ThrallTotem* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetOwnedTotemsOfType");

	ADH_PlayerState_GetOwnedTotemsOfType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetOwnedTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ADH_ThrallTotem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ADH_ThrallTotem*> ADH_PlayerState::GetOwnedTotems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetOwnedTotems");

	ADH_PlayerState_GetOwnedTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetEquippedCosmeticItemsForRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerTeamRole                InRole                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FEquippedPlayerCosmetics ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEquippedPlayerCosmetics ADH_PlayerState::GetEquippedCosmeticItemsForRole(EPlayerTeamRole InRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetEquippedCosmeticItemsForRole");

	ADH_PlayerState_GetEquippedCosmeticItemsForRole_Params params;
	params.InRole = InRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetDeathCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_PlayerState::GetDeathCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetDeathCount");

	ADH_PlayerState_GetDeathCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetControlledDoppelganger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* ADH_PlayerState::GetControlledDoppelganger()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetControlledDoppelganger");

	ADH_PlayerState_GetControlledDoppelganger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetCannibalLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_PlayerState::GetCannibalLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetCannibalLevel");

	ADH_PlayerState_GetCannibalLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayerState.GetActiveSpellsOfType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TotemSpell*          Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDH_TotemSpell*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UDH_TotemSpell*> ADH_PlayerState::GetActiveSpellsOfType(class UDH_TotemSpell* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayerState.GetActiveSpellsOfType");

	ADH_PlayerState_GetActiveSpellsOfType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PlayingCard.SetProperties
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPlayingCardProperties  InProperties                   (ConstParm, Parm, OutParm, ReferenceParm)

void ADH_PlayingCard::SetProperties(const struct FPlayingCardProperties& InProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayingCard.SetProperties");

	ADH_PlayingCard_SetProperties_Params params;
	params.InProperties = InProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayingCard.OnSelected
// (Native, Event, Public, BlueprintEvent)

void ADH_PlayingCard::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayingCard.OnSelected");

	ADH_PlayingCard_OnSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayingCard.OnPropertiesAssigned
// (Event, Public, BlueprintEvent)

void ADH_PlayingCard::OnPropertiesAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayingCard.OnPropertiesAssigned");

	ADH_PlayingCard_OnPropertiesAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayingCard.OnDeselected
// (Native, Event, Public, BlueprintEvent)

void ADH_PlayingCard::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayingCard.OnDeselected");

	ADH_PlayingCard_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PlayingCard.GetProperties
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayingCardProperties  OutProperties                  (Parm, OutParm)

void ADH_PlayingCard::GetProperties(struct FPlayingCardProperties* OutProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayingCard.GetProperties");

	ADH_PlayingCard_GetProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProperties != nullptr)
		*OutProperties = params.OutProperties;
}


// Function DreadHunger.DH_PlayingCard.GetFaceTexture
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ADH_PlayingCard::GetFaceTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PlayingCard.GetFaceTexture");

	ADH_PlayingCard_GetFaceTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PreviousMatchSaveGame.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDH_PreviousMatchSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_PreviousMatchSaveGame* UDH_PreviousMatchSaveGame::GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PreviousMatchSaveGame.GetInstance");

	UDH_PreviousMatchSaveGame_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.SimulatedPlayEmote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDH_LobbyEmote*          Emote                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PrisonerPawn::SimulatedPlayEmote(class UDH_LobbyEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.SimulatedPlayEmote");

	ADH_PrisonerPawn_SimulatedPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.ServerPlayEmote
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class UDH_LobbyEmote*          Emote                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PrisonerPawn::ServerPlayEmote(class UDH_LobbyEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.ServerPlayEmote");

	ADH_PrisonerPawn_ServerPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.OnRep_LastDHPlayerState
// (Final, Native, Private)

void ADH_PrisonerPawn::OnRep_LastDHPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.OnRep_LastDHPlayerState");

	ADH_PrisonerPawn_OnRep_LastDHPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.OnRep_IsDead
// (Final, Native, Private)

void ADH_PrisonerPawn::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.OnRep_IsDead");

	ADH_PrisonerPawn_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.OnPlayerReconnected
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         ReconnectingPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PrisonerPawn::OnPlayerReconnected(class ADH_PlayerState* ReconnectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.OnPlayerReconnected");

	ADH_PrisonerPawn_OnPlayerReconnected_Params params;
	params.ReconnectingPlayer = ReconnectingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.OnPlayerDisconnected
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         DisconnectingPlayer            (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PrisonerPawn::OnPlayerDisconnected(class ADH_PlayerState* DisconnectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.OnPlayerDisconnected");

	ADH_PrisonerPawn_OnPlayerDisconnected_Params params;
	params.DisconnectingPlayer = DisconnectingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.MulticastPlayEmote
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// class UDH_LobbyEmote*          Emote                          (Parm, ZeroConstructor, IsPlainOldData)

void ADH_PrisonerPawn::MulticastPlayEmote(class UDH_LobbyEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.MulticastPlayEmote");

	ADH_PrisonerPawn_MulticastPlayEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_PrisonerPawn.IsBeingFreed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_PrisonerPawn::IsBeingFreed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.IsBeingFreed");

	ADH_PrisonerPawn_IsBeingFreed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.GetStarvationPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_PrisonerPawn::GetStarvationPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.GetStarvationPct");

	ADH_PrisonerPawn_GetStarvationPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.GetPrisonerPawnAnimInst
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_PrisonerPawnAnimInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_PrisonerPawnAnimInstance* ADH_PrisonerPawn::GetPrisonerPawnAnimInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.GetPrisonerPawnAnimInst");

	ADH_PrisonerPawn_GetPrisonerPawnAnimInst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.GetPostProcessInteractStackNum
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADH_PrisonerPawn::GetPostProcessInteractStackNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.GetPostProcessInteractStackNum");

	ADH_PrisonerPawn_GetPostProcessInteractStackNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.GetBrigDoorUnlockComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_CraftingComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDH_CraftingComponent* ADH_PrisonerPawn::GetBrigDoorUnlockComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.GetBrigDoorUnlockComponent");

	ADH_PrisonerPawn_GetBrigDoorUnlockComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.GetBrig
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_BrigCell*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_BrigCell* ADH_PrisonerPawn::GetBrig()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.GetBrig");

	ADH_PrisonerPawn_GetBrig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_PrisonerPawn.BP_OnPostProcessInteractStackChanged
// (Event, Protected, BlueprintEvent)

void ADH_PrisonerPawn::BP_OnPostProcessInteractStackChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_PrisonerPawn.BP_OnPostProcessInteractStackChanged");

	ADH_PrisonerPawn_BP_OnPostProcessInteractStackChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Projectile.OnAttachParentDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Projectile::OnAttachParentDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Projectile.OnAttachParentDestroyed");

	ADH_Projectile_OnAttachParentDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_QuestState.OnRep_CurrentScore
// (Final, Native, Protected)

void ADH_QuestState::OnRep_CurrentScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_QuestState.OnRep_CurrentScore");

	ADH_QuestState_OnRep_CurrentScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_QuestState.OnRep_bCompleted
// (Final, Native, Protected)

void ADH_QuestState::OnRep_bCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_QuestState.OnRep_bCompleted");

	ADH_QuestState_OnRep_bCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_QuestState.OnQuestStateCurrentScoreChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_QuestState*          QuestState                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentScore                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_QuestState::OnQuestStateCurrentScoreChangedSignature__DelegateSignature(class ADH_QuestState* QuestState, int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_QuestState.OnQuestStateCurrentScoreChangedSignature__DelegateSignature");

	ADH_QuestState_OnQuestStateCurrentScoreChangedSignature__DelegateSignature_Params params;
	params.QuestState = QuestState;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// SparseDelegateFunction DreadHunger.DH_QuestState.OnQuestStateCompletedChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ADH_QuestState*          QuestState                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_QuestState::OnQuestStateCompletedChangedSignature__DelegateSignature(class ADH_QuestState* QuestState, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("SparseDelegateFunction DreadHunger.DH_QuestState.OnQuestStateCompletedChangedSignature__DelegateSignature");

	ADH_QuestState_OnQuestStateCompletedChangedSignature__DelegateSignature_Params params;
	params.QuestState = QuestState;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_QuestState.Increment
// (Final, Native, Public, BlueprintCallable)

void ADH_QuestState::Increment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_QuestState.Increment");

	ADH_QuestState_Increment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleCustomizationAvatar.OnShowRoleCustomization
// (Final, Native, Private)
// Parameters:
// bool                           bShow                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_RoleCustomizationAvatar::OnShowRoleCustomization(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleCustomizationAvatar.OnShowRoleCustomization");

	ADH_RoleCustomizationAvatar_OnShowRoleCustomization_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleCustomizationAvatar.MeshToAvatar
// (Final, Native, Private)

void ADH_RoleCustomizationAvatar::MeshToAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleCustomizationAvatar.MeshToAvatar");

	ADH_RoleCustomizationAvatar_MeshToAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.PlayerLeft
// (Final, Native, Private)
// Parameters:
// class AActor*                  LeavingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_RoleDealer::PlayerLeft(class AActor* LeavingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.PlayerLeft");

	ADH_RoleDealer_PlayerLeft_Params params;
	params.LeavingPlayer = LeavingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.OnWarshipReplicated
// (Final, Native, Private)
// Parameters:
// class ADH_Warship*             Warship                        (Parm, ZeroConstructor, IsPlainOldData)

void ADH_RoleDealer::OnWarshipReplicated(class ADH_Warship* Warship)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.OnWarshipReplicated");

	ADH_RoleDealer_OnWarshipReplicated_Params params;
	params.Warship = Warship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.OnRep_WinningPlayer
// (Final, Native, Private)

void ADH_RoleDealer::OnRep_WinningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.OnRep_WinningPlayer");

	ADH_RoleDealer_OnRep_WinningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.OnRep_TimeStats
// (Final, Native, Private)

void ADH_RoleDealer::OnRep_TimeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.OnRep_TimeStats");

	ADH_RoleDealer_OnRep_TimeStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.OnRep_PlayerHands
// (Final, Native, Private)

void ADH_RoleDealer::OnRep_PlayerHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.OnRep_PlayerHands");

	ADH_RoleDealer_OnRep_PlayerHands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.OnRep_GameEnded
// (Final, Native, Private)

void ADH_RoleDealer::OnRep_GameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.OnRep_GameEnded");

	ADH_RoleDealer_OnRep_GameEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.OnCardDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Card                           (Parm, ZeroConstructor, IsPlainOldData)

void ADH_RoleDealer::OnCardDestroyed(class AActor* Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.OnCardDestroyed");

	ADH_RoleDealer_OnCardDestroyed_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_RoleDealer.GetTimeStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FDH_PokerGameTimeStat> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FDH_PokerGameTimeStat> ADH_RoleDealer::GetTimeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RoleDealer.GetTimeStats");

	ADH_RoleDealer_GetTimeStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_RolePerkLevelCurve.GetNextRankExperience
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Experience                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_RolePerkLevelCurve::GetNextRankExperience(int Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RolePerkLevelCurve.GetNextRankExperience");

	UDH_RolePerkLevelCurve_GetNextRankExperience_Params params;
	params.Experience = Experience;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_RolePerkLevelCurve.GetCurrentRankExperience
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Experience                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDH_RolePerkLevelCurve::GetCurrentRankExperience(int Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RolePerkLevelCurve.GetCurrentRankExperience");

	UDH_RolePerkLevelCurve_GetCurrentRankExperience_Params params;
	params.Experience = Experience;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_RolePerkLevelCurve.ExperienceToRank
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          InExperience                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UDH_RolePerkLevelCurve::ExperienceToRank(float InExperience, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_RolePerkLevelCurve.ExperienceToRank");

	UDH_RolePerkLevelCurve_ExperienceToRank_Params params;
	params.InExperience = InExperience;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ShipCustomizationAvatar.OnCustomizationRegionChanged
// (Final, Native, Private)
// Parameters:
// EShipCustomizationRegion       InRegion                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_ShipCustomizationAvatar::OnCustomizationRegionChanged(EShipCustomizationRegion InRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ShipCustomizationAvatar.OnCustomizationRegionChanged");

	ADH_ShipCustomizationAvatar_OnCustomizationRegionChanged_Params params;
	params.InRegion = InRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_ShipCustomizationAvatar.OnAvatarDraggedChanged
// (Final, Native, Private)
// Parameters:
// bool                           bDragged                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_ShipCustomizationAvatar::OnAvatarDraggedChanged(bool bDragged)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ShipCustomizationAvatar.OnAvatarDraggedChanged");

	ADH_ShipCustomizationAvatar_OnAvatarDraggedChanged_Params params;
	params.bDragged = bDragged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SpawnVolume.GenerateSpawnPoints
// (Final, Native, Private)

void ADH_SpawnVolume::GenerateSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SpawnVolume.GenerateSpawnPoints");

	ADH_SpawnVolume_GenerateSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SpellManager.OnRep_SpellCooldowns
// (Final, Native, Private)

void ADH_SpellManager::OnRep_SpellCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SpellManager.OnRep_SpellCooldowns");

	ADH_SpellManager_OnRep_SpellCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SpellManager.OnRep_EquippedSpells
// (Final, Native, Private)

void ADH_SpellManager::OnRep_EquippedSpells()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SpellManager.OnRep_EquippedSpells");

	ADH_SpellManager_OnRep_EquippedSpells_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SpellManager.OnRep_ActiveSpells
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class UDH_TotemSpell*>  PreviousActiveSpells           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADH_SpellManager::OnRep_ActiveSpells(TArray<class UDH_TotemSpell*> PreviousActiveSpells)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SpellManager.OnRep_ActiveSpells");

	ADH_SpellManager_OnRep_ActiveSpells_Params params;
	params.PreviousActiveSpells = PreviousActiveSpells;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SpellManager.CastSpell
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          SpellType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CastingTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* ADH_SpellManager::CastSpell(class AActor* WorldContext, class UDH_TotemSpell* SpellType, class AActor* CastingTarget, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SpellManager.CastSpell");

	ADH_SpellManager_CastSpell_Params params;
	params.WorldContext = WorldContext;
	params.SpellType = SpellType;
	params.CastingTarget = CastingTarget;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Stove.OnStoveLit
// (Final, Native, Protected)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Stove::OnStoveLit(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Stove.OnStoveLit");

	ADH_Stove_OnStoveLit_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Stove.OnStoveDied
// (Final, Native, Protected)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_Stove::OnStoveDied(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Stove.OnStoveDied");

	ADH_Stove_OnStoveDied_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Stove.LightStove
// (Final, Native, Protected)
// Parameters:
// class UDH_CraftingProject*     StartupProject                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Stove::LightStove(class UDH_CraftingProject* StartupProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Stove.LightStove");

	ADH_Stove_LightStove_Params params;
	params.StartupProject = StartupProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SuicideComponent.Suicide
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDH_SuicideComponent::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SuicideComponent.Suicide");

	UDH_SuicideComponent_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_SuicideComponent.GetTimerAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_SuicideComponent::GetTimerAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SuicideComponent.GetTimerAlpha");

	UDH_SuicideComponent_GetTimerAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_SuicideComponent.GetCachedCanSuicide
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_SuicideComponent::GetCachedCanSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_SuicideComponent.GetCachedCanSuicide");

	UDH_SuicideComponent_GetCachedCanSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_ThrallTotem.CacheOwner
// (Final, Native, Public, BlueprintCallable)

void ADH_ThrallTotem::CacheOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_ThrallTotem.CacheOwner");

	ADH_ThrallTotem_CacheOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell.Whiteout
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* UDH_TotemSpell::Whiteout(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.Whiteout");

	UDH_TotemSpell_Whiteout_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.SpiritWalk
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* UDH_TotemSpell::SpiritWalk(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.SpiritWalk");

	UDH_TotemSpell_SpiritWalk_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.OnRep_Caster
// (Final, Native, Private)

void UDH_TotemSpell::OnRep_Caster()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.OnRep_Caster");

	UDH_TotemSpell_OnRep_Caster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell.OnExpired
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TotemSpell::OnExpired(class AActor* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.OnExpired");

	UDH_TotemSpell_OnExpired_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell.OnCast
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TotemSpell::OnCast(class AActor* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.OnCast");

	UDH_TotemSpell_OnCast_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell.Hush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* UDH_TotemSpell::Hush(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.Hush");

	UDH_TotemSpell_Hush_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.HasValidCastingTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  InCaster                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TotemSpell::HasValidCastingTarget(class AActor* InCaster, class AActor* InTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.HasValidCastingTarget");

	UDH_TotemSpell_HasValidCastingTarget_Params params;
	params.InCaster = InCaster;
	params.InTarget = InTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.GetPlayerCaster
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_PlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_PlayerState* UDH_TotemSpell::GetPlayerCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.GetPlayerCaster");

	UDH_TotemSpell_GetPlayerCaster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.GetGlobalActiveSpellCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDH_TotemSpell*          SpellClass                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UDH_TotemSpell::GetGlobalActiveSpellCount(class UDH_TotemSpell* SpellClass, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.GetGlobalActiveSpellCount");

	UDH_TotemSpell_GetGlobalActiveSpellCount_Params params;
	params.SpellClass = SpellClass;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDH_TotemSpell::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.GetDuration");

	UDH_TotemSpell_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.GetCastTier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ETotemSpellTiers               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETotemSpellTiers UDH_TotemSpell::GetCastTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.GetCastTier");

	UDH_TotemSpell_GetCastTier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.Gale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* UDH_TotemSpell::Gale(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.Gale");

	UDH_TotemSpell_Gale_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.Expire
// (Final, Native, Public, BlueprintCallable)

void UDH_TotemSpell::Expire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.Expire");

	UDH_TotemSpell_Expire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell.DoSpellEffects
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpellTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TotemSpell::DoSpellEffects(class AActor* SpellTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.DoSpellEffects");

	UDH_TotemSpell_DoSpellEffects_Params params;
	params.SpellTarget = SpellTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.Doppelganger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* UDH_TotemSpell::Doppelganger(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.Doppelganger");

	UDH_TotemSpell_Doppelganger_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.Cannibals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TotemSpell*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TotemSpell* UDH_TotemSpell::Cannibals(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.Cannibals");

	UDH_TotemSpell_Cannibals_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell.CanCast
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InCaster                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TotemSpell::CanCast(class AActor* InCaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell.CanCast");

	UDH_TotemSpell_CanCast_Params params;
	params.InCaster = InCaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TotemSpell_Summoning.SummonAI
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class ADH_Character*           Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TotemSpell_Summoning::SummonAI(class ADH_Character* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell_Summoning.SummonAI");

	UDH_TotemSpell_Summoning_SummonAI_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell_Summoning.OnSummonedAIKilled
// (Final, Native, Private)
// Parameters:
// class ADH_Character*           DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TotemSpell_Summoning::OnSummonedAIKilled(class ADH_Character* DeadCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell_Summoning.OnSummonedAIKilled");

	UDH_TotemSpell_Summoning_OnSummonedAIKilled_Params params;
	params.DeadCharacter = DeadCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TotemSpell_Summoning.OnSummonedAIDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TotemSpell_Summoning::OnSummonedAIDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TotemSpell_Summoning.OnSummonedAIDestroyed");

	UDH_TotemSpell_Summoning_OnSummonedAIDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.SpawnAIGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   GroupName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialChapter::SpawnAIGroup(const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.SpawnAIGroup");

	UDH_TutorialChapter_SpawnAIGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.SetCurrentObjective
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ObjectiveName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialChapter::SetCurrentObjective(const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.SetCurrentObjective");

	UDH_TutorialChapter_SetCurrentObjective_Params params;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.PlayCinematicSequence
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* UDH_TutorialChapter::PlayCinematicSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.PlayCinematicSequence");

	UDH_TutorialChapter_PlayCinematicSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.OnWarshipSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Warship*             Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialChapter::OnWarshipSpawned(class ADH_Warship* Ship)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnWarshipSpawned");

	UDH_TutorialChapter_OnWarshipSpawned_Params params;
	params.Ship = Ship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnPlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_HumanCharacter*      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialChapter::OnPlayerSpawned(class ADH_HumanCharacter* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnPlayerSpawned");

	UDH_TutorialChapter_OnPlayerSpawned_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnOutroSequenceComplete
// (Final, Native, Private)

void UDH_TutorialChapter::OnOutroSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnOutroSequenceComplete");

	UDH_TutorialChapter_OnOutroSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UDH_TutorialObjective*   CompletedObjective             (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialChapter::OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnObjectiveCompleted");

	UDH_TutorialChapter_OnObjectiveCompleted_Params params;
	params.CompletedObjective = CompletedObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnIntroTitleScreenHidden
// (Final, Native, Private)

void UDH_TutorialChapter::OnIntroTitleScreenHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnIntroTitleScreenHidden");

	UDH_TutorialChapter_OnIntroTitleScreenHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnIntroSequenceComplete
// (Final, Native, Private)

void UDH_TutorialChapter::OnIntroSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnIntroSequenceComplete");

	UDH_TutorialChapter_OnIntroSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnEnd
// (Event, Public, BlueprintEvent)

void UDH_TutorialChapter::OnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnEnd");

	UDH_TutorialChapter_OnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnCinematicSequenceFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULevelSequence*          FinishedSequence               (Parm, ZeroConstructor, IsPlainOldData)

void UDH_TutorialChapter::OnCinematicSequenceFinished(class ULevelSequence* FinishedSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnCinematicSequenceFinished");

	UDH_TutorialChapter_OnCinematicSequenceFinished_Params params;
	params.FinishedSequence = FinishedSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnCinematicSequenceComplete
// (Final, Native, Private)

void UDH_TutorialChapter::OnCinematicSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnCinematicSequenceComplete");

	UDH_TutorialChapter_OnCinematicSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnBegin
// (Event, Public, BlueprintEvent)

void UDH_TutorialChapter::OnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnBegin");

	UDH_TutorialChapter_OnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.OnActorsInitialized
// (Event, Public, BlueprintEvent)

void UDH_TutorialChapter::OnActorsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.OnActorsInitialized");

	UDH_TutorialChapter_OnActorsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.IncapacitationResultsInFailure
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADH_Character*           NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::IncapacitationResultsInFailure(class ADH_Character* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.IncapacitationResultsInFailure");

	UDH_TutorialChapter_IncapacitationResultsInFailure_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetTimeOfDayOverride
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DesiredTimeOfDay               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DesiredInterpSpeed             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::GetTimeOfDayOverride(float* DesiredTimeOfDay, float* DesiredInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetTimeOfDayOverride");

	UDH_TutorialChapter_GetTimeOfDayOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredTimeOfDay != nullptr)
		*DesiredTimeOfDay = params.DesiredTimeOfDay;
	if (DesiredInterpSpeed != nullptr)
		*DesiredInterpSpeed = params.DesiredInterpSpeed;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetStartSpot
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UDH_TutorialChapter::GetStartSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetStartSpot");

	UDH_TutorialChapter_GetStartSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetStartingObjective
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDH_TutorialChapter::GetStartingObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetStartingObjective");

	UDH_TutorialChapter_GetStartingObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetPlayerPawnClassOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UDH_TutorialChapter::GetPlayerPawnClassOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetPlayerPawnClassOverride");

	UDH_TutorialChapter_GetPlayerPawnClassOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetCurrentObjective
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TutorialObjective*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_TutorialObjective* UDH_TutorialChapter::GetCurrentObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetCurrentObjective");

	UDH_TutorialChapter_GetCurrentObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetCrewSpawnPoint
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// EPlayerTeamRole                CrewRole                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UDH_TutorialChapter::GetCrewSpawnPoint(EPlayerTeamRole CrewRole)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetCrewSpawnPoint");

	UDH_TutorialChapter_GetCrewSpawnPoint_Params params;
	params.CrewRole = CrewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetCrewNPC
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerTeamRole                Role                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* UDH_TutorialChapter::GetCrewNPC(EPlayerTeamRole Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetCrewNPC");

	UDH_TutorialChapter_GetCrewNPC_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.GetBlizzardIntensityOverride
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DesiredBlizzardIntensity       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::GetBlizzardIntensityOverride(float* DesiredBlizzardIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.GetBlizzardIntensityOverride");

	UDH_TutorialChapter_GetBlizzardIntensityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredBlizzardIntensity != nullptr)
		*DesiredBlizzardIntensity = params.DesiredBlizzardIntensity;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.DespawnAI
// (Final, Native, Private, BlueprintCallable)

void UDH_TutorialChapter::DespawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.DespawnAI");

	UDH_TutorialChapter_DespawnAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialChapter.AllowItemSpawn
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ItemOwner                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryType                 ItemType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::AllowItemSpawn(class AActor* ItemOwner, EInventoryType ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.AllowItemSpawn");

	UDH_TutorialChapter_AllowItemSpawn_Params params;
	params.ItemOwner = ItemOwner;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.AllowInteraction
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InteractTarget                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::AllowInteraction(class AActor* InteractTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.AllowInteraction");

	UDH_TutorialChapter_AllowInteraction_Params params;
	params.InteractTarget = InteractTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.AllowInput
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FName                   InputMapping                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::AllowInput(const struct FName& InputMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.AllowInput");

	UDH_TutorialChapter_AllowInput_Params params;
	params.InputMapping = InputMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.AllowCrewActivity
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDH_CrewActivity*        InActivity                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::AllowCrewActivity(class UDH_CrewActivity* InActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.AllowCrewActivity");

	UDH_TutorialChapter_AllowCrewActivity_Params params;
	params.InActivity = InActivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialChapter.AllowCrafting
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDH_CraftingRecipe*      InRecipe                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialChapter::AllowCrafting(class UDH_CraftingRecipe* InRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialChapter.AllowCrafting");

	UDH_TutorialChapter_AllowCrafting_Params params;
	params.InRecipe = InRecipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialGameMode.OnWarshipSank
// (Final, Native, Private)
// Parameters:
// class ADH_Warship*             SunkShip                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnWarshipSank(class ADH_Warship* SunkShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnWarshipSank");

	ADH_TutorialGameMode_OnWarshipSank_Params params;
	params.SunkShip = SunkShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnTransactingInventoryChanged
// (Final, Native, Private)
// Parameters:
// class UDH_InventoryTransactionComponent* InventoryTransactionComponent  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_InventoryManager*    InventoryManager               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_TutorialGameMode::OnTransactingInventoryChanged(class UDH_InventoryTransactionComponent* InventoryTransactionComponent, class UDH_InventoryManager* InventoryManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnTransactingInventoryChanged");

	ADH_TutorialGameMode_OnTransactingInventoryChanged_Params params;
	params.InventoryTransactionComponent = InventoryTransactionComponent;
	params.InventoryManager = InventoryManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnThrallSpellCast
// (Final, Native, Private)
// Parameters:
// class UDH_TotemSpell*          Spell                          (Parm, ZeroConstructor, IsPlainOldData)
// ETotemSpellTiers               CastTier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnThrallSpellCast(class UDH_TotemSpell* Spell, ETotemSpellTiers CastTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnThrallSpellCast");

	ADH_TutorialGameMode_OnThrallSpellCast_Params params;
	params.Spell = Spell;
	params.CastTier = CastTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnPlayerGainedInventory
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           Inv                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnPlayerGainedInventory(class ADH_Inventory* Inv, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnPlayerGainedInventory");

	ADH_TutorialGameMode_OnPlayerGainedInventory_Params params;
	params.Inv = Inv;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnPlayerBecameCannibal
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         CannibalPlayerState            (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnPlayerBecameCannibal(class ADH_PlayerState* CannibalPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnPlayerBecameCannibal");

	ADH_TutorialGameMode_OnPlayerBecameCannibal_Params params;
	params.CannibalPlayerState = CannibalPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnObjectiveCompleted
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialObjective*   CompletedObjective             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnObjectiveCompleted");

	ADH_TutorialGameMode_OnObjectiveCompleted_Params params;
	params.CompletedObjective = CompletedObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnObjectiveChanged
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialObjective*   NewObjective                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnObjectiveChanged(class UDH_TutorialObjective* NewObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnObjectiveChanged");

	ADH_TutorialGameMode_OnObjectiveChanged_Params params;
	params.NewObjective = NewObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialGameMode.OnIncapacitationChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      InHumanPawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialGameMode::OnIncapacitationChanged(class ADH_HumanCharacter* InHumanPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialGameMode.OnIncapacitationChanged");

	ADH_TutorialGameMode_OnIncapacitationChanged_Params params;
	params.InHumanPawn = InHumanPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.ShowNextConcept
// (Final, Native, Private)

void ADH_TutorialManager::ShowNextConcept()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.ShowNextConcept");

	ADH_TutorialManager_ShowNextConcept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.SetCurrentObjective
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ObjectiveName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::SetCurrentObjective(const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.SetCurrentObjective");

	ADH_TutorialManager_SetCurrentObjective_Params params;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.SetCurrentConcept
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ConceptName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::SetCurrentConcept(const struct FName& ConceptName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.SetCurrentConcept");

	ADH_TutorialManager_SetCurrentConcept_Params params;
	params.ConceptName = ConceptName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.SetCurrentChapter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ETutorialChapters              InChapter                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::SetCurrentChapter(ETutorialChapters InChapter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.SetCurrentChapter");

	ADH_TutorialManager_SetCurrentChapter_Params params;
	params.InChapter = InChapter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UDH_TutorialObjective*   CompletedObjective             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::OnObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.OnObjectiveCompleted");

	ADH_TutorialManager_OnObjectiveCompleted_Params params;
	params.CompletedObjective = CompletedObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.OnDestructibleDestroyed
// (Final, Native, Private)
// Parameters:
// class ADH_DestructibleActor*   Destructible                   (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::OnDestructibleDestroyed(class ADH_DestructibleActor* Destructible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.OnDestructibleDestroyed");

	ADH_TutorialManager_OnDestructibleDestroyed_Params params;
	params.Destructible = Destructible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.OnConceptChanged
// (Final, Native, Private)
// Parameters:
// struct FName                   NewConcept                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::OnConceptChanged(const struct FName& NewConcept)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.OnConceptChanged");

	ADH_TutorialManager_OnConceptChanged_Params params;
	params.NewConcept = NewConcept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.ObjectiveCompleted
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialObjective*   CompletedObjective             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::ObjectiveCompleted(class UDH_TutorialObjective* CompletedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.ObjectiveCompleted");

	ADH_TutorialManager_ObjectiveCompleted_Params params;
	params.CompletedObjective = CompletedObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialManager.GetCurrentObjective
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TutorialObjective*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_TutorialObjective* ADH_TutorialManager::GetCurrentObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.GetCurrentObjective");

	ADH_TutorialManager_GetCurrentObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialManager.GetCurrentConcept
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ADH_TutorialManager::GetCurrentConcept()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.GetCurrentConcept");

	ADH_TutorialManager_GetCurrentConcept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialManager.GetCurrentChapter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TutorialChapter*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_TutorialChapter* ADH_TutorialManager::GetCurrentChapter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.GetCurrentChapter");

	ADH_TutorialManager_GetCurrentChapter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_TutorialManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_TutorialManager* ADH_TutorialManager::Get(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.Get");

	ADH_TutorialManager_Get_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialManager.BeginNextChapter
// (Final, Native, Private)
// Parameters:
// class UDH_TutorialChapter*     PreviousChapter                (Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialManager::BeginNextChapter(class UDH_TutorialChapter* PreviousChapter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialManager.BeginNextChapter");

	ADH_TutorialManager_BeginNextChapter_Params params;
	params.PreviousChapter = PreviousChapter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialObjective.ShouldRenderGoalMarker
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  GoalActor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::ShouldRenderGoalMarker(class AActor* GoalActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.ShouldRenderGoalMarker");

	UDH_TutorialObjective_ShouldRenderGoalMarker_Params params;
	params.GoalActor = GoalActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.OnInitialized
// (Event, Public, BlueprintEvent)

void UDH_TutorialObjective::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.OnInitialized");

	UDH_TutorialObjective_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialObjective.OnDeactivated
// (Event, Public, BlueprintEvent)

void UDH_TutorialObjective::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.OnDeactivated");

	UDH_TutorialObjective_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialObjective.OnCompleted
// (Event, Public, BlueprintEvent)

void UDH_TutorialObjective::OnCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.OnCompleted");

	UDH_TutorialObjective_OnCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialObjective.OnActivated
// (Event, Public, BlueprintEvent)

void UDH_TutorialObjective::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.OnActivated");

	UDH_TutorialObjective_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialObjective.GetTimeOfDayOverride
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DesiredTimeOfDay               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::GetTimeOfDayOverride(float* DesiredTimeOfDay, float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.GetTimeOfDayOverride");

	UDH_TutorialObjective_GetTimeOfDayOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredTimeOfDay != nullptr)
		*DesiredTimeOfDay = params.DesiredTimeOfDay;
	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.GetChapter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDH_TutorialChapter*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDH_TutorialChapter* UDH_TutorialObjective::GetChapter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.GetChapter");

	UDH_TutorialObjective_GetChapter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.GetBlizzardIntensityOverride
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DesiredBlizzardIntensity       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::GetBlizzardIntensityOverride(float* DesiredBlizzardIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.GetBlizzardIntensityOverride");

	UDH_TutorialObjective_GetBlizzardIntensityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredBlizzardIntensity != nullptr)
		*DesiredBlizzardIntensity = params.DesiredBlizzardIntensity;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.GetAssociatedActors
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UDH_TutorialObjective::GetAssociatedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.GetAssociatedActors");

	UDH_TutorialObjective_GetAssociatedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.CheckCompletion
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::CheckCompletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.CheckCompletion");

	UDH_TutorialObjective_CheckCompletion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.AllowItemSpawn
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ItemOwner                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInventoryType                 ItemType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::AllowItemSpawn(class AActor* ItemOwner, EInventoryType ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.AllowItemSpawn");

	UDH_TutorialObjective_AllowItemSpawn_Params params;
	params.ItemOwner = ItemOwner;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.AllowInteraction
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InteractTarget                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::AllowInteraction(class AActor* InteractTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.AllowInteraction");

	UDH_TutorialObjective_AllowInteraction_Params params;
	params.InteractTarget = InteractTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.AllowInput
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FName                   InputMapping                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::AllowInput(const struct FName& InputMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.AllowInput");

	UDH_TutorialObjective_AllowInput_Params params;
	params.InputMapping = InputMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.AllowCrewActivity
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDH_CrewActivity*        InActivity                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::AllowCrewActivity(class UDH_CrewActivity* InActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.AllowCrewActivity");

	UDH_TutorialObjective_AllowCrewActivity_Params params;
	params.InActivity = InActivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialObjective.AllowCrafting
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDH_CraftingRecipe*      InRecipe                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_TutorialObjective::AllowCrafting(class UDH_CraftingRecipe* InRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialObjective.AllowCrafting");

	UDH_TutorialObjective_AllowCrafting_Params params;
	params.InRecipe = InRecipe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialStatics.SetObjective
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_TutorialStatics::SetObjective(class UObject* Context, const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.SetObjective");

	UDH_TutorialStatics_SetObjective_Params params;
	params.Context = Context;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialStatics.SetCurrentChapter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ETutorialChapters              InChapter                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_TutorialStatics::SetCurrentChapter(class UObject* Context, ETutorialChapters InChapter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.SetCurrentChapter");

	UDH_TutorialStatics_SetCurrentChapter_Params params;
	params.Context = Context;
	params.InChapter = InChapter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialStatics.IsTestingBearFight
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_TutorialStatics::IsTestingBearFight(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.IsTestingBearFight");

	UDH_TutorialStatics_IsTestingBearFight_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialStatics.IsObjectiveComplete
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_TutorialStatics::IsObjectiveComplete(class UObject* Context, const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.IsObjectiveComplete");

	UDH_TutorialStatics_IsObjectiveComplete_Params params;
	params.Context = Context;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialStatics.IsChapterUnlocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ETutorialChapters              InChapter                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_TutorialStatics::IsChapterUnlocked(class UObject* Context, ETutorialChapters InChapter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.IsChapterUnlocked");

	UDH_TutorialStatics_IsChapterUnlocked_Params params;
	params.Context = Context;
	params.InChapter = InChapter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialStatics.GetTutorialGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADH_TutorialGameMode*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_TutorialGameMode* UDH_TutorialStatics::GetTutorialGameMode(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.GetTutorialGameMode");

	UDH_TutorialStatics_GetTutorialGameMode_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialStatics.GetCurrentChapter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_TutorialChapter*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_TutorialChapter* UDH_TutorialStatics::GetCurrentChapter(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.GetCurrentChapter");

	UDH_TutorialStatics_GetCurrentChapter_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_TutorialStatics.ExplainConcept
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ConceptName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_TutorialStatics::ExplainConcept(class UObject* Context, const struct FName& ConceptName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.ExplainConcept");

	UDH_TutorialStatics_ExplainConcept_Params params;
	params.Context = Context;
	params.ConceptName = ConceptName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialStatics.EndUITutorial
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 TargetWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void UDH_TutorialStatics::EndUITutorial(class UWidget* TargetWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.EndUITutorial");

	UDH_TutorialStatics_EndUITutorial_Params params;
	params.TargetWidget = TargetWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialStatics.CompleteCurrentObjective
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_TutorialStatics::CompleteCurrentObjective(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.CompleteCurrentObjective");

	UDH_TutorialStatics_CompleteCurrentObjective_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialStatics.CompleteCurrentChapter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_TutorialStatics::CompleteCurrentChapter(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.CompleteCurrentChapter");

	UDH_TutorialStatics_CompleteCurrentChapter_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialStatics.BeginUITutorial
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 TargetWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void UDH_TutorialStatics::BeginUITutorial(class UWidget* TargetWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialStatics.BeginUITutorial");

	UDH_TutorialStatics_BeginUITutorial_Params params;
	params.TargetWidget = TargetWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_TutorialTriggerVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIsEnabled                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_TutorialTriggerVolume::SetEnabled(bool bNewIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_TutorialTriggerVolume.SetEnabled");

	ADH_TutorialTriggerVolume_SetEnabled_Params params;
	params.bNewIsEnabled = bNewIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_UseCraftingMenuHintWidget.SetWarmthCritical
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInWarmthCritical              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDH_UseCraftingMenuHintWidget::SetWarmthCritical(bool bInWarmthCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UseCraftingMenuHintWidget.SetWarmthCritical");

	UDH_UseCraftingMenuHintWidget_SetWarmthCritical_Params params;
	params.bInWarmthCritical = bInWarmthCritical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_UseCraftingMenuHintWidget.OnIncapacitatedChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UDH_UseCraftingMenuHintWidget::OnIncapacitatedChanged(class ADH_HumanCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UseCraftingMenuHintWidget.OnIncapacitatedChanged");

	UDH_UseCraftingMenuHintWidget_OnIncapacitatedChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.TrimName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InName                         (Parm, ZeroConstructor)
// int                            MaxLength                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UDH_UserWidgetBlueprintLibrary::TrimName(const class FString& InName, int MaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.TrimName");

	UDH_UserWidgetBlueprintLibrary_TrimName_Params params;
	params.InName = InName;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.ResetMouseAndInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

static void UDH_UserWidgetBlueprintLibrary::ResetMouseAndInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.ResetMouseAndInput");

	UDH_UserWidgetBlueprintLibrary_ResetMouseAndInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.PushMouseAndInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetToFocus                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bGameAndUI                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UDH_UserWidgetBlueprintLibrary::PushMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToFocus, bool bGameAndUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.PushMouseAndInput");

	UDH_UserWidgetBlueprintLibrary_PushMouseAndInput_Params params;
	params.PlayerController = PlayerController;
	params.WidgetToFocus = WidgetToFocus;
	params.bGameAndUI = bGameAndUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.PopMouseAndInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetToFocus                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

static void UDH_UserWidgetBlueprintLibrary::PopMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.PopMouseAndInput");

	UDH_UserWidgetBlueprintLibrary_PopMouseAndInput_Params params;
	params.PlayerController = PlayerController;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsShipping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_UserWidgetBlueprintLibrary::IsShipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsShipping");

	UDH_UserWidgetBlueprintLibrary_IsShipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsDesignTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Context                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_UserWidgetBlueprintLibrary::IsDesignTime(class UWidget* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsDesignTime");

	UDH_UserWidgetBlueprintLibrary_IsDesignTime_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsControllerMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject_            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static bool UDH_UserWidgetBlueprintLibrary::IsControllerMode(class UObject* WorldContextObject_)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.IsControllerMode");

	UDH_UserWidgetBlueprintLibrary_IsControllerMode_Params params;
	params.WorldContextObject_ = WorldContextObject_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetViewedPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*             Context                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class ADH_HumanCharacter* UDH_UserWidgetBlueprintLibrary::GetViewedPawn(class UUserWidget* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetViewedPawn");

	UDH_UserWidgetBlueprintLibrary_GetViewedPawn_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetTextBlockStyle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRichTextStyleRow       RichTextStyleRow               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTextBlockStyle         ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FTextBlockStyle UDH_UserWidgetBlueprintLibrary::GetTextBlockStyle(const struct FRichTextStyleRow& RichTextStyleRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetTextBlockStyle");

	UDH_UserWidgetBlueprintLibrary_GetTextBlockStyle_Params params;
	params.RichTextStyleRow = RichTextStyleRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetPaletteColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ColorName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static struct FLinearColor UDH_UserWidgetBlueprintLibrary::GetPaletteColor(const struct FName& ColorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetPaletteColor");

	UDH_UserWidgetBlueprintLibrary_GetPaletteColor_Params params;
	params.ColorName = ColorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetOwningUserWidget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UUserWidget* UDH_UserWidgetBlueprintLibrary::GetOwningUserWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetOwningUserWidget");

	UDH_UserWidgetBlueprintLibrary_GetOwningUserWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetBrush
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRichImageRow           ImageRow                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FSlateBrush UDH_UserWidgetBlueprintLibrary::GetBrush(const struct FRichImageRow& ImageRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.GetBrush");

	UDH_UserWidgetBlueprintLibrary_GetBrush_Params params;
	params.ImageRow = ImageRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.ConstructWidgetAnimationHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDH_WidgetAnimationHandler* WidgetAnimationHandlerClass    (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             WidgetOwner                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               VisibleVisibility              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               HiddenVisibility               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ForwardPlaybackSpeed           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReversePlaybackSpeed           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        ReversibleAnimation            (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 WidgetAffectedByVisibility     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDH_WidgetAnimationHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_WidgetAnimationHandler* UDH_UserWidgetBlueprintLibrary::ConstructWidgetAnimationHandler(class UDH_WidgetAnimationHandler* WidgetAnimationHandlerClass, class UUserWidget* WidgetOwner, ESlateVisibility VisibleVisibility, ESlateVisibility HiddenVisibility, float ForwardPlaybackSpeed, float ReversePlaybackSpeed, class UWidgetAnimation* ReversibleAnimation, class UWidget* WidgetAffectedByVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.ConstructWidgetAnimationHandler");

	UDH_UserWidgetBlueprintLibrary_ConstructWidgetAnimationHandler_Params params;
	params.WidgetAnimationHandlerClass = WidgetAnimationHandlerClass;
	params.WidgetOwner = WidgetOwner;
	params.VisibleVisibility = VisibleVisibility;
	params.HiddenVisibility = HiddenVisibility;
	params.ForwardPlaybackSpeed = ForwardPlaybackSpeed;
	params.ReversePlaybackSpeed = ReversePlaybackSpeed;
	params.ReversibleAnimation = ReversibleAnimation;
	params.WidgetAffectedByVisibility = WidgetAffectedByVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_UserWidgetBlueprintLibrary.ConstructWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             InOwner                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 InClassToCreate                (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

static class UWidget* UDH_UserWidgetBlueprintLibrary::ConstructWidget(class UUserWidget* InOwner, class UWidget* InClassToCreate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_UserWidgetBlueprintLibrary.ConstructWidget");

	UDH_UserWidgetBlueprintLibrary_ConstructWidget_Params params;
	params.InOwner = InOwner;
	params.InClassToCreate = InClassToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_VoipSettingsJsonSaveData.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_VoipSettingsJsonSaveData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_VoipSettingsJsonSaveData* UDH_VoipSettingsJsonSaveData::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_VoipSettingsJsonSaveData.GetInstance");

	UDH_VoipSettingsJsonSaveData_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_VoipSettingsSaveGame.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_VoipSettingsSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static class UDH_VoipSettingsSaveGame* UDH_VoipSettingsSaveGame::GetInstance(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_VoipSettingsSaveGame.GetInstance");

	UDH_VoipSettingsSaveGame_GetInstance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.SpawnBreaches
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   BreachInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// int                            BreachCount                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::SpawnBreaches(class APawn* BreachInstigator, int BreachCount, const struct FVector& Origin, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.SpawnBreaches");

	ADH_Warship_SpawnBreaches_Params params;
	params.BreachInstigator = BreachInstigator;
	params.BreachCount = BreachCount;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.SetEquippedCosmeticItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FEquippedShipCosmetics> NewItems                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bOwnershipCheck                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::SetEquippedCosmeticItems(TArray<struct FEquippedShipCosmetics> NewItems, bool bOwnershipCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.SetEquippedCosmeticItems");

	ADH_Warship_SetEquippedCosmeticItems_Params params;
	params.NewItems = NewItems;
	params.bOwnershipCheck = bOwnershipCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.SetEnableAutoMove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoMove                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::SetEnableAutoMove(bool bInAutoMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.SetEnableAutoMove");

	ADH_Warship_SetEnableAutoMove_Params params;
	params.bInAutoMove = bInAutoMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.OnShowPregameInstructions
// (Final, Native, Public)
// Parameters:
// int                            InThrallCount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::OnShowPregameInstructions(int InThrallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.OnShowPregameInstructions");

	ADH_Warship_OnShowPregameInstructions_Params params;
	params.InThrallCount = InThrallCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.OnShipOverlappedActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::OnShipOverlappedActor(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.OnShipOverlappedActor");

	ADH_Warship_OnShipOverlappedActor_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.OnShipBeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::OnShipBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.OnShipBeginOverlap");

	ADH_Warship_OnShipBeginOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.OnRep_EquippedCosmeticItems
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FEquippedShipCosmetics> PreviousCosmetics              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADH_Warship::OnRep_EquippedCosmeticItems(TArray<struct FEquippedShipCosmetics> PreviousCosmetics)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.OnRep_EquippedCosmeticItems");

	ADH_Warship_OnRep_EquippedCosmeticItems_Params params;
	params.PreviousCosmetics = PreviousCosmetics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.OnRep_CurrentHullIntegrity
// (Final, Native, Private)

void ADH_Warship::OnRep_CurrentHullIntegrity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.OnRep_CurrentHullIntegrity");

	ADH_Warship_OnRep_CurrentHullIntegrity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.OnGangwaysDetached
// (Event, Public, BlueprintEvent)

void ADH_Warship::OnGangwaysDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.OnGangwaysDetached");

	ADH_Warship_OnGangwaysDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.GetShipProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Warship::GetShipProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.GetShipProgress");

	ADH_Warship_GetShipProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.GetPressureGauge
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ADH_Warship::GetPressureGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.GetPressureGauge");

	ADH_Warship_GetPressureGauge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.GetHelm
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_WarshipHelm*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_WarshipHelm* ADH_Warship::GetHelm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.GetHelm");

	ADH_Warship_GetHelm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.GetGangways
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UStaticMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UStaticMeshComponent*> ADH_Warship::GetGangways()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.GetGangways");

	ADH_Warship_GetGangways_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.GetBoiler
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_WarshipBoiler*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_WarshipBoiler* ADH_Warship::GetBoiler()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.GetBoiler");

	ADH_Warship_GetBoiler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.FuelBoiler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFuelPct                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::FuelBoiler(float InFuelPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.FuelBoiler");

	ADH_Warship_FuelBoiler_Params params;
	params.InFuelPct = InFuelPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Warship.BP_GetSkipperLocation
// (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADH_Warship::BP_GetSkipperLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.BP_GetSkipperLocation");

	ADH_Warship_BP_GetSkipperLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Warship.AddLights
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ULightComponent*> Lights                         (Parm, ZeroConstructor)
// EShipSpacePartition            Section                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_Warship::AddLights(TArray<class ULightComponent*> Lights, EShipSpacePartition Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Warship.AddLights");

	ADH_Warship_AddLights_Params params;
	params.Lights = Lights;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.Sabotage
// (Final, Native, Private, BlueprintCallable)

void ADH_WarshipBoiler::Sabotage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.Sabotage");

	ADH_WarshipBoiler_Sabotage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnRep_SabotageCount
// (Final, Native, Private)

void ADH_WarshipBoiler::OnRep_SabotageCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnRep_SabotageCount");

	ADH_WarshipBoiler_OnRep_SabotageCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnRep_PendingSabotageUnits
// (Final, Native, Private)

void ADH_WarshipBoiler::OnRep_PendingSabotageUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnRep_PendingSabotageUnits");

	ADH_WarshipBoiler_OnRep_PendingSabotageUnits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnPlayerLeftGame
// (Final, Native, Private)
// Parameters:
// class ADH_PlayerState*         RemovedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipBoiler::OnPlayerLeftGame(class ADH_PlayerState* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnPlayerLeftGame");

	ADH_WarshipBoiler_OnPlayerLeftGame_Params params;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnOnlineSessionUpdateComplete
// (Final, Native, Private)

void ADH_WarshipBoiler::OnOnlineSessionUpdateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnOnlineSessionUpdateComplete");

	ADH_WarshipBoiler_OnOnlineSessionUpdateComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnLobbyPlayerOnShipChanged
// (Final, Native, Private)
// Parameters:
// class ADH_HumanCharacter*      HumanCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipBoiler::OnLobbyPlayerOnShipChanged(class ADH_HumanCharacter* HumanCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnLobbyPlayerOnShipChanged");

	ADH_WarshipBoiler_OnLobbyPlayerOnShipChanged_Params params;
	params.HumanCharacter = HumanCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnBoilerLit
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipBoiler::OnBoilerLit(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnBoilerLit");

	ADH_WarshipBoiler_OnBoilerLit_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.OnBoilerDied
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_WarshipBoiler::OnBoilerDied(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.OnBoilerDied");

	ADH_WarshipBoiler_OnBoilerDied_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.LightBoiler
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     StartupProject                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipBoiler::LightBoiler(class UDH_CraftingProject* StartupProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.LightBoiler");

	ADH_WarshipBoiler_LightBoiler_Params params;
	params.StartupProject = StartupProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.ConvertToFuel
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           Fuel                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_WarshipBoiler::ConvertToFuel(class ADH_Inventory* Fuel, int Amount, class UDH_InventoryManager* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.ConvertToFuel");

	ADH_WarshipBoiler_ConvertToFuel_Params params;
	params.Fuel = Fuel;
	params.Amount = Amount;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler.AddSaboteur
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class ADH_PlayerState*         InSaboteur                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSabotageStacks               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InOverBoostStack               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipBoiler::AddSaboteur(class ADH_PlayerState* InSaboteur, int InSabotageStacks, int InOverBoostStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler.AddSaboteur");

	ADH_WarshipBoiler_AddSaboteur_Params params;
	params.InSaboteur = InSaboteur;
	params.InSabotageStacks = InSabotageStacks;
	params.InOverBoostStack = InOverBoostStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler_Vent.OnRep_ReceivedInventoryCounter
// (Final, Native, Private)

void ADH_WarshipBoiler_Vent::OnRep_ReceivedInventoryCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler_Vent.OnRep_ReceivedInventoryCounter");

	ADH_WarshipBoiler_Vent_OnRep_ReceivedInventoryCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipBoiler_Vent.OnInventoryReceived
// (Final, Native, Private)
// Parameters:
// class ADH_Inventory*           Fuel                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDH_InventoryManager*    Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ADH_WarshipBoiler_Vent::OnInventoryReceived(class ADH_Inventory* Fuel, int Amount, class UDH_InventoryManager* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipBoiler_Vent.OnInventoryReceived");

	ADH_WarshipBoiler_Vent_OnInventoryReceived_Params params;
	params.Fuel = Fuel;
	params.Amount = Amount;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.TakeHelm
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class AController*             NewHelmsman                    (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipHelm::TakeHelm(class AController* NewHelmsman)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.TakeHelm");

	ADH_WarshipHelm_TakeHelm_Params params;
	params.NewHelmsman = NewHelmsman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.OnRep_CurrentHelmsman
// (Final, Native, Protected)

void ADH_WarshipHelm::OnRep_CurrentHelmsman()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.OnRep_CurrentHelmsman");

	ADH_WarshipHelm_OnRep_CurrentHelmsman_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.OnMatchEnded
// (Final, Native, Private)

void ADH_WarshipHelm::OnMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.OnMatchEnded");

	ADH_WarshipHelm_OnMatchEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.OnHelmsmanMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class ACharacter*              AffectedCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipHelm::OnHelmsmanMovementModeChanged(class ACharacter* AffectedCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.OnHelmsmanMovementModeChanged");

	ADH_WarshipHelm_OnHelmsmanMovementModeChanged_Params params;
	params.AffectedCharacter = AffectedCharacter;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.OnHelmsmanDied
// (Final, Native, Private)
// Parameters:
// class ADH_Character*           DeadPawn                       (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipHelm::OnHelmsmanDied(class ADH_Character* DeadPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.OnHelmsmanDied");

	ADH_WarshipHelm_OnHelmsmanDied_Params params;
	params.DeadPawn = DeadPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.OnHelmsmanDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedHelmsman              (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipHelm::OnHelmsmanDestroyed(class AActor* DestroyedHelmsman)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.OnHelmsmanDestroyed");

	ADH_WarshipHelm_OnHelmsmanDestroyed_Params params;
	params.DestroyedHelmsman = DestroyedHelmsman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipHelm.GetCurrentHelmsman
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADH_HumanCharacter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_HumanCharacter* ADH_WarshipHelm::GetCurrentHelmsman()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.GetCurrentHelmsman");

	ADH_WarshipHelm_GetCurrentHelmsman_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_WarshipHelm.CanReleaseHelm
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_WarshipHelm::CanReleaseHelm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipHelm.CanReleaseHelm");

	ADH_WarshipHelm_CanReleaseHelm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_WarshipPathSpline.OnPathingShipDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipPathSpline::OnPathingShipDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipPathSpline.OnPathingShipDestroyed");

	ADH_WarshipPathSpline_OnPathingShipDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipPathSpline.Init
// (Final, Native, Private)
// Parameters:
// class ADH_Warship*             InShip                         (Parm, ZeroConstructor, IsPlainOldData)

void ADH_WarshipPathSpline::Init(class ADH_Warship* InShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipPathSpline.Init");

	ADH_WarshipPathSpline_Init_Params params;
	params.InShip = InShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WarshipSpawnPoint.SpawnShip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADH_Warship*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADH_Warship* ADH_WarshipSpawnPoint::SpawnShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WarshipSpawnPoint.SpawnShip");

	ADH_WarshipSpawnPoint_SpawnShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Weapon_Ranged.ReloadingConsumesAmmo
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADH_Weapon_Ranged::ReloadingConsumesAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Ranged.ReloadingConsumesAmmo");

	ADH_Weapon_Ranged_ReloadingConsumesAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Weapon_Ranged.OnProjectileSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADH_Projectile*          NewProjectile                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Weapon_Ranged::OnProjectileSpawned(class ADH_Projectile* NewProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Ranged.OnProjectileSpawned");

	ADH_Weapon_Ranged_OnProjectileSpawned_Params params;
	params.NewProjectile = NewProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon_Ranged.OnProjectileHitActor
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADH_Weapon_Ranged::OnProjectileHitActor(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Ranged.OnProjectileHitActor");

	ADH_Weapon_Ranged_OnProjectileHitActor_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon_Ranged.HitActor
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void ADH_Weapon_Ranged::HitActor(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Ranged.HitActor");

	ADH_Weapon_Ranged_HitActor_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_Weapon_Ranged.GetFireSpread
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADH_Weapon_Ranged::GetFireSpread()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Weapon_Ranged.GetFireSpread");

	ADH_Weapon_Ranged_GetFireSpread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_WidgetAnimationHandler.Show
// (Final, Native, Public, BlueprintCallable)

void UDH_WidgetAnimationHandler::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.Show");

	UDH_WidgetAnimationHandler_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.SetVisibleVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility               NewVisibleVisibility           (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetAnimationHandler::SetVisibleVisibility(ESlateVisibility NewVisibleVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.SetVisibleVisibility");

	UDH_WidgetAnimationHandler_SetVisibleVisibility_Params params;
	params.NewVisibleVisibility = NewVisibleVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.SetReversibleAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        NewReversibleAnimation         (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetAnimationHandler::SetReversibleAnimation(class UWidgetAnimation* NewReversibleAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.SetReversibleAnimation");

	UDH_WidgetAnimationHandler_SetReversibleAnimation_Params params;
	params.NewReversibleAnimation = NewReversibleAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.SetReversePlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewReversePlaybackSpeed        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetAnimationHandler::SetReversePlaybackSpeed(float NewReversePlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.SetReversePlaybackSpeed");

	UDH_WidgetAnimationHandler_SetReversePlaybackSpeed_Params params;
	params.NewReversePlaybackSpeed = NewReversePlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.SetHiddenVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility               NewHiddenVisibility            (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetAnimationHandler::SetHiddenVisibility(ESlateVisibility NewHiddenVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.SetHiddenVisibility");

	UDH_WidgetAnimationHandler_SetHiddenVisibility_Params params;
	params.NewHiddenVisibility = NewHiddenVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.SetForwardPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewForwardPlaybackSpeed        (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetAnimationHandler::SetForwardPlaybackSpeed(float NewForwardPlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.SetForwardPlaybackSpeed");

	UDH_WidgetAnimationHandler_SetForwardPlaybackSpeed_Params params;
	params.NewForwardPlaybackSpeed = NewForwardPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.Hide
// (Final, Native, Public, BlueprintCallable)

void UDH_WidgetAnimationHandler::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.Hide");

	UDH_WidgetAnimationHandler_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetAnimationHandler.GetIsHiding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDH_WidgetAnimationHandler::GetIsHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetAnimationHandler.GetIsHiding");

	UDH_WidgetAnimationHandler_GetIsHiding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_WidgetsToInstanceStore.RemoveWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetsToInstanceStore::RemoveWidget(class UUserWidget* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetsToInstanceStore.RemoveWidget");

	UDH_WidgetsToInstanceStore_RemoveWidget_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WidgetsToInstanceStore.AddWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*             WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// EDH_HUDLocationType            Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UDH_WidgetsToInstanceStore::AddWidget(class UUserWidget* WidgetClass, EDH_HUDLocationType Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WidgetsToInstanceStore.AddWidget");

	UDH_WidgetsToInstanceStore_AddWidget_Params params;
	params.WidgetClass = WidgetClass;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WinningHandWidget.SortHand
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPlayingCardHand        UnsortedHand                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FPlayingCardHand        ReturnValue                    (Parm, OutParm, ReturnParm)

static struct FPlayingCardHand UDH_WinningHandWidget::SortHand(const struct FPlayingCardHand& UnsortedHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WinningHandWidget.SortHand");

	UDH_WinningHandWidget_SortHand_Params params;
	params.UnsortedHand = UnsortedHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DreadHunger.DH_Workbench.RepairItems
// (Final, Native, Private)
// Parameters:
// class UDH_CraftingProject*     RepairProject                  (Parm, ZeroConstructor, IsPlainOldData)

void ADH_Workbench::RepairItems(class UDH_CraftingProject* RepairProject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_Workbench.RepairItems");

	ADH_Workbench_RepairItems_Params params;
	params.RepairProject = RepairProject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DreadHunger.DH_WorldSettings.UpdateOverheadImage
// (Final, Native, Protected)

void ADH_WorldSettings::UpdateOverheadImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DreadHunger.DH_WorldSettings.UpdateOverheadImage");

	ADH_WorldSettings_UpdateOverheadImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
