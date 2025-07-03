                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledSliderSetting_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StyledSliderSetting.StyledSliderSetting_C
// size:0x0031 (0x02C8 - 0x02F9)
class UStyledSliderSetting_C : public UNativeSliderSetting
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextBlock_C*                            Header;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              LabelMultiplier;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LabelFractionalDigits;                                    // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Units;                                                    // 0x02E0(0x0028) (Edit, BlueprintVisible)
	bool                                               bSignUnits;                                               // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	void OnSliderValueUpdated(float NormalizedValue, float RawValue)//offset:0x13CEB30;
	void PreConstruct(bool IsDesignTime)//offset:0x13CEB30;
	void Update_Text_Label(float RawValue)//offset:0x13CEB30;
	void ExecuteUbergraph_StyledSliderSetting(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
