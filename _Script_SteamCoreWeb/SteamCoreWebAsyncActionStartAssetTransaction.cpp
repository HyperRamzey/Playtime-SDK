#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionStartAssetTransaction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionStartAssetTransaction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionStartAssetTransaction* _Script_SteamCoreWeb::SteamCoreWebAsyncActionStartAssetTransaction::StartAssetTransactionAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* AssetId, int32_t AssetQuantity, void* Currency, void* Language, void* Ipaddress, void* Referer, bool bClientAuth) {
    return;
}
