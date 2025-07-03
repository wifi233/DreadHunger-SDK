                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_MediaAssets_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaSource
// size:0x0058 (0x0028 - 0x0080)
class UMediaSource : public UObject
{
public:

	bool Validate()//offset:0x25F8150;
	void SetMediaOptionString(const struct FName& Key, const class FString& Value)//offset:0x25F7680;
	void SetMediaOptionInt64(const struct FName& Key, int64_t Value)//offset:0x25F75B0;
	void SetMediaOptionFloat(const struct FName& Key, float Value)//offset:0x25F74D0;
	void SetMediaOptionBool(const struct FName& Key, bool Value)//offset:0x25F73F0;
	class FString GetUrl()//offset:0x25F5C50;
};


// Class MediaAssets.BaseMediaSource
// size:0x0008 (0x0080 - 0x0088)
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};


// Class MediaAssets.FileMediaSource
// size:0x0028 (0x0088 - 0x00B0)
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                      FilePath;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0099(0x0017) MISSED OFFSET

	void SetFilePath(const class FString& Path)//offset:0x25F72B0;
};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// size:0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)//offset:0x25F4AE0;
	static void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)//offset:0x25F4990;
	static void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)//offset:0x25F4840;
};


// Class MediaAssets.MediaComponent
// size:0x0010 (0x00B0 - 0x00C0)
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                               MediaTexture;                                             // 0x00B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	class UMediaTexture* GetMediaTexture()//offset:0x1F81210;
	class UMediaPlayer* GetMediaPlayer()//offset:0x25F5160;
};


// Class MediaAssets.MediaTimeStampInfo
// size:0x0010 (0x0028 - 0x0038)
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                                   Time;                                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            SequenceIndex;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};


// Class MediaAssets.MediaPlayer
// size:0x0110 (0x0028 - 0x0138)
class UMediaPlayer : public UObject
{
public:
	struct UEMulticastInlineDelegate                   OnEndReached;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMediaClosed;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMediaOpened;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnMediaOpenFailed;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlaybackResumed;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnPlaybackSuspended;                                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnSeekCompleted;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct UEMulticastInlineDelegate                   OnTracksChanged;                                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FTimespan                                   CacheAhead;                                               // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehind;                                              // 0x00B0(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehindGame;                                          // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor)
	bool                                               NativeAudioOut;                                           // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnOpen;                                               // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	unsigned char                                      Shuffle;                                                  // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      Loop;                                                     // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class UMediaPlaylist*                              Playlist;                                                 // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeDelay;                                                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HorizontalFieldOfView;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalFieldOfView;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x00F4(0x002C) MISSED OFFSET
	struct FGuid                                       PlayerGuid;                                               // 0x0120(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	bool SupportsSeeking()//offset:0x25F8120;
	bool SupportsScrubbing()//offset:0x25F80F0;
	bool SupportsRate(float Rate, bool Unthinned)//offset:0x25F8020;
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute)//offset:0x25F7F40;
	bool SetViewField(float Horizontal, float Vertical, bool Absolute)//offset:0x25F7E20;
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)//offset:0x25F7D10;
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)//offset:0x25F7C00;
	void SetTimeDelay(const struct FTimespan& TimeDelay)//offset:0x25F7B80;
	bool SetRate(float Rate)//offset:0x25F79C0;
	bool SetNativeVolume(float Volume)//offset:0x25F7930;
	void SetMediaOptions(class UMediaSource* Options)//offset:0x25F7780;
	bool SetLooping(bool Looping)//offset:0x25F7350;
	void SetDesiredPlayerName(const struct FName& PlayerName)//offset:0x25F7030;
	void SetBlockOnTime(const struct FTimespan& Time)//offset:0x25F6FA0;
	bool SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex)//offset:0x25F6ED0;
	bool Seek(const struct FTimespan& Time)//offset:0x25F6E30;
	bool Rewind()//offset:0x25F6E00;
	bool Reopen()//offset:0x25F6D00;
	bool Previous()//offset:0x25F6B90;
	void PlayAndSeek()//offset:0x25F6B70;
	bool Play()//offset:0x25F6B40;
	bool Pause()//offset:0x25F6B10;
	bool OpenUrl(const class FString& URL)//offset:0x25F6A60;
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)//offset:0x25F6950;
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)//offset:0x25F6760;
	bool OpenSource(class UMediaSource* MediaSource)//offset:0x25F66C0;
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)//offset:0x25F65F0;
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist)//offset:0x25F6550;
	bool OpenFile(const class FString& FilePath)//offset:0x25F64A0;
	bool Next()//offset:0x25F6450;
	bool IsReady()//offset:0x25F6420;
	bool IsPreparing()//offset:0x25F63F0;
	bool IsPlaying()//offset:0x25F63C0;
	bool IsPaused()//offset:0x25F6390;
	bool IsLooping()//offset:0x25F6360;
	bool IsConnecting()//offset:0x25F6330;
	bool IsClosed()//offset:0x25F6300;
	bool IsBuffering()//offset:0x25F62D0;
	bool HasError()//offset:0x25F61D0;
	struct FRotator GetViewRotation()//offset:0x25F6160;
	class FString GetVideoTrackType(int TrackIndex, int FormatIndex)//offset:0x25F6050;
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)//offset:0x25F5F80;
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)//offset:0x25F5EB0;
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex)//offset:0x25F5DD0;
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)//offset:0x25F5D00;
	float GetVerticalFieldOfView()//offset:0x25F5CD0;
	class FString GetUrl()//offset:0x25F5C10;
	class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex)//offset:0x25F5B00;
	int GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex)//offset:0x25F5A30;
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex)//offset:0x25F5900;
	class UMediaTimeStampInfo* GetTimeStamp()//offset:0x25F58D0;
	struct FTimespan GetTimeDelay()//offset:0x25F5890;
	struct FTimespan GetTime()//offset:0x25F5850;
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)//offset:0x25F5750;
	int GetSelectedTrack(EMediaPlayerTrack TrackType)//offset:0x25F5640;
	float GetRate()//offset:0x25F5610;
	int GetPlaylistIndex()//offset:0x25F54B0;
	class UMediaPlaylist* GetPlaylist()//offset:0x998C50;
	struct FName GetPlayerName()//offset:0x25F5470;
	int GetNumTracks(EMediaPlayerTrack TrackType)//offset:0x25F53E0;
	int GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex)//offset:0x25F5310;
	struct FText GetMediaName()//offset:0x25F50C0;
	float GetHorizontalFieldOfView()//offset:0x25F5090;
	struct FTimespan GetDuration()//offset:0x25F4FF0;
	struct FName GetDesiredPlayerName()//offset:0x25F4FB0;
	class FString GetAudioTrackType(int TrackIndex, int FormatIndex)//offset:0x25F4EA0;
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)//offset:0x25F4DD0;
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex)//offset:0x25F4D00;
	void Close()//offset:0x25F4820;
	bool CanPlayUrl(const class FString& URL)//offset:0x25F4770;
	bool CanPlaySource(class UMediaSource* MediaSource)//offset:0x25F46D0;
	bool CanPause()//offset:0x25F46A0;
};


