#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "Friends.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamFriendsGroupID.hpp"
#include "SteamGameID.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::Friends::get_AvatarImageLoaded() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetFriendFromSourceByIndex(_Script_SteamCore::SteamID SteamIDSource, int32_t Ifriend) {
    return;
}
int32_t _Script_SteamCore::Friends::GetClanChatMessage(_Script_SteamCore::SteamID SteamIDClanChat, int32_t MessageID, void*& Text, void*& ChatEntryType, _Script_SteamCore::SteamID& SteamIDChatter) {
    return;
}
void* _Script_SteamCore::Friends::get_GameConnectedFriendChatMsg() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SteamCore::Friends::GetFriendPersonaState(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
void* _Script_SteamCore::Friends::GetPersonaState() {
    return;
}
void* _Script_SteamCore::Friends::get_FriendRichPresenceUpdate() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::Friends::get_GameConnectedChatJoin() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_Engine::Texture2D* _Script_SteamCore::Friends::GetMediumFriendAvatar(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
void* _Script_SteamCore::Friends::get_GameConnectedChatLeave() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::Friends::get_GameConnectedClanChatMsg() {
    return (void*)((uintptr_t)this + 0x88);
}
int32_t _Script_SteamCore::Friends::GetFriendsGroupCount() {
    return;
}
void* _Script_SteamCore::Friends::get_GameLobbyJoinRequested() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_SteamCore::Friends::get_GameOverlayActivated() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_SteamCore::Friends::get_GameRichPresenceJoinRequested() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_SteamCore::Friends::get_GameServerChangeRequested() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_SteamCore::Friends::get_PersonaStateChange() {
    return (void*)((uintptr_t)this + 0xe8);
}
bool _Script_SteamCore::Friends::IsClanChatAdmin(_Script_SteamCore::SteamID SteamIDClanChat, _Script_SteamCore::SteamID SteamIDUser) {
    return;
}
void* _Script_SteamCore::Friends::get_SetPersonaNameResponse() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SteamCore::Friends::get_JoinClanChatRoomCompletionResult() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_SteamCore::Friends::GetFriendGamePlayed(_Script_SteamCore::SteamID SteamIDFriend, _Script_SteamCore::SteamGameID& GameID, void*& GameIP, int32_t& ConnectionPort, int32_t& QueryPort, _Script_SteamCore::SteamID& SteamIDLobby) {
    return;
}
void* _Script_SteamCore::Friends::get_DownloadClanActivityCountsResult() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_SteamCore::Friends::get_ClanOfficerListResponse() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_SteamCore::Friends::GetPersonaName_Pure() {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::Friends::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Friends");
    return result;
}
bool _Script_SteamCore::Friends::SetRichPresence(void* Key, void* Value) {
    return;
}
bool _Script_SteamCore::Friends::ReplyToFriendMessage(_Script_SteamCore::SteamID SteamIDFriend, void* MsgToSend) {
    return;
}
void _Script_SteamCore::Friends::SetPlayedWith(_Script_SteamCore::SteamID SteamIDUserPlayedWith) {
    return;
}
bool _Script_SteamCore::Friends::LeaveClanChatRoom(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
void _Script_SteamCore::Friends::SetPersonaName(void*& Callback, void* Name) {
    return;
}
void* _Script_SteamCore::Friends::GetFriendsGroupName(_Script_SteamCore::SteamFriendsGroupID FriendsGroupID) {
    return;
}
bool _Script_SteamCore::Friends::SetListenForFriendsMessages(bool bInterceptEnabled) {
    return;
}
void _Script_SteamCore::Friends::SetInGameVoiceSpeaking(_Script_SteamCore::SteamID SteamIDUser, bool bSpeaking) {
    return;
}
void* _Script_SteamCore::Friends::GetUserRestrictions() {
    return;
}
bool _Script_SteamCore::Friends::SendClanChatMessage(_Script_SteamCore::SteamID SteamIDClanChat, void* Text) {
    return;
}
bool _Script_SteamCore::Friends::OpenClanChatWindowInSteam(_Script_SteamCore::SteamID SteamIDClanChat) {
    return;
}
bool _Script_SteamCore::Friends::RequestUserInformation(_Script_SteamCore::SteamID SteamIDUser, bool bRequireNameOnly) {
    return;
}
void _Script_SteamCore::Friends::RequestFriendRichPresence(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
void _Script_SteamCore::Friends::RequestClanOfficerList(void*& Callback, _Script_SteamCore::SteamID SteamIDClan) {
    return;
}
bool _Script_SteamCore::Friends::IsClanPublic(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
bool _Script_SteamCore::Friends::RegisterProtocolInOverlayBrowser(void* protocol) {
    return;
}
void _Script_SteamCore::Friends::JoinClanChatRoom(void*& Callback, _Script_SteamCore::SteamID SteamIDClan) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendRichPresenceKeyCount(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
bool _Script_SteamCore::Friends::IsUserInSource(_Script_SteamCore::SteamID SteamIDUser, _Script_SteamCore::SteamID SteamIDSource) {
    return;
}
bool _Script_SteamCore::Friends::HasFriend(_Script_SteamCore::SteamID SteamIDFriend, void* Flags) {
    return;
}
void _Script_SteamCore::Friends::IsFollowing(void*& Callback, _Script_SteamCore::SteamID SteamID) {
    return;
}
bool _Script_SteamCore::Friends::IsClanOfficialGameGroup(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendsGroupMembersCount(_Script_SteamCore::SteamFriendsGroupID FriendsGroupID) {
    return;
}
void* _Script_SteamCore::Friends::GetPlayerNickname_Pure(_Script_SteamCore::SteamID SteamIDPlayer) {
    return;
}
bool _Script_SteamCore::Friends::IsClanChatWindowOpenInSteam(_Script_SteamCore::SteamID SteamIDClanChat) {
    return;
}
bool _Script_SteamCore::Friends::InviteUserToGame(_Script_SteamCore::SteamID SteamIDFriend, void* ConnectString) {
    return;
}
_Script_Engine::Texture2D* _Script_SteamCore::Friends::GetSmallFriendAvatar(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
void* _Script_SteamCore::Friends::GetPlayerNickname(_Script_SteamCore::SteamID SteamIDPlayer) {
    return;
}
void* _Script_SteamCore::Friends::GetPersonaState_Pure() {
    return;
}
void* _Script_SteamCore::Friends::GetPersonaName() {
    return;
}
_Script_Engine::Texture2D* _Script_SteamCore::Friends::GetLargeFriendAvatar(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendSteamLevel(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
void _Script_SteamCore::Friends::GetFriendsGroupMembersList(_Script_SteamCore::SteamFriendsGroupID FriendsGroupID, void*& SteamIDMembers, int32_t MembersCount) {
    return;
}
_Script_SteamCore::SteamFriendsGroupID _Script_SteamCore::Friends::GetFriendsGroupIDByIndex(int32_t FriendGroup) {
    return;
}
void* _Script_SteamCore::Friends::GetFriendRichPresenceKeyByIndex(_Script_SteamCore::SteamID SteamIDFriend, int32_t Key) {
    return;
}
void* _Script_SteamCore::Friends::GetFriendRichPresence(_Script_SteamCore::SteamID SteamIDFriend, void* Key) {
    return;
}
void* _Script_SteamCore::Friends::GetFriendRelationship(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
void* _Script_SteamCore::Friends::GetFriendPersonaNameHistory(_Script_SteamCore::SteamID SteamIDFriend, int32_t PersonaName) {
    return;
}
void* _Script_SteamCore::Friends::GetFriendPersonaName(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendMessage(_Script_SteamCore::SteamID SteamIDFriend, int32_t MessageID, void*& Text, void*& ChatEntryType) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendCountFromSource(_Script_SteamCore::SteamID SteamIDSource) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendCount(void* Flags) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendCoplayTime(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
int32_t _Script_SteamCore::Friends::GetFriendCoplayGame(_Script_SteamCore::SteamID SteamIDFriend) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetFriendByIndex(int32_t Ifriend, void* Flags) {
    return;
}
void _Script_SteamCore::Friends::GetFollowerCount(void*& Callback, _Script_SteamCore::SteamID SteamID) {
    return;
}
int32_t _Script_SteamCore::Friends::GetCoplayFriendCount() {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetCoplayFriend(int32_t CoplayFriend) {
    return;
}
void* _Script_SteamCore::Friends::GetClanTag(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetClanOwner(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
int32_t _Script_SteamCore::Friends::GetClanOfficerCount(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetClanOfficerByIndex(_Script_SteamCore::SteamID SteamIDClan, int32_t Officer) {
    return;
}
void* _Script_SteamCore::Friends::GetClanName(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
int32_t _Script_SteamCore::Friends::GetClanCount() {
    return;
}
int32_t _Script_SteamCore::Friends::GetClanChatMemberCount(_Script_SteamCore::SteamID SteamIDClan) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetClanByIndex(int32_t Clan) {
    return;
}
bool _Script_SteamCore::Friends::GetClanActivityCounts(_Script_SteamCore::SteamID SteamIDClan, int32_t& Online, int32_t& InGame, int32_t& Chatting) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Friends::GetChatMemberByIndex(_Script_SteamCore::SteamID SteamIDClan, int32_t User) {
    return;
}
void _Script_SteamCore::Friends::EnumerateFollowingList(void*& Callback, int32_t StartIndex) {
    return;
}
void _Script_SteamCore::Friends::DownloadClanActivityCounts(void*& Callback, void* SteamIDClans) {
    return;
}
bool _Script_SteamCore::Friends::CloseClanChatWindowInSteam(_Script_SteamCore::SteamID SteamIDClanChat) {
    return;
}
void _Script_SteamCore::Friends::ClearRichPresence() {
    return;
}
void _Script_SteamCore::Friends::ActivateGameOverlayToWebPage(void* URL, void* Mode) {
    return;
}
void _Script_SteamCore::Friends::ActivateGameOverlayToUser(void* Dialog, _Script_SteamCore::SteamID SteamID) {
    return;
}
void _Script_SteamCore::Friends::ActivateGameOverlayToStore(int32_t AppID, void* Flag) {
    return;
}
void _Script_SteamCore::Friends::ActivateGameOverlayInviteDialogConnectString(void* ConnectString) {
    return;
}
void _Script_SteamCore::Friends::ActivateGameOverlayInvitedialog(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
void _Script_SteamCore::Friends::ActivateGameOverlay(void* Dialog) {
    return;
}
