#include "..\FUObjectArray.hpp"
#include "RigUnit_SetMultiControlFloat_Entry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetMultiControlFloat_Entry::get_Control() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetMultiControlFloat_Entry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry");
    return result;
}
float& _Script_ControlRig::RigUnit_SetMultiControlFloat_Entry::get_FloatValue() {
    return *(float*)((uintptr_t)this + 0x8);
}
