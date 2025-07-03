                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GameplayTags_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayTags.BlueprintGameplayTagLibrary
// size:0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static bool RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)//offset:0x257D3D0;
	static bool NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B)//offset:0x257D2A0;
	static bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B)//offset:0x257D130;
	static bool NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)//offset:0x257CFE0;
	static bool NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)//offset:0x257CF10;
	static bool MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)//offset:0x257CE10;
	static bool MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)//offset:0x257CCC0;
	static struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)//offset:0x257CBB0;
	static struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value)//offset:0x257CB20;
	static struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)//offset:0x257C9F0;
	static struct FGameplayTagContainer MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)//offset:0x257C940;
	static struct FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)//offset:0x257C870;
	static bool IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery)//offset:0x257C790;
	static bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag)//offset:0x257C700;
	static bool HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)//offset:0x257C5B0;
	static bool HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)//offset:0x257C380;
	static bool HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)//offset:0x257C120;
	static bool HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer)//offset:0x257C000;
	static struct FName GetTagName(const struct FGameplayTag& GameplayTag)//offset:0x257BE90;
	static int GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)//offset:0x257BD10;
	static class FString GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)//offset:0x257BC10;
	static class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)//offset:0x257BB40;
	static void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class AActor* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)//offset:0x257B960;
	static bool EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)//offset:0x257B810;
	static bool EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)//offset:0x257B740;
	static bool DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag)//offset:0x257B650;
	static bool DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)//offset:0x257B4F0;
	static void BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)//offset:0x257B3D0;
	static void AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)//offset:0x257B2A0;
	static void AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)//offset:0x257B1A0;
};


// Class GameplayTags.GameplayTagAssetInterface
// size:0x0000 (0x0028 - 0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:

	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)//offset:0x257C510;
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)//offset:0x257C2B0;
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)//offset:0x257BF30;
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)//offset:0x257BDD0;
};


// Class GameplayTags.EditableGameplayTagQuery
// size:0x0070 (0x0028 - 0x0098)
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                      UserDescription;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	class UEditableGameplayTagQueryExpression*         RootExpression;                                           // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                // 0x0050(0x0048)
};


// Class GameplayTags.EditableGameplayTagQueryExpression
// size:0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:
};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// size:0x0020 (0x0028 - 0x0048)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)
};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// size:0x0020 (0x0028 - 0x0048)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)
};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// size:0x0020 (0x0028 - 0x0048)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)
};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// size:0x0010 (0x0028 - 0x0038)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// size:0x0010 (0x0028 - 0x0038)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// size:0x0010 (0x0028 - 0x0038)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
};


// Class GameplayTags.GameplayTagsManager
// size:0x01E8 (0x0028 - 0x0210)
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET
	TArray<struct FGameplayTagSource>                  TagSources;                                               // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x00D0(0x00E0) MISSED OFFSET
	TArray<class UDataTable*>                          GameplayTagTables;                                        // 0x01B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET
};


// Class GameplayTags.GameplayTagsList
// size:0x0020 (0x0028 - 0x0048)
class UGameplayTagsList : public UObject
{
public:
	class FString                                      ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FGameplayTagTableRow>                GameplayTagList;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
};


// Class GameplayTags.RestrictedGameplayTagsList
// size:0x0020 (0x0028 - 0x0048)
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                      ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FRestrictedGameplayTagTableRow>      RestrictedGameplayTagList;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
};


// Class GameplayTags.GameplayTagsSettings
// size:0x0070 (0x0048 - 0x00B8)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               WarnOnInvalidTags;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               FastReplication;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	class FString                                      InvalidTagCharacters;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameplayTagCategoryRemap>           CategoryRemapping;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     GameplayTagTableList;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameplayTagRedirect>                GameplayTagRedirects;                                     // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               CommonlyReplicatedTags;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	int                                                NumBitsForContainerSize;                                  // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                NetIndexFirstBitSegment;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FRestrictedConfigInfo>               RestrictedConfigFiles;                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
};


// Class GameplayTags.GameplayTagsDeveloperSettings
// size:0x0018 (0x0038 - 0x0050)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                      DeveloperConfigName;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FName                                       FavoriteTagSource;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
