#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GetUserItemVoteResult.hpp"
void _Script_SteamCore::GetUserItemVoteResult::set_bVotedUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCore::GetUserItemVoteResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GetUserItemVoteResult::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_SteamCore::GetUserItemVoteResult::set_bVotedDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::GetUserItemVoteResult::get_bVotedUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
bool _Script_SteamCore::GetUserItemVoteResult::get_bVoteSkipped() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
bool _Script_SteamCore::GetUserItemVoteResult::get_bVotedDown() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_SteamCore::GetUserItemVoteResult::set_bVoteSkipped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GetUserItemVoteResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GetUserItemVoteResult");
    return result;
}
