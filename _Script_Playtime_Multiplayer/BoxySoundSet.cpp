#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "BoxySoundSet.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_Footstep() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::BoxySoundSet::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_Crouch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x20);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_ReleasedCharge() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_ChargingJump() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x38);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_Punch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x28);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_PunchHit() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x30);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_Land() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x48);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_Jump() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x50);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_GrabShoot() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x58);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_GrabGrab() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x60);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_Jumpscare() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x68);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::BoxySoundSet::get_SelectScreen() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::BoxySoundSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.BoxySoundSet");
    return result;
}
