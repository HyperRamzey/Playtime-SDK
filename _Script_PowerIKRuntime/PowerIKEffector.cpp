#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKEffector.hpp"
void* _Script_PowerIKRuntime::PowerIKEffector::get_Position() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_PositionSpace() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_Rotation() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_RotationSpace() {
    return (void*)((uintptr_t)this + 0x24);
}
bool _Script_PowerIKRuntime::PowerIKEffector::get_NormalizePulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
float& _Script_PowerIKRuntime::PowerIKEffector::get_PullWeight() {
    return *(float*)((uintptr_t)this + 0x28);
}
void _Script_PowerIKRuntime::PowerIKEffector::set_NormalizePulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_PositivePullFactor() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_NegativePullFactor() {
    return (void*)((uintptr_t)this + 0x3c);
}
bool _Script_PowerIKRuntime::PowerIKEffector::get_RotateBone() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKEffector::set_RotateBone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PowerIKRuntime::PowerIKEffector::get_RotateLimb() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKEffector::set_RotateLimb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKEffector::get_DeltaSmoothSpeed() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_PowerIKRuntime::PowerIKEffector::get_AngularDeltaSmoothSpeed() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_Smoothing() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_PowerIKRuntime::PowerIKEffector::get_PoleVector() {
    return (void*)((uintptr_t)this + 0x6c);
}
bool _Script_PowerIKRuntime::PowerIKEffector::get_AffectsCenterOfGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKEffector::set_AffectsCenterOfGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKEffector::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKEffector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKEffector");
    return result;
}
