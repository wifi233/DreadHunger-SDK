                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	class FString                                      Text;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	class FString                                      Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      UserName;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      UserToGrant;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      UserToDeny;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	class FString                                      CurrentLevel;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                EngineVersion;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceType;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{

};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
