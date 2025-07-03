                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_UMG_classes.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_AIModule_classes.hpp"
#include "DreadHunger-Win64-Shipping_AutoSettings_classes.hpp"
#include "DreadHunger-Win64-Shipping_NavigationSystem_classes.hpp"
#include "DreadHunger-Win64-Shipping_PhysicsCore_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DreadHunger.EDH_HUDLocationType
enum class EDH_HUDLocationType : uint8_t
{
	None                           = 0,
	Fullscreen                     = 1,
	TopLeft                        = 2,
	EDH_MAX                        = 3
};


// Enum DreadHunger.EPlayerTeam
enum class EPlayerTeam : uint8_t
{
	PT_UNDEFINED                   = 0,
	PT_EXPLORERS                   = 1,
	PT_THRALL                      = 2,
	PT_MAX                         = 3
};


// Enum DreadHunger.ECraftingFailReason
enum class ECraftingFailReason : uint8_t
{
	CFR_UNDEFINED                  = 0,
	CFR_REQUIREMENTSNOTMET         = 1,
	CFR_OTHER                      = 2,
	CFR_MAX                        = 3
};


// Enum DreadHunger.EDHInputType
enum class EDHInputType : uint8_t
{
	None                           = 0,
	KeyboardAndMouse               = 1,
	Gamepad                        = 2,
	Touchpad                       = 3,
	EDHInputType_MAX               = 4
};


// Enum DreadHunger.EDH_EntitlementsShopType
enum class EDH_EntitlementsShopType : uint8_t
{
	None                           = 0,
	Hats                           = 1,
	Pipes                          = 2,
	Jewelry                        = 3,
	Masks                          = 4,
	Ship                           = 5,
	EDH_MAX                        = 6
};


// Enum DreadHunger.EPokerGameTimeStatType
enum class EPokerGameTimeStatType : uint8_t
{
	PGTST_UNDEFINED                = 0,
	PGTST_ROUNDTIME                = 1,
	PGTST_PRIZETIME                = 2,
	PGTST_MAX                      = 3
};


// Enum DreadHunger.EShipCustomizationRegion
enum class EShipCustomizationRegion : uint8_t
{
	SCR_UNDEFINED                  = 0,
	SCR_EXTERIOR                   = 1,
	SCR_MESS                       = 2,
	SCR_ARMORY                     = 3,
	SCR_GALLEY                     = 4,
	SCR_HOLD                       = 5,
	SCR_BOILERROOM                 = 6,
	SCR_CAPTAINSQUARTERS           = 7,
	SCR_MAX                        = 8
};


// Enum DreadHunger.ETotemSpellTiers
enum class ETotemSpellTiers : uint8_t
{
	TST_UNDEFINED                  = 0,
	TST_ZERO                       = 1,
	TST_ONE                        = 2,
	TST_TWO                        = 3,
	TST_THREE                      = 4,
	TST_MAX                        = 5
};


// Enum DreadHunger.EDoorOpenState
enum class EDoorOpenState : uint8_t
{
	DOS_CLOSED                     = 0,
	DOS_OPENFORWARD                = 1,
	DOS_OPENFORWARD_FORCED         = 2,
	DOS_OPENBACKWARD               = 3,
	DOS_OPENBACKWARD_FORCED        = 4,
	DOS_MAX                        = 5
};


// Enum DreadHunger.EPlayingCardRank
enum class EPlayingCardRank : uint8_t
{
	PCR_UNDEFINED                  = 0,
	PCR_ACE                        = 1,
	PCR_TWO                        = 2,
	PCR_THREE                      = 3,
	PCR_FOUR                       = 4,
	PCR_FIVE                       = 5,
	PCR_SIX                        = 6,
	PCR_SEVEN                      = 7,
	PCR_EIGHT                      = 8,
	PCR_NINE                       = 9,
	PCR_TEN                        = 10,
	PCR_JACK                       = 11,
	PCR_QUEEN                      = 12,
	PCR_KING                       = 13,
	PCR_HIGH_ACE                   = 14,
	PCR_MAX                        = 15
};


// Enum DreadHunger.EPokerHandRank
enum class EPokerHandRank : uint8_t
{
	PHR_UNDEFINED                  = 0,
	PHR_HIGHCARD                   = 1,
	PHR_PAIR                       = 2,
	PHR_TWOPAIR                    = 3,
	PHR_THREEOFAKIND               = 4,
	PHR_STRAIGHT                   = 5,
	PHR_FLUSH                      = 6,
	PHR_FULLHOUSE                  = 7,
	PHR_FOUROFAKIND                = 8,
	PHR_STRAIGHTFLUSH              = 9,
	PHR_ROYALFLUSH                 = 10,
	PHR_MAX                        = 11
};


// Enum DreadHunger.EPlayingCardSuit
enum class EPlayingCardSuit : uint8_t
{
	PCS_UNDEFINED                  = 0,
	PCS_HEARTS                     = 1,
	PCS_DIAMONDS                   = 2,
	PCS_CLUBS                      = 3,
	PCS_SPADES                     = 4,
	PCS_MAX                        = 5
};


// Enum DreadHunger.EAISpawnMethod
enum class EAISpawnMethod : uint8_t
{
	ASM_UNDEFINED                  = 0,
	ASM_EQS                        = 1,
	ASM_DIRECT                     = 2,
	ASM_MAX                        = 3
};


// Enum DreadHunger.EAttackType
enum class EAttackType : uint8_t
{
	MELEE                          = 0,
	AOE                            = 1,
	PROJECTILE                     = 2,
	EAttackType_MAX                = 3
};


// Enum DreadHunger.EAttackMovementFlags
enum class EAttackMovementFlags : uint8_t
{
	NONE                           = 0,
	WALKING                        = 1,
	FALLING                        = 2,
	SWIMMING                       = 3,
	EAttackMovementFlags_MAX       = 4
};


// Enum DreadHunger.EAttackImpulseDirection
enum class EAttackImpulseDirection : uint8_t
{
	AID_UNDEFINED                  = 0,
	AID_FORWARD                    = 1,
	AID_LEFT                       = 2,
	AID_RIGHT                      = 3,
	AID_MAX                        = 4
};


// Enum DreadHunger.EAttackAnimationSlot
enum class EAttackAnimationSlot : uint8_t
{
	AAS_FULLBODY                   = 0,
	AAS_UPPERBODY                  = 1,
	AAS_HEAD                       = 2,
	AAS_MAX                        = 3
};


// Enum DreadHunger.EAIPointOfInterest
enum class EAIPointOfInterest : uint8_t
{
	POE_UNDEFINED                  = 0,
	POE_NITRO                      = 1,
	POE_CAVE                       = 2,
	POE_CLIFF                      = 3,
	POE_CAMP                       = 4,
	POE_MAX                        = 5
};


// Enum DreadHunger.EPlayingCardNotifyType
enum class EPlayingCardNotifyType : uint8_t
{
	PCN_UNDEFINED                  = 0,
	PCN_PUTINTOHAND                = 1,
	PCN_ATTACHPENDINGPICKUP        = 2,
	PCN_ATTACHPENDINGDROP          = 3,
	PCN_DROP                       = 4,
	PCN_MAX                        = 5
};


// Enum DreadHunger.EBearTrapState
enum class EBearTrapState : uint8_t
{
	BTS_OPEN                       = 0,
	BTS_CLOSED                     = 1,
	BTS_BROKEN                     = 2,
	BTS_RELEASED                   = 3,
	BTS_MAX                        = 4
};


// Enum DreadHunger.EDH_CanTravelToServerResult
enum class EDH_CanTravelToServerResult : uint8_t
{
	Success                        = 0,
	Failed_TravellingToSelf        = 1,
	Failed_TravellingToSameAddress = 2,
	Failed_WaitingForOthersToLeave = 3,
	Failed_NoServerURI             = 4,
	EDH_MAX                        = 5
};


// Enum DreadHunger.EDHCustomMovementMode
enum class EDHCustomMovementMode : uint8_t
{
	DHMOVE_None                    = 0,
	DHMOVE_Climbing                = 1,
	DHMOVE_Crawling                = 2,
	DHMOVE_MAX                     = 3
};


// Enum DreadHunger.ECraftingSpawnPosition
enum class ECraftingSpawnPosition : uint8_t
{
	CPP_UNDEFINED                  = 0,
	CPP_OWNER                      = 1,
	CPP_INGREDIENTS                = 2,
	CPP_MAX                        = 3
};


// Enum DreadHunger.ECraftingIngredientRules
enum class ECraftingIngredientRules : uint8_t
{
	CIR_UNDEFINED                  = 0,
	CIR_ALL                        = 1,
	CIR_ANY                        = 2,
	CIR_ANYUSEALL                  = 3,
	CPM_MAX                        = 4,
	ECraftingIngredientRules_MAX   = 5
};


