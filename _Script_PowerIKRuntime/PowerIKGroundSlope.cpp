#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKGroundSlope.hpp"
void* _Script_PowerIKRuntime::PowerIKGroundSlope::get_CounterLeanBoneName() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_PowerIKRuntime::PowerIKGroundSlope::get_StrideDirection() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_OrientToGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_MaxGroundAngle() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_MaxNormalAngularSpeed() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_OrientToGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_OrientToPitch() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_OrientToRoll() {
    return *(float*)((uintptr_t)this + 0x1c);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_ScaleStride() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_ScaleStride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_UphillStrideScale() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_FootAngleDeltaSmoothSpeed() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_DownhillStrideScale() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_RollFootAmount() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_SidehillStrideScale() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_PitchFootAmount() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_SidehillPushOuterFeet() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_Lean() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_Lean(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_UphillLean() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_DownhillLean() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_SidehillLean() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_CounterLean() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_CounterLean(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_UphillCounterLean() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_DownhillCounterLean() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_SidehillCounterLean() {
    return *(float*)((uintptr_t)this + 0x5c);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_MoveRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_MoveRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_OffsetFeetPositions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_UphillVertOffset() {
    return *(float*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKGroundSlope::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKGroundSlope");
    return result;
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_UphillHorizOffset() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_DownhillVertOffset() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_DownhillHorizOffset() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_SidehillHorizOffset() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_SidehillVertOffset() {
    return *(float*)((uintptr_t)this + 0x78);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_RotateFootToGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKGroundSlope::set_RotateFootToGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PowerIKRuntime::PowerIKGroundSlope::get_OffsetFeetPositions() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
float& _Script_PowerIKRuntime::PowerIKGroundSlope::get_StaticFootOffset() {
    return *(float*)((uintptr_t)this + 0x90);
}
