#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetRelativeBoneTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_ControlRig::RigUnit_SetRelativeBoneTransform::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_Weight() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_CachedBone() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_SetRelativeBoneTransform::get_CachedSpaceIndex() {
    return (void*)((uintptr_t)this + 0xcc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetRelativeBoneTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetRelativeBoneTransform");
    return result;
}
