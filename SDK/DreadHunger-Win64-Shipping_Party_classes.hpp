                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_Party_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Party.Chatroom
// size:0x0030 (0x0028 - 0x0058)
class UChatroom : public UObject
{
public:
	class FString                                      CurrentChatRoomId;                                        // 0x0028(0x0010) (ZeroConstructor)
	int                                                MaxChatRoomRetries;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumChatRoomRetries;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};


// Class Party.SocialManager
// size:0x0180 (0x0028 - 0x01A8)
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TArray<class USocialToolkit*>                      SocialToolkits;                                           // 0x0050(0x0010) (ZeroConstructor)
	class USocialDebugTools*                           SocialDebugTools;                                         // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0068(0x0140) MISSED OFFSET
};


// Class Party.SocialParty
// size:0x02D8 (0x0028 - 0x0300)
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class APartyBeaconClient*                          ReservationBeaconClientClass;                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpectatorBeaconClient*                      SpectatorBeaconClientClass;                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwningLocalUserId;                                        // 0x0078(0x0028)
	struct FUniqueNetIdRepl                            CurrentLeaderId;                                          // 0x00A0(0x0028)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                         // 0x00C8(0x0050)
	bool                                               bEnableAutomaticPartyRejoin;                              // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB7];                                      // 0x0119(0x00B7) MISSED OFFSET
	class APartyBeaconClient*                          ReservationBeaconClient;                                  // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	class ASpectatorBeaconClient*                      SpectatorBeaconClient;                                    // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x118];                                     // 0x01E8(0x0118) MISSED OFFSET
};


// Class Party.PartyMember
// size:0x00C8 (0x0028 - 0x00F0)
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	class USocialUser*                                 SocialUser;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0070(0x0080) MISSED OFFSET
};


// Class Party.SocialToolkit
// size:0x01D0 (0x0028 - 0x01F8)
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	class USocialUser*                                 LocalUser;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USocialUser*>                         AllUsers;                                                 // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) MISSED OFFSET
	class ULocalPlayer*                                LocalPlayerOwner;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USocialChatManager*                          SocialChatManager;                                        // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x118];                                     // 0x00E0(0x0118) MISSED OFFSET
};


// Class Party.SocialChatManager
// size:0x01F8 (0x0028 - 0x0220)
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                               // 0x0078(0x0050)
	TMap<class FString, class USocialChatRoom*>        ChatRoomsById;                                            // 0x00C8(0x0050)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                            // 0x0118(0x0050)
	bool                                               bEnableChatSlashCommands;                                 // 0x0168(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                            // 0x0170(0x0050)
	unsigned char                                      UnknownData02[0x60];                                      // 0x01C0(0x0060) MISSED OFFSET
};


// Class Party.SocialChatChannel
// size:0x00C0 (0x0028 - 0x00E8)
class USocialChatChannel : public UObject
{
public:
};


// Class Party.SocialChatRoom
// size:0x0010 (0x00E8 - 0x00F8)
class USocialChatRoom : public USocialChatChannel
{
public:
};


// Class Party.SocialDebugTools
// size:0x0060 (0x0028 - 0x0088)
class USocialDebugTools : public UObject
{
public:
};


// Class Party.SocialGroupChannel
// size:0x0068 (0x0028 - 0x0090)
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                                 SocialUser;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            GroupId;                                                  // 0x0030(0x0028)
	struct FText                                       DisplayName;                                              // 0x0058(0x0028)
	TArray<class USocialUser*>                         MEMBERS;                                                  // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};


// Class Party.SocialPartyChatRoom
// size:0x0000 (0x00F8 - 0x00F8)
class USocialPartyChatRoom : public USocialChatRoom
{
public:
};


// Class Party.SocialPrivateMessageChannel
// size:0x0008 (0x00E8 - 0x00F0)
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                                 TargetUser;                                               // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
};


// Class Party.SocialReadOnlyChatChannel
// size:0x0000 (0x00E8 - 0x00E8)
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:
};


// Class Party.SocialSettings
// size:0x0038 (0x0028 - 0x0060)
class USocialSettings : public UObject
{
public:
	TArray<struct FName>                               OssNamesWithEnvironmentIdPrefix;                          // 0x0028(0x0010) (ZeroConstructor, Config)
	int                                                DefaultMaxPartySize;                                      // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreferPlatformInvites;                                   // 0x003C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMustSendPrimaryInvites;                                  // 0x003D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLeavePartyOnDisconnect;                                  // 0x003E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSetDesiredPrivacyOnLocalPlayerBecomesLeader;             // 0x003F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UserListAutoUpdateRate;                                   // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinNicknameLength;                                        // 0x0044(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNicknameLength;                                        // 0x0048(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FSocialPlatformDescription>          SocialPlatformDescriptions;                               // 0x0050(0x0010) (ZeroConstructor, Config)
};


// Class Party.SocialUser
// size:0x0140 (0x0028 - 0x0168)
class USocialUser : public UObject
{
public:
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
