                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Lobby_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// size:0x0088 (0x02B0 - 0x0338)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                               // 0x02B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x02B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C0(0x0001) MISSED OFFSET
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                     // 0x02C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x76];                                      // 0x02C2(0x0076) MISSED OFFSET

	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)//offset:0x8A2210;
	void ServerNotifyJoiningServer()//offset:0x8A21C0;
	void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)//offset:0x8A2000;
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)//offset:0x8A1E60;
	void ServerDisconnectFromLobby()//offset:0x8A1E10;
	void ServerCheat(const class FString& Msg)//offset:0x8A1D50;
	void ClientWasKicked(const struct FText& KickReason)//offset:0x8A1BF0;
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)//offset:0x8A1B50;
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)//offset:0x8A1A60;
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)//offset:0x8A18E0;
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)//offset:0x8A17B0;
	void ClientJoinGame()//offset:0x8A1790;
	void ClientAckJoiningServer()//offset:0x8A1770;
};


// Class Lobby.LobbyBeaconHost
// size:0x0038 (0x0248 - 0x0280)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0248(0x0028) UNKNOWN PROPERTY: 
	class ALobbyBeaconState*                           LobbyState;                                               // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class Lobby.LobbyBeaconPlayerState
// size:0x00C0 (0x0220 - 0x02E0)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0220(0x0028) (Net)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0238(0x0028) (Net)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x0260(0x0028) (Net)
	bool                                               bInLobby;                                                 // 0x0288(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x0290(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0298(0x0048) MISSED OFFSET

	void OnRep_UniqueId()//offset:0x8A1D10;
	void OnRep_PartyOwner()//offset:0x8A1CF0;
	void OnRep_InLobby()//offset:0x8A1CB0;
};


// Class Lobby.LobbyBeaconState
// size:0x01A8 (0x0220 - 0x03C8)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x0220(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class ALobbyBeaconPlayerState*                     LobbyBeaconPlayerStateClass;                              // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x0238(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x023C(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData)
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x0240(0x0120) (Net)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0360(0x0068) MISSED OFFSET

	void OnRep_WaitForPlayersTimeRemaining()//offset:0x8A1D30;
	void OnRep_LobbyStarted()//offset:0x8A1CD0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
