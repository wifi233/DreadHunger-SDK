                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_RecipeIngredientWidget_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_RecipeIngredientWidget.BP_RecipeIngredientWidget_C
// size:0x0060 (0x0288 - 0x02E8)
class UBP_RecipeIngredientWidget_C : public UDH_RecipeIngredientWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextBlock_C*                            CountTextBlock;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Icon;                                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurrentCount;                                             // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredCount;                                            // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EInventoryType                                     Type;                                                     // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowCurrent;                                             // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02B2(0x0006) MISSED OFFSET
	struct FText                                       IngredientName;                                           // 0x02B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       IngredientDescription;                                    // 0x02D0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	void UpdateText(int InCount)//offset:0x13CEB30;
	void Init(EInventoryType Type, bool bIncludeCurrent, int Quantity, int Current, class UTexture2D* Icon, bool bMatchIconSizse, bool bShowQuantity, const struct FText& Title, const struct FText& Description)//offset:0x13CEB30;
	void BP_OnInit(EInventoryType Type, bool bIncludeCurrent, int Quantity, int Current, class UTexture2D* Icon, bool bMatchIconSizes, bool bShowQuantity, const struct FText& Title, const struct FText& Description)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_RecipeIngredientWidget(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
