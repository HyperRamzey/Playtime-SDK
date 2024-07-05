#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBase.hpp"
#include "RigUnit_NoiseVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_NoiseVector::get_Time() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_NoiseVector::get_Position() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_NoiseVector::get_Result() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_ControlRig::RigUnit_NoiseVector::get_Speed() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_NoiseVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_NoiseVector");
    return result;
}
void* _Script_ControlRig::RigUnit_NoiseVector::get_Frequency() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_NoiseVector::get_Minimum() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_ControlRig::RigUnit_NoiseVector::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x30);
}
