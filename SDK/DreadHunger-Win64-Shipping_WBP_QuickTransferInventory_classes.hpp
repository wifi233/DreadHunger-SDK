                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_QuickTransferInventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_QuickTransferInventory.WBP_QuickTransferInventory_C
// size:0x0010 (0x0288 - 0x0298)
class UWBP_QuickTransferInventory_C : public UDH_QuickTransferInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Icon;                                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	void BP_OnSetIcon(class UTexture2D* IconTexture, const struct FLinearColor& IconColor)//offset:0x13CEB30;
	void ExecuteUbergraph_WBP_QuickTransferInventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
