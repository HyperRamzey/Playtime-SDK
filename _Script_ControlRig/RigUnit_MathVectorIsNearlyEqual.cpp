#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorIsNearlyEqual.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorIsNearlyEqual::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorIsNearlyEqual::get_B() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_MathVectorIsNearlyEqual::get_Tolerance() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_ControlRig::RigUnit_MathVectorIsNearlyEqual::get_Result() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_MathVectorIsNearlyEqual::set_Result(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorIsNearlyEqual::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual");
    return result;
}
