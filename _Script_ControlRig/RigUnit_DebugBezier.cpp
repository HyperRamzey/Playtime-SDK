#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugBezier.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugBezier::get_Bezier() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_ControlRig::RigUnit_DebugBezier::get_Detail() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
float& _Script_ControlRig::RigUnit_DebugBezier::get_MinimumU() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_ControlRig::RigUnit_DebugBezier::get_Thickness() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_DebugBezier::get_Color() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_ControlRig::RigUnit_DebugBezier::get_MaximumU() {
    return *(float*)((uintptr_t)this + 0x9c);
}
void* _Script_ControlRig::RigUnit_DebugBezier::get_Space() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_DebugBezier::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_ControlRig::RigUnit_DebugBezier::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_DebugBezier::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugBezier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugBezier");
    return result;
}
