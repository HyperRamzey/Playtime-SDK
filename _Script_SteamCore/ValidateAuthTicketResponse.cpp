#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ValidateAuthTicketResponse.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::ValidateAuthTicketResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ValidateAuthTicketResponse");
    return result;
}
void* _Script_SteamCore::ValidateAuthTicketResponse::get_SteamID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::ValidateAuthTicketResponse::get_AuthSessionResponse() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::ValidateAuthTicketResponse::get_OwnerSteamID() {
    return (void*)((uintptr_t)this + 0x10);
}
