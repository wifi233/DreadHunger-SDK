                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_PlayerTitleScreenAvatar_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerTitleScreenAvatar.BP_PlayerTitleScreenAvatar_C
// size:0x0060 (0x0220 - 0x0280)
class ABP_PlayerTitleScreenAvatar_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) UNKNOWN PROPERTY: 
	unsigned char                                      UnknownData01[0x28];                                      // 0x0258(0x0028) UNKNOWN PROPERTY: 

	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_PlayerTitleScreenAvatar(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
