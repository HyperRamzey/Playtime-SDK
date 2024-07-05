#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetTransform::get_Item() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetTransform::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_GetTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetTransform");
    return result;
}
void* _Script_ControlRig::RigUnit_GetTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_ControlRig::RigUnit_GetTransform::get_bInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_GetTransform::set_bInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
