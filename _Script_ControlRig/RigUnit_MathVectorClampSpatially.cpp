#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorClampSpatially.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Axis() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Type() {
    return (void*)((uintptr_t)this + 0x15);
}
bool _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_bDrawDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Space() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Minimum() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void _Script_ControlRig::RigUnit_MathVectorClampSpatially::set_bDrawDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_DebugColor() {
    return (void*)((uintptr_t)this + 0x54);
}
float& _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_DebugThickness() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_ControlRig::RigUnit_MathVectorClampSpatially::get_Result() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorClampSpatially::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorClampSpatially");
    return result;
}
