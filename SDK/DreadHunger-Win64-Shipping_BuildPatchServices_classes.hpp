                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BuildPatchServices_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BuildPatchServices.BuildPatchManifest
// size:0x00F8 (0x0028 - 0x0120)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      ManifestFileVersion;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFileData;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           AppId;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      AppName;                                                  // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      BuildVersion;                                             // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      LaunchExe;                                                // 0x0050(0x0010) (ZeroConstructor)
	class FString                                      LaunchCommand;                                            // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0070(0x0050) UNKNOWN PROPERTY: 
	class FString                                      PrereqName;                                               // 0x00C0(0x0010) (ZeroConstructor)
	class FString                                      PrereqPath;                                               // 0x00D0(0x0010) (ZeroConstructor)
	class FString                                      PrereqArgs;                                               // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FFileManifestData>                   FileManifestList;                                         // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FChunkInfoData>                      ChunkList;                                                // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FCustomFieldData>                    CustomFields;                                             // 0x0110(0x0010) (ZeroConstructor)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
