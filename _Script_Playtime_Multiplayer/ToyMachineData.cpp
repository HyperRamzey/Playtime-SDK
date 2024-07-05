#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ToyMachineData.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ToyMachineData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ToyMachineData");
    return result;
}
void* _Script_Playtime_Multiplayer::ToyMachineData::get_DepositedToyParts() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Playtime_Multiplayer::ToyMachineData::get_PipeTimelineProgress() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_Playtime_Multiplayer::ToyMachineData::get_bPipeConnected() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ToyMachineData::set_bPipeConnected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
