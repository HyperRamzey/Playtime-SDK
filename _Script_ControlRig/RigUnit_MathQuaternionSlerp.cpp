#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBase.hpp"
#include "RigUnit_MathQuaternionSlerp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathQuaternionSlerp::get_A() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionSlerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionSlerp");
    return result;
}
void* _Script_ControlRig::RigUnit_MathQuaternionSlerp::get_B() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_MathQuaternionSlerp::get_T() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_MathQuaternionSlerp::get_Result() {
    return (void*)((uintptr_t)this + 0x40);
}
