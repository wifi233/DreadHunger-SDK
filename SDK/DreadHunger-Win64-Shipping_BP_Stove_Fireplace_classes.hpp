                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Stove_Fireplace_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Stove_Fireplace.BP_Stove_Fireplace_C
// size:0x0088 (0x0260 - 0x02E8)
class ABP_Stove_Fireplace_C : public ABP_Stove_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Door;                                                     // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Firelight;                                                // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	struct FTransform                                  DoorOpenTransform;                                        // 0x0280(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DoorDefaultTransform;                                     // 0x02B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorCloseSpeed;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorOpenSpeed;                                            // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	bool GetBurnTime(EInventoryType Type, float* BurnTime)//offset:0x13CEB30;
	struct FText GetName()//offset:0x13CEB30;
	TArray<EInventoryType> GetBurnTypes()//offset:0x13CEB30;
	struct FDH_KeybindInteractionMessage GetKeybindInteractText(class AController* InteractInstigator)//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void OnStoveClosed(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void OnStoveOpened(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Stove_Fireplace(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
