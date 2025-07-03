                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GooglePAD_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation");

	UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval");

	UGooglePADFunctionLibrary_RequestRemoval_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          AssetPacks                     (ConstParm, Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<class FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo");

	UGooglePADFunctionLibrary_RequestInfo_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          AssetPacks                     (ConstParm, Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<class FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload");

	UGooglePADFunctionLibrary_RequestDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UGooglePADFunctionLibrary::ReleaseDownloadState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState");

	UGooglePADFunctionLibrary_ReleaseDownloadState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

static void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation");

	UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UGooglePADFunctionLibrary::GetTotalBytesToDownload(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload");

	UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EGooglePADStorageMethod        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod");

	UGooglePADFunctionLibrary_GetStorageMethod_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EGooglePADCellularDataConfirmStatus Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus");

	UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EGooglePADDownloadStatus       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus");

	UGooglePADFunctionLibrary_GetDownloadStatus_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const class FString& Name, int* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState");

	UGooglePADFunctionLibrary_GetDownloadState_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static int UGooglePADFunctionLibrary::GetBytesDownloaded(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded");

	UGooglePADFunctionLibrary_GetBytesDownloaded_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

static class FString UGooglePADFunctionLibrary::GetAssetsPath(int Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath");

	UGooglePADFunctionLibrary_GetAssetsPath_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const class FString& Name, int* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation");

	UGooglePADFunctionLibrary_GetAssetPackLocation_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          AssetPacks                     (ConstParm, Parm, ZeroConstructor)
// EGooglePADErrorCode            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

static EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<class FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload");

	UGooglePADFunctionLibrary_CancelDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
