                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MagicLeapARPinInfoActor_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
// size:0x008C (0x0238 - 0x02C4)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Right;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Forward;                                                  // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Up;                                                       // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ValidRadiusVisualizer;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AxisRoot;                                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VisualizerRoot;                                           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TypeValue;                                                // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TransErrValue;                                            // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        RotErrValue;                                              // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        ConfidenceValue;                                          // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TransErrLabel;                                            // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        RotErrLabel;                                              // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        ConfidenceLabel;                                          // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        PinIDValue;                                               // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             InfoRoot;                                                 // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RotationSmoothSpeed;                                      // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void UpdatePinState()//offset:0x13CEB30;
	void UserConstructionScript()//offset:0x13CEB30;
	void OnUpdateARPinState()//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
