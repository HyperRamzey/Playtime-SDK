#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GetAuthSessionTicketResponse.hpp"
void* _Script_SteamCore::GetAuthSessionTicketResponse::get_AuthTicket() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GetAuthSessionTicketResponse::get_Result() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SteamCore::GetAuthSessionTicketResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GetAuthSessionTicketResponse");
    return result;
}
