#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugPointMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugPointMutable::get_Vector() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_DebugPointMutable::get_Mode() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_DebugPointMutable::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_DebugPointMutable::get_Color() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_ControlRig::RigUnit_DebugPointMutable::get_Scale() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_ControlRig::RigUnit_DebugPointMutable::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ControlRig::RigUnit_DebugPointMutable::get_Space() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_ControlRig::RigUnit_DebugPointMutable::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_DebugPointMutable::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugPointMutable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugPointMutable");
    return result;
}
