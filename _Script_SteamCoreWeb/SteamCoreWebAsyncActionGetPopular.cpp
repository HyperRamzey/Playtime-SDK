#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetPopular.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPopular::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPopular* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetPopular::GetPopularAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency) {
    return;
}
