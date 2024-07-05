#include "..\FUObjectArray.hpp"
#include "BPSteamGroupOfficer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::BPSteamGroupOfficer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSteamSessions.BPSteamGroupOfficer");
    return result;
}
void _Script_AdvancedSteamSessions::BPSteamGroupOfficer::set_bIsOwner(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSteamSessions::BPSteamGroupOfficer::get_bIsOwner() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_AdvancedSteamSessions::BPSteamGroupOfficer::get_OfficerUniqueNetID() {
    return (void*)((uintptr_t)this + 0x0);
}
