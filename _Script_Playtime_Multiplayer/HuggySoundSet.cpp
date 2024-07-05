#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "HuggySoundSet.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_PunchHit() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::HuggySoundSet::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_Footstep() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x18);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_Crouch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x20);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_Punch() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x28);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_ChargeAttack() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x38);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_ChargeAttackHit() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_PlaceMiniHuggy() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x48);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_Jumpscare() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x50);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::HuggySoundSet::get_SelectScreen() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HuggySoundSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.HuggySoundSet");
    return result;
}
