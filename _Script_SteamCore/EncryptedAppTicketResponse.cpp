#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EncryptedAppTicketResponse.hpp"
void* _Script_SteamCore::EncryptedAppTicketResponse::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::EncryptedAppTicketResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.EncryptedAppTicketResponse");
    return result;
}
