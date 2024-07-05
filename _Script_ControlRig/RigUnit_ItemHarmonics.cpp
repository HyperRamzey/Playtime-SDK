#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_ItemHarmonics.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveMinimum() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_Targets() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveNoise() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveSpeed() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveFrequency() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveEase() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveAmplitude() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveOffset() {
    return (void*)((uintptr_t)this + 0x9c);
}
float& _Script_ControlRig::RigUnit_ItemHarmonics::get_WaveMaximum() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_RotationOrder() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_ItemHarmonics::get_WorkData() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ItemHarmonics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ItemHarmonics");
    return result;
}
