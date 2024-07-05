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
struct SteamGameSearch : public SteamCoreSubsystem {
    private: char pad_48[0x150]; public:
    void* get_SearchForGameProgressDelegate();
    void* get_SearchForGameResultDelegate();
    void* get_RequestPlayersForGameProgressDelegate();
    void* get_RequestPlayersForGameResultDelegate();
    void* get_RequestPlayersForGameFinalResultDelegate();
    void* get_SubmitPlayerResultResultDelegate();
    void* get_EndGameResultDelegate();
    static _Script_CoreUObject::Class* static_class();
    void* SubmitPlayerResult(void* UniqueGameID, _Script_SteamCore::SteamID SteamIDPlayer, void* PlayerResult);
    void* SetGameHostParams(void* Key, void* Values);
    void* SetConnectionDetails(void* ConnectionDetails);
    void* SearchForGameWithLobby(_Script_SteamCore::SteamID SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax);
    void* SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax);
    void* RetrieveConnectionDetails(_Script_SteamCore::SteamID SteamIDHost, void*& ConnectionDetails, int32_t NumConnectionDetails);
    void* RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize);
    void* HostConfirmGameStart(void* UniqueGameID);
    void* EndGameSearch();
    void* EndGame(void* UniqueGameID);
    void* DeclineGame();
    void* CancelRequestPlayersForGame();
    void* AddGameSearchParams(void* KeyToFind, void* ValuesToFind);
    void* AcceptGame();
}; // Size: 0x198
#pragma pack(pop)
}
