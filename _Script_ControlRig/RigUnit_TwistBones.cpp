#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_TwistBones.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_TwistBones::get_Weight() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_ControlRig::RigUnit_TwistBones::get_StartBone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_TwistBones::get_EndBone() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_TwistBones::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_TwistBones::get_TwistEaseType() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_TwistBones::get_PoleAxis() {
    return (void*)((uintptr_t)this + 0x84);
}
void _Script_ControlRig::RigUnit_TwistBones::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_TwistBones::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_TwistBones::get_WorkData() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwistBones::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwistBones");
    return result;
}
