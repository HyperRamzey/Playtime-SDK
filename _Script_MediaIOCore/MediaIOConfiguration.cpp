#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaIOConfiguration.hpp"
void _Script_MediaIOCore::MediaIOConfiguration::set_bIsInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaIOCore::MediaIOConfiguration::get_bIsInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_MediaIOCore::MediaIOConfiguration::get_MediaConnection() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MediaIOCore::MediaIOConfiguration::get_MediaMode() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaIOConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaIOConfiguration");
    return result;
}
