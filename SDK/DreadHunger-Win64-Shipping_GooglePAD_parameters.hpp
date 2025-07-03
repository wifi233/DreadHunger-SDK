                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GooglePAD_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
struct UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params
{
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
struct UGooglePADFunctionLibrary_RequestRemoval_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
struct UGooglePADFunctionLibrary_RequestInfo_Params
{
	TArray<class FString>                              AssetPacks;                                               // (ConstParm, Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
struct UGooglePADFunctionLibrary_RequestDownload_Params
{
	TArray<class FString>                              AssetPacks;                                               // (ConstParm, Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
struct UGooglePADFunctionLibrary_ReleaseDownloadState_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
struct UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params
{
	int                                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
struct UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
struct UGooglePADFunctionLibrary_GetStorageMethod_Params
{
	int                                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EGooglePADStorageMethod                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
struct UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params
{
	EGooglePADCellularDataConfirmStatus                Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
struct UGooglePADFunctionLibrary_GetDownloadStatus_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EGooglePADDownloadStatus                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
struct UGooglePADFunctionLibrary_GetDownloadState_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
struct UGooglePADFunctionLibrary_GetBytesDownloaded_Params
{
	int                                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
struct UGooglePADFunctionLibrary_GetAssetsPath_Params
{
	int                                                Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
struct UGooglePADFunctionLibrary_GetAssetPackLocation_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
struct UGooglePADFunctionLibrary_CancelDownload_Params
{
	TArray<class FString>                              AssetPacks;                                               // (ConstParm, Parm, ZeroConstructor)
	EGooglePADErrorCode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
