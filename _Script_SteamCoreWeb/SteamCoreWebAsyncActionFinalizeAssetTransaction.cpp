#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionFinalizeAssetTransaction.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionFinalizeAssetTransaction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionFinalizeAssetTransaction* _Script_SteamCoreWeb::SteamCoreWebAsyncActionFinalizeAssetTransaction::FinalizeAssetTransactionAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamID, void* TxnId, void* Language) {
    return;
}
