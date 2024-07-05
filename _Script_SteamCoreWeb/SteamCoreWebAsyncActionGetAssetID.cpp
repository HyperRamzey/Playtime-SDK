#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetAssetID.hpp"
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetID* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetID::GetAssetIDAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* ListingId) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID");
    return result;
}
