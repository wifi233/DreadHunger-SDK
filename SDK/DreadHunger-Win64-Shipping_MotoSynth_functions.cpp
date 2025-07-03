                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MotoSynth_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MotoSynth.SynthComponentMoto.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMotoSynthRuntimeSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetSettings");

	USynthComponentMoto_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotoSynth.SynthComponentMoto.SetRPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRPM                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeSec                      (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetRPM");

	USynthComponentMoto_SetRPM_Params params;
	params.InRPM = InRPM;
	params.InTimeSec = InTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MotoSynth.SynthComponentMoto.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USynthComponentMoto::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.IsEnabled");

	USynthComponentMoto_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MotoSynth.SynthComponentMoto.GetRPMRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          OutMinRPM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutMaxRPM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.GetRPMRange");

	USynthComponentMoto_GetRPMRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMinRPM != nullptr)
		*OutMinRPM = params.OutMinRPM;
	if (OutMaxRPM != nullptr)
		*OutMaxRPM = params.OutMaxRPM;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
