#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_DebugPoint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugPoint::get_Vector() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_DebugPoint::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_DebugPoint::get_Mode() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_DebugPoint::get_Scale() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_DebugPoint::get_Color() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_DebugPoint::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::RigUnit_DebugPoint::get_Space() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_DebugPoint::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_ControlRig::RigUnit_DebugPoint::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugPoint");
    return result;
}
