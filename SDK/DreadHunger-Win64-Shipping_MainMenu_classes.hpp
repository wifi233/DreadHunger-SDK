                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MainMenu_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainMenu.MainMenu_C
// size:0x00A0 (0x0228 - 0x02C8)
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TitleScreen_C*                          LandingScreenWidget;                                      // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bAllowInput;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClosing;                                                 // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	class UAudioComponent*                             MenuAmbience;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AStaticMeshActor*                            SM_Giblet_2_ExecuteUbergraph_MainMenu_RefProperty;        // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         Seq_FadeIn_ExecuteUbergraph_MainMenu_RefProperty;         // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         Seq_Lightning_ExecuteUbergraph_MainMenu_RefProperty;      // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter4_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter5_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter6_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter7_3_ExecuteUbergraph_MainMenu_RefProperty;// 0x0280(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter8_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 DM_BloodSplatter9_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_CannibalHead_2_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_FrozenCorpse_C*                          SM_ExplorerSkeleton_Clothed_2_ExecuteUbergraph_MainMenu_RefProperty;// 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_FreshMeat_Scrap_01_18_ExecuteUbergraph_MainMenu_RefProperty;// 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_FreshMeat_Scrap_2_ExecuteUbergraph_MainMenu_RefProperty;// 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_Giblet_01_7_ExecuteUbergraph_MainMenu_RefProperty;     // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Candlestick_C*                           Mesh_Candlestick_01_3_EdGraph_0_RefProperty;              // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)

	void SnuffCandles()//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void LightningFinished()//offset:0x13CEB30;
	void On_Title_Player_Input_Captured()//offset:0x13CEB30;
	void ExecuteUbergraph_MainMenu(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
