                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OnlineSubsystemUtils_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.OnlineBeacon
// size:0x0030 (0x0220 - 0x0250)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                           // 0x0228(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BeaconConnectionTimeout;                                  // 0x022C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0238(0x0018) MISSED OFFSET
};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// size:0x0060 (0x0250 - 0x02B0)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                              // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetConnection*                              BeaconConnection;                                         // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	EBeaconConnectionState                             ConnectionState;                                          // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0261(0x004F) MISSED OFFSET

	void ClientOnConnected()//offset:0x939270;
};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// size:0x0028 (0x0220 - 0x0248)
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                      BeaconTypeName;                                           // 0x0220(0x0010) (ZeroConstructor, Transient)
	class AOnlineBeaconClient*                         ClientBeaconActorClass;                                   // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0238(0x0010) (ZeroConstructor)
};


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress)//offset:0x934D90;
	static void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)//offset:0x934A30;
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// size:0x0038 (0x0030 - 0x0068)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)//offset:0x9337A0;
	static class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)//offset:0x9336D0;
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// size:0x0050 (0x0030 - 0x0080)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag)//offset:0x935870;
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// size:0x0048 (0x0030 - 0x0078)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)//offset:0x933870;
};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// size:0x0068 (0x0030 - 0x0098)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN)//offset:0x9340A0;
};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// size:0x0048 (0x0030 - 0x0078)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)//offset:0x9341F0;
};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// size:0x0050 (0x0030 - 0x0080)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const class FString& MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome)//offset:0x9342C0;
};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// size:0x0048 (0x0030 - 0x0078)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface)//offset:0x9344F0;
};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// size:0x0060 (0x0030 - 0x0090)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static class FString GetServerName(const struct FBlueprintSessionResult& Result)//offset:0x935600;
	static int GetPingInMs(const struct FBlueprintSessionResult& Result)//offset:0x9353C0;
	static int GetMaxPlayers(const struct FBlueprintSessionResult& Result)//offset:0x935180;
	static int GetCurrentPlayers(const struct FBlueprintSessionResult& Result)//offset:0x934F40;
	static class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN)//offset:0x9346B0;
};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// size:0x0058 (0x0030 - 0x0088)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)//offset:0x934800;
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// size:0x0058 (0x0028 - 0x0080)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)//offset:0x933A30;
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// size:0x0080 (0x0028 - 0x00A8)
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController)//offset:0x934010;
	static class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController)//offset:0x933D40;
	static class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest)//offset:0x933940;
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// size:0x0068 (0x0028 - 0x0090)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers)//offset:0x933C30;
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// size:0x0040 (0x0028 - 0x0068)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers)//offset:0x933B20;
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// size:0x0068 (0x0028 - 0x0090)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController)//offset:0x933EF0;
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// size:0x0080 (0x0028 - 0x00A8)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController)//offset:0x933DD0;
};


// Class OnlineSubsystemUtils.IpConnection
// size:0x00A0 (0x1B58 - 0x1BF8)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x1B58(0x0050) MISSED OFFSET
	float                                              SocketErrorDisconnectDelay;                               // 0x1BA8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x1BAC(0x004C) MISSED OFFSET
};


// Class OnlineSubsystemUtils.IpNetDriver
// size:0x0070 (0x0750 - 0x07C0)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach;                                           // 0x0750(0x0001) (Config)
	unsigned char                                      AllowPlayerPortUnreach;                                   // 0x0750(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                        // 0x0754(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0758(0x000C) MISSED OFFSET
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                    // 0x0764(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                       // 0x0768(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                    // 0x076C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                       // 0x0770(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	double                                             MaxSecondsInReceive;                                      // 0x0778(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int                                                NbPacketsBetweenReceiveTimeTest;                          // 0x0780(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ResolutionConnectionTimeout;                              // 0x0784(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0788(0x0038) MISSED OFFSET
};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// size:0x0158 (0x0030 - 0x0188)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x138];                                     // 0x0050(0x0138) MISSED OFFSET

	static class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)//offset:0x939690;
};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static bool WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue)//offset:0x93A8A0;
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// size:0x0040 (0x0028 - 0x0068)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName)//offset:0x9394F0;
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// size:0x0070 (0x0028 - 0x0098)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName)//offset:0x9395C0;
};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// size:0x0038 (0x0030 - 0x0068)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)//offset:0x9397E0;
};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// size:0x00B8 (0x0250 - 0x0308)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x0250(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0258(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0268(0x00A0) MISSED OFFSET
};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// size:0x0160 (0x0028 - 0x0188)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<struct FName, struct FName>                   MappedUniqueNetIdTypes;                                   // 0x0028(0x0050) (Config)
	TArray<struct FName>                               CompatibleUniqueNetIdTypes;                               // 0x0078(0x0010) (ZeroConstructor, Config)
	struct FName                                       VoiceSubsystemNameOverride;                               // 0x0088(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0090(0x00F8) MISSED OFFSET
};


