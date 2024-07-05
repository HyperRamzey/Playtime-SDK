#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "Door.hpp"
bool _Script_Playtime_Multiplayer::Door::get_bDisabledByNoEscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x23d + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::Door::get_NetOpenness() {
    return *(float*)((uintptr_t)this + 0x22c);
}
bool _Script_Playtime_Multiplayer::Door::get_bIsClosedByDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Door::set_bIsClosedByDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::Door::get_OpeningDuration() {
    return *(float*)((uintptr_t)this + 0x238);
}
float& _Script_Playtime_Multiplayer::Door::get_ClosingDuration() {
    return *(float*)((uintptr_t)this + 0x234);
}
void* _Script_Playtime_Multiplayer::Door::get_DoorState() {
    return (void*)((uintptr_t)this + 0x23c);
}
void _Script_Playtime_Multiplayer::Door::set_bDisabledByNoEscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23d + 0);
    *(uint8_t*)((uintptr_t)this + 0x23d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::Door::get_OpenCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x240);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::Door::get_CloseCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x248);
}
void* _Script_Playtime_Multiplayer::Door::get_HandMagnetComponents() {
    return (void*)((uintptr_t)this + 0x260);
}
bool _Script_Playtime_Multiplayer::Door::get_bShutByLockdown() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::Door::set_bShutByLockdown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::Door::get_LockdownTimer() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Door::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.Door");
    return result;
}
void _Script_Playtime_Multiplayer::Door::SabotageLockdown(float Duration) {
    return;
}
void _Script_Playtime_Multiplayer::Door::RegisterHandMagnets(void* In_HandMagnets) {
    return;
}
bool _Script_Playtime_Multiplayer::Door::OpenDoor() {
    return;
}
void _Script_Playtime_Multiplayer::Door::OnRep_ShutByLockdown() {
    return;
}
void _Script_Playtime_Multiplayer::Door::OnRep_DoorState(void* PreviousState) {
    return;
}
void _Script_Playtime_Multiplayer::Door::OnRep_DisabledByNoEscape() {
    return;
}
bool _Script_Playtime_Multiplayer::Door::IsShutByLockdown() {
    return;
}
bool _Script_Playtime_Multiplayer::Door::IsDisabledByNoEscape() {
    return;
}
float _Script_Playtime_Multiplayer::Door::GetCurvedOpenness() {
    return;
}
void _Script_Playtime_Multiplayer::Door::ForceOpenDoor() {
    return;
}
void _Script_Playtime_Multiplayer::Door::ForceCloseDoor() {
    return;
}
void _Script_Playtime_Multiplayer::Door::EndLockdownSabotage() {
    return;
}
bool _Script_Playtime_Multiplayer::Door::CloseDoor() {
    return;
}
void _Script_Playtime_Multiplayer::Door::BP_ShowOpenness(float CurvedOpenness) {
    return;
}
void _Script_Playtime_Multiplayer::Door::BP_OnRep_ShutByLockdown() {
    return;
}
void _Script_Playtime_Multiplayer::Door::BP_OnRep_DoorState(void* PreviousState) {
    return;
}
void _Script_Playtime_Multiplayer::Door::BP_OnRep_DisabledByNoEscape() {
    return;
}
void _Script_Playtime_Multiplayer::Door::BP_OnOpened() {
    return;
}
void _Script_Playtime_Multiplayer::Door::BP_OnClosed() {
    return;
}
void _Script_Playtime_Multiplayer::Door::Authority_EndSabotage() {
    return;
}
