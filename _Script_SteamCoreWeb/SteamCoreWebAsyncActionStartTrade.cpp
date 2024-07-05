#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionStartTrade.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionStartTrade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionStartTrade* _Script_SteamCoreWeb::SteamCoreWebAsyncActionStartTrade::StartTradeAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* SteamId1, void* SteamId2) {
    return;
}
