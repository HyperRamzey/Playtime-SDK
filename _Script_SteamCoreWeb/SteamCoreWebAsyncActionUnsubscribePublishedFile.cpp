#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionUnsubscribePublishedFile.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionUnsubscribePublishedFile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionUnsubscribePublishedFile* _Script_SteamCoreWeb::SteamCoreWebAsyncActionUnsubscribePublishedFile::UnsubscribePublishedFileAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs) {
    return;
}
