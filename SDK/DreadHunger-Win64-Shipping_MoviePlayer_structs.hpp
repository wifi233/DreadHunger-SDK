                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                      = 0,
	MT_Looped                      = 1,
	MT_LoadingLoop                 = 2,
	MT_MAX                         = 3
};



#ifdef _MSC_VER
	#pragma pack(pop)
#endif