// Enum DreadHunger.ECraftingProgressMethod
enum class ECraftingProgressMethod : uint8_t
{
	CPM_UNDEFINED                  = 0,
	CPM_AUTOMATIC                  = 1,
	CPM_MANUALSTART                = 2,
	CPM_MANUAL                     = 3,
	CPM_MAX                        = 4
};


// Enum DreadHunger.EInventoryCraftingRecipient
enum class EInventoryCraftingRecipient : uint8_t
{
	ICR_UNDEFINED                  = 0,
	ICR_OWNER                      = 1,
	ICR_INSTIGATOR                 = 2,
	ICR_MAX                        = 3
};


// Enum DreadHunger.ECraftingMethod
enum class ECraftingMethod : uint8_t
{
	CM_UNDEFINED                   = 0,
	CM_GROUND                      = 1,
	CM_INVENTORY                   = 2,
	CM_MAX                         = 3
};


// Enum DreadHunger.ECraftingEffectSpawnStyle
enum class ECraftingEffectSpawnStyle : uint8_t
{
	CES_UNDEFINED                  = 0,
	CES_SINGLE                     = 1,
	CES_PERINGREDIENT              = 2,
	CES_MAX                        = 3
};


// Enum DreadHunger.ECraftingComponentFamily
enum class ECraftingComponentFamily : uint8_t
{
	CCF_UNDEFINED                  = 0,
	CCF_MEATS                      = 1,
	CCF_METALS                     = 2,
	CCF_FUEL                       = 3,
	CCF_ARROWHEADS                 = 4,
	CCF_REPAIRABLE                 = 5,
	CCF_MAX                        = 6
};


// Enum DreadHunger.ESettingValueDisplayType
enum class ESettingValueDisplayType : uint8_t
{
	VDT_PERCENT                    = 0,
	VDT_MULTIPLIER                 = 1,
	VDT_NUMBER                     = 2,
	VDT_MAX                        = 3
};


// Enum DreadHunger.ESettingValueAdjustmentType
enum class ESettingValueAdjustmentType : uint8_t
{
	VAT_SLIDER                     = 0,
	VAT_CHECKBOX                   = 1,
	VAT_MAX                        = 2
};


// Enum DreadHunger.ECustomGameSetting
enum class ECustomGameSetting : uint8_t
{
	CGS_UNDEFINED                  = 0,
	CGS_THRALLCOUNT                = 1,
	CGS_BLIZZARDDELAY              = 2,
	CGS_DAYLENGTH                  = 3,
	CGS_PREDATORDAMAGE             = 4,
	CGS_COLD                       = 5,
	CGS_HUNGER                     = 6,
	CGS_COALBURN                   = 7,
	CGS_MAX                        = 8
};


// Enum DreadHunger.EDH_DateTimeStyleType
enum class EDH_DateTimeStyleType : uint8_t
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EDH_MAX                        = 5
};


// Enum DreadHunger.EDoorOpenStyle
enum class EDoorOpenStyle : uint8_t
{
	DOS_UNDEFINED                  = 0,
	DOS_SWING                      = 1,
	DOS_SLIDE                      = 2,
	DOS_MAX                        = 3
};


// Enum DreadHunger.EDH_EscapePriority
enum class EDH_EscapePriority : uint8_t
{
	None                           = 0,
	DebugControls                  = 1,
	LootContainerBase              = 2,
	Journal                        = 3,
	EntitlementsShop               = 4,
	LobbyMissionMap                = 5,
	OnlineFriendsList              = 6,
	ReplayBrowser                  = 7,
	Overlay                        = 8,
	Scoreboard                     = 9,
	EscapeMenu                     = 10,
	Settings                       = 11,
	VOIPEchoTest                   = 12,
	VOIPProblems                   = 13,
	LoadingScreen                  = 14,
	EDH_MAX                        = 15
};


// Enum DreadHunger.EDHCompleteVersionFlags
enum class EDHCompleteVersionFlags : uint8_t
{
	None                           = 0,
	Version                        = 1,
	Changelist                     = 2,
	Environment                    = 3,
	EDHCompleteVersionFlags_MAX    = 4
};


// Enum DreadHunger.EImpactDecalOrientation
enum class EImpactDecalOrientation : uint8_t
{
	IDO_UNDEFINED                  = 0,
	IDO_INSTIGATOR                 = 1,
	IDO_RANDOM                     = 2,
	IDO_VELOCITY                   = 3,
	IDO_MAX                        = 4
};


// Enum DreadHunger.EImpactCameraShakeTarget
enum class EImpactCameraShakeTarget : uint8_t
{
	CST_UNDEFINED                  = 0,
	CST_INSTIGATOR                 = 1,
	CST_RECIPIENT                  = 2,
	CST_BOTH                       = 3,
	CST_MAX                        = 4
};


// Enum DreadHunger.EPickupThrowState
enum class EPickupThrowState : uint8_t
{
	PTS_NONE                       = 0,
	PTS_DROPPED                    = 1,
	PTS_THROWN                     = 2,
	PTS_MAX                        = 3
};


// Enum DreadHunger.EDropTableSpawnMethod
enum class EDropTableSpawnMethod : uint8_t
{
	DTSM_UNDEFINED                 = 0,
	DTSM_TRANSACT                  = 1,
	DTSM_IMMEDIATE                 = 2,
	DTSM_MAX                       = 3
};


// Enum DreadHunger.EEffectListPlaybackOrder
enum class EEffectListPlaybackOrder : uint8_t
{
	LPO_UNDEFINED                  = 0,
	LPO_RANDOM                     = 1,
	LPO_SEQUENTIAL                 = 2,
	LPO_MAX                        = 3
};


// Enum DreadHunger.EInventoryEffectFilter
enum class EInventoryEffectFilter : uint8_t
{
	IEF_ALL                        = 0,
	IEF_AUDIO                      = 1,
	IEF_ANIMATION                  = 2,
	IEF_PARTICLES                  = 3,
	IEF_MAX                        = 4
};


// Enum DreadHunger.EInventoryDropMethod
enum class EInventoryDropMethod : uint8_t
{
	IDM_INPUT                      = 0,
	IDM_FORCED                     = 1,
	IDM_SCRIPT                     = 2,
	IDM_MAX                        = 3
};


// Enum DreadHunger.EInventoryTransactionRules
enum class EInventoryTransactionRules : uint8_t
{
	ITR_READONLY                   = 0,
	ITR_TAKEONLY                   = 1,
	ITR_GIVEONLY                   = 2,
	ITR_GIVEANDTAKE                = 3,
	ITR_MAX                        = 4
};


// Enum DreadHunger.EInventoryStateFlags
enum class EInventoryStateFlags : uint8_t
{
	ISF_None                       = 0,
	ISF_Poisoned                   = 1,
	ISF_MAX                        = 2
};


// Enum DreadHunger.EInventoryAnimMontageState
enum class EInventoryAnimMontageState : uint8_t
{
	IMS_UNDEFINED                  = 0,
	IMS_GRABBING                   = 1,
	IMS_EQUIPPING                  = 2,
	IMS_IDLING                     = 3,
	IMS_AIMING                     = 4,
	IMS_USING                      = 5,
	IMS_RELOADING                  = 6,
	IMS_DROPPING                   = 7,
	IMS_THROWING                   = 8,
	IMS_HOLSTERED                  = 9,
	IMS_MAX                        = 10
};


// Enum DreadHunger.EInventoryAimingStyle
enum class EInventoryAimingStyle : uint8_t
{
	IAS_UNDEFINED                  = 0,
	IAS_HOLD                       = 1,
	IAS_TOGGLE                     = 2,
	IAS_MAX                        = 3
};


// Enum DreadHunger.EInventoryDominantHand
enum class EInventoryDominantHand : uint8_t
{
	IDH_UNDEFINED                  = 0,
	IDH_RIGHT                      = 1,
	IDH_LEFT                       = 2,
	IDH_MAX                        = 3
};


