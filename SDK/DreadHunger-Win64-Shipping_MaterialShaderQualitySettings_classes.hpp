                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MaterialShaderQualitySettings_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// size:0x0050 (0x0028 - 0x0078)
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                        // 0x0028(0x0050)
};


// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// size:0x0038 (0x0028 - 0x0060)
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides                   QualityOverrides[0x4];                                    // 0x0028(0x0009) (Edit, Config)
	unsigned char                                      UnknownData00[0x14];                                      // 0x004C(0x0014) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
