#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_QuaternionToAngle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_QuaternionToAngle::get_Axis() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_QuaternionToAngle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_QuaternionToAngle");
    return result;
}
void* _Script_ControlRig::RigUnit_QuaternionToAngle::get_Argument() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_QuaternionToAngle::get_Angle() {
    return *(float*)((uintptr_t)this + 0x30);
}
