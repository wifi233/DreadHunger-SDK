                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local                          = 0,
	Private                        = 1,
	Shared                         = 2,
	ECollectionScriptingShareType_MAX = 3
};



#ifdef _MSC_VER
	#pragma pack(pop)
#endif
