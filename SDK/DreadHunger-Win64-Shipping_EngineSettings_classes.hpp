                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_EngineSettings_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// size:0x0048 (0x0028 - 0x0070)
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              AutoCompleteMapPaths;                                     // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	float                                              BackgroundOpacityPercentage;                              // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOrderTopToBottom;                                        // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisplayHelpInAutoComplete;                               // 0x0055(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FColor                                      InputColor;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      HistoryColor;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCommandColor;                                 // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCVarColor;                                    // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteFadedColor;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};


// Class EngineSettings.GameMapsSettings
// size:0x00C8 (0x0028 - 0x00F0)
class UGameMapsSettings : public UObject
{
public:
	class FString                                      LocalMapOptions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             TransitionMap;                                            // 0x0038(0x0018) (Edit, ZeroConstructor, Config)
	bool                                               bUseSplitscreen;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                              // 0x0053(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOffsetPlayerGamepadIds;                                  // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FSoftClassPath                              GameInstanceClass;                                        // 0x0058(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftObjectPath                             GameDefaultMap;                                           // 0x0070(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             ServerDefaultMap;                                         // 0x0088(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftClassPath                              GlobalDefaultGameMode;                                    // 0x00A0(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                              // 0x00B8(0x0018) (Edit, ZeroConstructor, Config)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      // 0x00D0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     // 0x00E0(0x0010) (Edit, ZeroConstructor, Config)

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)//offset:0x1C12D90;
	bool GetSkipAssigningGamepadToPlayer1()//offset:0x1C12D60;
	static class UGameMapsSettings* GetGameMapsSettings()//offset:0x1C12D30;
};


// Class EngineSettings.GameNetworkManagerSettings
// size:0x0030 (0x0028 - 0x0058)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled;                                // 0x0038(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              StandbyRxCheatTime;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};


// Class EngineSettings.GameSessionSettings
// size:0x0010 (0x0028 - 0x0038)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk;                                      // 0x0030(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};


// Class EngineSettings.GeneralEngineSettings
// size:0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:
};


// Class EngineSettings.GeneralProjectSettings
// size:0x00E8 (0x0028 - 0x0110)
class UGeneralProjectSettings : public UObject
{
public:
	class FString                                      CompanyName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      CompanyDistinguishedName;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      CopyrightNotice;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Description;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Homepage;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      LicensingTerms;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      PrivacyPolicy;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	struct FGuid                                       ProjectID;                                                // 0x0098(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      ProjectName;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ProjectVersion;                                           // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      SupportContact;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00D8(0x0028) (Edit, Config)
	struct FText                                       ProjectDebugTitleInfo;                                    // 0x00F0(0x0028) (Edit, Config)
	bool                                               bShouldWindowPreserveAspectRatio;                         // 0x0108(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseBorderlessWindow;                                     // 0x0109(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStartInVR;                                               // 0x010A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowWindowResize;                                       // 0x010B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowClose;                                              // 0x010C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMaximize;                                           // 0x010D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMinimize;                                           // 0x010E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
};


// Class EngineSettings.HudSettings
// size:0x0018 (0x0028 - 0x0040)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD;                                                 // 0x0028(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FName>                               DebugDisplay;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
