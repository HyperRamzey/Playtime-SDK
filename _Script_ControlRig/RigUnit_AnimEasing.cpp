#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_AnimEasing.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AnimEasing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AnimEasing");
    return result;
}
float& _Script_ControlRig::RigUnit_AnimEasing::get_SourceMaximum() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_AnimEasing::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_AnimEasing::get_Type() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_AnimEasing::get_TargetMaximum() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigUnit_AnimEasing::get_SourceMinimum() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_AnimEasing::get_TargetMinimum() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_AnimEasing::get_Result() {
    return *(float*)((uintptr_t)this + 0x20);
}
