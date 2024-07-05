#include "..\FUObjectArray.hpp"
#include "RigUnit_PointSimulation_DebugSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::get_Color() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::get_Scale() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::get_CollisionScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::get_bDrawPointsAsSpheres() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::set_bDrawPointsAsSpheres(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_PointSimulation_DebugSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings");
    return result;
}
