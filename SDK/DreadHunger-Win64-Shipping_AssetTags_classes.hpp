                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AssetTags_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetTags.AssetTagsSubsystem
// size:0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr)//offset:0xD5F170;
	TArray<struct FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData)//offset:0xD5F020;
	TArray<struct FName> GetCollectionsContainingAsset(const struct FName& AssetPathName)//offset:0xD5EF40;
	TArray<struct FName> GetCollections()//offset:0xD5EEC0;
	TArray<struct FAssetData> GetAssetsInCollection(const struct FName& Name)//offset:0xD5ED30;
	bool CollectionExists(const struct FName& Name)//offset:0xD5EC90;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
