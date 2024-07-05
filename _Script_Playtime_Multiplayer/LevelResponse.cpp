#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelResponse.hpp"
int32_t& _Script_Playtime_Multiplayer::LevelResponse::get_XP() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::LevelResponse::get_BeginningOfLevelInXP() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void _Script_Playtime_Multiplayer::LevelResponse::set_bHasPremiumToyBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::LevelResponse::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
bool _Script_Playtime_Multiplayer::LevelResponse::get_bHasPremiumToyBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::LevelResponse::get_BeginningOfNextLevelInXP() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LevelResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.LevelResponse");
    return result;
}
