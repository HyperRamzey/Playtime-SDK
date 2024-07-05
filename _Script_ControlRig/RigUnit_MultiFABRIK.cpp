#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_MultiFABRIK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MultiFABRIK::get_RootBone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_MultiFABRIK::get_Effectors() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MultiFABRIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MultiFABRIK");
    return result;
}
float& _Script_ControlRig::RigUnit_MultiFABRIK::get_Precision() {
    return *(float*)((uintptr_t)this + 0x80);
}
bool _Script_ControlRig::RigUnit_MultiFABRIK::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
int32_t& _Script_ControlRig::RigUnit_MultiFABRIK::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
void _Script_ControlRig::RigUnit_MultiFABRIK::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MultiFABRIK::get_WorkData() {
    return (void*)((uintptr_t)this + 0x90);
}
