                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Qos_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Qos.QosBeaconClient
// size:0x0038 (0x02B0 - 0x02E8)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:

	void ServerQosRequest(const class FString& InSessionId)//offset:0x840F60;
	void ClientQosResponse(EQosResponseType Response)//offset:0x840EE0;
};


// Class Qos.QosBeaconHost
// size:0x0010 (0x0248 - 0x0258)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
};


// Class Qos.QosEvaluator
// size:0x0058 (0x0028 - 0x0080)
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	bool                                               bInProgress;                                              // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelOperation;                                         // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FDatacenterQosInstance>              Datacenters;                                              // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
};


// Class Qos.QosRegionManager
// size:0x0098 (0x0028 - 0x00C0)
class UQosRegionManager : public UObject
{
public:
	int                                                NumTestsPerRegion;                                        // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PingTimeout;                                              // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FQosRegionInfo>                      RegionDefinitions;                                        // 0x0030(0x0010) (ZeroConstructor, Config)
	TArray<struct FQosDatacenterInfo>                  DatacenterDefinitions;                                    // 0x0040(0x0010) (ZeroConstructor, Config)
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0050(0x0008) (ZeroConstructor)
	class UQosEvaluator*                               Evaluator;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	EQosCompletionResult                               QosEvalResult;                                            // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FRegionQosInstance>                  RegionOptions;                                            // 0x0068(0x0010) (ZeroConstructor)
	class FString                                      ForceRegionId;                                            // 0x0078(0x0010) (ZeroConstructor)
	bool                                               bRegionForcedViaCommandline;                              // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class FString                                      SelectedRegionId;                                         // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
