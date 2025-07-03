                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BFL_UserWidgets_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BFL_UserWidgets.BFL_UserWidgets_C
// size:0x0000 (0x0028 - 0x0028)
class UBFL_UserWidgets_C : public UBlueprintFunctionLibrary
{
public:

	static void EDHFontSizeToEFontSize(unsigned char EDHFontSize, class UObject* __WorldContext, TEnumAsByte<E_FontSizes>* EFontSize)//offset:0x13CEB30;
	static void EFontSizeToEDHFontSize(TEnumAsByte<E_FontSizes> EFontSize, class UObject* __WorldContext, unsigned char* EDHFontSize)//offset:0x13CEB30;
	static void CheckVectorParamNameExists(class UMaterialInstanceDynamic* Mid, const struct FName& VectorName, class UObject* __WorldContext, bool* bReturnValue)//offset:0x13CEB30;
	static class UUserWidget* GetAvailableWidget(class UUserWidget* Class, class APlayerController* OwningPlayer, TArray<class UUserWidget*>* Widgets, class UObject* __WorldContext, bool* bCreated)//offset:0x13CEB30;
	static void PlayUISound(class USoundBase* Sound, class UWidget* Widget, class UObject* __WorldContext)//offset:0x13CEB30;
	static void PopMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToUnfocus, class UObject* __WorldContext)//offset:0x13CEB30;
	static void PushMouseAndInput(class APlayerController* PlayerController, class UWidget* WidgetToFocus, bool bGameAndUI, class UObject* __WorldContext)//offset:0x13CEB30;
	static bool DoesKeyMatchInputMapping(const struct FName& ActionName, const struct FKey& Key, class UObject* __WorldContext)//offset:0x13CEB30;
	static bool DoesKeyEventMatchInputMapping(const struct FName& ActionName, const struct FKeyEvent& Key, class UObject* __WorldContext)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
