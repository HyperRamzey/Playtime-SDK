#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct UserFavoriteItemsListChanged;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUGCAsyncActionRemoveItemFromFavorites : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID, float Timeout);
    void HandleCallback(_Script_SteamCore::UserFavoriteItemsListChanged& Data, bool bWasSuccessful);
}; // Size: 0x48
#pragma pack(pop)
}
