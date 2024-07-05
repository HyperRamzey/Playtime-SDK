#include "..\FUObjectArray.hpp"
#include "RigUnit_SetMultiControlBool_Entry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetMultiControlBool_Entry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry");
    return result;
}
void* _Script_ControlRig::RigUnit_SetMultiControlBool_Entry::get_Control() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_ControlRig::RigUnit_SetMultiControlBool_Entry::get_BoolValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SetMultiControlBool_Entry::set_BoolValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
