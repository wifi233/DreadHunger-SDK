                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_PacketHandler_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PacketHandler.HandlerComponentFactory
// size:0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:
};


// Class PacketHandler.PacketHandlerProfileConfig
// size:0x0010 (0x0028 - 0x0038)
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<class FString>                              Components;                                               // 0x0028(0x0010) (ZeroConstructor, Config)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
