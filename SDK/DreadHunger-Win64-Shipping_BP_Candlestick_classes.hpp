                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Candlestick_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Candlestick.BP_Candlestick_C
// size:0x00A8 (0x0230 - 0x02D8)
class ABP_Candlestick_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Smoke_Left;                                               // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke_Right;                                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke_Mid;                                                // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Glow;                                                     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Light_Mid;                                                // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Light_Right;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Light_Left;                                               // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Flame_Left;                                               // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Flame_Right;                                              // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Flame_Mid;                                                // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Candle_Left;                                              // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Candle_Right;                                             // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Candle_Mid;                                               // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsLit;                                                   // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            SmokeParticles;                                           // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            FlameParticles;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPointLightComponent*>                Lights;                                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	void Interpolate(float DeltaTime)//offset:0x13CEB30;
	void SetIsLit(bool bNewIsLit)//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Candlestick(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
