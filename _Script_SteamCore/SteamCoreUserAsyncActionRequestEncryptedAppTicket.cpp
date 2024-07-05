#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EncryptedAppTicketResponse.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserAsyncActionRequestEncryptedAppTicket.hpp"
void* _Script_SteamCore::SteamCoreUserAsyncActionRequestEncryptedAppTicket::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserAsyncActionRequestEncryptedAppTicket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket");
    return result;
}
void _Script_SteamCore::SteamCoreUserAsyncActionRequestEncryptedAppTicket::HandleCallback(_Script_SteamCore::EncryptedAppTicketResponse& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUserAsyncActionRequestEncryptedAppTicket* _Script_SteamCore::SteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(_Script_CoreUObject::Object* WorldContextObject, void* DataToInclude, float Timeout) {
    return;
}
