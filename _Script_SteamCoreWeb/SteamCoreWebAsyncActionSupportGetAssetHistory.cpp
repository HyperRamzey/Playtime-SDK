#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionSupportGetAssetHistory.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSupportGetAssetHistory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionSupportGetAssetHistory* _Script_SteamCoreWeb::SteamCoreWebAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* AssetId, void* ContextId) {
    return;
}
