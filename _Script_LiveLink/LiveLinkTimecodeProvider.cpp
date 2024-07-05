#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TimecodeProvider.hpp"
#include "LiveLinkTimecodeProvider.hpp"
void* _Script_LiveLink::LiveLinkTimecodeProvider::get_SubjectKey() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_LiveLink::LiveLinkTimecodeProvider::get_Evaluation() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_LiveLink::LiveLinkTimecodeProvider::get_bOverrideFrameRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void* _Script_LiveLink::LiveLinkTimecodeProvider::get_OverrideFrameRate() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_LiveLink::LiveLinkTimecodeProvider::set_bOverrideFrameRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_LiveLink::LiveLinkTimecodeProvider::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkTimecodeProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkTimecodeProvider");
    return result;
}
