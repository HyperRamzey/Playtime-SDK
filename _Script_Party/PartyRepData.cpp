#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlinePartyRepDataBase.hpp"
#include "PartyRepData.hpp"
void* _Script_Party::PartyRepData::get_PrivacySettings() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Party::PartyRepData::get_PlatformSessions() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Party::PartyRepData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.PartyRepData");
    return result;
}
