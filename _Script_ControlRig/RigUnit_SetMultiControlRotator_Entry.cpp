#include "..\FUObjectArray.hpp"
#include "RigUnit_SetMultiControlRotator_Entry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetMultiControlRotator_Entry::get_Rotator() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_SetMultiControlRotator_Entry::get_Control() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_SetMultiControlRotator_Entry::get_Space() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetMultiControlRotator_Entry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry");
    return result;
}
