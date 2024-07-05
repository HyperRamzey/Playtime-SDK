#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKGroundCollision.hpp"
bool _Script_PowerIKRuntime::PowerIKGroundCollision::get_TraceComplex() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_PowerIKRuntime::PowerIKGroundCollision::get_CollisionChannel() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_PowerIKRuntime::PowerIKGroundCollision::set_TraceComplex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PowerIKRuntime::PowerIKGroundCollision::get_EnableWallCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
float& _Script_PowerIKRuntime::PowerIKGroundCollision::get_RayCastUp() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_PowerIKRuntime::PowerIKGroundCollision::set_EnableWallCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKGroundCollision::get_RayCastDown() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_PowerIKRuntime::PowerIKGroundCollision::get_WallOffset() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKGroundCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKGroundCollision");
    return result;
}
