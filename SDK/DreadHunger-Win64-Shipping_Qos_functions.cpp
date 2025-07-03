                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Qos_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Qos.QosBeaconClient.ServerQosRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                  InSessionId                    (Parm, ZeroConstructor)

void AQosBeaconClient::ServerQosRequest(const class FString& InSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ServerQosRequest");

	AQosBeaconClient_ServerQosRequest_Params params;
	params.InSessionId = InSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Qos.QosBeaconClient.ClientQosResponse
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// EQosResponseType               Response                       (Parm, ZeroConstructor, IsPlainOldData)

void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ClientQosResponse");

	AQosBeaconClient_ClientQosResponse_Params params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
