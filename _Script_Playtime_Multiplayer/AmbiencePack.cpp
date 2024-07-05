#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "AmbiencePack.hpp"
#include "SoundPack.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::AmbiencePack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.AmbiencePack");
    return result;
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::AmbiencePack::get_TheaterAmbience() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::AmbiencePack::get_FactoryAmbience() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x48);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::AmbiencePack::get_DestroyAToyAmbience() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x50);
}
