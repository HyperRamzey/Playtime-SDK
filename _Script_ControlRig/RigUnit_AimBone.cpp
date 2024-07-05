#include "..\FUObjectArray.hpp"
#include "RigUnit_AimBone.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AimBone::get_Weight() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_AimBone::get_Secondary() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigUnit_AimBone::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_AimBone::get_Primary() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_ControlRig::RigUnit_AimBone::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AimBone::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AimBone::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_AimBone::get_CachedBoneIndex() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_ControlRig::RigUnit_AimBone::get_PrimaryCachedSpace() {
    return (void*)((uintptr_t)this + 0x124);
}
void* _Script_ControlRig::RigUnit_AimBone::get_SecondaryCachedSpace() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AimBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AimBone");
    return result;
}
