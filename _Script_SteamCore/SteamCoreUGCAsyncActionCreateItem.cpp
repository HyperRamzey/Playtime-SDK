#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CreateItemResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionCreateItem.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionCreateItem::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionCreateItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionCreateItem");
    return result;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionCreateItem::HandleCallback(_Script_SteamCore::CreateItemResult& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUGCAsyncActionCreateItem* _Script_SteamCore::SteamCoreUGCAsyncActionCreateItem::CreateItemAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t ConsumerAppID, void* FileType, float Timeout) {
    return;
}
