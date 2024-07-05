#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetPublishedFileDetails.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPublishedFileDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPublishedFileDetails* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(_Script_CoreUObject::Object* WorldContextObject, void* PublishedFileIDs) {
    return;
}
