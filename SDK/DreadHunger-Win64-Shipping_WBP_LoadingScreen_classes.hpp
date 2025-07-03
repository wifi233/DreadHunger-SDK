                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_LoadingScreen_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LoadingScreen.WBP_LoadingScreen_C
// size:0x0010 (0x0278 - 0x0288)
class UWBP_LoadingScreen_C : public UDH_LoadingScreenWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowAnimation;                                            // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	void Show()//offset:0x13CEB30;
	void Construct()//offset:0x13CEB30;
	void OnHidden()//offset:0x13CEB30;
	void ExecuteUbergraph_WBP_LoadingScreen(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
