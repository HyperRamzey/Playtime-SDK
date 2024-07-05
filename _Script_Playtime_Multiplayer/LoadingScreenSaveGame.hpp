#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LoadingScreenSaveGame : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    bool get_bIsLoaded();
    void set_bIsLoaded(bool value);
    void* get_Favorites();
    int32_t& get_Selected();
    bool get_bIsUsingRandom();
    void set_bIsUsingRandom(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UnfavoriteLoadingScreen(int32_t ScreenToRemove);
    void SetIsRandomSelected(bool NewRandomState);
    bool IsRandomSelected();
    _Script_Playtime_Multiplayer::LoadingScreenSaveGame* GetLoadingScreenSaveGame();
    void* GetFavoriteScreens();
    int32_t GetEquippedScreen();
    int32_t GetALoadingScreen();
    void FavoriteLoadingScreen(int32_t ScreenToFavorite);
    void EquipLoadingScreen(int32_t ScreenToEquip);
}; // Size: 0x60
#pragma pack(pop)
}
