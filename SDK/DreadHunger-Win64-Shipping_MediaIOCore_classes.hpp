                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MediaIOCore_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaIOCore.MediaOutput
// size:0x0008 (0x0028 - 0x0030)
class UMediaOutput : public UObject
{
public:
	int                                                NumberOfTextureBuffers;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	bool Validate(class FString* OutFailureReason)//offset:0x9A2B50;
	class UMediaCapture* CreateMediaCapture()//offset:0x9A2910;
};


// Class MediaIOCore.MediaCapture
// size:0x00E0 (0x0028 - 0x0108)
class UMediaCapture : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnStateChanged;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	class UMediaOutput*                                MediaOutput;                                              // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
	class UTextureRenderTarget2D*                      CapturingRenderTarget;                                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0080(0x0088) MISSED OFFSET

	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)//offset:0x9A2AB0;
	void StopCapture(bool bAllowPendingFrameToBeProcess)//offset:0x9A2A20;
	void SetMediaOutput(class UMediaOutput* InMediaOutput)//offset:0x9A2990;
	EMediaCaptureState GetState()//offset:0x805E00;
	struct FIntPoint GetDesiredSize()//offset:0x9A2960;
	TEnumAsByte<EPixelFormat> GetDesiredPixelFormat()//offset:0x9A2940;
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)//offset:0x9A2820;
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)//offset:0x9A2780;
};


// Class MediaIOCore.FileMediaCapture
// size:0x0068 (0x0108 - 0x0170)
class UFileMediaCapture : public UMediaCapture
{
public:
};


// Class MediaIOCore.FileMediaOutput
// size:0x00A0 (0x0030 - 0x00D0)
class UFileMediaOutput : public UMediaOutput
{
public:
	struct FImageWriteOptions                          WriteOptions;                                             // 0x0030(0x0060) (Edit, BlueprintVisible)
	struct FDirectoryPath                              FilePath;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible)
	class FString                                      BaseFileName;                                             // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOverrideDesiredSize;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FIntPoint                                   DesiredSize;                                              // 0x00B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridePixelFormat;                                     // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	EFileMediaOutputPixelFormat                        DesiredPixelFormat;                                       // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
