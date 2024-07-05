#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LeaderboardScoreUploaded.hpp"
void _Script_SteamCore::LeaderboardScoreUploaded::set_bScoreChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::LeaderboardScoreUploaded::get_bSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SteamCore::LeaderboardScoreUploaded::set_bSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCore::LeaderboardScoreUploaded::get_GlobalRankNew() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::LeaderboardScoreUploaded::get_SteamLeaderboard() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::LeaderboardScoreUploaded::get_Score() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
bool _Script_SteamCore::LeaderboardScoreUploaded::get_bScoreChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
int32_t& _Script_SteamCore::LeaderboardScoreUploaded::get_GlobalRankPrevious() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_SteamCore::LeaderboardScoreUploaded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LeaderboardScoreUploaded");
    return result;
}
