#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubjectPreset.hpp"
#include "LiveLinkSubjectSettings.hpp"
#include "LiveLinkVirtualSubject.hpp"
void* _Script_LiveLinkInterface::LiveLinkSubjectPreset::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkSubjectPreset::get_Role() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_LiveLinkInterface::LiveLinkSubjectSettings*& _Script_LiveLinkInterface::LiveLinkSubjectPreset::get_Settings() {
    return *(_Script_LiveLinkInterface::LiveLinkSubjectSettings**)((uintptr_t)this + 0x20);
}
_Script_LiveLinkInterface::LiveLinkVirtualSubject*& _Script_LiveLinkInterface::LiveLinkSubjectPreset::get_VirtualSubject() {
    return *(_Script_LiveLinkInterface::LiveLinkVirtualSubject**)((uintptr_t)this + 0x28);
}
bool _Script_LiveLinkInterface::LiveLinkSubjectPreset::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkSubjectPreset::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSubjectPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSubjectPreset");
    return result;
}
