                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Slate_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// size:0x0278 (0x0030 - 0x02A8)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x0278) (Edit, BlueprintVisible)
};


// Class Slate.CheckBoxWidgetStyle
// size:0x0580 (0x0030 - 0x05B0)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x0580) (Edit)
};


// Class Slate.ComboBoxWidgetStyle
// size:0x03F0 (0x0030 - 0x0420)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x03F0) (Edit)
};


// Class Slate.ComboButtonWidgetStyle
// size:0x03B8 (0x0030 - 0x03E8)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03B8) (Edit)
};


// Class Slate.EditableTextBoxWidgetStyle
// size:0x07F8 (0x0030 - 0x0828)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x07F8) (Edit)
};


// Class Slate.EditableTextWidgetStyle
// size:0x0220 (0x0030 - 0x0250)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0220) (Edit)
};


// Class Slate.ProgressWidgetStyle
// size:0x01A0 (0x0030 - 0x01D0)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01A0) (Edit, BlueprintVisible)
};


// Class Slate.ScrollBarWidgetStyle
// size:0x04D0 (0x0030 - 0x0500)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x04D0) (Edit)
};


// Class Slate.ScrollBoxWidgetStyle
// size:0x0228 (0x0030 - 0x0258)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0228) (Edit)
};


// Class Slate.SlateSettings
// size:0x0008 (0x0028 - 0x0030)
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};


// Class Slate.SpinBoxWidgetStyle
// size:0x02E8 (0x0030 - 0x0318)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x02E8) (Edit)
};


// Class Slate.TextBlockWidgetStyle
// size:0x0270 (0x0030 - 0x02A0)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0270) (Edit)
};


// Class Slate.ToolMenuBase
// size:0x0000 (0x0028 - 0x0028)
class UToolMenuBase : public UObject
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
