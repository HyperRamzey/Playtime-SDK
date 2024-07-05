#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBase.hpp"
#include "RigUnit_MathFloatGreater.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathFloatGreater::get_A() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatGreater::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatGreater");
    return result;
}
float& _Script_ControlRig::RigUnit_MathFloatGreater::get_B() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_ControlRig::RigUnit_MathFloatGreater::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_MathFloatGreater::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
