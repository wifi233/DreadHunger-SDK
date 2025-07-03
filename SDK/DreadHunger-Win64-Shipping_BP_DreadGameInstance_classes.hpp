                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_DreadGameInstance_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DreadGameInstance.BP_DreadGameInstance_C
// size:0x0008 (0x05B0 - 0x05B8)
class UBP_DreadGameInstance_C : public UDH_GameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	void MusicVolumeChanged(float NewValue)//offset:0x13CEB30;
	void SFXVolumeChanged(float NewValue)//offset:0x13CEB30;
	void GamepadIconsChanged(const class FString& NewValue)//offset:0x13CEB30;
	void MasterVolumeChanged(float NewValue)//offset:0x13CEB30;
	void ReceiveInit()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_DreadGameInstance(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
