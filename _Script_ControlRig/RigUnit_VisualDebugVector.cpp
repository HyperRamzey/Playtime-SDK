#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_VisualDebugVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_VisualDebugVector::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_VisualDebugVector::get_Scale() {
    return *(float*)((uintptr_t)this + 0x2c);
}
bool _Script_ControlRig::RigUnit_VisualDebugVector::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_VisualDebugVector::get_BoneSpace() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_ControlRig::RigUnit_VisualDebugVector::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_VisualDebugVector::get_Mode() {
    return (void*)((uintptr_t)this + 0x15);
}
void _Script_ControlRig::RigUnit_VisualDebugVector::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_VisualDebugVector::get_Color() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_VisualDebugVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_VisualDebugVector");
    return result;
}