// Enum DreadHunger.EInventoryType
enum class EInventoryType : uint8_t
{
	CCT_UNDEFINED                  = 0,
	CCT_STICK                      = 1,
	CCT_STONE                      = 2,
	CCT_GUNPOWDER                  = 3,
	CCT_LEADINGOT                  = 4,
	CCT_IRONINGOT                  = 5,
	CCT_WHETSTONE                  = 6,
	CCT_COAL                       = 7,
	CCT_WOLFPELT                   = 8,
	CCT_BLUBBER                    = 9,
	CCT_SINEW                      = 10,
	CCT_BONE                       = 11,
	CCT_TRUTHPLANT                 = 12,
	CCT_HUMANBODYPART              = 13,
	CCT_ANIMALPART                 = 14,
	CCT_FLINT                      = 15,
	CCT_FIRE                       = 16,
	CCT_CODE                       = 17,
	CCT_NAILS                      = 18,
	CCT_QUEST                      = 19,
	CCT_RAWMEAT                    = 20,
	CCT_COOKEDMEAT                 = 21,
	CCT_STEW                       = 22,
	CCT_TEA                        = 23,
	CCT_BONEDAGGER                 = 24,
	CCT_BEARTRAP                   = 25,
	CCT_PISTOL                     = 26,
	CCT_MUSKET                     = 27,
	CCT_SWORD                      = 28,
	CCT_OLDSWORD                   = 29,
	CCT_CLEAVER                    = 30,
	CCT_ICEAXE                     = 31,
	CCT_WOODAXE                    = 32,
	CCT_HARPOON                    = 33,
	CCT_SHOVEL                     = 34,
	CCT_FISTS                      = 35,
	CCT_BOW                        = 36,
	CCT_COALBARREL                 = 37,
	CCT_POWDERKEG                  = 38,
	CCT_NITRO                      = 39,
	CCT_LAUDANUM                   = 40,
	CCT_SYRINGE                    = 41,
	CCT_LANTERN                    = 42,
	CCT_FLINTLOCKAMMO              = 43,
	CCT_GUNPARTS                   = 44,
	CCT_SKELETONKEY                = 45,
	CCT_UNIFORM                    = 46,
	CCT_SPYGLASS                   = 47,
	CCT_POISON                     = 48,
	CCT_ANTIDOTE                   = 49,
	CCT_HERBS                      = 50,
	CCT_CAPTAINKEY                 = 51,
	CCT_ARROWS                     = 52,
	CCT_PHONOGRAPH                 = 53,
	CCT_MAX                        = 54
};


// Enum DreadHunger.EDH_LobbyTutorialGoal
enum class EDH_LobbyTutorialGoal : uint8_t
{
	LTG_UNDEFINED                  = 0,
	LTG_CHOOSEMISSION              = 1,
	LTG_STARTBOILER                = 2,
	LTG_HELMSHIP                   = 3,
	LTG_BOARDSHIP                  = 4,
	IMS_MAX                        = 5,
	EDH_MAX                        = 6
};


// Enum DreadHunger.EDH_LogVerbosity
enum class EDH_LogVerbosity : uint8_t
{
	Log                            = 0,
	Warning                        = 1,
	Error                          = 2,
	EDH_MAX                        = 3
};


// Enum DreadHunger.EDH_MatchReplayVersion
enum class EDH_MatchReplayVersion : uint8_t
{
	Unknown                        = 0,
	Legacy                         = 1,
	SwitchToCustomFileFormat       = 2,
	Max                            = 3
};


// Enum DreadHunger.EMerchantDialogueType
enum class EMerchantDialogueType : uint8_t
{
	MDT_UNDEFINED                  = 0,
	MDT_GREETING                   = 1,
	MDT_FAREWELL                   = 2,
	MDT_ENTERSHOP                  = 3,
	MDT_EXITSHOP                   = 4,
	MDT_CALLOUT                    = 5,
	MDT_MAX                        = 6
};


// Enum DreadHunger.EDH_MOTDType
enum class EDH_MOTDType : uint8_t
{
	None                           = 0,
	Info                           = 1,
	Error                          = 2,
	Warning                        = 3,
	EDH_MAX                        = 4
};


// Enum DreadHunger.EDH_OnlineNameType
enum class EDH_OnlineNameType : uint8_t
{
	None                           = 0,
	Steam                          = 1,
	EDH_MAX                        = 2
};


// Enum DreadHunger.EDH_CanInventoryBeInteractedWithResult
enum class EDH_CanInventoryBeInteractedWithResult : uint8_t
{
	Success                        = 0,
	StackLimitReached              = 1,
	NoSlotsAvailable               = 2,
	NoInventory                    = 3,
	EDH_MAX                        = 4
};


// Enum DreadHunger.ECosmeticLimbDetachmentHandling
enum class ECosmeticLimbDetachmentHandling : uint8_t
{
	LDH_UNDEFINED                  = 0,
	LDH_ATTACH                     = 1,
	LDH_DETACH                     = 2,
	LDH_MAX                        = 3
};


// Enum DreadHunger.EPlayerCosmeticSlot
enum class EPlayerCosmeticSlot : uint8_t
{
	PCS_UNDEFINED                  = 0,
	PCS_HEAD                       = 1,
	PCS_FOREHEAD                   = 2,
	PCS_EYES                       = 3,
	PCS_EARS                       = 4,
	PCS_MOUTH                      = 5,
	PCS_BODY                       = 6,
	PCS_HANDS                      = 7,
	PCS_MAX                        = 8
};


// Enum DreadHunger.EDH_PlayerReportReasonType
enum class EDH_PlayerReportReasonType : uint8_t
{
	None                           = 0,
	Griefing                       = 1,
	Cheating                       = 2,
	CommsAbuse                     = 3,
	AFK                            = 4,
	EDH_MAX                        = 5
};


// Enum DreadHunger.EProjectileImpactHandling
enum class EProjectileImpactHandling : uint8_t
{
	PIH_DESTROY                    = 0,
	PIH_ATTACH                     = 1,
	PID_NOTHING                    = 2,
	EProjectileImpactHandling_MAX  = 3
};


// Enum DreadHunger.EDH_RestoreInvitesResult
enum class EDH_RestoreInvitesResult : uint8_t
{
	NoInvites                      = 0,
	HasInvites                     = 1,
	NoSessionObject                = 2,
	NotSuccessful                  = 3,
	EDH_MAX                        = 4
};


// Enum DreadHunger.EPerkValueComputation
enum class EPerkValueComputation : uint8_t
{
	PVC_UNDEFINED                  = 0,
	PVC_MULTIPLICATIVE             = 1,
	PVC_ADDITIVE                   = 2,
	PVC_MAX                        = 3
};


// Enum DreadHunger.EShipCosmeticType
enum class EShipCosmeticType : uint8_t
{
	SCT_UNDEFINED                  = 0,
	SCT_BOW                        = 1,
	SCT_HELM                       = 2,
	SCT_FLAGS                      = 3,
	SCT_HULL                       = 4,
	SCT_DECK                       = 5,
	SCT_WALLS                      = 6,
	SCT_FURNITURE                  = 7,
	SCT_DECORATIONS                = 8,
	SCT_LIGHTS                     = 9,
	SCT_MAX                        = 10
};


// Enum DreadHunger.ESpawnRotation
enum class ESpawnRotation : uint8_t
{
	SR_VOLUME                      = 0,
	SR_RANDOM                      = 1,
	SR_GROUND                      = 2,
	SR_GROUNDRANDOM                = 3,
	SR_MAX                         = 4
};


// Enum DreadHunger.EDH_TestCanJoinResult
enum class EDH_TestCanJoinResult : uint8_t
{
	Success                        = 0,
	Unknown                        = 1,
	GameHasStarted                 = 2,
	EmptyLobby                     = 3,
	LobbyKicked                    = 4,
	ListenServerNotReady           = 5,
	FullLobby                      = 6,
	InvalidURI                     = 7,
	EDH_MAX                        = 8
};


// Enum DreadHunger.EActorCleanupPhase
enum class EActorCleanupPhase : uint8_t
{
	ACP_AFTEROUTRO                 = 0,
	ACP_BEFOREOUTRO                = 1,
	ACP_MAX                        = 2
};


// Enum DreadHunger.EChapterAISpawnMethod
enum class EChapterAISpawnMethod : uint8_t
{
	ASM_AUTOMATIC                  = 0,
	ASM_MANUL                      = 1,
	ASM_MAX                        = 2
};


// Enum DreadHunger.EConceptExpirationStyle
enum class EConceptExpirationStyle : uint8_t
{
	CES_UNDEFINED                  = 0,
	CES_AUTOMATIC                  = 1,
	CES_ANYBIND                    = 2,
	CES_ALLBINDS                   = 3,
	CES_MAX                        = 4
};


// Enum DreadHunger.ETriggerVolumeInstigator
enum class ETriggerVolumeInstigator : uint8_t
{
	TVI_UNDEFINED                  = 0,
	TVI_PLAYER                     = 1,
	TVI_SHIP                       = 2,
	TVI_EITHER                     = 3,
	TVI_MAX                        = 4
};


// Enum DreadHunger.EPlayerVoiceType
enum class EPlayerVoiceType : uint8_t
{
	PVT_MALE                       = 0,
	PVT_FEMALE                     = 1,
	PVT_MAX                        = 2
};


