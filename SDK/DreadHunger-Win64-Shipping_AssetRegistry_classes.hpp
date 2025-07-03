                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AssetRegistry_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetRegistry.AssetRegistryImpl
// size:0x0790 (0x0028 - 0x07B8)
class UAssetRegistryImpl : public UObject
{
public:
};


// Class AssetRegistry.AssetRegistryHelpers
// size:0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData)//offset:0x256B3D0;
	static struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)//offset:0x256B0F0;
	static bool IsValid(const struct FAssetData& InAssetData)//offset:0x256A5F0;
	static bool IsUAsset(const struct FAssetData& InAssetData)//offset:0x256A500;
	static bool IsRedirector(const struct FAssetData& InAssetData)//offset:0x256A410;
	static bool IsAssetLoaded(const struct FAssetData& InAssetData)//offset:0x256A2F0;
	static bool GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, class FString* OutTagValue)//offset:0x256A070;
	static class FString GetFullName(const struct FAssetData& InAssetData)//offset:0x2569DB0;
	static class FString GetExportTextName(const struct FAssetData& InAssetData)//offset:0x2569C70;
	static class UObject* GetClass(const struct FAssetData& InAssetData)//offset:0x2569B80;
	static TScriptInterface<class UAssetRegistry> GetAssetRegistry()//offset:0x2569320;
	static class UObject* GetAsset(const struct FAssetData& InAssetData)//offset:0x2569100;
	static struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)//offset:0x2568DA0;
};


// Class AssetRegistry.AssetRegistry
// size:0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	void WaitForCompletion()//offset:0x256B800;
	void UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter)//offset:0x256B510;
	void SearchAllAssets(bool bSynchronousSearch)//offset:0x256B060;
	void ScanPathsSynchronous(TArray<class FString> InPaths, bool bForceRescan)//offset:0x256AF30;
	void ScanModifiedAssetFiles(TArray<class FString> InFilePaths)//offset:0x256AE60;
	void ScanFilesSynchronous(TArray<class FString> InFilePaths, bool bForceRescan)//offset:0x256AD30;
	void RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter)//offset:0x256AA40;
	void PrioritizeSearchPath(const class FString& PathToPrioritize)//offset:0x256A9A0;
	bool K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers)//offset:0x256A840;
	bool K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies)//offset:0x256A6E0;
	bool IsLoadingAssets()//offset:0x256A3E0;
	bool HasAssets(const struct FName& PackagePath, bool bRecursive)//offset:0x256A220;
	void GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse)//offset:0x2569EF0;
	bool GetAssetsByPath(const struct FName& PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets)//offset:0x2569990;
	bool GetAssetsByPackageName(const struct FName& PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)//offset:0x25697F0;
	bool GetAssetsByClass(const struct FName& ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses)//offset:0x2569650;
	bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)//offset:0x2569360;
	struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)//offset:0x25691F0;
	void GetAllCachedPaths(TArray<class FString>* OutPathList)//offset:0x2569030;
	bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)//offset:0x2568ED0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
