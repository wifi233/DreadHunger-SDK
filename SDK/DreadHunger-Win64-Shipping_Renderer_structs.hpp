                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Renderer.LightPropagationVolumeSettings
// 0x0040
struct FLightPropagationVolumeSettings
{
	unsigned char                                      bOverride_LPVIntensity;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity;               // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius;                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent;                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent;                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity;                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity;                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSize;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity;                 // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity;                    // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias;                            // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity;                  // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LPVIntensity;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVFadeRange;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
