                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_AudioExtensions_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class USoundfieldEncodingSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.AudioEndpointSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class UAudioEndpointSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class USpatializationPluginSourceSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class UReverbPluginSourceSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.SoundModulatorBase
// size:0x0000 (0x0028 - 0x0028)
class USoundModulatorBase : public UObject
{
public:
};


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class USoundfieldEndpointSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.SoundfieldEffectSettingsBase
// size:0x0000 (0x0028 - 0x0028)
class USoundfieldEffectSettingsBase : public UObject
{
public:
};


// Class AudioExtensions.SoundfieldEffectBase
// size:0x0008 (0x0028 - 0x0030)
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
