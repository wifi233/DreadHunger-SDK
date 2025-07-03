                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_UdpMessaging_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UdpMessaging.UdpMessagingSettings
// size:0x0078 (0x0028 - 0x00A0)
class UUdpMessagingSettings : public UObject
{
public:
	bool                                               EnabledByDefault;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableTransport;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoRepair;                                              // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStopServiceWhenAppDeactivates;                           // 0x002B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      UnicastEndpoint;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      MulticastEndpoint;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	EUdpMessageFormat                                  MessageFormat;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MulticastTimeToLive;                                      // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<class FString>                              StaticEndpoints;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               EnableTunnel;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class FString                                      TunnelUnicastEndpoint;                                    // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TunnelMulticastEndpoint;                                  // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              RemoteTunnelEndpoints;                                    // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
