#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBase.hpp"
#include "RigUnit_MathQuaternionFromAxisAndAngle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathQuaternionFromAxisAndAngle::get_Axis() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathQuaternionFromAxisAndAngle::get_Angle() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathQuaternionFromAxisAndAngle::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionFromAxisAndAngle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle");
    return result;
}