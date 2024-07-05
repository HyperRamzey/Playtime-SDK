#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKBodyInertia.hpp"
float& _Script_PowerIKRuntime::PowerIKBodyInertia::get_SpringDamping() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_PowerIKRuntime::PowerIKBodyInertia::get_ApplyInertiaToBody() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKBodyInertia::set_ApplyInertiaToBody(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKBodyInertia::get_SmoothFactor() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_PowerIKRuntime::PowerIKBodyInertia::get_UseSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::PowerIKBodyInertia::set_UseSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::PowerIKBodyInertia::get_SpringStrength() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKBodyInertia::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKBodyInertia");
    return result;
}
