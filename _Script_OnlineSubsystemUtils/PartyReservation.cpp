#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PartyReservation.hpp"
int32_t& _Script_OnlineSubsystemUtils::PartyReservation::get_TeamNum() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PartyReservation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.PartyReservation");
    return result;
}
void* _Script_OnlineSubsystemUtils::PartyReservation::get_RemovedPartyMembers() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_OnlineSubsystemUtils::PartyReservation::get_PartyLeader() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_OnlineSubsystemUtils::PartyReservation::get_PartyMembers() {
    return (void*)((uintptr_t)this + 0x30);
}
