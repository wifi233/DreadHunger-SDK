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
#include "DreadHunger-Win64-Shipping_DreadHunger_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DreadHungerUI.EMissionNodeState
enum class EMissionNodeState : uint8_t
{
	MNS_UNDEFINED                  = 0,
	MNS_UNAVAILABLE                = 1,
	MNS_AVAILABLE                  = 2,
	MNS_LOCKED                     = 3,
	MNS_MAX                        = 4
};


// Enum DreadHungerUI.EFilterButtonSelectionType
enum class EFilterButtonSelectionType : uint8_t
{
	FST_ADDITIVE                   = 0,
	FST_EXCLUSIVE                  = 1,
	FST_MAX                        = 2
};


// Enum DreadHungerUI.EDH_FuelScale
enum class EDH_FuelScale : uint8_t
{
	Undefined                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EDH_MAX                        = 4
};


// Enum DreadHungerUI.EDH_HumanAttributeAnimationHandlerType
enum class EDH_HumanAttributeAnimationHandlerType : uint8_t
{
	Base                           = 0,
	HungerAndWarmth                = 1,
	EDH_MAX                        = 2
};


// Enum DreadHungerUI.ECompendiumValueDisplayFormat
enum class ECompendiumValueDisplayFormat : uint8_t
{
	VDS_NUMBER                     = 0,
	VDS_PERCENT                    = 1,
	VDS_MAX                        = 2
};


// Enum DreadHungerUI.EJournalCompendiumTopic
enum class EJournalCompendiumTopic : uint8_t
{
	JCT_UNDEFINED                  = 0,
	JCT_CREATURES                  = 1,
	JCT_SPELLS                     = 2,
	CST_INVENTORY                  = 3,
	CST_MAX                        = 4,
	EJournalCompendiumTopic_MAX    = 5
};


// Enum DreadHungerUI.EDH_LobbyPlayersChangedItemWidgetState
enum class EDH_LobbyPlayersChangedItemWidgetState : uint8_t
{
	None                           = 0,
	Arrived                        = 1,
	Left                           = 2,
	EDH_MAX                        = 3
};


// Enum DreadHungerUI.EDH_PrestigeStage
enum class EDH_PrestigeStage : uint8_t
{
	None                           = 0,
	Begin                          = 1,
	Process                        = 2,
	Complete                       = 3,
	EDH_MAX                        = 4
};


// Enum DreadHungerUI.EDH_RateOfChangeArrowDirection
enum class EDH_RateOfChangeArrowDirection : uint8_t
{
	Up                             = 0,
	Down                           = 1,
	EDH_MAX                        = 2
};


// Enum DreadHungerUI.EDH_RateOfChangeArrowVisibleFlags
enum class EDH_RateOfChangeArrowVisibleFlags : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Mid                            = 2,
	High                           = 3,
	EDH_MAX                        = 4
};


// Enum DreadHungerUI.EDH_TextOutlineType
enum class EDH_TextOutlineType : uint8_t
{
	TOT_DONTOVERRIDE               = 0,
	TOT_NONE                       = 1,
	TOT_BORDER                     = 2,
	TOT_SHADOW                     = 3,
	TOT_MAX                        = 4
};


// Enum DreadHungerUI.EDH_FontSizes
enum class EDH_FontSizes : uint8_t
{
	FS_TINY                        = 0,
	FS_SMALL                       = 1,
	FS_MEDIUM                      = 2,
	FS_LARGE                       = 3,
	FS_EXTRALARGE                  = 4,
	FS_HUGE                        = 5,
	FS_CUSTOM                      = 6,
	FS_MAX                         = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DreadHungerUI.DH_RadialOptionPosition
// 0x000C
struct FDH_RadialOptionPosition
{
	float                                              Angle;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.DH_EmoteRadialPlayerFlags
// 0x0002
struct FDH_EmoteRadialPlayerFlags
{

};

// ScriptStruct DreadHungerUI.DH_JournalPages
// 0x0010
struct FDH_JournalPages
{
	class UObject*                                     Left;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Right;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.CompendiumItemStat
// 0x0010
struct FCompendiumItemStat
{
	class UDH_CompendiumStat*                          Stat;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DreadHungerUI.DH_LanguageFilterCheckBox
// 0x0020
struct FDH_LanguageFilterCheckBox
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UDH_CheckBoxWidget*                          CheckBox;                                                 // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.DH_OverlayViewButtonInfo
// 0x0050
struct FDH_OverlayViewButtonInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       LabelText;                                                // 0x0008(0x0028) (Edit, BlueprintVisible)
	struct FName                                       LabelFont;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDH_FontSizes                                      LabelSize;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0029(0x0027) MISSED OFFSET
};

// ScriptStruct DreadHungerUI.DH_OverlayViewButton
// 0x0018
struct FDH_OverlayViewButton
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UDH_ButtonWidget*                            Button;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_TextBlockWidget*                         Label;                                                    // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.DH_OverlayViewError
// 0x0038
struct FDH_OverlayViewError
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       SubText;                                                  // 0x0018(0x0028) (Edit, BlueprintVisible)
	bool                                               bShowCross;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct DreadHungerUI.DH_PregameAvatarData
// 0x0020
struct FDH_PregameAvatarData
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Icon;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bThrall;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                PrestigeLevel;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.RoleIconSet
// 0x0010
struct FRoleIconSet
{
	class UMaterialInstanceDynamic*                    ThrallIcon;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ExplorerIcon;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.ScoreEventEffect
// 0x0028
struct FScoreEventEffect
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   IconSize;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                IconTint;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DreadHungerUI.PlayerPath
// 0x0018
struct FPlayerPath
{
	TArray<struct FVector2D>                           Path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct DreadHungerUI.DH_RoleIconPreset
// 0x0040
struct FDH_RoleIconPreset
{

};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
