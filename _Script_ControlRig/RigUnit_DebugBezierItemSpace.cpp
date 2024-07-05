#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugBezierItemSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_Bezier() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_MaximumU() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_MinimumU() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_Color() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xd0);
}
float& _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_Thickness() {
    return *(float*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_Detail() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_Space() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_ControlRig::RigUnit_DebugBezierItemSpace::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_DebugBezierItemSpace::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugBezierItemSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugBezierItemSpace");
    return result;
}
