#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetScale.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetScale::get_Scale() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_SetScale::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetScale::get_Space() {
    return (void*)((uintptr_t)this + 0x74);
}
float& _Script_ControlRig::RigUnit_SetScale::get_Weight() {
    return *(float*)((uintptr_t)this + 0x84);
}
bool _Script_ControlRig::RigUnit_SetScale::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetScale");
    return result;
}
void* _Script_ControlRig::RigUnit_SetScale::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0x8c);
}
void _Script_ControlRig::RigUnit_SetScale::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
