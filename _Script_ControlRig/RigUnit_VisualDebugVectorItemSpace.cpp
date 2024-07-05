#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_VisualDebugVectorItemSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_Mode() {
    return (void*)((uintptr_t)this + 0x15);
}
void* _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_Space() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_Color() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::get_Scale() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_VisualDebugVectorItemSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace");
    return result;
}
