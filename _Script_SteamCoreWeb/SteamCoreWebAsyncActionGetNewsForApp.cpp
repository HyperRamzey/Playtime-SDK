#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetNewsForApp.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForApp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForApp* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForApp::GetNewsForAppAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count) {
    return;
}