// Class MediaAssets.MediaPlaylist
// size:0x0010 (0x0028 - 0x0038)
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                        Items;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	bool Replace(int Index, class UMediaSource* Replacement)//offset:0x25F6D30;
	bool RemoveAt(int Index)//offset:0x25F6C60;
	bool Remove(class UMediaSource* MediaSource)//offset:0x25F6BC0;
	int Num()//offset:0x25F6480;
	void Insert(class UMediaSource* MediaSource, int Index)//offset:0x25F6200;
	class UMediaSource* GetRandom(int* OutIndex)//offset:0x25F5570;
	class UMediaSource* GetPrevious(int* InOutIndex)//offset:0x25F54D0;
	class UMediaSource* GetNext(int* InOutIndex)//offset:0x25F51F0;
	class UMediaSource* Get(int Index)//offset:0x25F4C30;
	bool AddUrl(const class FString& URL)//offset:0x25F43A0;
	bool AddFile(const class FString& FilePath)//offset:0x25F42F0;
	bool Add(class UMediaSource* MediaSource)//offset:0x25F4250;
};


// Class MediaAssets.MediaSoundComponent
// size:0x0220 (0x06C0 - 0x08E0)
class UMediaSoundComponent : public USynthComponent
{
public:
	EMediaSoundChannels                                Channels;                                                 // 0x06C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06C0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               DynamicRateAdjustment;                                    // 0x06C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06C5(0x0003) MISSED OFFSET
	float                                              RateAdjustmentFactor;                                     // 0x06C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 RateAdjustmentRange;                                      // 0x06CC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x06E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F8];                                     // 0x06E8(0x01F8) MISSED OFFSET

	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize)//offset:0x25F7A50;
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)//offset:0x25F7810;
	void SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec)//offset:0x25F71E0;
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)//offset:0x25F7150;
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)//offset:0x25F70C0;
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData()//offset:0x25F56D0;
	TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData()//offset:0x25F5290;
	class UMediaPlayer* GetMediaPlayer()//offset:0x25F5190;
	float GetEnvelopeValue()//offset:0x25F5030;
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)//offset:0x25F4450;
};


// Class MediaAssets.MediaTexture
// size:0x00D8 (0x00D8 - 0x01B0)
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClear;                                                // 0x00DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00DB(0x0001) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGenMips;                                            // 0x00EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumMips;                                                  // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewStyleOutput;                                           // 0x00EE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMediaTextureOutputFormat>             OutputFormat;                                             // 0x00EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAspectRatio;                                       // 0x00F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EMediaTextureOrientation>              CurrentOrientation;                                       // 0x00F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x0100(0x00B0) MISSED OFFSET

	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)//offset:0x25F78A0;
	int GetWidth()//offset:0x25F61A0;
	class UMediaPlayer* GetMediaPlayer()//offset:0x25F51C0;
	int GetHeight()//offset:0x25F5060;
	float GetAspectRatio()//offset:0x25F4CD0;
};


// Class MediaAssets.PlatformMediaSource
// size:0x0008 (0x0080 - 0x0088)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class MediaAssets.StreamMediaSource
// size:0x0010 (0x0088 - 0x0098)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                      StreamUrl;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};


// Class MediaAssets.TimeSynchronizableMediaSource
// size:0x0010 (0x0088 - 0x0098)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                               bUseTimeSynchronization;                                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                FrameDelay;                                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeDelay;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
