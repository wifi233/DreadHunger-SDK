                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ImageWriteQueue_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static void ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options)//offset:0x171F080;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
