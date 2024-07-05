#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebUserAuth.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebUserAuth::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebUserAuth");
    return result;
}
void _Script_SteamCoreWeb::WebUserAuth::AuthenticateUserTicket(void*& Callback, void* Key, int32_t AppID, void* Ticket) {
    return;
}
void _Script_SteamCoreWeb::WebUserAuth::AuthenticateUser(void*& Callback, void* SteamID, void* SessionKey, void* EncryptedLoginKey) {
    return;
}
