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

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      Data;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	bool                                               Authorized;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      BuildDate;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      DeviceName;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	class FString                                      PlatformName;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      SessionName;                                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	class FString                                      SessionOwner;                                             // 0x0078(0x0010) (Edit, ZeroConstructor)
	bool                                               Standalone;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
struct FSessionServicePing
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
