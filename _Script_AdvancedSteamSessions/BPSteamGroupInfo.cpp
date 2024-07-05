#include "..\FUObjectArray.hpp"
#include "BPSteamGroupInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AdvancedSteamSessions::BPSteamGroupInfo::get_GroupTag() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AdvancedSteamSessions::BPSteamGroupInfo::get_GroupID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamGroupInfo::get_numChatting() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void* _Script_AdvancedSteamSessions::BPSteamGroupInfo::get_GroupName() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamGroupInfo::get_numOnline() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamGroupInfo::get_numInGame() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::BPSteamGroupInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSteamSessions.BPSteamGroupInfo");
    return result;
}
