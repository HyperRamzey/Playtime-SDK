#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapRaycastQueryParams.hpp"
void* _Script_MagicLeap::MagicLeapRaycastQueryParams::get_UpVector() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MagicLeap::MagicLeapRaycastQueryParams::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_MagicLeap::MagicLeapRaycastQueryParams::get_HorizontalFovDegrees() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_MagicLeap::MagicLeapRaycastQueryParams::get_Direction() {
    return (void*)((uintptr_t)this + 0xc);
}
int32_t& _Script_MagicLeap::MagicLeapRaycastQueryParams::get_Width() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void _Script_MagicLeap::MagicLeapRaycastQueryParams::set_CollideWithUnobserved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MagicLeap::MagicLeapRaycastQueryParams::get_Height() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
bool _Script_MagicLeap::MagicLeapRaycastQueryParams::get_CollideWithUnobserved() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
int32_t& _Script_MagicLeap::MagicLeapRaycastQueryParams::get_UserData() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapRaycastQueryParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapRaycastQueryParams");
    return result;
}
