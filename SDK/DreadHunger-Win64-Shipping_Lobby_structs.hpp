                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_OnlineSubsystemUtils_classes.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
	None                           = 0,
	SentJoinRequest                = 1,
	JoinRequestAcknowledged        = 2,
	ELobbyBeaconJoinState_MAX      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// size:0x0018 (0x0108 - 0x0120)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	TArray<struct FLobbyPlayerStateActorInfo>          Players;                                                  // 0x0108(0x0010) (ZeroConstructor)
	class ALobbyBeaconState*                           ParentState;                                              // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// size:0x000C (0x000C - 0x0018)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
