#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_AimConstraint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AimConstraint::get_UpMode() {
    return (void*)((uintptr_t)this + 0x71);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_Joint() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_AimVector() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_AimMode() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_UpTargets() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_UpVector() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_AimTargets() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_AimConstraint::get_WorkData() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AimConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AimConstraint");
    return result;
}