// Enum DreadHunger.EPlayerTalismanPerk
enum class EPlayerTalismanPerk : uint8_t
{
	PTP_UNDEFINED                  = 0,
	PTP_COLDRESIST                 = 1,
	PTP_FOODVALUE                  = 2,
	PTP_HUNGERRATE                 = 3,
	PTP_HUNGERRATE_NIGHT           = 4,
	PTP_ANIMALDAMAGE               = 5,
	PTP_ANIMALAGGRO                = 6,
	PTP_FOGVISION                  = 7,
	PTP_STAMINADRAIN               = 8,
	PTP_REVIVESPEED                = 9,
	PTP_POKERLUCK                  = 10,
	PTP_VOICERANGE                 = 11,
	PTP_FALLDAMAGE                 = 12,
	PTP_FOOTSTEPVOLUME             = 13,
	PTP_FOODHEALTHREGEN            = 14,
	PTP_MAX                        = 15
};


// Enum DreadHunger.EPlayerRolePerk
enum class EPlayerRolePerk : uint8_t
{
	PRP_UNDEFINED                  = 0,
	PRP_SHIPHANDLING               = 1,
	PTR_TRINKETCHANCE              = 2,
	PTR_STOVESPEED                 = 3,
	PTR_MEDBOOST                   = 4,
	PTR_WORKBENCHSPEED             = 5,
	PTR_ANIMALRESIST               = 6,
	PTR_FOGVIS                     = 7,
	PTR_RELOADSPEED                = 8,
	PTR_MEATHARVESTSPEED           = 9,
	PTR_GROUNDSPEED                = 10,
	PTR_MAX                        = 11,
	EPlayerRolePerk_MAX            = 12
};


// Enum DreadHunger.EPlayerExperienceRank
enum class EPlayerExperienceRank : uint8_t
{
	PER_UNDEFINED                  = 0,
	PER_LANDSMAN                   = 1,
	PER_SEAMAN                     = 2,
	PER_ABLESEAMAN                 = 3,
	PER_PETTYOFFICER               = 4,
	PER_WARRANTOFFICER             = 5,
	PER_LIEUTENANT                 = 6,
	PER_COMMANDER                  = 7,
	PER_ADMIRAL                    = 8,
	PER_MAX                        = 9
};


// Enum DreadHunger.EPlayerTeamRole
enum class EPlayerTeamRole : uint8_t
{
	PTR_UNDEFINED                  = 0,
	PTR_CAPTAIN                    = 1,
	PTR_ENGINEER                   = 2,
	PTR_HUNTER                     = 3,
	PTR_COOK                       = 4,
	PTR_NAVIGATOR                  = 5,
	PTR_CHAPLAIN                   = 6,
	PTR_MARINE                     = 7,
	PTR_DOCTOR                     = 8,
	PTR_UNKNOWN                    = 9,
	PTR_MAX                        = 10
};


// Enum DreadHunger.EDHPlayerstartLocation
enum class EDHPlayerstartLocation : uint8_t
{
	PST_UNDEFINED                  = 0,
	PST_POKERROOM                  = 1,
	PST_BRIG                       = 2,
	PST_CORPSE                     = 3,
	PST_MAX                        = 4
};


// Enum DreadHunger.EClimbableActorType
enum class EClimbableActorType : uint8_t
{
	CAT_NONE                       = 0,
	CAT_LADDER                     = 1,
	CAT_ICEWALL                    = 2,
	CAT_MAX                        = 3
};


// Enum DreadHunger.ESpellTargetingStyle
enum class ESpellTargetingStyle : uint8_t
{
	STS_UNDEFINED                  = 0,
	STS_TARGET                     = 1,
	STS_GLOBAL                     = 2,
	STS_CASTER                     = 3,
	STS_MAX                        = 4
};


// Enum DreadHunger.EStatScoringValue
enum class EStatScoringValue : uint8_t
{
	SMD_UNDEFINED                  = 0,
	SMD_NEGATIVE_GIGANTIC          = 1,
	SMD_NEGATIVE_MASSIVE           = 2,
	SMD_NEGATIVE_MAJOR             = 3,
	SMD_NEGATIVE_MODERATE          = 4,
	SMD_NEGATIVE_SMALL             = 5,
	SMD_NEGATIVE_MINOR             = 6,
	SMD_NEGATIVE_SLIGHT            = 7,
	SMD_NEGATIVE_TRIVIAL           = 8,
	SMD_NEUTRAL                    = 9,
	SMD_POSITIVE_TRIVIAL           = 10,
	SMD_POSITIVE_SLIGHT            = 11,
	SMD_POSITIVE_MINOR             = 12,
	SMD_POSITIVE_SMALL             = 13,
	SMD_POSITIVE_MODERATE          = 14,
	SMD_POSITIVE_MAJOR             = 15,
	SMD_POSITIVE_MASSIVE           = 16,
	SMD_POSITIVE_GIGANTIC          = 17,
	SMD_MAX                        = 18
};


// Enum DreadHunger.ERelativeTeamAlignment
enum class ERelativeTeamAlignment : uint8_t
{
	RTA_UNDEFINED                  = 0,
	RTA_ALLY                       = 1,
	RTA_ENEMY                      = 2,
	RTA_SELF                       = 3,
	RTA_MAX                        = 4
};


// Enum DreadHunger.EGameOverReason
enum class EGameOverReason : uint8_t
{
	GOR_UNDEFINED                  = 0,
	GOR_EXPLORERS_ESCAPED          = 1,
	GOR_EXPLORERS_DIED             = 2,
	GOR_EXPLORERS_ABANDONED        = 3,
	GOR_SHIP_SANK                  = 4,
	PT_MAX                         = 5,
	EGameOverReason_MAX            = 6
};


// Enum DreadHunger.EDHTeam
enum class EDHTeam : uint8_t
{
	HumanTeam                      = 0,
	RabbitTeam                     = 1,
	WolfTeam                       = 2,
	CannibalTeam                   = 3,
	BearTeam                       = 4,
	WendigoTeam                    = 5,
	NoTeam                         = 6,
	EDHTeam_MAX                    = 7
};


// Enum DreadHunger.ETemperatureScale
enum class ETemperatureScale : uint8_t
{
	TS_UNDEFINED                   = 0,
	TS_KELVIN                      = 1,
	TS_FAHRENHEIT                  = 2,
	TS_CELSIUS                     = 3,
	TS_MAX                         = 4
};


// Enum DreadHunger.EPlayerAwardType
enum class EPlayerAwardType : uint8_t
{
	PAT_UNDEFINED                  = 0,
	PAT_COWARDLY                   = 1,
	PAT_SLY                        = 2,
	PAT_BLOODTHIRSTY               = 3,
	PAT_HONORABLE                  = 4,
	PAT_HELPFUL                    = 5,
	PAT_MAX                        = 6
};


// Enum DreadHunger.EPlayerPerformanceGrade
enum class EPlayerPerformanceGrade : uint8_t
{
	PPG_UNDEFINED                  = 0,
	PPG_FMINUS                     = 1,
	PPG_F                          = 2,
	PPG_FPLUS                      = 3,
	PPG_DMINUS                     = 4,
	PPG_D                          = 5,
	PPG_DPLUS                      = 6,
	PPG_CMINUS                     = 7,
	PPG_C                          = 8,
	PPG_CPLUS                      = 9,
	PPG_BMINUS                     = 10,
	PPG_B                          = 11,
	PPG_BPLUS                      = 12,
	PPG_AMINUS                     = 13,
	PPG_A                          = 14,
	PPG_APLUS                      = 15,
	PPG_S                          = 16,
	PPG_MAX                        = 17
};


