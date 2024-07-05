#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_VisualDebugTransformItemSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::get_Space() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::get_Scale() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_VisualDebugTransformItemSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace");
    return result;
}
