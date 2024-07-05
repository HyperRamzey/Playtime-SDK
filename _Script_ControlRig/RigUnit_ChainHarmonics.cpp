#include "..\FUObjectArray.hpp"
#include "RigUnit_ChainHarmonics.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_Pendulum() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_ChainRoot() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_WaveCurve() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_Speed() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_Wave() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_Reach() {
    return (void*)((uintptr_t)this + 0x7c);
}
bool _Script_ControlRig::RigUnit_ChainHarmonics::get_bDrawDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ac + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_ChainHarmonics::set_bDrawDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_DrawWorldOffset() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics::get_WorkData() {
    return (void*)((uintptr_t)this + 0x1e0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ChainHarmonics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics");
    return result;
}
