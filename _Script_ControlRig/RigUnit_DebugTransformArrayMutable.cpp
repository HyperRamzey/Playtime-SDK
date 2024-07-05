#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugTransformArrayMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_Transforms() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_Mode() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_Color() {
    return (void*)((uintptr_t)this + 0x7c);
}
float& _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_Scale() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_Space() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_DebugTransformArrayMutable::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::get_WorkData() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugTransformArrayMutable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugTransformArrayMutable");
    return result;
}
