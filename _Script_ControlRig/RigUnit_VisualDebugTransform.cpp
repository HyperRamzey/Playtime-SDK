#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBase.hpp"
#include "RigUnit_VisualDebugTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_VisualDebugTransform::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_VisualDebugTransform::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x44);
}
bool _Script_ControlRig::RigUnit_VisualDebugTransform::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_VisualDebugTransform::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_VisualDebugTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_VisualDebugTransform");
    return result;
}
float& _Script_ControlRig::RigUnit_VisualDebugTransform::get_Scale() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::RigUnit_VisualDebugTransform::get_BoneSpace() {
    return (void*)((uintptr_t)this + 0x4c);
}
