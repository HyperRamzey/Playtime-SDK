#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkLightStaticData.hpp"
#include "LiveLinkTransformStaticData.hpp"
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsInnerConeAngleSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsTemperatureSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsTemperatureSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsIntensitySupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsInnerConeAngleSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsIntensitySupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsLightColorSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsLightColorSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsOuterConeAngleSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsOuterConeAngleSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsAttenuationRadiusSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsAttenuationRadiusSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsSourceLenghtSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsSourceLenghtSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsSourceRadiusSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsSourceRadiusSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkLightStaticData::get_bIsSoftSourceRadiusSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkLightStaticData::set_bIsSoftSourceRadiusSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkLightStaticData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkLightStaticData");
    return result;
}
