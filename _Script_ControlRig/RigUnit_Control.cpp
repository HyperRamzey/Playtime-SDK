#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_Control.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_Control::get_Transform() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_Control::get_Base() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_Control::get_InitTransform() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_ControlRig::RigUnit_Control::get_Result() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_Control::get_Filter() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Control::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Control");
    return result;
}
