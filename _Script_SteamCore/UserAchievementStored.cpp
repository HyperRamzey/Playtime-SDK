#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UserAchievementStored.hpp"
void* _Script_SteamCore::UserAchievementStored::get_GameID() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_SteamCore::UserAchievementStored::set_bGroupAchievement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::UserAchievementStored::get_bGroupAchievement() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void* _Script_SteamCore::UserAchievementStored::get_AchievementName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::UserAchievementStored::get_MaxProgress() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_SteamCore::UserAchievementStored::get_CurrentProgress() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SteamCore::UserAchievementStored::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.UserAchievementStored");
    return result;
}
