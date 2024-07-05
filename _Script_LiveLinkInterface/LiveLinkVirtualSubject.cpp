#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkVirtualSubject.hpp"
void* _Script_LiveLinkInterface::LiveLinkVirtualSubject::get_Role() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_LiveLinkInterface::LiveLinkVirtualSubject::get_Subjects() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_LiveLinkInterface::LiveLinkVirtualSubject::get_FrameTranslators() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_LiveLinkInterface::LiveLinkVirtualSubject::get_bRebroadcastSubject() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_LiveLinkInterface::LiveLinkVirtualSubject::set_bRebroadcastSubject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkVirtualSubject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkVirtualSubject");
    return result;
}
