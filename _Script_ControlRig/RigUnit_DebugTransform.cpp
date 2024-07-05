#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_DebugTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_DebugTransform::get_Mode() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_DebugTransform::get_Color() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_ControlRig::RigUnit_DebugTransform::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_ControlRig::RigUnit_DebugTransform::get_Scale() {
    return *(float*)((uintptr_t)this + 0x58);
}
bool _Script_ControlRig::RigUnit_DebugTransform::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_DebugTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_ControlRig::RigUnit_DebugTransform::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_ControlRig::RigUnit_DebugTransform::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugTransform");
    return result;
}