// Enum DreadHunger.EPlayerMatchStatType
enum class EPlayerMatchStatType : uint8_t
{
	PMS_UNDEFINED                  = 0,
	PMS_KILLS_START                = 1,
	PMS_KILL_PLAYER_SELF           = 2,
	PMS_KILL_PLAYER_ENEMY          = 3,
	PMS_KILL_PLAYER_ALLY           = 4,
	PMS_KILL_WOLF                  = 5,
	PMS_KILL_RABBIT                = 6,
	PMS_KILL_BEAR                  = 7,
	PMS_KILL_SEAL                  = 8,
	PMS_KILL_CANNIBAL              = 9,
	PMS_KILLS_END                  = 10,
	PMS_DOWN_SELF                  = 11,
	PMS_DOWN_ALLY                  = 12,
	PMS_DOWN_ENEMY                 = 13,
	PMS_REVIVE_SELF                = 14,
	PMS_REVIVE_ALLY                = 15,
	PMS_REVIVE_ENEMY               = 16,
	PMS_HEAL_SELF                  = 17,
	PMS_HEAL_ALLY                  = 18,
	PMS_HEAL_ENEMY                 = 19,
	PMS_FEED_SELF                  = 20,
	PMS_FEED_ALLY                  = 21,
	PMS_FEED_ENEMY                 = 22,
	PMS_POISON_SELF                = 23,
	PMS_POISON_ALLY                = 24,
	PMS_POISON_ENEMY               = 25,
	PMS_CURE_SELF                  = 26,
	PMS_CURE_ALLY                  = 27,
	PMS_CURE_ENEMY                 = 28,
	PMS_WARM_SELF                  = 29,
	PMS_WARM_ALLY                  = 30,
	PMS_WARM_ENEMY                 = 31,
	PMS_JAILBREAK_ALLY             = 32,
	PMS_JAILBREAK_ENEMY            = 33,
	PMS_DAMAGE_ALLY                = 34,
	PMS_DAMAGE_ENEMY               = 35,
	PMS_DAMAGE_BEAR                = 36,
	PMS_STAYING_ALIVE              = 37,
	PMS_EMBEDDED                   = 38,
	PMS_ALLY_ESCAPED               = 39,
	PMS_ENEMY_ESCAPED              = 40,
	PMS_CRAFT_STEW                 = 41,
	PMS_CRAFT_PISTOL               = 42,
	PMS_CRAFT_MUSKET               = 43,
	PMS_CRAFT_WOODAXE              = 44,
	PMS_CRAFT_ICEAXE               = 45,
	PMS_CRAFT_SYRINGE              = 46,
	PMS_COAL_DESTROYED             = 47,
	PMS_NITRO_CARRY                = 48,
	PMS_NITRO_CARRY_ASSIST         = 49,
	PMS_NITRO_DESTROY              = 50,
	PMS_ICEBERG_DAMAGE             = 51,
	PMS_SMALL_ICEBERG_DESTROYED    = 52,
	PMS_LARGE_ICEBERG_DESTROYED    = 53,
	PMS_WIN_MATCH                  = 54,
	PMS_BOILER_FUEL                = 55,
	PMS_BOILER_SABOTAGE            = 56,
	PMS_SHIP_BADPARK               = 57,
	PMS_SHIP_MOVEUP                = 58,
	PMS_SHIP_MOVEBACK              = 59,
	PMS_SHIP_SLOWDRIVE             = 60,
	PMS_SHIP_REPAIR                = 61,
	PMS_SHIP_DAMAGE                = 62,
	PMS_SHIP_SINK                  = 63,
	PMS_STOLE_FOOD                 = 64,
	PMS_TOTEM_BUILT                = 65,
	PMS_TOTEM_DESTROYED            = 66,
	PMS_BONECHARM_DESTROYED        = 67,
	PMS_SPELL_WHITEOUT             = 68,
	PMS_SPELL_CANNIBALS            = 69,
	PMS_SPELL_SPIRITWALK           = 70,
	PMS_SPELL_GALE                 = 71,
	PMS_STOWAWAY                   = 72,
	PMS_POKER_WINS                 = 73,
	PMS_CHEATER                    = 74,
	PMS_SPELL_HYSTERIA             = 75,
	PMS_SPELL_DOPPELGANGER         = 76,
	PMS_SPELL_BLOODMOON            = 77,
	PMS_SPELL_HUSH                 = 78,
	PMS_BOILER_BOOST               = 79,
	PMS_KILL_RAT                   = 80,
	PMS_MAX                        = 81
};


// Enum DreadHunger.ECrewDialogueType
enum class ECrewDialogueType : uint8_t
{
	CDT_UNDEFINED                  = 0,
	CDT_GREETING                   = 1,
	CDT_MUSING                     = 2,
	CDT_FF_WARNING                 = 3,
	CDT_FF_ATTACK                  = 4,
	CDT_MAX                        = 5
};


// Enum DreadHunger.ECharacterHealthState
enum class ECharacterHealthState : uint8_t
{
	CHS_UNDEFINED                  = 0,
	CHS_DEAD                       = 1,
	CHS_BADLYINJURED               = 2,
	CHS_INJURED                    = 3,
	CHS_HEALTHY                    = 4,
	CHS_MAX                        = 5
};


// Enum DreadHunger.ECharacterDeathState
enum class ECharacterDeathState : uint8_t
{
	CDS_ALIVE                      = 0,
	CDS_DEAD                       = 1,
	CDS_CARCASS                    = 2,
	CDS_OBLITERATED                = 3,
	CDS_MAX                        = 4
};


// Enum DreadHunger.ETutorialChapters
enum class ETutorialChapters : uint8_t
{
	CHAPTER_UNDEFINED              = 0,
	CHAPTER_ONE                    = 1,
	CHAPTER_TWO                    = 2,
	CHAPTER_THREE                  = 3,
	CHAPTER_FOUR                   = 4,
	CHAPTER_FIVE                   = 5,
	CHAPTER_SIX                    = 6,
	CHAPTER_MAX                    = 7
};


// Enum DreadHunger.ESpecialEventType
enum class ESpecialEventType : uint8_t
{
	SET_UNDEFINED                  = 0,
	SET_AUTUMN                     = 1,
	SET_HALLOWEEN                  = 2,
	SET_CHRISTMAS                  = 3,
	SET_SPRING                     = 4,
	SET_FRANKLINLAUNCH             = 5,
	SET_SUMMER                     = 6,
	SET_LUNARNEWYEAR               = 7,
	SET_TEST                       = 8,
	SET_MAX                        = 9
};


