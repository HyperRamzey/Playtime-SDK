#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_Distance_VectorVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_Distance_VectorVector::get_Argument0() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_Distance_VectorVector::get_Argument1() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_Distance_VectorVector::get_Result() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Distance_VectorVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Distance_VectorVector");
    return result;
}
