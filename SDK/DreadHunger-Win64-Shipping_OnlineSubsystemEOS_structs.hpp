                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_OnlineSubsystemUtils_classes.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemEOS.ArtifactSettings
// 0x0070
struct FArtifactSettings
{
	class FString                                      ArtifactName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ClientId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class FString                                      ClientSecret;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class FString                                      ProductId;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class FString                                      SandboxId;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class FString                                      DeploymentId;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class FString                                      EncryptionKey;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
