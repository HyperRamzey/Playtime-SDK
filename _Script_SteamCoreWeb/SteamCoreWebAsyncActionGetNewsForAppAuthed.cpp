#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionGetNewsForAppAuthed.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForAppAuthed::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForAppAuthed* _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count) {
    return;
}
