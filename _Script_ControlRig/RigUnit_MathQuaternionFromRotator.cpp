#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBase.hpp"
#include "RigUnit_MathQuaternionFromRotator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionFromRotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionFromRotator");
    return result;
}
void* _Script_ControlRig::RigUnit_MathQuaternionFromRotator::get_Rotator() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathQuaternionFromRotator::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
