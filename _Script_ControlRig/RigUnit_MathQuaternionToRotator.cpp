#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBase.hpp"
#include "RigUnit_MathQuaternionToRotator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathQuaternionToRotator::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionToRotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionToRotator");
    return result;
}
void* _Script_ControlRig::RigUnit_MathQuaternionToRotator::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
