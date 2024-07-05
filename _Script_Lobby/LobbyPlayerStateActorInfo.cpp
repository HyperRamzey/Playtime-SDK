#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\FastArraySerializerItem.hpp"
#include "LobbyBeaconPlayerState.hpp"
#include "LobbyPlayerStateActorInfo.hpp"
_Script_CoreUObject::Class* _Script_Lobby::LobbyPlayerStateActorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Lobby.LobbyPlayerStateActorInfo");
    return result;
}
_Script_Lobby::LobbyBeaconPlayerState*& _Script_Lobby::LobbyPlayerStateActorInfo::get_LobbyPlayerState() {
    return *(_Script_Lobby::LobbyBeaconPlayerState**)((uintptr_t)this + 0x10);
}
