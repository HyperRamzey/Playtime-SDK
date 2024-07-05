#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateVectorAdd.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AccumulateVectorAdd::get_Increment() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorAdd::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x14);
}
void _Script_ControlRig::RigUnit_AccumulateVectorAdd::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_AccumulateVectorAdd::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_AccumulateVectorAdd::get_Result() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorAdd::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateVectorAdd::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorAdd");
    return result;
}
