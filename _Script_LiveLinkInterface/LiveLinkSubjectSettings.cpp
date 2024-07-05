#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkFrameInterpolationProcessor.hpp"
#include "LiveLinkSubjectSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkSubjectSettings::get_PreProcessors() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LiveLinkInterface::LiveLinkSubjectSettings::get_Translators() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_LiveLinkInterface::LiveLinkFrameInterpolationProcessor*& _Script_LiveLinkInterface::LiveLinkSubjectSettings::get_InterpolationProcessor() {
    return *(_Script_LiveLinkInterface::LiveLinkFrameInterpolationProcessor**)((uintptr_t)this + 0x38);
}
void* _Script_LiveLinkInterface::LiveLinkSubjectSettings::get_Role() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_LiveLinkInterface::LiveLinkSubjectSettings::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_LiveLinkInterface::LiveLinkSubjectSettings::set_bRebroadcastSubject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLinkInterface::LiveLinkSubjectSettings::get_bRebroadcastSubject() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSubjectSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkSubjectSettings");
    return result;
}
