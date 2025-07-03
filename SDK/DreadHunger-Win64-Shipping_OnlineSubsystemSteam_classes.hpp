                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OnlineSubsystemSteam_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// size:0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:
};


// Class OnlineSubsystemSteam.OnlineSubsystemSteamDefines
// size:0x0000 (0x0028 - 0x0028)
class UOnlineSubsystemSteamDefines : public UObject
{
public:
};


// Class OnlineSubsystemSteam.SteamNetConnection
// size:0x0008 (0x1BF8 - 0x1C00)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x1BF8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1BF9(0x0007) MISSED OFFSET
};


// Class OnlineSubsystemSteam.SteamNetDriver
// size:0x0008 (0x07C0 - 0x07C8)
class USteamNetDriver : public UIpNetDriver
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
