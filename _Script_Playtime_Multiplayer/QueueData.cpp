#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QueueData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::QueueData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.QueueData");
    return result;
}
int32_t& _Script_Playtime_Multiplayer::QueueData::get_RoundsSinceLastMonster() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_Playtime_Multiplayer::QueueData::get_bWantsToBeMonster() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::QueueData::set_bWantsToBeMonster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
