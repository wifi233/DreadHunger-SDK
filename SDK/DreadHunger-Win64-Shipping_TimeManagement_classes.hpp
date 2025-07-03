                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_TimeManagement_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TimeManagement.TimeSynchronizationSource
// size:0x0008 (0x0028 - 0x0030)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                FrameOffset;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


// Class TimeManagement.FixedFrameRateCustomTimeStep
// size:0x0008 (0x0028 - 0x0030)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class TimeManagement.GenlockedCustomTimeStep
// size:0x0000 (0x0030 - 0x0030)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:
};


// Class TimeManagement.GenlockedTimecodeProvider
// size:0x0028 (0x0030 - 0x0058)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                               bUseGenlockToCount;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0031(0x0027) MISSED OFFSET
};


// Class TimeManagement.TimeManagementBlueprintLibrary
// size:0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)//offset:0x2201580;
	static struct FFrameNumber Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B)//offset:0x22014C0;
	static struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)//offset:0x2201400;
	static struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)//offset:0x22012B0;
	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)//offset:0x22011D0;
	static struct FFrameNumber Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B)//offset:0x2201110;
	static bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)//offset:0x2201010;
	static bool IsValid_Framerate(const struct FFrameRate& InFrameRate)//offset:0x2200F70;
	static struct FFrameRate GetTimecodeFrameRate()//offset:0x2200F30;
	static struct FTimecode GetTimecode()//offset:0x2200EF0;
	static struct FFrameNumber Divide_FrameNumberInteger(const struct FFrameNumber& A, int B)//offset:0x2200E30;
	static class FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)//offset:0x2200D00;
	static float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)//offset:0x2200C50;
	static float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)//offset:0x2200BB0;
	static int Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)//offset:0x2200B20;
	static struct FFrameNumber Add_FrameNumberInteger(const struct FFrameNumber& A, int B)//offset:0x2200A60;
	static struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)//offset:0x22009A0;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
