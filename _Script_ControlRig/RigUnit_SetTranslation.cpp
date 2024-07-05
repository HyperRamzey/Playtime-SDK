#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetTranslation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetTranslation::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetTranslation::get_Space() {
    return (void*)((uintptr_t)this + 0x74);
}
void _Script_ControlRig::RigUnit_SetTranslation::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_SetTranslation::get_Weight() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_SetTranslation::get_Translation() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_SetTranslation::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0x8c);
}
bool _Script_ControlRig::RigUnit_SetTranslation::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetTranslation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetTranslation");
    return result;
}
