#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetPublisherAppOwnership.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPublisherAppOwnership::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPublisherAppOwnership* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPublisherAppOwnership::GetPublisherAppOwnershipAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID) {
    return;
}
