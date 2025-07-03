                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_HumanCharacter_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HumanCharacter.BP_HumanCharacter_C
// size:0x0050 (0x1280 - 0x12D0)
class ABP_HumanCharacter_C : public ADH_HumanCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x1288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     RepPosition;                                              // 0x1290(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKLeftFootOffset;                                         // 0x129C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKRightFootOffset;                                        // 0x12A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKHipOffset;                                              // 0x12A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LeftFootRotation;                                         // 0x12A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RightFootRotation;                                        // 0x12B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           PrimaryLinearColorCurve;                                  // 0x12C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           SecondaryLinearColorCurve;                                // 0x12C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void GetLinearColorDelta(float Distance, struct FLinearColor* PrimaryLinearColorDelta, struct FLinearColor* SecondaryLinearColorData)//offset:0x13CEB30;
	TArray<class UDH_CraftingRecipe*> GetGroundCraftingRecipes()//offset:0x13CEB30;
	void IKFootTrace(const struct FName& SocketName, float Distance, struct FVector* Out_Hit_Location, float* FootTraceOffset, struct FVector* Out_Hit_Normal)//offset:0x13CEB30;
	void PrintInventoryDebug(float DeltaTime)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void OnDied()//offset:0x13CEB30;
	void FOVChanged(float NewValue)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_HumanCharacter(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
