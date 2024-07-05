#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBase.hpp"
#include "RigUnit_MathFloatSelectBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_MathFloatSelectBool::set_Condition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_MathFloatSelectBool::get_Condition() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_MathFloatSelectBool::get_IfTrue() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_MathFloatSelectBool::get_IfFalse() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatSelectBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatSelectBool");
    return result;
}
float& _Script_ControlRig::RigUnit_MathFloatSelectBool::get_Result() {
    return *(float*)((uintptr_t)this + 0x14);
}
