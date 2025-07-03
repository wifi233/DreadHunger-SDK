                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_OnlineError_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_OnlineError.WBP_OnlineError_C
// size:0x0018 (0x0278 - 0x0290)
class UWBP_OnlineError_C : public UDH_OnlineErrorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ItemContainer;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_ErrorMessageView_C*                     View;                                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	void PreConstruct(bool IsDesignTime)//offset:0x13CEB30;
	void BP_OnShow()//offset:0x13CEB30;
	void BP_OnHide()//offset:0x13CEB30;
	void BP_OnItemsEmptied()//offset:0x13CEB30;
	void BndEvt__View_K2Node_ComponentBoundEvent_0_OnErrorMessageViewHiddenSignature__DelegateSignature()//offset:0x13CEB30;
	void BP_OnItemCreated(class UDH_OnlineErrorItemWidget* CreatedItem)//offset:0x13CEB30;
	void ExecuteUbergraph_WBP_OnlineError(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
