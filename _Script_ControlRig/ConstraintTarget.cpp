#include "..\FUObjectArray.hpp"
#include "ConstraintTarget.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::ConstraintTarget::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::ConstraintTarget::get_Weight() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::ConstraintTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.ConstraintTarget");
    return result;
}
bool _Script_ControlRig::ConstraintTarget::get_bMaintainOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_ControlRig::ConstraintTarget::set_bMaintainOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::ConstraintTarget::get_Filter() {
    return (void*)((uintptr_t)this + 0x35);
}
