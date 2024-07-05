#include "..\FUObjectArray.hpp"
#include "RigUnit_BoneHarmonics.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveEase() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveSpeed() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_Bones() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveFrequency() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveAmplitude() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveOffset() {
    return (void*)((uintptr_t)this + 0x9c);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveNoise() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveMinimum() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_ControlRig::RigUnit_BoneHarmonics::get_WaveMaximum() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_RotationOrder() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_ControlRig::RigUnit_BoneHarmonics::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_BoneHarmonics::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_BoneHarmonics::get_WorkData() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BoneHarmonics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BoneHarmonics");
    return result;
}
