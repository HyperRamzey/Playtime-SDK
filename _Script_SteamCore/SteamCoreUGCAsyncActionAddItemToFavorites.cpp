#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionAddItemToFavorites.hpp"
#include "UserFavoriteItemsListChanged.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionAddItemToFavorites::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(_Script_SteamCore::UserFavoriteItemsListChanged& Data, bool bWasSuccessful) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionAddItemToFavorites::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionAddItemToFavorites* _Script_SteamCore::SteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID, float Timeout) {
    return;
}
