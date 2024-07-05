#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBase.hpp"
#include "RigUnit_MathIntLessEqual.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_MathIntLessEqual::get_A() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void _Script_ControlRig::RigUnit_MathIntLessEqual::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ControlRig::RigUnit_MathIntLessEqual::get_B() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
bool _Script_ControlRig::RigUnit_MathIntLessEqual::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntLessEqual::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntLessEqual");
    return result;
}
