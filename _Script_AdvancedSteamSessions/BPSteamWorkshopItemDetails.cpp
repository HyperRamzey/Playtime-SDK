#include "..\FUObjectArray.hpp"
#include "BPSteamWorkshopItemDetails.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_Title() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_ResultOfRequest() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_ConsumerAppID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_FileType() {
    return (void*)((uintptr_t)this + 0x1);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_CreatorAppID() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_Description() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_VotesUp() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_ItemUrl() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_VotesDown() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
float& _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_CalculatedScore() {
    return *(float*)((uintptr_t)this + 0x48);
}
bool _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_bBanned() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::set_bBanned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_bAcceptedForUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d + 0)) & 1 != 0;
}
void _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::set_bAcceptedForUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_bTagsTruncated() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e + 0)) & 1 != 0;
}
void _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::set_bTagsTruncated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::get_CreatorSteamID() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_AdvancedSteamSessions::BPSteamWorkshopItemDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AdvancedSteamSessions.BPSteamWorkshopItemDetails");
    return result;
}
