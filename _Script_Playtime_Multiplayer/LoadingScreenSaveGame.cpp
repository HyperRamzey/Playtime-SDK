#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LoadingScreenSaveGame.hpp"
void _Script_Playtime_Multiplayer::LoadingScreenSaveGame::UnfavoriteLoadingScreen(int32_t ScreenToRemove) {
    return;
}
bool _Script_Playtime_Multiplayer::LoadingScreenSaveGame::get_bIsLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::LoadingScreenSaveGame::set_bIsUsingRandom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::LoadingScreenSaveGame::set_bIsLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::LoadingScreenSaveGame::get_Favorites() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t _Script_Playtime_Multiplayer::LoadingScreenSaveGame::GetALoadingScreen() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::LoadingScreenSaveGame::get_Selected() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
bool _Script_Playtime_Multiplayer::LoadingScreenSaveGame::get_bIsUsingRandom() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LoadingScreenSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LoadingScreenSaveGame");
    return result;
}
void _Script_Playtime_Multiplayer::LoadingScreenSaveGame::SetIsRandomSelected(bool NewRandomState) {
    return;
}
bool _Script_Playtime_Multiplayer::LoadingScreenSaveGame::IsRandomSelected() {
    return;
}
_Script_Playtime_Multiplayer::LoadingScreenSaveGame* _Script_Playtime_Multiplayer::LoadingScreenSaveGame::GetLoadingScreenSaveGame() {
    return;
}
void* _Script_Playtime_Multiplayer::LoadingScreenSaveGame::GetFavoriteScreens() {
    return;
}
int32_t _Script_Playtime_Multiplayer::LoadingScreenSaveGame::GetEquippedScreen() {
    return;
}
void _Script_Playtime_Multiplayer::LoadingScreenSaveGame::FavoriteLoadingScreen(int32_t ScreenToFavorite) {
    return;
}
void _Script_Playtime_Multiplayer::LoadingScreenSaveGame::EquipLoadingScreen(int32_t ScreenToEquip) {
    return;
}
