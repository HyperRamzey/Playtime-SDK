#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SteamCoreWebAsyncAction.hpp"
#include "SteamCoreWebAsyncActionAuthenticateUserTicket.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAuthenticateUserTicket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket");
    return result;
}
_Script_SteamCoreWeb::SteamCoreWebAsyncActionAuthenticateUserTicket* _Script_SteamCoreWeb::SteamCoreWebAsyncActionAuthenticateUserTicket::AuthenticateUserTicketAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, int32_t AppID, void* Ticket) {
    return;
}
