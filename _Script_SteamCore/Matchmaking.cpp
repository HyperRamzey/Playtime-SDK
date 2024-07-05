#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Matchmaking.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::Matchmaking::get_LobbyChatUpdate() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::Matchmaking::get_FavoritesListAccountsUpdated() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListCompatibleMembersFilter(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
void* _Script_SteamCore::Matchmaking::get_LobbyDataUpdate() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SteamCore::Matchmaking::get_FavoritesListChanged() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::Matchmaking::get_LobbyChatMsg() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::Matchmaking::get_LobbyEnter() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SteamCore::Matchmaking::get_LobbyGameCreated() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_SteamCore::Matchmaking::get_LobbyInvite() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_SteamCore::Matchmaking::get_LobbyKicked() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_SteamCore::Matchmaking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Matchmaking");
    return result;
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListNumericalFilter(void* KeyToMatch, int32_t ValueToMatch, void* ComparisonType) {
    return;
}
bool _Script_SteamCore::Matchmaking::SetLobbyType(_Script_SteamCore::SteamID SteamIDLobby, void* LobbyType) {
    return;
}
bool _Script_SteamCore::Matchmaking::SetLobbyOwner(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDNewOwner) {
    return;
}
bool _Script_SteamCore::Matchmaking::SetLobbyMemberLimit(_Script_SteamCore::SteamID SteamIDLobby, int32_t MaxMembers) {
    return;
}
void _Script_SteamCore::Matchmaking::SetLobbyMemberData(_Script_SteamCore::SteamID SteamIDLobby, void* Key, void* Value) {
    return;
}
bool _Script_SteamCore::Matchmaking::SetLobbyJoinable(_Script_SteamCore::SteamID SteamIDLobby, bool bLobbyJoinable) {
    return;
}
void _Script_SteamCore::Matchmaking::SetLobbyGameServer(_Script_SteamCore::SteamID SteamIDLobby, void* GameServerIP, int32_t GameServerPort, _Script_SteamCore::SteamID SteamIDGameServer) {
    return;
}
bool _Script_SteamCore::Matchmaking::SetLobbyData(_Script_SteamCore::SteamID SteamIDLobby, void* Key, void* Value) {
    return;
}
int32_t _Script_SteamCore::Matchmaking::GetLobbyMemberLimit(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
bool _Script_SteamCore::Matchmaking::SetLinkedLobby(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDLobbyDependent) {
    return;
}
bool _Script_SteamCore::Matchmaking::SendLobbyChatMsg(_Script_SteamCore::SteamID SteamIDLobby, void* Message) {
    return;
}
void _Script_SteamCore::Matchmaking::RequestLobbyList(void*& Callback) {
    return;
}
bool _Script_SteamCore::Matchmaking::RequestLobbyData(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
bool _Script_SteamCore::Matchmaking::RemoveFavoriteGame(int32_t AppID, void* IP, int32_t ConnectionPort, int32_t QueryPort, void* Flags) {
    return;
}
void _Script_SteamCore::Matchmaking::LeaveLobby(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
int32_t _Script_SteamCore::Matchmaking::GetLobbyDataCount(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
void _Script_SteamCore::Matchmaking::JoinLobby(void*& Callback, _Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
bool _Script_SteamCore::Matchmaking::InviteUserToLobby(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDInvitee) {
    return;
}
int32_t _Script_SteamCore::Matchmaking::GetNumLobbyMembers(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Matchmaking::GetLobbyOwner(_Script_SteamCore::SteamID SteamIDLobby) {
    return;
}
void* _Script_SteamCore::Matchmaking::GetLobbyMemberData(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDUser, void* Key) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Matchmaking::GetLobbyMemberByIndex(_Script_SteamCore::SteamID SteamIDLobby, int32_t Member) {
    return;
}
bool _Script_SteamCore::Matchmaking::GetLobbyGameServer(_Script_SteamCore::SteamID SteamIDLobby, void*& GameServerIP, int32_t& GameServerPort, _Script_SteamCore::SteamID& SteamIDGameServer) {
    return;
}
bool _Script_SteamCore::Matchmaking::GetLobbyDataByIndex(_Script_SteamCore::SteamID SteamIDLobby, int32_t LobbyData, void*& Key, void*& Value) {
    return;
}
bool _Script_SteamCore::Matchmaking::GetFavoriteGame(int32_t Game, int32_t& AppID, void*& IP, int32_t& ConnectionPort, int32_t& QueryPort, void*& Flags, int32_t& TimeLastPlayedOnServer) {
    return;
}
void* _Script_SteamCore::Matchmaking::GetLobbyData(_Script_SteamCore::SteamID SteamIDLobby, void* Key) {
    return;
}
void _Script_SteamCore::Matchmaking::CreateLobby(void*& Callback, void* LobbyType, int32_t MaxMembers) {
    return;
}
int32_t _Script_SteamCore::Matchmaking::GetLobbyChatEntry(_Script_SteamCore::SteamID SteamIDLobby, int32_t MessageID, _Script_SteamCore::SteamID& SteamIDUser, void*& Message, void*& ChatEntryType) {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Matchmaking::GetLobbyByIndex(int32_t Lobby) {
    return;
}
int32_t _Script_SteamCore::Matchmaking::GetFavoriteGameCount() {
    return;
}
bool _Script_SteamCore::Matchmaking::DeleteLobbyData(_Script_SteamCore::SteamID SteamIDLobby, void* Key) {
    return;
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListStringFilter(void* KeyToMatch, void* ValueToMatch, void* ComparisonType) {
    return;
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListResultCountFilter(int32_t MaxResults) {
    return;
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListNearValueFilter(void* KeyToMatch, int32_t ValueToBeCloseTo) {
    return;
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable) {
    return;
}
void _Script_SteamCore::Matchmaking::AddRequestLobbyListDistanceFilter(void* LobbyDistanceFilter) {
    return;
}
int32_t _Script_SteamCore::Matchmaking::AddFavoriteGame(int32_t AppID, void* IP, int32_t ConnectionPort, int32_t QueryPort, void* Flags, int32_t TimeLastPlayedOnServer) {
    return;
}
