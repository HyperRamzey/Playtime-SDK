#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorNotEquals.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorNotEquals::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorNotEquals::get_B() {
    return (void*)((uintptr_t)this + 0x14);
}
bool _Script_ControlRig::RigUnit_MathVectorNotEquals::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorNotEquals::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorNotEquals");
    return result;
}
void _Script_ControlRig::RigUnit_MathVectorNotEquals::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
