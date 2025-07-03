                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_OnlineSubsystem_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                  Match                          (Parm, ZeroConstructor)
// bool                           bDidBecomeActive               (Parm, ZeroConstructor, IsPlainOldData)

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn");

	UTurnBasedMatchInterface_OnMatchReceivedTurn_Params params;
	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                  Match                          (Parm, ZeroConstructor)

void UTurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded");

	UTurnBasedMatchInterface_OnMatchEnded_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
