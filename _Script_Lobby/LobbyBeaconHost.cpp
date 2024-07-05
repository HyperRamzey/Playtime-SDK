#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LobbyBeaconHost.hpp"
#include "LobbyBeaconState.hpp"
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconHostObject.hpp"
void* _Script_Lobby::LobbyBeaconHost::get_LobbyStateClass() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_Lobby::LobbyBeaconState*& _Script_Lobby::LobbyBeaconHost::get_LobbyState() {
    return *(_Script_Lobby::LobbyBeaconState**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Script_Lobby::LobbyBeaconHost::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Lobby.LobbyBeaconHost");
    return result;
}
