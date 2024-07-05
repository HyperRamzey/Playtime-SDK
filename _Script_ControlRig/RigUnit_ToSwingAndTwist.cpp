#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ToSwingAndTwist.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ToSwingAndTwist::get_Input() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_ToSwingAndTwist::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_ToSwingAndTwist::get_Swing() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_ToSwingAndTwist::get_Twist() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ToSwingAndTwist::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ToSwingAndTwist");
    return result;
}
