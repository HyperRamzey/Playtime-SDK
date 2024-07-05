#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "CrossfadeRequest.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::CrossfadeRequest::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::CrossfadeRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.CrossfadeRequest");
    return result;
}
float& _Script_Playtime_Multiplayer::CrossfadeRequest::get_FadeTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Playtime_Multiplayer::CrossfadeRequest::get_NewVolume() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_Playtime_Multiplayer::CrossfadeRequest::get_bRandomStartPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::CrossfadeRequest::set_bRandomStartPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
