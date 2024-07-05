#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "LobbyMusicPack.hpp"
#include "SoundPack.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::LobbyMusicPack::get_LobbyMusic() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LobbyMusicPack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LobbyMusicPack");
    return result;
}
