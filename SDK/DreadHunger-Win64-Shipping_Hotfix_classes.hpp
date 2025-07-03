                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Hotfix_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Hotfix.OnlineHotfixManager
// size:0x0200 (0x0028 - 0x0228)
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0028(0x01C0) MISSED OFFSET
	class FString                                      OSSName;                                                  // 0x01E8(0x0010) (ZeroConstructor, Config)
	class FString                                      HotfixManagerClassName;                                   // 0x01F8(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugPrefix;                                              // 0x0208(0x0010) (ZeroConstructor, Config)
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                               // 0x0218(0x0010) (ZeroConstructor, Transient)

	void StartHotfixProcess()//offset:0x8B54C0;
};


// Class Hotfix.UpdateManager
// size:0x00E8 (0x0028 - 0x0110)
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	float                                              HotfixCheckCompleteDelay;                                 // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckCompleteDelay;                                 // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HotfixAvailabilityCheckCompleteDelay;                     // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckAvailabilityCompleteDelay;                     // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) MISSED OFFSET
	int                                                AppSuspendedUpdateCheckTimeSeconds;                       // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	bool                                               bPlatformEnvironmentDetected;                             // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialUpdateFinished;                                   // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCheckHotfixAvailabilityOnly;                             // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData)
	EUpdateState                                       CurrentUpdateState;                                       // 0x00AB(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                WorstNumFilesPendingLoadViewed;                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	EHotfixResult                                      LastHotfixResult;                                         // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x23];                                      // 0x00B5(0x0023) MISSED OFFSET
	struct FDateTime                                   LastUpdateCheck[0x2];                                     // 0x00D8(0x0008) (ZeroConstructor)
	EUpdateCompletionStatus                            LastCompletionResult[0x2];                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x16];                                      // 0x00EA(0x0016) MISSED OFFSET
	class UEnum*                                       UpdateStateEnum;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnum*                                       UpdateCompletionEnum;                                     // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
