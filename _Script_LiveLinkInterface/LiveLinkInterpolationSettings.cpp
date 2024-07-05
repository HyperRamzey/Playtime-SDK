#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkInterpolationSettings.hpp"
bool _Script_LiveLinkInterface::LiveLinkInterpolationSettings::get_bUseInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkInterpolationSettings::set_bUseInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_LiveLinkInterface::LiveLinkInterpolationSettings::get_InterpolationOffset() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkInterpolationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkInterpolationSettings");
    return result;
}
