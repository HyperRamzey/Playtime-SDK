#include "..\FUObjectArray.hpp"
#include "RigUnit_SetMultiControlInteger_Entry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_SetMultiControlInteger_Entry::get_IntegerValue() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_SetMultiControlInteger_Entry::get_Control() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetMultiControlInteger_Entry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry");
    return result;
}
