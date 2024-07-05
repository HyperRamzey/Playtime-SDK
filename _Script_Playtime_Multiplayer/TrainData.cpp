#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TrainData.hpp"
bool _Script_Playtime_Multiplayer::TrainData::get_bDoLoopTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::TrainData::get_bIsMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::TrainData::set_bIsMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::TrainData::set_bFullyTransitionedToLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::TrainData::get_bIsFixed() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::TrainData::get_EndStation() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
bool _Script_Playtime_Multiplayer::TrainData::get_bFullyTransitionedToLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::TrainData::set_bIsFixed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::TrainData::set_bDoLoopTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::TrainData::get_bDoEndTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::TrainData::set_bDoEndTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::TrainData::get_bEnded() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::TrainData::set_bEnded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::TrainData::get_LastDistance() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Playtime_Multiplayer::TrainData::get_StartStation() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Playtime_Multiplayer::TrainData::get_TrainStation() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_Playtime_Multiplayer::TrainData::get_TrainTimelineProgress() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Playtime_Multiplayer::TrainData::get_TrainDistance() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Playtime_Multiplayer::TrainData::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::TrainData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.TrainData");
    return result;
}
