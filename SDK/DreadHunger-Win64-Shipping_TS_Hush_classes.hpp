                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_TS_Hush_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TS_Hush.TS_Hush_C
// size:0x000C (0x0138 - 0x0144)
class UTS_Hush_C : public UDH_TotemSpell
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HushEndDelay;                                             // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	bool DoSpellEffects(class AActor* SpellTarget)//offset:0x13CEB30;
	void OnCast(class AActor* WorldContext)//offset:0x13CEB30;
	void OnExpired(class AActor* WorldContext)//offset:0x13CEB30;
	void ExecuteUbergraph_TS_Hush(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