// Enum DreadHunger.EShipSpacePartition
enum class EShipSpacePartition : uint8_t
{
	SSP_UNDEFINED                  = 0,
	SSP_EXTERIOR                   = 1,
	SSP_ENGINEROOM                 = 2,
	SSP_CAPTAINROOM                = 3,
	SSP_POKERROOM                  = 4,
	SSP_CORRIDORFORE               = 5,
	SSP_CORRIDORAFT                = 6,
	SSP_KITCHEN                    = 7,
	SSP_HOLDFORE                   = 8,
	SSP_HOLDAFT                    = 9,
	SSP_MAX                        = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DreadHunger.DH_OnlineError
// 0x0020
struct FDH_OnlineError
{
	int                                                Code;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      RawError;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AddDelayTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_VivoxError
// 0x0030
struct FDH_VivoxError
{
	int                                                Code;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      RawError;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Origin;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AddDelayTime;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_PokerGameTimeStat
// 0x000C
struct FDH_PokerGameTimeStat
{
	EPokerGameTimeStatType                             Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeInterval;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ServerTimeStarted;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_PriceDataWrapper
// 0x0060
struct FDH_PriceDataWrapper
{

};

// ScriptStruct DreadHunger.DH_OnlineSearchResult
// 0x0188
struct FDH_OnlineSearchResult
{
	TMap<struct FName, class FString>                  StringSettings;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bShowMapName;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FText                                       LocalizedMapName;                                         // 0x0058(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x118];                                     // 0x0070(0x0118) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_XPProgressData
// 0x000C
struct FDH_XPProgressData
{
	int                                                StartValue;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusValue;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.PlayingCardHand
// 0x0038
struct FPlayingCardHand
{
	class ADH_LobbyPawn*                               Holder;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayingCardProperties>              Cards;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EPokerHandRank                                     HandRank;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<EPlayingCardRank>                           OrderedValues;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.PlayingCardProperties
// 0x0008
struct FPlayingCardProperties
{
	EPlayingCardSuit                                   Suit;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayingCardRank                                   Rank;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                HandIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.CustomGameSetting
// 0x0088
struct FCustomGameSetting
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FCustomGameSettingValueRange                ValueRange;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FCustomGameSettingUIData                    UISettings;                                               // 0x0020(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct DreadHunger.CustomGameSettingUIData
// 0x0068
struct FCustomGameSettingUIData
{
	ESettingValueAdjustmentType                        ValueAdjustmentType;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESettingValueDisplayType                           ValueDisplayType;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       LabelText;                                                // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BorderColor;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     BorderPadding;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SliderIncrement;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.CustomGameSettingValueRange
// 0x000C
struct FCustomGameSettingValueRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ActorRandomizationGroup
// 0x0070
struct FActorRandomizationGroup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: 
	struct FLinearColor                                VisualizationColor;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<class AActor*, struct FActorTypeRandomization> ActorTypes;                                               // 0x0020(0x0050) (Edit, DisableEditOnTemplate)
};

// ScriptStruct DreadHunger.ActorTypeRandomization
// 0x0018
struct FActorTypeRandomization
{
	struct FDHFloatInterval                            SpawnChance;                                              // 0x0000(0x0008) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct DreadHunger.DHFloatInterval
// size:0x0000 (0x0008 - 0x0008)
struct FDHFloatInterval : public FFloatInterval
{

};

// ScriptStruct DreadHunger.AnimalAttack
// 0x0048
struct FAnimalAttack
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageDelay;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttackType                                        AttackType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              AttackRange;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOERadius;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Animation;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttackAnimationSlot                               AnimationSlot;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlocksMovement;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Impulse;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttackImpulseDirection                            ImpulseDirection;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.AttackFlash
// 0x0008
struct FAttackFlash
{
	unsigned char                                      Count;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Type;                                                     // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.AIAttack
// 0x0018
struct FAIAttack
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDH_AIAttack*                                Type;                                                     // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.RandomMaterialsList
// 0x0010
struct FRandomMaterialsList
{
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.MaterialSectionVisibilityMap
// 0x0010
struct FMaterialSectionVisibilityMap
{
	TArray<int>                                        HiddenSections;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.SnareFlash
// 0x0010
struct FSnareFlash
{
	class ADH_BearTrapPickup*                          Snare;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.ClimbingAnimations
// 0x0018
struct FClimbingAnimations
{
	class UAnimSequenceBase*                           StartAnim;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           StopAnim;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.CharacterIKData
// 0x0024
struct FCharacterIKData
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoneLocation;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.PreviewCosmeticItems
// 0x0050
struct FPreviewCosmeticItems
{
	TMap<unsigned char, struct FPreviewItemsList>      ItemList;                                                 // 0x0000(0x0050)
};

// ScriptStruct DreadHunger.PreviewItemsList
// 0x0010
struct FPreviewItemsList
{
	TArray<class UDH_CosmeticItemBase*>                Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DreadHunger.PreviewAvatarCameraPerspective
// 0x0040
struct FPreviewAvatarCameraPerspective
{
	struct FTransform                                  CameraTransform;                                          // 0x0000(0x0030) (Edit, IsPlainOldData)
	float                                              FOV;                                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCameraPanAngle;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.CosmeticsItemsList
// 0x0020
struct FCosmeticsItemsList
{
	TArray<class UDH_CosmeticBundle*>                  Bundles;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDH_CosmeticItemBase*>                NonBundleItems;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.CraftingRecord
// 0x0010
struct FCraftingRecord
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CraftCount;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.PotentialCraftingProject
// 0x0060
struct FPotentialCraftingProject
{
	class UDH_CraftingRecipe*                          Recipe;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  PreviewTransform;                                         // 0x0010(0x0030) (BlueprintVisible, IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh;                                              // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PlacementBounds;                                          // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasValidPlacement;                                       // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0055(0x000B) MISSED OFFSET
};

// ScriptStruct DreadHunger.CraftingIngredientData
// 0x0020
struct FCraftingIngredientData
{
	struct FText                                       FriendlyName;                                             // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.CraftingIngredientFamilyData
// size:0x0010 (0x0020 - 0x0030)
struct FCraftingIngredientFamilyData : public FCraftingIngredientData
{
	TArray<EInventoryType>                             MEMBERS;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.ActivityProp
// 0x0040
struct FActivityProp
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AttachTransform;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct DreadHunger.PathActivity
// 0x0018
struct FPathActivity
{
	struct FName                                       ActivityName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActivityActor;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.AdjacentPath
// 0x0018
struct FAdjacentPath
{
	TArray<int>                                        EntryPoints;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.PlayerCountDefaultSettings
// 0x0050
struct FPlayerCountDefaultSettings
{
	TMap<ECustomGameSetting, struct FCustomGameSetting> DefaultSettings;                                          // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.DH_DateTimeStyle
// 0x0001
struct FDH_DateTimeStyle
{

};

// ScriptStruct DreadHunger.DH_DefaultLanguageFilterState
// 0x0020
struct FDH_DefaultLanguageFilterState
{
	EDH_OnlineNameType                                 Subsystem;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      GameLanguage;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSelected;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_DefaultRegion
// 0x0018
struct FDH_DefaultRegion
{
	EDH_OnlineNameType                                 Subsystem;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      GameLanguage;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
};

// ScriptStruct DreadHunger.DestructibleFragment
// 0x0020
struct FDestructibleFragment
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Class;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBonusFragment;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_EntitlementPrice
// 0x000C
struct FDH_EntitlementPrice
{

};

// ScriptStruct DreadHunger.DH_Entitlement
// 0x0018
struct FDH_Entitlement
{
	struct FName                                       Subsystem;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              Ids;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.DH_Error
// 0x0008
struct FDH_Error
{
	int                                                DomainCode;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_PendingOnlineError
// 0x0028
struct FDH_PendingOnlineError
{

};

// ScriptStruct DreadHunger.DH_PendingVivoxError
// 0x0038
struct FDH_PendingVivoxError
{

};

// ScriptStruct DreadHunger.DH_HandlerGroup
// 0x0018
struct FDH_HandlerGroup
{
	TArray<TScriptInterface<class UDH_EscapeHandlerInterface>> Handlers;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.ExplosionActorEvent
// 0x0048
struct FExplosionActorEvent
{
	struct FRadialDamageEvent                          DamageEvent;                                              // 0x0000(0x0040)
	class AActor*                                      OverlapActor;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.DHCompleteVersion
// 0x0030
struct FDHCompleteVersion
{
	class FString                                      VERSION;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Changelist;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Environment;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DreadHunger.DH_DaysUntilBlizzard
// 0x0008
struct FDH_DaysUntilBlizzard
{
	int                                                Current;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.DHPlayerVersionMismatch
// 0x0040
struct FDHPlayerVersionMismatch
{
	struct FDHCompleteVersion                          VERSION;                                                  // 0x0000(0x0030) (BlueprintVisible)
	class FString                                      PlayerName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DreadHunger.DH_EntitlementState
// 0x0038
struct FDH_EntitlementState
{

};

// ScriptStruct DreadHunger.CachedProcMeshGeometry
// 0x0020
struct FCachedProcMeshGeometry
{
	TArray<struct FProcMeshSectionData>                Sections;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FVector                                     PivotOffset;                                              // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ParentBoneIndex;                                          // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ProcMeshSectionData
// 0x00B0
struct FProcMeshSectionData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     MeshToSectionVertMap;                                     // 0x0010(0x0050) (BlueprintVisible, BlueprintReadOnly)
	TArray<int>                                        Triangles;                                                // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector2D>                           UVs;                                                      // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.FuelContributor
// 0x0010
struct FFuelContributor
{
	class ADH_PlayerState*                             PlayerState;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                ExpirationTimer;                                          // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct DreadHunger.ScreenBloodSpatterEffect
// 0x0028
struct FScreenBloodSpatterEffect
{
	float                                              RemainingTime;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPos;                                                // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimPhase;                                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.BloodFlipbookTexture
// 0x0020
struct FBloodFlipbookTexture
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SizeRange;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RotationRange;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CellCount;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.Hallucination
// 0x0058
struct FHallucination
{
	TMap<class ADH_Character*, int>                    AttackerTypes;                                            // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class USoundBase*                                  Sound;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.RemovedIcebergChunks
// 0x0020
struct FRemovedIcebergChunks
{
	TArray<unsigned char>                              Left;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              Right;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DreadHunger.ActorImpactEffectList
// 0x0010
struct FActorImpactEffectList
{
	TArray<struct FImpactEffectInstance>               ActiveImpacts;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DreadHunger.ImpactEffectInstance
// 0x0028
struct FImpactEffectInstance
{
	class UDH_ImpactEffect*                            Type;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ImpactedSurface;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UParticleSystemComponent>     Particle;                                                 // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              Sound;                                                    // 0x0018(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDecalComponent>              Decal;                                                    // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct DreadHunger.FluidDisturbance
// 0x0014
struct FFluidDisturbance
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ImpactEffect
// 0x00A0
struct FImpactEffect
{
	class UParticleSystem*                             Particle;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LocalSound;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FImpactDecal                                Decal;                                                    // 0x0020(0x0050) (Edit, BlueprintVisible)
	struct FImpactCameraShake                          CameraShake;                                              // 0x0070(0x0018) (Edit, BlueprintVisible)
	struct FImpactScreenOverlay                        ScreenOverlay;                                            // 0x0088(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.ImpactScreenOverlay
// 0x0014
struct FImpactScreenOverlay
{
	bool                                               bApplyTint;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Tint;                                                     // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ImpactCameraShake
// 0x0018
struct FImpactCameraShake
{
	class UMatineeCameraShake*                         Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Falloff;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientTowardEpicenter;                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EImpactCameraShakeTarget                           Target;                                                   // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct DreadHunger.ImpactDecal
// 0x0050
struct FImpactDecal
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EImpactDecalOrientation                            Orientation;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_InputModeWidget
// 0x000C
struct FDH_InputModeWidget
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_KeybindInteractionMessage
// 0x0030
struct FDH_KeybindInteractionMessage
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	TArray<struct FDH_KeybindKey>                      Keybinds;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShowKeybind;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_KeybindKey
// 0x0020
struct FDH_KeybindKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               bHold;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_InteractPermissions
// 0x0002
struct FDH_InteractPermissions
{
	bool                                               bCanLook;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanTouch;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.InventoryEffectActiveSoundList
// 0x0010
struct FInventoryEffectActiveSoundList
{

};

// ScriptStruct DreadHunger.InventoryViewFlash
// 0x0010
struct FInventoryViewFlash
{
	class ADH_InventoryView*                           ViewClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FlashCount;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.MeleeHitFlash
// 0x00A0
struct FMeleeHitFlash
{
	struct FHitResult                                  Hit;                                                      // 0x0000(0x008C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class ADH_Inventory*                               WeaponClass;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AttackState;                                              // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FlashCount;                                               // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct DreadHunger.InventorySelection
// 0x000C
struct FInventorySelection
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADH_Inventory>                Inventory;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ConsumableItemStatValues
// 0x0014
struct FConsumableItemStatValues
{
	float                                              HealthValue;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NutritionalValue;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarmthValue;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAntidote;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              SicknessValue;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.ViewAlignedInventoryEventEffects
// 0x0028
struct FViewAlignedInventoryEventEffects
{
	TArray<struct FInventoryEventEffect>               FirstPerson;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryEventEffect>               ThirdPerson;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	EEffectListPlaybackOrder                           PlaybackOrder;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.InventoryEventEffect
// 0x0038
struct FInventoryEventEffect
{
	struct FInventoryEventAudioProperties              Sound;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInventoryEventAnimationProperties          Animation;                                                // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       AttachSocket;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Particle;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.InventoryEventAnimationProperties
// 0x0018
struct FInventoryEventAnimationProperties
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Animation_BlendIn;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Animation_BlendOut;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraAnim*                                 CameraAnimation;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.InventoryEventAudioProperties
// 0x0010
struct FInventoryEventAudioProperties
{
	class USoundBase*                                  SFX;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  VOX;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.InventoryEventEffectInstance
// 0x0030
struct FInventoryEventEffectInstance
{
	TArray<class UAudioComponent*>                     Sounds;                                                   // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class UParticleSystemComponent*                    Particle;                                                 // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct DreadHunger.ApplyInventoryCounter
// 0x0010
struct FApplyInventoryCounter
{
	class UObject*                                     Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Count;                                                    // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_InventoryList
// 0x0028
struct FDH_InventoryList
{
	TArray<class ADH_Inventory*>                       InventoryList;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GuaranteedSpawns;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaximumSpawns;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StackSizeToSpawn;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.OwnerMovementRestrictions
// 0x0002
struct FOwnerMovementRestrictions
{
	bool                                               bAllowSprinting;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowJumping;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.InventoryReplicationCounter
// 0x0008
struct FInventoryReplicationCounter
{
	unsigned char                                      Count;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      State;                                                    // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.InventorySlotContents
// 0x0058
struct FInventorySlotContents
{
	class UDH_InventoryManager*                        Owner;                                                    // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     SlotType;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SlotQuantity;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FInventoryItemState                         SlotItemState;                                            // 0x0018(0x0038) (Edit, BlueprintVisible)
	bool                                               bIsGeneratedByproduct;                                    // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.InventoryItemState
// 0x0038
struct FInventoryItemState
{
	int                                                ItemUID;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UsesRemaining;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Durability;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PublicReplicatedFlags;                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpgraded;                                                // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTainted;                                                 // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	class ADH_PlayerState*                             OriginalHolder;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class ADH_PlayerState*                             LastHolder;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ADH_PlayerState*                             Poisoner;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ADH_PlayerState*                             HumanCorpse;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ADH_InventoryView*                           ViewClass;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_DisabledLanguageCode
// 0x0028
struct FDH_DisabledLanguageCode
{
	struct FText                                       Code;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	class FString                                      Reason;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DreadHunger.DH_LanguageCode
// 0x0080
struct FDH_LanguageCode
{
	struct FText                                       Code;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       FullName;                                                 // 0x0018(0x0028) (Edit, BlueprintVisible)
	TMap<EDH_OnlineNameType, class FString>            SubsystemCulture;                                         // 0x0030(0x0050) (Edit, BlueprintVisible)
};

// ScriptStruct DreadHunger.DH_LobbyNamePattern
// 0x0010
struct FDH_LobbyNamePattern
{

};

// ScriptStruct DreadHunger.DH_LobbyCharSet
// 0x0010
struct FDH_LobbyCharSet
{

};

// ScriptStruct DreadHunger.DH_LobbySessionData
// 0x0088
struct FDH_LobbySessionData
{
	bool                                               bPublic;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      Destination;                                              // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      URI;                                                      // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      SESSIONIDTOJOIN;                                          // 0x0028(0x0010) (ZeroConstructor)
	TMap<class FString, float>                         CustomGameSettings;                                       // 0x0038(0x0050)
};

// ScriptStruct DreadHunger.LobbyTutorialGoal
// 0x000C
struct FLobbyTutorialGoal
{

};

// ScriptStruct DreadHunger.PokerGameTiming
// 0x0010
struct FPokerGameTiming
{
	float                                              RoundTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoundEndDelay;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NextRoundDelay;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndGameDelay;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_LoginStatusText
// 0x0030
struct FDH_LoginStatusText
{

};

// ScriptStruct DreadHunger.TitleDataFile
// 0x0018
struct FTitleDataFile
{
	class FString                                      Filename;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bCompressed;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.MapPlayerCountRange
// 0x000C
struct FMapPlayerCountRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Default;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.MerchantDialogueList
// 0x0020
struct FMerchantDialogueList
{
	TArray<struct FMerchantDialogue>                   List;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMerchantDialogue>                   RemainingLines;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DreadHunger.MerchantDialogue
// 0x0010
struct FMerchantDialogue
{
	class USoundBase*                                  Normal;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sale;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_OnlineSessionData
// 0x00F8
struct FDH_OnlineSessionData
{

};

// ScriptStruct DreadHunger.DH_OnlineSessionMemberData
// 0x0030
struct FDH_OnlineSessionMemberData
{

};

// ScriptStruct DreadHunger.DH_LobbyInviteInfo
// 0x0028
struct FDH_LobbyInviteInfo
{
	class FString                                      InviteId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      FromId;                                                   // 0x0010(0x0010) (ZeroConstructor)
	struct FDateTime                                   ReceivedTimestamp;                                        // 0x0020(0x0008) (ZeroConstructor)
};

// ScriptStruct DreadHunger.BuoyHitFlash
// 0x0010
struct FBuoyHitFlash
{
	struct FVector                                     HitDirection;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FlashCount;                                               // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct DreadHunger.CharacterRoleProgress
// 0x0010
struct FCharacterRoleProgress
{
	int                                                SRatingsObtained;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpanseWins;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ApproachWins;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SummitWins;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.SavedAchievementProgress
// 0x0058
struct FSavedAchievementProgress
{
	float                                              ProgressPct;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<class FString, struct FRoleAchievements>      RoleAchievements;                                         // 0x0008(0x0050)
};

// ScriptStruct DreadHunger.RoleAchievements
// 0x0058
struct FRoleAchievements
{
	bool                                               bObtainedSRating;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<class FString, bool>                          MapsWon;                                                  // 0x0008(0x0050)
};

// ScriptStruct DreadHunger.DH_CosmeticSlotSettings
// 0x0014
struct FDH_CosmeticSlotSettings
{
	bool                                               bExclusive;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                OverlapPlane;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.CosmeticMaterialOverrides
// 0x00A0
struct FCosmeticMaterialOverrides
{
	TMap<int, class UMaterialInterface*>               OverrideMaterials;                                        // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<int, struct FCosmeticMaterialParameters>      MaterialParameters;                                       // 0x0050(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.CosmeticMaterialParametersBase
// 0x00A8
struct FCosmeticMaterialParametersBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<struct FName, struct FLinearColor>            VectorParams;                                             // 0x0008(0x0050) (Edit, DisableEditOnInstance)
	TMap<struct FName, float>                          ScalarParams;                                             // 0x0058(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.CosmeticMaterialParameters
// size:0x0050 (0x00A8 - 0x00F8)
struct FCosmeticMaterialParameters : public FCosmeticMaterialParametersBase
{
	TMap<struct FName, class UTexture*>                TextureParams;                                            // 0x00A8(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.CosmeticAppearance
// size:0x0020 (0x00A0 - 0x00C0)
struct FCosmeticAppearance : public FCosmeticMaterialOverrides
{
	TArray<struct FCosmeticStaticMeshAttachment>       StaticMeshAttachments;                                    // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCosmeticSkeletalMeshAttachment>     SkeletalMeshAttachments;                                  // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.CosmeticSkeletalMeshAttachment
// 0x0070
struct FCosmeticSkeletalMeshAttachment
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimInstance*                               AnimationBlueprint;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCosmeticAttachmentInfo                     Attachment;                                               // 0x0010(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ClippingPlaneBias;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct DreadHunger.CosmeticAttachmentInfo
// 0x0050
struct FCosmeticAttachmentInfo
{
	struct FName                                       AttachSocket;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  AttachTransform;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVisibleInFirstPerson;                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct DreadHunger.CosmeticStaticMeshAttachment
// 0x0070
struct FCosmeticStaticMeshAttachment
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FCosmeticAttachmentInfo                     Attachment;                                               // 0x0010(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ClippingPlaneBias;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct DreadHunger.PlayerCustomizationData
// 0x0070
struct FPlayerCustomizationData
{
	class FString                                      PlayerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TMap<class FString, struct FCosmeticsList>         EquippedCosmetics;                                        // 0x0010(0x0050)
	struct FCosmeticsList                              OwnedCosmetics;                                           // 0x0060(0x0010)
};

// ScriptStruct DreadHunger.CosmeticsList
// 0x0010
struct FCosmeticsList
{
	TArray<class FString>                              Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DreadHunger.EquippedCosmeticsBase
// 0x0010
struct FEquippedCosmeticsBase
{
	TArray<class UDH_CosmeticItemBase*>                EquippedItems;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.EquippedPlayerCosmetics
// size:0x0008 (0x0010 - 0x0018)
struct FEquippedPlayerCosmetics : public FEquippedCosmeticsBase
{
	EPlayerTeamRole                                    Role;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_PlayerReportData
// 0x0020
struct FDH_PlayerReportData
{

};

// ScriptStruct DreadHunger.DH_PlayerProgression
// 0x0298
struct FDH_PlayerProgression
{
	TMap<EPlayerTeam, struct FDH_ProgressionData>      ByTeam;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FDH_ProgressionData                         Total;                                                    // 0x0050(0x01A0) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TMap<EPlayerTeamRole, struct FDH_TeamRoleLevel>    Experiences;                                              // 0x01F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TMap<EPlayerTeamRole, int>                         Prestiges;                                                // 0x0240(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_TeamRoleLevel
// 0x0008
struct FDH_TeamRoleLevel
{
	int                                                Experience;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Rank;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct DreadHunger.DH_ProgressionData
// 0x01A0
struct FDH_ProgressionData
{
	struct FDH_GamesPlayed                             Games;                                                    // 0x0000(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FDH_GamesPlayed                             Wins;                                                     // 0x00A8(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TMap<EPlayerPerformanceGrade, int>                 Ratings;                                                  // 0x0150(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct DreadHunger.DH_GamesPlayed
// 0x00A8
struct FDH_GamesPlayed
{

};

// ScriptStruct DreadHunger.DH_ServerAddress
// 0x0028
struct FDH_ServerAddress
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              IPAddress;                                                // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.Trinket
// 0x0020
struct FTrinket
{
	class ADH_Inventory*                               ItemToSpawn;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightForThrallFirstRoll;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanSpawnOnWildlife;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanSpawnInLobby;                                         // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                SpawnLimit;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHunger.ArmoryCode
// 0x0002
struct FArmoryCode
{
	unsigned char                                      Key;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.CardBGTextures
// 0x0010
struct FCardBGTextures
{
	class UTexture2D*                                  Albedo;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  NAR;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.CardRankTextures
// 0x0010
struct FCardRankTextures
{
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.DH_ProjectileSpawnFlash
// 0x0028
struct FDH_ProjectileSpawnFlash
{
	class ADH_Projectile*                              ProjectileClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDH_ProjectileSpawnTransform                SpawnTransform;                                           // 0x0008(0x0018)
	unsigned char                                      Flash;                                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.DH_ProjectileSpawnTransform
// 0x0018
struct FDH_ProjectileSpawnTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ShipCosmeticAppearance
// 0x01A8
struct FShipCosmeticAppearance
{
	struct FName                                       HoveredCameraPerspective;                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UMaterialParameterCollection*, struct FCosmeticMaterialParametersBase> MaterialCollectionOverrides;                              // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FName, struct FCosmeticMaterialOverrides> MaterialOverrides;                                        // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FShipDecoration>                     Decorations;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UStaticMesh*>             MeshReplacements;                                         // 0x00B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FName, class USkeletalMesh*>           SkeletalMeshReplacements;                                 // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FName, struct FLightSettingsOverride>  LightingOverrides;                                        // 0x0158(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.LightSettingsOverride
// 0x0020
struct FLightSettingsOverride
{
	struct FLinearColor                                LightColor;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TemperatureMultiplier;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideLightFunction;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UMaterialInterface*                          LightFunction;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.ShipDecoration
// 0x0050
struct FShipDecoration
{
	class ADH_ShipDecoration*                          Class;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachComponent;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0020(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.EquippedShipCosmetics
// size:0x0008 (0x0010 - 0x0018)
struct FEquippedShipCosmetics : public FEquippedCosmeticsBase
{
	EShipCustomizationRegion                           Region;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHunger.ShipCustomizationRegion
// 0x0020
struct FShipCustomizationRegion
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.SpawnPoint
// 0x0018
struct FSpawnPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ThrallMessageData
// 0x0030
struct FThrallMessageData
{
	struct FText                                       ShortDescription;                                         // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       LongDescription;                                          // 0x0018(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.ChapterAICrewmate
// 0x0018
struct FChapterAICrewmate
{
	class ADH_HumanCharacter*                          PawnClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnPoint;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADH_CrewPathSplineActor*                     Path;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct DreadHunger.ChapterAISpawnGroup
// 0x0020
struct FChapterAISpawnGroup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EChapterAISpawnMethod                              SpawnMethod;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class ADH_AISpawnManager*>                  Spawners;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DreadHunger.TutorialTerm
// 0x0030
struct FTutorialTerm
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FriendlyName;                                             // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       TextStyle;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IconStyle;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.TutorialConcept
// 0x0060
struct FTutorialConcept
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FriendlyName;                                             // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EConceptExpirationStyle                            ExpirationMethod;                                         // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideCurrent;                                         // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	TArray<struct FName>                               ActionBinds;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               AxisBinds;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.ObjectiveMessage
// 0x0028
struct FObjectiveMessage
{
	struct FText                                       Message;                                                  // 0x0000(0x0028) (Edit)
	class USoundBase*                                  Sound;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.PlayerExperienceRank
// 0x0020
struct FPlayerExperienceRank
{
	struct FText                                       FriendlyName;                                             // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHunger.SpellCooldown
// 0x0010
struct FSpellCooldown
{
	class UDH_TotemSpell*                              SpellClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ServerUsedTime;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.SpellInstance
// 0x0010
struct FSpellInstance
{
	class UObject*                                     SpellClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	ETotemSpellTiers                                   CastTier;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              CastTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.DamageInstance
// 0x0030
struct FDamageInstance
{
	class UDH_DamageType*                              DamageType;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageLocation;                                           // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamagedBone;                                              // 0x0014(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageCounter;                                            // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClientHit;                                               // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              Time;                                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.ScoreableActionData
// 0x0050
struct FScoreableActionData
{
	TMap<EPlayerTeam, struct FTeamAlignedScoreValue>   TeamScores;                                               // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct DreadHunger.TeamAlignedScoreValue
// 0x0058
struct FTeamAlignedScoreValue
{
	EStatScoringValue                                  ScoreValue;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<ERelativeTeamAlignment, EStatScoringValue>    PerTargetValues;                                          // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct DreadHunger.PlayerMatchStat
// 0x000C
struct FPlayerMatchStat
{
	EPlayerMatchStatType                               Stat;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScoreTotal;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.PlayerScoreGrade
// 0x0020
struct FPlayerScoreGrade
{
	struct FText                                       Title;                                                    // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              Threshold;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.CrewDialogueList
// 0x0010
struct FCrewDialogueList
{
	TArray<struct FCrewDialogue>                       Lines;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DreadHunger.CrewDialogue
// 0x0020
struct FCrewDialogue
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ECrewDialogueType                                  Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UDialogueWave*                               Wave;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.TutorialChapter
// 0x0038
struct FTutorialChapter
{
	struct FText                                       Title;                                                    // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Thumbnail;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.SpecialEvent
// 0x0028
struct FSpecialEvent
{
	class FString                                      Title;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      StartDate;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Duration;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHunger.RiggingData
// 0x0030
struct FRiggingData
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FRiggingSocketParam>                 Params;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Component;                                                // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MIDs;                                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct DreadHunger.RiggingSocketParam
// 0x001C
struct FRiggingSocketParam
{
	struct FName                                       Velocity;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Position;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct DreadHunger.HullBreachData
// 0x0038
struct FHullBreachData
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADH_HullBreach*                              Class;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeshComponent*                              Component;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct DreadHunger.ShipSectionData
// 0x0068
struct FShipSectionData
{
	class UStaticMesh*                                 Bounds;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EShipSpacePartition>                        AdjacentSections;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct DreadHunger.PendingBoilerSaboteur
// 0x0010
struct FPendingBoilerSaboteur
{
	class ADH_PlayerState*                             PlayerState;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SabotageStacks;                                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OverBoostStack;                                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHunger.VentReceivedInventoryCounter
// 0x0010
struct FVentReceivedInventoryCounter
{
	class ADH_HumanCharacter*                          Instigator;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Count;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
