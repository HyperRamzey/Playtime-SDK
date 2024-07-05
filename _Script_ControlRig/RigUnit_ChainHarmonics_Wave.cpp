#include "..\FUObjectArray.hpp"
#include "RigUnit_ChainHarmonics_Wave.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveFrequency() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveEase() {
    return (void*)((uintptr_t)this + 0x3c);
}
void _Script_ControlRig::RigUnit_ChainHarmonics_Wave::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveAmplitude() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveOffset() {
    return (void*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveMaximum() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveMinimum() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_ControlRig::RigUnit_ChainHarmonics_Wave::get_WaveNoise() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ChainHarmonics_Wave::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_Wave");
    return result;
}
