                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_ImageWriteQueue_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Filename                       (Parm, ZeroConstructor)
// struct FImageWriteOptions      Options                        (ConstParm, Parm, OutParm, ReferenceParm)

static void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");

	UImageWriteBlueprintLibrary_ExportToDisk_Params params;
	params.Texture = Texture;
	params.Filename = Filename;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
