                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AssetTags_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
struct UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params
{
	class UObject*                                     AssetPtr;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
struct UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params
{
	struct FAssetData                                  AssetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
struct UAssetTagsSubsystem_GetCollectionsContainingAsset_Params
{
	struct FName                                       AssetPathName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetCollections
struct UAssetTagsSubsystem_GetCollections_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
struct UAssetTagsSubsystem_GetAssetsInCollection_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAssetData>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AssetTags.AssetTagsSubsystem.CollectionExists
struct UAssetTagsSubsystem_CollectionExists_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
