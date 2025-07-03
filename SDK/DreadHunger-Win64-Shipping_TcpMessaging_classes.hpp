                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_TcpMessaging_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TcpMessaging.TcpMessagingSettings
// size:0x0030 (0x0028 - 0x0058)
class UTcpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      ListenEndpoint;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              ConnectToEndpoints;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                ConnectionRetryDelay;                                     // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStopServiceWhenAppDeactivates;                           // 0x0054(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
