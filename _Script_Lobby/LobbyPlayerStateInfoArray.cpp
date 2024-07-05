#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\FastArraySerializer.hpp"
#include "LobbyBeaconState.hpp"
#include "LobbyPlayerStateInfoArray.hpp"
void* _Script_Lobby::LobbyPlayerStateInfoArray::get_Players() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_Lobby::LobbyBeaconState*& _Script_Lobby::LobbyPlayerStateInfoArray::get_ParentState() {
    return *(_Script_Lobby::LobbyBeaconState**)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Lobby::LobbyPlayerStateInfoArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Lobby.LobbyPlayerStateInfoArray");
    return result;
}
