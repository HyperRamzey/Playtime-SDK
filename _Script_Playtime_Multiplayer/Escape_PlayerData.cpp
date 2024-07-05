#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Escape_PlayerData.hpp"
#include "PlayerData.hpp"
void* _Script_Playtime_Multiplayer::Escape_PlayerData::get_PlayerStatus() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_Playtime_Multiplayer::Escape_PlayerData::get_Health() {
    return *(float*)((uintptr_t)this + 0x70);
}
void _Script_Playtime_Multiplayer::Escape_PlayerData::set_bInLocker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::Escape_PlayerData::get_Strikes() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Escape_PlayerData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Escape_PlayerData");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::Escape_PlayerData::get_CartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
bool _Script_Playtime_Multiplayer::Escape_PlayerData::get_bInLocker() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::Escape_PlayerData::get_LockerTime() {
    return *(float*)((uintptr_t)this + 0x90);
}
