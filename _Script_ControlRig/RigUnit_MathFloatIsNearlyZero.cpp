#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBase.hpp"
#include "RigUnit_MathFloatIsNearlyZero.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathFloatIsNearlyZero::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathFloatIsNearlyZero::get_Tolerance() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatIsNearlyZero::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero");
    return result;
}
bool _Script_ControlRig::RigUnit_MathFloatIsNearlyZero::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_MathFloatIsNearlyZero::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
