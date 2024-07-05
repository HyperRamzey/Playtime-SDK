#include "..\FUObjectArray.hpp"
#include "BPFriendInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AdvancedSessions::BPFriendInfo::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AdvancedSessions::BPFriendInfo::get_RealName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AdvancedSessions::BPFriendInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSessions.BPFriendInfo");
    return result;
}
void* _Script_AdvancedSessions::BPFriendInfo::get_UniqueNetId() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AdvancedSessions::BPFriendInfo::get_OnlineState() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AdvancedSessions::BPFriendInfo::get_PresenceInfo() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_AdvancedSessions::BPFriendInfo::get_bIsPlayingSameGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_AdvancedSessions::BPFriendInfo::set_bIsPlayingSameGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
