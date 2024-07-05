#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBase.hpp"
#include "RigUnit_MathIntLess.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntLess::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntLess");
    return result;
}
bool _Script_ControlRig::RigUnit_MathIntLess::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
int32_t& _Script_ControlRig::RigUnit_MathIntLess::get_A() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_MathIntLess::get_B() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void _Script_ControlRig::RigUnit_MathIntLess::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
