#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PartyPlatformSessionInfo.hpp"
void* _Script_Party::PartyPlatformSessionInfo::get_SessionID() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Party::PartyPlatformSessionInfo::get_SessionType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Party::PartyPlatformSessionInfo::get_OwnerPrimaryId() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Party::PartyPlatformSessionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.PartyPlatformSessionInfo");
    return result;
}
