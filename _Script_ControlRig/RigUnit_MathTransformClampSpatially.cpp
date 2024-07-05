#include "..\FUObjectArray.hpp"
#include "RigUnit_MathTransformBase.hpp"
#include "RigUnit_MathTransformClampSpatially.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_bDrawDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_DebugThickness() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Axis() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Minimum() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Type() {
    return (void*)((uintptr_t)this + 0x41);
}
void* _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_DebugColor() {
    return (void*)((uintptr_t)this + 0x84);
}
float& _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Space() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_ControlRig::RigUnit_MathTransformClampSpatially::set_bDrawDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MathTransformClampSpatially::get_Result() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathTransformClampSpatially::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathTransformClampSpatially");
    return result;
}
