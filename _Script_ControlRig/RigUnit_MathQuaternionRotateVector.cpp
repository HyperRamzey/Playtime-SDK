#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBase.hpp"
#include "RigUnit_MathQuaternionRotateVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathQuaternionRotateVector::get_Quaternion() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionRotateVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionRotateVector");
    return result;
}
void* _Script_ControlRig::RigUnit_MathQuaternionRotateVector::get_Vector() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathQuaternionRotateVector::get_Result() {
    return (void*)((uintptr_t)this + 0x2c);
}
