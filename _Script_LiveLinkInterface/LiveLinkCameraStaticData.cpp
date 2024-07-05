#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkCameraStaticData.hpp"
#include "LiveLinkTransformStaticData.hpp"
bool _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_bIsFieldOfViewSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_bIsProjectionModeSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkCameraStaticData::set_bIsAspectRatioSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LiveLinkInterface::LiveLinkCameraStaticData::set_bIsFieldOfViewSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_bIsAspectRatioSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkCameraStaticData::set_bIsProjectionModeSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_bIsFocalLengthSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkCameraStaticData::set_bIsFocalLengthSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_FilmBackWidth() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_FilmBackHeight() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_bIsApertureSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkCameraStaticData::set_bIsApertureSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkCameraStaticData::get_bIsFocusDistanceSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkCameraStaticData::set_bIsFocusDistanceSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkCameraStaticData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkCameraStaticData");
    return result;
}
