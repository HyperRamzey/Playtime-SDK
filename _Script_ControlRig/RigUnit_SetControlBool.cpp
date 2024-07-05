#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlBool::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_ControlRig::RigUnit_SetControlBool::get_BoolValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SetControlBool::set_BoolValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlBool");
    return result;
}
void* _Script_ControlRig::RigUnit_SetControlBool::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x74);
}
