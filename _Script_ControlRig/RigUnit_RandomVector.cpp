#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBase.hpp"
#include "RigUnit_RandomVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_RandomVector::get_Seed() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_RandomVector::get_Minimum() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_RandomVector::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_RandomVector::get_Duration() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_RandomVector::get_Result() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_ControlRig::RigUnit_RandomVector::get_LastSeed() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_RandomVector::get_LastResult() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_ControlRig::RigUnit_RandomVector::get_TimeLeft() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_RandomVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_RandomVector");
    return result;
}
