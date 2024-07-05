#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetTradeHistory.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeHistory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeHistory* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t MaxTrades, int32_t StartAfterTime, void* StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, void* Language, bool bIncludeFailed, bool bIncludeTotal) {
    return;
}
