#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetCollectionDetails.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCollectionDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCollectionDetails* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(_Script_CoreUObject::Object* WorldContextObject, void* PublishedFileIDs) {
    return;
}
