#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetSteamLevel.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetSteamLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetSteamLevel* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetSteamLevel::GetSteamLevelAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID) {
    return;
}
