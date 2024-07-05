#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionRemoveItemFromFavorites.hpp"
#include "UserFavoriteItemsListChanged.hpp"
void _Script_SteamCore::SteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(_Script_SteamCore::UserFavoriteItemsListChanged& Data, bool bWasSuccessful) {
    return;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveItemFromFavorites::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreUGCAsyncActionRemoveItemFromFavorites* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveItemFromFavorites::RemoveItemFromFavoritesAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, _Script_SteamCore::PublishedFileID PublishedFileID, float Timeout) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionRemoveItemFromFavorites::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites");
    return result;
}
