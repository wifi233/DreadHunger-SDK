                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MagicLeapSharedWorld_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// size:0x00D0 (0x0308 - 0x03D8)
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0308(0x0010) (BlueprintVisible)
	struct UEMulticastInlineDelegate                   OnNewLocalDataFromClients;                                // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PinSelectionConfidenceThreshold;                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x032C(0x00A4) MISSED OFFSET
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	bool SendSharedWorldDataToClients()//offset:0xD00860;
	void SelectChosenOne()//offset:0xD00840;
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature()//offset:0x13CEB30;
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)//offset:0xD00720;
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// size:0x0040 (0x0290 - 0x02D0)
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FMagicLeapSharedWorldAlignmentTransforms    AlignmentTransforms;                                      // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct UEMulticastInlineDelegate                   OnSharedWorldDataUpdated;                                 // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnAlignmentTransformsUpdated;                             // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	void OnReplicate_SharedWorldData()//offset:0xD00820;
	void OnReplicate_AlignmentTransforms()//offset:0xD00800;
	void MagicLeapSharedWorldEvent__DelegateSignature()//offset:0x13CEB30;
	struct FTransform CalculateXRCameraRootTransform()//offset:0xD005D0;
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// size:0x0018 (0x0570 - 0x0588)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:

	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)//offset:0xD00930;
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)//offset:0xD00890;
	bool IsChosenOne()//offset:0xD007D0;
	void ClientSetChosenOne(bool bChosenOne)//offset:0xD00690;
	void ClientMarkReadyForSendingLocalData()//offset:0xD00670;
	bool CanSendLocalDataToServer()//offset:0xD00640;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
