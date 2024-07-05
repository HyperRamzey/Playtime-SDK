#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamGameSearch.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::SteamGameSearch::get_SearchForGameProgressDelegate() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::SteamGameSearch::get_SubmitPlayerResultResultDelegate() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SteamCore::SteamGameSearch::get_SearchForGameResultDelegate() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::SteamGameSearch::get_RequestPlayersForGameFinalResultDelegate() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SteamCore::SteamGameSearch::get_RequestPlayersForGameProgressDelegate() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::SteamGameSearch::get_EndGameResultDelegate() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_SteamCore::SteamGameSearch::get_RequestPlayersForGameResultDelegate() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::SteamGameSearch::SetConnectionDetails(void* ConnectionDetails) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamGameSearch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamGameSearch");
    return result;
}
void* _Script_SteamCore::SteamGameSearch::SubmitPlayerResult(void* UniqueGameID, _Script_SteamCore::SteamID SteamIDPlayer, void* PlayerResult) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::SetGameHostParams(void* Key, void* Values) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::SearchForGameWithLobby(_Script_SteamCore::SteamID SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::RetrieveConnectionDetails(_Script_SteamCore::SteamID SteamIDHost, void*& ConnectionDetails, int32_t NumConnectionDetails) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::HostConfirmGameStart(void* UniqueGameID) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::EndGameSearch() {
    return;
}
void* _Script_SteamCore::SteamGameSearch::EndGame(void* UniqueGameID) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::DeclineGame() {
    return;
}
void* _Script_SteamCore::SteamGameSearch::CancelRequestPlayersForGame() {
    return;
}
void* _Script_SteamCore::SteamGameSearch::AddGameSearchParams(void* KeyToFind, void* ValuesToFind) {
    return;
}
void* _Script_SteamCore::SteamGameSearch::AcceptGame() {
    return;
}
