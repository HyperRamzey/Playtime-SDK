#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlVisibility.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlVisibility::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetControlVisibility::get_Pattern() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_ControlRig::RigUnit_SetControlVisibility::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_SetControlVisibility::get_CachedControlIndices() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_ControlRig::RigUnit_SetControlVisibility::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlVisibility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlVisibility");
    return result;
}
