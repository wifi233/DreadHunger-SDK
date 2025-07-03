                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AssetRegistry.TagAndValue
// 0x0018
struct FTagAndValue
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      Value;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// 0x0005
struct FAssetRegistryDependencyOptions
{
	bool                                               bIncludeSoftPackageReferences;                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeHardPackageReferences;                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeSearchableNames;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeSoftManagementReferences;                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeHardManagementReferences;                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
