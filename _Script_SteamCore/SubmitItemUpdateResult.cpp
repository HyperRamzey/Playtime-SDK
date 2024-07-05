#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmitItemUpdateResult.hpp"
void* _Script_SteamCore::SubmitItemUpdateResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_SteamCore::SubmitItemUpdateResult::set_bUserNeedsToAcceptWorkshopLegalAgreement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SubmitItemUpdateResult::get_bUserNeedsToAcceptWorkshopLegalAgreement() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_SteamCore::SubmitItemUpdateResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::SubmitItemUpdateResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SubmitItemUpdateResult");
    return result;
}
