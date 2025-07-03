                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_CraftingRecipeTooltip_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CraftingRecipeTooltip.WBP_CraftingRecipeTooltip_C
// size:0x00E8 (0x0260 - 0x0348)
class UWBP_CraftingRecipeTooltip_C : public UDH_CraftingRecipeTooltipWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextBlock_C*                            ComponentsTextBlock;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_TextBlock_C*                            DescriptionTextBlock;                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              RequirementsList;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_TextBlock_C*                            TitleTextBlock;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     WidgetBorder;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<EInventoryType, int>                          RequiredIngredients;                                      // 0x0290(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBP_RecipeIngredientWidget_C*>        Ingredients;                                              // 0x02E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsExhausted;                                             // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	TMap<ECraftingComponentFamily, int>                RequiredFamilies;                                         // 0x02F8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	void BP_Init(class UDH_CraftingRecipe* Recipe)//offset:0x13CEB30;
	void InitRequirementList(TMap<EInventoryType, int> RequiredIngredients, TMap<ECraftingComponentFamily, int> RequiredFamilies)//offset:0x13CEB30;
	void PreConstruct(bool IsDesignTime)//offset:0x13CEB30;
	void BP_OnInit(class UDH_CraftingRecipe* InCraftingRecipe)//offset:0x13CEB30;
	void ExecuteUbergraph_WBP_CraftingRecipeTooltip(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
