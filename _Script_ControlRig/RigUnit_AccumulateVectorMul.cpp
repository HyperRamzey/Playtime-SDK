#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateVectorMul.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_AccumulateVectorMul::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_AccumulateVectorMul::get_Multiplier() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorMul::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x14);
}
void _Script_ControlRig::RigUnit_AccumulateVectorMul::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorMul::get_Result() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorMul::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateVectorMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorMul");
    return result;
}
