#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_DebugLineStripItemSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_DebugLineStripItemSpace::get_Points() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_DebugLineStripItemSpace::get_WorldOffset() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_DebugLineStripItemSpace::get_Color() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_DebugLineStripItemSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_DebugLineStripItemSpace");
    return result;
}
float& _Script_ControlRig::RigUnit_DebugLineStripItemSpace::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_ControlRig::RigUnit_DebugLineStripItemSpace::get_Space() {
    return (void*)((uintptr_t)this + 0x8c);
}
bool _Script_ControlRig::RigUnit_DebugLineStripItemSpace::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_DebugLineStripItemSpace::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
