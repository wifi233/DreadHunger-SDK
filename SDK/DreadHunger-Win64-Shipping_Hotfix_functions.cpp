                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Hotfix_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native, Public, BlueprintCallable)

void UOnlineHotfixManager::StartHotfixProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hotfix.OnlineHotfixManager.StartHotfixProcess");

	UOnlineHotfixManager_StartHotfixProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