// Class OnlineSubsystemUtils.OnlinePIESettings
// size:0x0018 (0x0038 - 0x0050)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
};


// Class OnlineSubsystemUtils.OnlineSessionClient
// size:0x01A8 (0x0028 - 0x01D0)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0028(0x01A0) MISSED OFFSET
	bool                                               bIsFromInvite;                                            // 0x01C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHandlingDisconnect;                                      // 0x01C9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
};


// Class OnlineSubsystemUtils.PartyBeaconClient
// size:0x00C0 (0x02B0 - 0x0370)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET
	class FString                                      DestSessionId;                                            // 0x02E0(0x0010) (ZeroConstructor)
	struct FPartyReservation                           PendingReservation;                                       // 0x02F0(0x0050)
	EClientRequestType                                 RequestType;                                              // 0x0340(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x0342(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x0343(0x002D) MISSED OFFSET

	void ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate)//offset:0x93A540;
	void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation)//offset:0x93A0B0;
	void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate)//offset:0x939E20;
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)//offset:0x939D10;
	void ServerAddOrUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation)//offset:0x939A80;
	void ClientSendReservationUpdates(int NumRemainingReservations)//offset:0x9393D0;
	void ClientSendReservationFull()//offset:0x939390;
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse)//offset:0x939290;
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse)//offset:0x939170;
};


// Class OnlineSubsystemUtils.PartyBeaconHost
// size:0x0078 (0x0248 - 0x02C0)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                    // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0250(0x0060) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x02B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x02B4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x02B8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
};


// Class OnlineSubsystemUtils.PartyBeaconState
// size:0x0078 (0x0028 - 0x00A0)
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumPlayersPerTeam;                                        // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       TeamAssignmentMethod;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReservedHostTeamNum;                                      // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ForceTeamNum;                                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestrictCrossConsole;                                    // 0x0050(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class FString>                              PlatformCrossplayRestrictions;                            // 0x0058(0x0010) (ZeroConstructor, Config)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                                      // 0x0068(0x0010) (ZeroConstructor, Config)
	bool                                               bEnableRemovalRequests;                                   // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0080(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// size:0x0048 (0x0030 - 0x0078)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)//offset:0x9398B0;
};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// size:0x0030 (0x0030 - 0x0060)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct UEMulticastInlineDelegate                   OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)//offset:0x93A7D0;
};


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// size:0x00E8 (0x02B0 - 0x0398)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET
	class FString                                      DestSessionId;                                            // 0x02E0(0x0010) (ZeroConstructor)
	struct FSpectatorReservation                       PendingReservation;                                       // 0x02F0(0x0078)
	ESpectatorClientRequestType                        RequestType;                                              // 0x0368(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x0369(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x036A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x036B(0x002D) MISSED OFFSET

	void ServerReservationRequest(const class FString& SessionId, const struct FSpectatorReservation& Reservation)//offset:0x93A340;
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator)//offset:0x939D10;
	void ClientSendReservationUpdates(int NumRemainingReservations)//offset:0x939460;
	void ClientSendReservationFull()//offset:0x9393B0;
	void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse)//offset:0x939310;
	void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse)//offset:0x9391F0;
};


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// size:0x0078 (0x0248 - 0x02C0)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                       State;                                                    // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0250(0x0060) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x02B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x02B4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x02B8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
};


// Class OnlineSubsystemUtils.SpectatorBeaconState
// size:0x0038 (0x0028 - 0x0060)
class USpectatorBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestrictCrossConsole;                                    // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FSpectatorReservation>               Reservations;                                             // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};


// Class OnlineSubsystemUtils.TestBeaconClient
// size:0x0000 (0x02B0 - 0x02B0)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	void ServerPong()//offset:0x93B770;
	void ClientPing()//offset:0x93B0C0;
};


// Class OnlineSubsystemUtils.TestBeaconHost
// size:0x0000 (0x0248 - 0x0248)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:
};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)//offset:0x93B670;
	static void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int PlayerIndex, class FString* PlayerDisplayName)//offset:0x93B440;
	static void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int* PlayerIndex)//offset:0x93B290;
	static void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn)//offset:0x93B0E0;
};


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// size:0x0060 (0x06C0 - 0x0720)
class UVoipListenerSynthComponent : public USynthComponent
{
public:

	bool IsIdling()//offset:0x93B640;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
