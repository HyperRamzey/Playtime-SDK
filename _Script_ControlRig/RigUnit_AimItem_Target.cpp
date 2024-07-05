#include "..\FUObjectArray.hpp"
#include "RigUnit_AimItem_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AimItem_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AimItem_Target");
    return result;
}
void* _Script_ControlRig::RigUnit_AimItem_Target::get_Space() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_AimItem_Target::get_Weight() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_AimItem_Target::get_Axis() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_ControlRig::RigUnit_AimItem_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_AimItem_Target::get_Kind() {
    return (void*)((uintptr_t)this + 0x1c);
}
