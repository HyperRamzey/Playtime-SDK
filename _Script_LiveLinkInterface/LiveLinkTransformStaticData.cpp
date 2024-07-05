#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseStaticData.hpp"
#include "LiveLinkTransformStaticData.hpp"
bool _Script_LiveLinkInterface::LiveLinkTransformStaticData::get_bIsScaleSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x12 + 0)) & 1 != 0;
}
bool _Script_LiveLinkInterface::LiveLinkTransformStaticData::get_bIsLocationSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkTransformStaticData::set_bIsScaleSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12 + 0);
    *(uint8_t*)((uintptr_t)this + 0x12 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LiveLinkInterface::LiveLinkTransformStaticData::set_bIsLocationSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkTransformStaticData::get_bIsRotationSupported() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkTransformStaticData::set_bIsRotationSupported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTransformStaticData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTransformStaticData");
    return result;
}
