#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_VisualDebugQuatItemSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace");
    return result;
}
void* _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::get_Scale() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_VisualDebugQuatItemSpace::get_Space() {
    return (void*)((uintptr_t)this + 0x2c);
}
