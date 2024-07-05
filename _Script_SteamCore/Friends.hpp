#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamFriendsGroupID.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_SteamCore {
struct SteamGameID;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Friends : public SteamCoreSubsystem {
    private: char pad_48[0x2d0]; public:
    void* get_AvatarImageLoaded();
    void* get_FriendRichPresenceUpdate();
    void* get_GameConnectedChatJoin();
    void* get_GameConnectedChatLeave();
    void* get_GameConnectedClanChatMsg();
    void* get_GameConnectedFriendChatMsg();
    void* get_GameLobbyJoinRequested();
    void* get_GameOverlayActivated();
    void* get_GameRichPresenceJoinRequested();
    void* get_GameServerChangeRequested();
    void* get_PersonaStateChange();
    void* get_SetPersonaNameResponse();
    void* get_JoinClanChatRoomCompletionResult();
    void* get_ClanOfficerListResponse();
    void* get_DownloadClanActivityCountsResult();
    static _Script_CoreUObject::Class* static_class();
    bool SetRichPresence(void* Key, void* Value);
    void SetPlayedWith(_Script_SteamCore::SteamID SteamIDUserPlayedWith);
    void SetPersonaName(void*& Callback, void* Name);
    bool SetListenForFriendsMessages(bool bInterceptEnabled);
    void SetInGameVoiceSpeaking(_Script_SteamCore::SteamID SteamIDUser, bool bSpeaking);
    bool SendClanChatMessage(_Script_SteamCore::SteamID SteamIDClanChat, void* Text);
    bool RequestUserInformation(_Script_SteamCore::SteamID SteamIDUser, bool bRequireNameOnly);
    void RequestFriendRichPresence(_Script_SteamCore::SteamID SteamIDFriend);
    void RequestClanOfficerList(void*& Callback, _Script_SteamCore::SteamID SteamIDClan);
    bool ReplyToFriendMessage(_Script_SteamCore::SteamID SteamIDFriend, void* MsgToSend);
    bool RegisterProtocolInOverlayBrowser(void* protocol);
    bool OpenClanChatWindowInSteam(_Script_SteamCore::SteamID SteamIDClanChat);
    bool LeaveClanChatRoom(_Script_SteamCore::SteamID SteamIDClan);
    void JoinClanChatRoom(void*& Callback, _Script_SteamCore::SteamID SteamIDClan);
    bool IsUserInSource(_Script_SteamCore::SteamID SteamIDUser, _Script_SteamCore::SteamID SteamIDSource);
    void IsFollowing(void*& Callback, _Script_SteamCore::SteamID SteamID);
    bool IsClanPublic(_Script_SteamCore::SteamID SteamIDClan);
    bool IsClanOfficialGameGroup(_Script_SteamCore::SteamID SteamIDClan);
    bool IsClanChatWindowOpenInSteam(_Script_SteamCore::SteamID SteamIDClanChat);
    bool IsClanChatAdmin(_Script_SteamCore::SteamID SteamIDClanChat, _Script_SteamCore::SteamID SteamIDUser);
    bool InviteUserToGame(_Script_SteamCore::SteamID SteamIDFriend, void* ConnectString);
    bool HasFriend(_Script_SteamCore::SteamID SteamIDFriend, void* Flags);
    void* GetUserRestrictions();
    _Script_Engine::Texture2D* GetSmallFriendAvatar(_Script_SteamCore::SteamID SteamIDFriend);
    void* GetPlayerNickname_Pure(_Script_SteamCore::SteamID SteamIDPlayer);
    void* GetPlayerNickname(_Script_SteamCore::SteamID SteamIDPlayer);
    void* GetPersonaState_Pure();
    void* GetPersonaState();
    void* GetPersonaName_Pure();
    void* GetPersonaName();
    _Script_Engine::Texture2D* GetMediumFriendAvatar(_Script_SteamCore::SteamID SteamIDFriend);
    _Script_Engine::Texture2D* GetLargeFriendAvatar(_Script_SteamCore::SteamID SteamIDFriend);
    int32_t GetFriendSteamLevel(_Script_SteamCore::SteamID SteamIDFriend);
    void* GetFriendsGroupName(_Script_SteamCore::SteamFriendsGroupID FriendsGroupID);
    void GetFriendsGroupMembersList(_Script_SteamCore::SteamFriendsGroupID FriendsGroupID, void*& SteamIDMembers, int32_t MembersCount);
    int32_t GetFriendsGroupMembersCount(_Script_SteamCore::SteamFriendsGroupID FriendsGroupID);
    _Script_SteamCore::SteamFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup);
    int32_t GetFriendsGroupCount();
    int32_t GetFriendRichPresenceKeyCount(_Script_SteamCore::SteamID SteamIDFriend);
    void* GetFriendRichPresenceKeyByIndex(_Script_SteamCore::SteamID SteamIDFriend, int32_t Key);
    void* GetFriendRichPresence(_Script_SteamCore::SteamID SteamIDFriend, void* Key);
    void* GetFriendRelationship(_Script_SteamCore::SteamID SteamIDFriend);
    void* GetFriendPersonaState(_Script_SteamCore::SteamID SteamIDFriend);
    void* GetFriendPersonaNameHistory(_Script_SteamCore::SteamID SteamIDFriend, int32_t PersonaName);
    void* GetFriendPersonaName(_Script_SteamCore::SteamID SteamIDFriend);
    int32_t GetFriendMessage(_Script_SteamCore::SteamID SteamIDFriend, int32_t MessageID, void*& Text, void*& ChatEntryType);
    bool GetFriendGamePlayed(_Script_SteamCore::SteamID SteamIDFriend, _Script_SteamCore::SteamGameID& GameID, void*& GameIP, int32_t& ConnectionPort, int32_t& QueryPort, _Script_SteamCore::SteamID& SteamIDLobby);
    _Script_SteamCore::SteamID GetFriendFromSourceByIndex(_Script_SteamCore::SteamID SteamIDSource, int32_t Ifriend);
    int32_t GetFriendCountFromSource(_Script_SteamCore::SteamID SteamIDSource);
    int32_t GetFriendCount(void* Flags);
    int32_t GetFriendCoplayTime(_Script_SteamCore::SteamID SteamIDFriend);
    int32_t GetFriendCoplayGame(_Script_SteamCore::SteamID SteamIDFriend);
    _Script_SteamCore::SteamID GetFriendByIndex(int32_t Ifriend, void* Flags);
    void GetFollowerCount(void*& Callback, _Script_SteamCore::SteamID SteamID);
    int32_t GetCoplayFriendCount();
    _Script_SteamCore::SteamID GetCoplayFriend(int32_t CoplayFriend);
    void* GetClanTag(_Script_SteamCore::SteamID SteamIDClan);
    _Script_SteamCore::SteamID GetClanOwner(_Script_SteamCore::SteamID SteamIDClan);
    int32_t GetClanOfficerCount(_Script_SteamCore::SteamID SteamIDClan);
    _Script_SteamCore::SteamID GetClanOfficerByIndex(_Script_SteamCore::SteamID SteamIDClan, int32_t Officer);
    void* GetClanName(_Script_SteamCore::SteamID SteamIDClan);
    int32_t GetClanCount();
    int32_t GetClanChatMessage(_Script_SteamCore::SteamID SteamIDClanChat, int32_t MessageID, void*& Text, void*& ChatEntryType, _Script_SteamCore::SteamID& SteamIDChatter);
    int32_t GetClanChatMemberCount(_Script_SteamCore::SteamID SteamIDClan);
    _Script_SteamCore::SteamID GetClanByIndex(int32_t Clan);
    bool GetClanActivityCounts(_Script_SteamCore::SteamID SteamIDClan, int32_t& Online, int32_t& InGame, int32_t& Chatting);
    _Script_SteamCore::SteamID GetChatMemberByIndex(_Script_SteamCore::SteamID SteamIDClan, int32_t User);
    void EnumerateFollowingList(void*& Callback, int32_t StartIndex);
    void DownloadClanActivityCounts(void*& Callback, void* SteamIDClans);
    bool CloseClanChatWindowInSteam(_Script_SteamCore::SteamID SteamIDClanChat);
    void ClearRichPresence();
    void ActivateGameOverlayToWebPage(void* URL, void* Mode);
    void ActivateGameOverlayToUser(void* Dialog, _Script_SteamCore::SteamID SteamID);
    void ActivateGameOverlayToStore(int32_t AppID, void* Flag);
    void ActivateGameOverlayInviteDialogConnectString(void* ConnectString);
    void ActivateGameOverlayInvitedialog(_Script_SteamCore::SteamID SteamIDLobby);
    void ActivateGameOverlay(void* Dialog);
}; // Size: 0x318
#pragma pack(pop)
}
