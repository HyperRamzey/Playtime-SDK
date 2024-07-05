#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PartyPrivacySettings.hpp"
void* _Script_Party::PartyPrivacySettings::get_PartyType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Party::PartyPrivacySettings::get_PartyInviteRestriction() {
    return (void*)((uintptr_t)this + 0x1);
}
bool _Script_Party::PartyPrivacySettings::get_bOnlyLeaderFriendsCanJoin() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Party::PartyPrivacySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Party.PartyPrivacySettings");
    return result;
}
void _Script_Party::PartyPrivacySettings::set_bOnlyLeaderFriendsCanJoin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
