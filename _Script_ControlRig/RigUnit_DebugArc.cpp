#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugArc.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugArc::get_Color() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_DebugArc::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_ControlRig::RigUnit_DebugArc::get_MinimumDegrees() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_ControlRig::RigUnit_DebugArc::get_Radius() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_ControlRig::RigUnit_DebugArc::get_MaximumDegrees() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_DebugArc::get_Space() {
    return (void*)((uintptr_t)this + 0xc4);
}
float& _Script_ControlRig::RigUnit_DebugArc::get_Thickness() {
    return *(float*)((uintptr_t)this + 0xbc);
}
int32_t& _Script_ControlRig::RigUnit_DebugArc::get_Detail() {
    return *(int32_t*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_DebugArc::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_ControlRig::RigUnit_DebugArc::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_DebugArc::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugArc::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugArc");
    return result;
}
