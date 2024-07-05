#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_QuaternionToAxisAndAngle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_QuaternionToAxisAndAngle::get_Argument() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_QuaternionToAxisAndAngle::get_Axis() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_QuaternionToAxisAndAngle::get_Angle() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_QuaternionToAxisAndAngle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle");
    return result;
}
