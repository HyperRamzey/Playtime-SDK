#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkAnimationVirtualSubject.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkVirtualSubject.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkAnimationVirtualSubject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkAnimationVirtualSubject");
    return result;
}
bool _Script_LiveLink::LiveLinkAnimationVirtualSubject::get_bAppendSubjectNameToBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x161 + 0)) & 1 != 0;
}
void _Script_LiveLink::LiveLinkAnimationVirtualSubject::set_bAppendSubjectNameToBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x161 + 0);
    *(uint8_t*)((uintptr_t)this + 0x161 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
