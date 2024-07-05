#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionSubscribePublishedFile.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSubscribePublishedFile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionSubscribePublishedFile* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSubscribePublishedFile::SubscribePublishedFileAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs) {
    return;
}
