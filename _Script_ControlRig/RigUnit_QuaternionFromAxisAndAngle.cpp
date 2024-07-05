#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_QuaternionFromAxisAndAngle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_QuaternionFromAxisAndAngle::get_Axis() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_QuaternionFromAxisAndAngle::get_Angle() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_QuaternionFromAxisAndAngle::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_QuaternionFromAxisAndAngle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle");
    return result;
}
