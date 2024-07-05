#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBase.hpp"
#include "RigUnit_MathQuaternionSelectBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathQuaternionSelectBool::get_Result() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_ControlRig::RigUnit_MathQuaternionSelectBool::get_Condition() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_MathQuaternionSelectBool::set_Condition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MathQuaternionSelectBool::get_IfTrue() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_MathQuaternionSelectBool::get_IfFalse() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionSelectBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionSelectBool");
    return result;
}
