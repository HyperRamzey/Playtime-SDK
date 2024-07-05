#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Matchmaking : public SteamCoreSubsystem {
    private: char pad_48[0x1b0]; public:
    void* get_FavoritesListAccountsUpdated();
    void* get_FavoritesListChanged();
    void* get_LobbyChatMsg();
    void* get_LobbyChatUpdate();
    void* get_LobbyDataUpdate();
    void* get_LobbyEnter();
    void* get_LobbyGameCreated();
    void* get_LobbyInvite();
    void* get_LobbyKicked();
    static _Script_CoreUObject::Class* static_class();
    bool SetLobbyType(_Script_SteamCore::SteamID SteamIDLobby, void* LobbyType);
    bool SetLobbyOwner(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDNewOwner);
    bool SetLobbyMemberLimit(_Script_SteamCore::SteamID SteamIDLobby, int32_t MaxMembers);
    void SetLobbyMemberData(_Script_SteamCore::SteamID SteamIDLobby, void* Key, void* Value);
    bool SetLobbyJoinable(_Script_SteamCore::SteamID SteamIDLobby, bool bLobbyJoinable);
    void SetLobbyGameServer(_Script_SteamCore::SteamID SteamIDLobby, void* GameServerIP, int32_t GameServerPort, _Script_SteamCore::SteamID SteamIDGameServer);
    bool SetLobbyData(_Script_SteamCore::SteamID SteamIDLobby, void* Key, void* Value);
    bool SetLinkedLobby(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDLobbyDependent);
    bool SendLobbyChatMsg(_Script_SteamCore::SteamID SteamIDLobby, void* Message);
    void RequestLobbyList(void*& Callback);
    bool RequestLobbyData(_Script_SteamCore::SteamID SteamIDLobby);
    bool RemoveFavoriteGame(int32_t AppID, void* IP, int32_t ConnectionPort, int32_t QueryPort, void* Flags);
    void LeaveLobby(_Script_SteamCore::SteamID SteamIDLobby);
    void JoinLobby(void*& Callback, _Script_SteamCore::SteamID SteamIDLobby);
    bool InviteUserToLobby(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDInvitee);
    int32_t GetNumLobbyMembers(_Script_SteamCore::SteamID SteamIDLobby);
    _Script_SteamCore::SteamID GetLobbyOwner(_Script_SteamCore::SteamID SteamIDLobby);
    int32_t GetLobbyMemberLimit(_Script_SteamCore::SteamID SteamIDLobby);
    void* GetLobbyMemberData(_Script_SteamCore::SteamID SteamIDLobby, _Script_SteamCore::SteamID SteamIDUser, void* Key);
    _Script_SteamCore::SteamID GetLobbyMemberByIndex(_Script_SteamCore::SteamID SteamIDLobby, int32_t Member);
    bool GetLobbyGameServer(_Script_SteamCore::SteamID SteamIDLobby, void*& GameServerIP, int32_t& GameServerPort, _Script_SteamCore::SteamID& SteamIDGameServer);
    int32_t GetLobbyDataCount(_Script_SteamCore::SteamID SteamIDLobby);
    bool GetLobbyDataByIndex(_Script_SteamCore::SteamID SteamIDLobby, int32_t LobbyData, void*& Key, void*& Value);
    void* GetLobbyData(_Script_SteamCore::SteamID SteamIDLobby, void* Key);
    int32_t GetLobbyChatEntry(_Script_SteamCore::SteamID SteamIDLobby, int32_t MessageID, _Script_SteamCore::SteamID& SteamIDUser, void*& Message, void*& ChatEntryType);
    _Script_SteamCore::SteamID GetLobbyByIndex(int32_t Lobby);
    int32_t GetFavoriteGameCount();
    bool GetFavoriteGame(int32_t Game, int32_t& AppID, void*& IP, int32_t& ConnectionPort, int32_t& QueryPort, void*& Flags, int32_t& TimeLastPlayedOnServer);
    bool DeleteLobbyData(_Script_SteamCore::SteamID SteamIDLobby, void* Key);
    void CreateLobby(void*& Callback, void* LobbyType, int32_t MaxMembers);
    void AddRequestLobbyListStringFilter(void* KeyToMatch, void* ValueToMatch, void* ComparisonType);
    void AddRequestLobbyListResultCountFilter(int32_t MaxResults);
    void AddRequestLobbyListNumericalFilter(void* KeyToMatch, int32_t ValueToMatch, void* ComparisonType);
    void AddRequestLobbyListNearValueFilter(void* KeyToMatch, int32_t ValueToBeCloseTo);
    void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable);
    void AddRequestLobbyListDistanceFilter(void* LobbyDistanceFilter);
    void AddRequestLobbyListCompatibleMembersFilter(_Script_SteamCore::SteamID SteamIDLobby);
    int32_t AddFavoriteGame(int32_t AppID, void* IP, int32_t ConnectionPort, int32_t QueryPort, void* Flags, int32_t TimeLastPlayedOnServer);
}; // Size: 0x1f8
#pragma pack(pop)
}
