#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "SoundPack.hpp"
#include "SurvivorSoundPack.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_DefaultFootsteps() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_CarpetFootsteps() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x48);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_MetalFootsteps() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x50);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_DefaultLanding() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x60);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_Jump() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x58);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_Roll() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x78);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_CarpetLanding() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x68);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_MetalLanding() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x70);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_HeavyBreathing() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x80);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::SurvivorSoundPack::get_BigExhale() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SurvivorSoundPack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.SurvivorSoundPack");
    return result;
}
