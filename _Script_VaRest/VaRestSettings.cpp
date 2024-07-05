#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VaRestSettings.hpp"
void _Script_VaRest::VaRestSettings::set_bUseChunkedParser(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_VaRest::VaRestSettings::get_bExtendedLog() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_VaRest::VaRestSettings::set_bExtendedLog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_VaRest::VaRestSettings::get_bUseChunkedParser() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VaRest.VaRestSettings");
    return result;
}