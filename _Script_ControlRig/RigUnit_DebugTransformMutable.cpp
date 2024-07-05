#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugTransformMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugTransformMutable::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_DebugTransformMutable::get_Mode() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_DebugTransformMutable::get_Color() {
    return (void*)((uintptr_t)this + 0xa4);
}
float& _Script_ControlRig::RigUnit_DebugTransformMutable::get_Thickness() {
    return *(float*)((uintptr_t)this + 0xb4);
}
bool _Script_ControlRig::RigUnit_DebugTransformMutable::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_DebugTransformMutable::get_Scale() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_DebugTransformMutable::get_Space() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_ControlRig::RigUnit_DebugTransformMutable::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xd0);
}
void _Script_ControlRig::RigUnit_DebugTransformMutable::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugTransformMutable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugTransformMutable");
    return result;
}
