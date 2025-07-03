                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DefaultRadioButton_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DefaultRadioButton.DefaultRadioButton_C
// size:0x0028 (0x02A0 - 0x02C8)
class UDefaultRadioButton_C : public URadioButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextBlock_C*                            Header;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     MainButton;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct UEMulticastInlineDelegate                   Clicked;                                                  // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()//offset:0x13CEB30;
	void UpdateLabel(const struct FText& InLabel)//offset:0x13CEB30;
	void UpdateSelected(bool InSelected)//offset:0x13CEB30;
	void ExecuteUbergraph_DefaultRadioButton(int EntryPoint)//offset:0x13CEB30;
	void Clicked__DelegateSignature(int Value)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
