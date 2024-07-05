#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugLine.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugLine::get_Color() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_DebugLine::get_A() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_ControlRig::RigUnit_DebugLine::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_DebugLine::get_B() {
    return (void*)((uintptr_t)this + 0x74);
}
float& _Script_ControlRig::RigUnit_DebugLine::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_DebugLine::get_Space() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_ControlRig::RigUnit_DebugLine::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_ControlRig::RigUnit_DebugLine::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugLine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugLine");
    return result;
}