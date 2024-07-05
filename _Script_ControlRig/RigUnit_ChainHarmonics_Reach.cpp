#include "..\FUObjectArray.hpp"
#include "RigUnit_ChainHarmonics_Reach.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_ChainHarmonics_Reach::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_ChainHarmonics_Reach::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Reach::get_ReachEase() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Reach::get_ReachTarget() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Reach::get_ReachAxis() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Reach::get_ReachMinimum() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Reach::get_ReachMaximum() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ChainHarmonics_Reach::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_Reach");
    return result;
}
