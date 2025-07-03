                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_Button_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Button.WBP_Button_C
// size:0x0018 (0x03F0 - 0x0408)
class UWBP_Button_C : public UDH_ButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    BaseSizeBox;                                              // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      HoveredImage;                                             // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	void BP_OnSetMinWidth(float InMinWidth)//offset:0x13CEB30;
	void BP_OnSetHoverOpacity(float InOpacity)//offset:0x13CEB30;
	void BP_OnSetHoverBrush(const struct FSlateBrush& InHoverBrush)//offset:0x13CEB30;
	void BP_OnSetHoverBrushVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)//offset:0x13CEB30;
	void ExecuteUbergraph_WBP_Button(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
