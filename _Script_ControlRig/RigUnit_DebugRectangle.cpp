#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugRectangle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugRectangle::get_Transform() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_ControlRig::RigUnit_DebugRectangle::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_DebugRectangle::get_Space() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_DebugRectangle::get_Color() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugRectangle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugRectangle");
    return result;
}
float& _Script_ControlRig::RigUnit_DebugRectangle::get_Scale() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_ControlRig::RigUnit_DebugRectangle::get_Thickness() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void _Script_ControlRig::RigUnit_DebugRectangle::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_DebugRectangle::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xc0);
}
