#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetControlBool::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x14);
}
bool _Script_ControlRig::RigUnit_GetControlBool::get_BoolValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_GetControlBool::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_ControlRig::RigUnit_GetControlBool::set_BoolValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlBool");
    return result;
}
