#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "UserAchievementIconFetched.hpp"
void _Script_SteamCore::UserAchievementIconFetched::set_bAchieved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCore::UserAchievementIconFetched::get_AchievementName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::UserAchievementIconFetched::get_GameID() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SteamCore::UserAchievementIconFetched::get_bAchieved() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
_Script_Engine::Texture2D*& _Script_SteamCore::UserAchievementIconFetched::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SteamCore::UserAchievementIconFetched::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.UserAchievementIconFetched");
    return result;
}
