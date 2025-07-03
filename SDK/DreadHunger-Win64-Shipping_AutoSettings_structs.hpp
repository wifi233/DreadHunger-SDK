                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Basic.hpp"
#include "DreadHunger-Win64-Shipping_UMG_classes.hpp"
#include "DreadHunger-Win64-Shipping_Engine_classes.hpp"
#include "DreadHunger-Win64-Shipping_CoreUObject_classes.hpp"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AutoSettings.EBindingCaptureMode
enum class EBindingCaptureMode : uint8_t
{
	OnReleased                     = 0,
	OnPressed                      = 1,
	EBindingCaptureMode_MAX        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutoSettings.AutoSettingData
// 0x0038
struct FAutoSettingData
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      Value;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameplayTagContainer                       Tags;                                                     // 0x0018(0x0020) (Edit, BlueprintVisible, Transient)
};

// ScriptStruct AutoSettings.KeyFriendlyName
// 0x0030
struct FKeyFriendlyName
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, Config)
	struct FText                                       FriendlyName;                                             // 0x0018(0x0028) (Edit, Config)
};

// ScriptStruct AutoSettings.AxisAssociation
// 0x0028
struct FAxisAssociation
{
	struct FKey                                        AnalogKey;                                                // 0x0000(0x0018) (Edit, Config)
	TArray<struct FKeyScale>                           BooleanKeys;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct AutoSettings.KeyScale
// 0x0020
struct FKeyScale
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, Config)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AutoSettings.MappingGroupLink
// 0x0010
struct FMappingGroupLink
{
	TArray<int>                                        MappingGroups;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct AutoSettings.KeyGroup
// 0x0020
struct FKeyGroup
{
	struct FGameplayTag                                KeyGroupTag;                                              // 0x0000(0x0008) (Edit, Config)
	bool                                               bUseGamepadKeys;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseNonGamepadKeys;                                       // 0x0009(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FKey>                                Keys;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct AutoSettings.KeyIconSet
// 0x0030
struct FKeyIconSet
{
	struct FGameplayTagContainer                       Tags;                                                     // 0x0000(0x0020) (Edit, Config)
	TArray<struct FKeyIconPair>                        Icons;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct AutoSettings.KeyIconPair
// 0x0020
struct FKeyIconPair
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, Config)
	class UTexture*                                    Icon;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutoSettings.InputMappingPreset
// 0x0020
struct FInputMappingPreset
{
	struct FGameplayTag                                PresetTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, Config)
	bool                                               bUseDefaultMappings;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FInputMappingGroup>                  MappingGroups;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct AutoSettings.InputMappingGroup
// 0x0020
struct FInputMappingGroup
{
	TArray<struct FConfigActionKeyMapping>             ActionMappings;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FConfigAxisKeyMapping>               AxisMappings;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct AutoSettings.ConfigAxisKeyMapping
// size:0x0000 (0x0028 - 0x0028)
struct FConfigAxisKeyMapping : public FInputAxisKeyMapping
{

};

// ScriptStruct AutoSettings.ConfigActionKeyMapping
// size:0x0000 (0x0028 - 0x0028)
struct FConfigActionKeyMapping : public FInputActionKeyMapping
{

};

// ScriptStruct AutoSettings.PlayerInputMappings
// 0x0040
struct FPlayerInputMappings
{
	class FString                                      PlayerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                PlayerIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Custom;                                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FInputMappingPreset                         Preset;                                                   // 0x0018(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTag                                PlayerKeyGroup;                                           // 0x0038(0x0008)
};

// ScriptStruct AutoSettings.SettingOption
// 0x0028
struct FSettingOption
{
	struct FText                                       Label;                                                    // 0x0000(0x0028) (Edit, BlueprintVisible)
	class FString                                      Value;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
