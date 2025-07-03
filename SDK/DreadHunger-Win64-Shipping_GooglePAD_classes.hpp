                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_GooglePAD_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GooglePAD.GooglePADFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static EGooglePADErrorCode ShowCellularDataConfirmation()//offset:0xD67210;
	static EGooglePADErrorCode RequestRemoval(const class FString& Name)//offset:0xD67170;
	static EGooglePADErrorCode RequestInfo(TArray<class FString> AssetPacks)//offset:0xD66B80;
	static EGooglePADErrorCode RequestDownload(TArray<class FString> AssetPacks)//offset:0xD66B80;
	static void ReleaseDownloadState(int State)//offset:0xD670F0;
	static void ReleaseAssetPackLocation(int Location)//offset:0xD670F0;
	static int GetTotalBytesToDownload(int State)//offset:0xD66EB0;
	static EGooglePADStorageMethod GetStorageMethod(int Location)//offset:0xD67060;
	static EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)//offset:0xD66FD0;
	static EGooglePADDownloadStatus GetDownloadStatus(int State)//offset:0xD66F40;
	static EGooglePADErrorCode GetDownloadState(const class FString& Name, int* State)//offset:0xD66CF0;
	static int GetBytesDownloaded(int State)//offset:0xD66EB0;
	static class FString GetAssetsPath(int Location)//offset:0xD66DE0;
	static EGooglePADErrorCode GetAssetPackLocation(const class FString& Name, int* Location)//offset:0xD66CF0;
	static EGooglePADErrorCode CancelDownload(TArray<class FString> AssetPacks)//offset:0xD66B80;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
