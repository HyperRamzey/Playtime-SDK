#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebSteamNews.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebSteamNews::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebSteamNews");
    return result;
}
void _Script_SteamCoreWeb::WebSteamNews::GetNewsForAppAuthed(void*& Callback, void* Key, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count) {
    return;
}
void _Script_SteamCoreWeb::WebSteamNews::GetNewsForApp(void*& Callback, int32_t AppID, int32_t MaxLength, void* Feeds, int32_t EndDate, int32_t Count) {
    return;
}
