#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetAssetClassInfo.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetClassInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetClassInfo* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetAssetClassInfo::GetAssetClassInfoAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Language, int32_t ClassCount, void* ClassId, void* InstanceID) {
    return;
}
