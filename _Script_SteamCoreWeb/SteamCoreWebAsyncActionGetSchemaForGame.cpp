#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetSchemaForGame.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetSchemaForGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetSchemaForGame* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetSchemaForGame::GetSchemaForGameAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* Language) {
    return;
}
