                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8_t
{
	BCST_BLCS_CALIBRATED_RGB       = 0,
	BCST_LCS_sRGB                  = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE   = 2,
	BCST_PROFILE_LINKED            = 3,
	BCST_PROFILE_EMBEDDED          = 4,
	BCST_MAX                       = 5
};


// Enum ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
	BHV_BITMAPINFOHEADER           = 0,
	BHV_BITMAPV2INFOHEADER         = 1,
	BHV_BITMAPV3INFOHEADER         = 2,
	BHV_BITMAPV4HEADER             = 3,
	BHV_BITMAPV5HEADER             = 4,
	BHV_MAX                        = 5
};



#ifdef _MSC_VER
	#pragma pack(pop)
#endif
