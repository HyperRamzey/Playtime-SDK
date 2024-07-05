#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionDeleteItem.hpp"
#include "UGCDeleteItemResult.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionDeleteItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionDeleteItem");
    return result;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionDeleteItem::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreUGCAsyncActionDeleteItem::HandleCallback(_Script_SteamCore::UGCDeleteItemResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUGCAsyncActionDeleteItem* _Script_SteamCore::SteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, float Timeout) {
    return;
}
