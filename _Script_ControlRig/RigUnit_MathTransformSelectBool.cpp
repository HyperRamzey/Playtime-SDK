#include "..\FUObjectArray.hpp"
#include "RigUnit_MathTransformBase.hpp"
#include "RigUnit_MathTransformSelectBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_MathTransformSelectBool::get_Condition() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_MathTransformSelectBool::get_Result() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_MathTransformSelectBool::get_IfFalse() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_ControlRig::RigUnit_MathTransformSelectBool::set_Condition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathTransformSelectBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathTransformSelectBool");
    return result;
}
void* _Script_ControlRig::RigUnit_MathTransformSelectBool::get_IfTrue() {
    return (void*)((uintptr_t)this + 0x10);
}
