#include "..\FUObjectArray.hpp"
#include "BPFriendPresenceInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AdvancedSessions::BPFriendPresenceInfo::get_bIsOnline() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_AdvancedSessions::BPFriendPresenceInfo::get_BIsPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::BPFriendPresenceInfo::set_bIsOnline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AdvancedSessions::BPFriendPresenceInfo::set_BIsPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSessions::BPFriendPresenceInfo::get_bIsJoinable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void* _Script_AdvancedSessions::BPFriendPresenceInfo::get_StatusString() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_AdvancedSessions::BPFriendPresenceInfo::get_bIsPlayingThisGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::BPFriendPresenceInfo::set_bIsPlayingThisGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AdvancedSessions::BPFriendPresenceInfo::set_bIsJoinable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSessions::BPFriendPresenceInfo::get_bHasVoiceSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::BPFriendPresenceInfo::set_bHasVoiceSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AdvancedSessions::BPFriendPresenceInfo::get_PresenceState() {
    return (void*)((uintptr_t)this + 0x5);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::BPFriendPresenceInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.BPFriendPresenceInfo");
    return result;
}
