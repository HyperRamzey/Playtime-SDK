#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "MommySoundSet.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_PunchHit() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x30);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_WebsShooting() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::MommySoundSet::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_Crouch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x20);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_Footstep() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x18);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_Punch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x28);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_GrappleStretch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x48);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_GrappleShot() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_GrappleGrab() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x50);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_Jumpscare() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x58);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_Spotter() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x60);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::MommySoundSet::get_SelectScreen() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MommySoundSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MommySoundSet");
    return result;
}
