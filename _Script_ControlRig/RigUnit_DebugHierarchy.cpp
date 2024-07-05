#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugHierarchy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_DebugHierarchy::get_Scale() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_DebugHierarchy::get_Color() {
    return (void*)((uintptr_t)this + 0x6c);
}
float& _Script_ControlRig::RigUnit_DebugHierarchy::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x7c);
}
bool _Script_ControlRig::RigUnit_DebugHierarchy::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_DebugHierarchy::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_ControlRig::RigUnit_DebugHierarchy::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugHierarchy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugHierarchy");
    return result;
}
