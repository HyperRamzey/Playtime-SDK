#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "MagicLeapLightingTrackingComponent.hpp"
bool _Script_MagicLeapLightEstimation::MagicLeapLightingTrackingComponent::get_UseGlobalAmbience() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_MagicLeapLightEstimation::MagicLeapLightingTrackingComponent::set_UseGlobalAmbience(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapLightEstimation::MagicLeapLightingTrackingComponent::get_UseColorTemp() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
void _Script_MagicLeapLightEstimation::MagicLeapLightingTrackingComponent::set_UseColorTemp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MagicLeapLightEstimation::MagicLeapLightingTrackingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapLightEstimation.MagicLeapLightingTrackingComponent");
    return result;
}
