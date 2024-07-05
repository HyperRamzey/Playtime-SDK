#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionUpdateSession.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionUpdateSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionUpdateSession* _Script_SteamCoreWeb::SteamCoreWebAsyncActionUpdateSession::UpdateSessionAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SessionID, int32_t AppID, void* Title, void* Users, void* SteamID) {
    return;
}
