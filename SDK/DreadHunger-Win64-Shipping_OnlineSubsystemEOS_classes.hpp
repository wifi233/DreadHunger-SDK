                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OnlineSubsystemEOS_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemEOS.EOSArtifactSettings
// size:0x0000 (0x0030 - 0x0030)
class UEOSArtifactSettings : public UDataAsset
{
public:
};


// Class OnlineSubsystemEOS.EOSSettings
// size:0x0058 (0x0028 - 0x0080)
class UEOSSettings : public UObject
{
public:
	class FString                                      CacheDir;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class FString                                      DefaultArtifactName;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                TickBudgetInMilliseconds;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableOverlay;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableSocialOverlay;                                     // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldEnforceBeingLaunchedByEGS;                         // 0x004E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	TArray<class FString>                              TitleStorageTags;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                TitleStorageReadChunkLength;                              // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FArtifactSettings>                   Artifacts;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bUseEAS;                                                  // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseEOSConnect;                                           // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMirrorStatsToEOS;                                        // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMirrorAchievementsToEOS;                                 // 0x007B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseEOSSessions;                                          // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMirrorPresenceToEAS;                                     // 0x007D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
};


// Class OnlineSubsystemEOS.NetConnectionEOS
// size:0x0008 (0x1BF8 - 0x1C00)
class UNetConnectionEOS : public UIpConnection
{
public:
};


// Class OnlineSubsystemEOS.NetDriverEOS
// size:0x0008 (0x07C0 - 0x07C8)
class UNetDriverEOS : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x07C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsUsingP2PSockets;                                       // 0x07C1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x07C2(0x0006) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
